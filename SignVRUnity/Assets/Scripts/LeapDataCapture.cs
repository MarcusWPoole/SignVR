using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Leap;
using Leap.Unity;
using TMPro;
using System.Threading.Tasks;
using System.Net.Http;
using Newtonsoft.Json;
using System.Linq;

public class LeapDataCapture : MonoBehaviour
{
    public bool debugArmData = true;
    public bool debugPalmData = true;
    public bool debugFingerData = true;
    public LeapProvider leapProvider;
    private Frame currentFrame;
    private List<float[]> sequence = new List<float[]>();
    private const int dataPointsPerHand = 204;
    private float[] entry = new float[2 * dataPointsPerHand];
    public TextMeshProUGUI dataDisplayText;
    public TextMeshProUGUI detectedText;
    private Queue<Func<Task>> asyncQueue = new Queue<Func<Task>>();
    private const int desiredSequenceLength = 6; // adjust this to the sequence length
    private const string baseURL = "http://10.130.2.68:5000"; // server address
    


    private void Start()
    {
        Debug.Log("LeapDataCapture: Start method called.");
        if (leapProvider == null)
        {
            leapProvider = FindObjectOfType<LeapProvider>();
            if (leapProvider == null)
            {
                Debug.LogError("LeapProvider not set. Please assign it in the inspector or ensure a LeapProvider is present in the scene.");
                return;
            }
        }

        leapProvider.OnUpdateFrame += UpdateCurrentFrame; // Subscribe to frame updates
        StartCoroutine(CollectDataEveryDelay(0.2f)); // Start the data collection coroutine
    }

    private void Update()
    {
        while (asyncQueue.Count > 0)
        {
            var action = asyncQueue.Dequeue();
            _ = action(); // Execute all the enqueued tasks.
        }
    }

    private void OnDestroy()
    {
        if (leapProvider != null)
            leapProvider.OnUpdateFrame -= UpdateCurrentFrame; // Unsubscribe to prevent any potential memory leaks
    }

    void UpdateCurrentFrame(Frame frame)
    {
        Debug.Log("New frame received.");
        currentFrame = frame;
    }

    IEnumerator CollectDataEveryDelay(float delay)
    {
        while (true)
        {
            Debug.Log("Coroutine running.");
            yield return new WaitForSeconds(delay);
            ProcessCurrentFrame();
        }
    }

    void ProcessCurrentFrame()
    {
        if (currentFrame == null)
        {
            Debug.LogWarning("Frame is null. Is Leap Motion connected and service running?");
            return;
        }

        Hand leftHand = currentFrame.GetHand(Chirality.Left);
        Hand rightHand = currentFrame.GetHand(Chirality.Right);

        // Simplified hand detection logging
        detectedText.text = (leftHand != null ? (rightHand != null ? "Both Hands Detected" : "Left Hand Detected") : (rightHand != null ? "Right Hand Detected" : "No Hands Detected"));

        // Process the data for each hand and store it in the entry array
        float[] leftHandData = ProcessHandData(leftHand, 0);
        float[] rightHandData = ProcessHandData(rightHand, dataPointsPerHand);

        Array.Copy(leftHandData, 0, entry, 0, dataPointsPerHand);
        Array.Copy(rightHandData, 0, entry, dataPointsPerHand, dataPointsPerHand);
        Debug.Log("Entry Array: " + ArrayToString(entry));

        if (!entry.All(value => value == 0)) // This checks if all values in the entry array are zeros
        {
            sequence.Add(entry.Clone() as float[]); // Using Clone to ensure we're adding a copy of the entry to the sequence
             Debug.Log($"Sequence size after adding: {sequence.Count}");
        }

       if (sequence.Count > desiredSequenceLength)
        {
            asyncQueue.Enqueue(() => SendDataToServerAndDisplayResult(new List<float[]>(sequence))); // Clone the current sequence and enqueue it
            sequence.RemoveAt(0); // Remove the oldest entry after enqueuing to maintain the desired sequence length
        }
    }

    float[] ProcessHandData(Hand hand, int dataIndex)
    {
    float[] handData = GetHandData(hand, debugArmData, debugPalmData, debugFingerData);
        
    Debug.Log((dataIndex == 0 ? "Left" : "Right") + " Hand Data: " + string.Join(", ", handData));
            
    if (hand == null)
    {
        Debug.Log((dataIndex == 0 ? "Left" : "Right") + " Hand Data: (Not Detected)");

        // When hand is not detected, populate the stored handData with zeros
        for (int i = 0; i < handData.Length; i++)
        {
            handData[i] = 0;
        }
    }
    return handData; // Return the processed data
    }

    float[] GetHandData(Hand hand, bool captureArmData, bool capturePalmData, bool captureFingerData)
    {
        float[] data = new float[204];

            // Initialize data array with zeros first
        for (int i = 0; i < data.Length; i++)
        {
            data[i] = 0;
        }

        if (hand == null)
        { 
            return data;
        }

        int dataIndex = 0;


         if(debugPalmData)
        {
        // Palm data
        data[dataIndex++] = hand.PalmPosition.x;
        data[dataIndex++] = hand.PalmPosition.y;
        data[dataIndex++] = hand.PalmPosition.z;

        data[dataIndex++] = hand.PalmNormal.x;
        data[dataIndex++] = hand.PalmNormal.y;
        data[dataIndex++] = hand.PalmNormal.z;

        data[dataIndex++] = hand.Direction.x;
        data[dataIndex++] = hand.Direction.y;
        data[dataIndex++] = hand.Direction.z;

        data[dataIndex++] = hand.PalmVelocity.x;
        data[dataIndex++] = hand.PalmVelocity.y;
        data[dataIndex++] = hand.PalmVelocity.z;

        data[dataIndex++] = CalculatePitch(hand.Direction);
        data[dataIndex++] = CalculateYaw(hand.Direction);
        data[dataIndex++] = CalculateRoll(hand.PalmNormal, hand.Direction);
        }

         if(debugArmData)
        {
        // Arm data
        data[dataIndex++] = hand.Arm.Direction.x;
        data[dataIndex++] = hand.Arm.Direction.y;
        data[dataIndex++] = hand.Arm.Direction.z;

        data[dataIndex++] = hand.Arm.WristPosition.x;
        data[dataIndex++] = hand.Arm.WristPosition.y;
        data[dataIndex++] = hand.Arm.WristPosition.z;

        data[dataIndex++] = hand.Arm.ElbowPosition.x;
        data[dataIndex++] = hand.Arm.ElbowPosition.y;
        data[dataIndex++] = hand.Arm.ElbowPosition.z;
        }


        if(debugFingerData)
        {
                // Finger data
            foreach (Finger finger in hand.Fingers)
            {
                // Safety check
                if (dataIndex >= 204) // Adjust this value as needed depending on how many data points you intend to capture per hand.
                {
                    Debug.LogError("DataIndex has exceeded the bounds at the finger loop: " + dataIndex);
                    break;
                }
                
                // Loop over the bones of the finger and store data
                for (int b = 0; b < 4; b++)
                {
                    Bone bone = finger.Bone((Bone.BoneType)b);

                    // Starting joint
                    data[dataIndex++] = bone.PrevJoint.x;
                    data[dataIndex++] = bone.PrevJoint.y;
                    data[dataIndex++] = bone.PrevJoint.z;

                    // Ending joint
                    data[dataIndex++] = bone.NextJoint.x;
                    data[dataIndex++] = bone.NextJoint.y;
                    data[dataIndex++] = bone.NextJoint.z;

                    // Bone direction
                    data[dataIndex++] = bone.Direction.x;
                    data[dataIndex++] = bone.Direction.y;
                    data[dataIndex++] = bone.Direction.z;
                }
            }  // This closes the foreach loop for fingers
        }
        // Final safety check
        if (dataIndex != dataPointsPerHand) 
        {
            Debug.LogError($"GetHandData() for {(hand.IsLeft ? "Left" : "Right")} hand expected to collect {dataPointsPerHand} data points, but collected {dataIndex}.");
        }

        return data;
    }

    float CalculateRoll(Vector3 palmNormal, Vector3 handDirection)
    {
        Vector3 normalProjectedOnPlane = Vector3.ProjectOnPlane(palmNormal, handDirection);
        float rollAngle = Mathf.Atan2(normalProjectedOnPlane.y, normalProjectedOnPlane.x);
        return rollAngle * Mathf.Rad2Deg;
    }

    float CalculatePitch(Vector3 handDirection)
    {
        return Mathf.Atan2(handDirection.y, Mathf.Sqrt(handDirection.x * handDirection.x + handDirection.z * handDirection.z)) * Mathf.Rad2Deg;
    }

    float CalculateYaw(Vector3 handDirection)
    {
        return Mathf.Atan2(handDirection.x, handDirection.z) * Mathf.Rad2Deg;
    }


    private string ArrayToString(float[] array)
    {
        return "[" + string.Join(", ", array) + "]";
    }

   private async Task SendDataToServerAndDisplayResult(List<float[]> sequenceData)
    {
        using (HttpClient client = new HttpClient())
        {
            var dataToSend = new { sequence = sequenceData };
            var json = JsonConvert.SerializeObject(dataToSend);
            var content = new StringContent(json, Encoding.UTF8, "application/json");
            var response = await client.PostAsync($"{baseURL}/translate", content);

            if (response.IsSuccessStatusCode)
            {
                var jsonResponse = await response.Content.ReadAsStringAsync();
                Debug.Log("Server Response: " + jsonResponse);
                
                // Assume jsonResponse contains a JSON field "translation" with the text.
                var responseObject = JsonConvert.DeserializeObject<Dictionary<string, string>>(jsonResponse);
                if (responseObject.ContainsKey("translation"))
                {
                    // Display the translated word
                    dataDisplayText.text = responseObject["translation"];
                }
            }
        }
    }
}

public class TranslationResponse
{
    public string translation { get; set; }
}