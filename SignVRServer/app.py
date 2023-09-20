from flask import Flask, request, jsonify
import os
import numpy as np
import tensorflow as tf
import pickle
from datetime import datetime, timedelta

app = Flask(__name__)

# Construct path to the model and scalers
base_dir = os.path.abspath(os.path.dirname(__file__))
model_path = os.path.join(base_dir, 'model/lastlastlastokokGenuine_Final_LSTM_model.h5')
scalers_path = os.path.join(base_dir, 'model/lastlaslastGenuine__scalers.pkl')

# Load the model
model = tf.keras.models.load_model(model_path)

# Load the scalers
with open(scalers_path, 'rb') as file:
    scalers = pickle.load(file)

# Global variables to handle last prediction's data and its timestamp
last_prediction = None
last_prediction_time = datetime.now()


@app.route('/translate', methods=['POST'])
def translate_sign():
    """Endpoint to translate sign sequences into labels."""
    global last_prediction, last_prediction_time

    data = request.get_json(force=True)
    sequenceList = data['sequence']

    # Apply MinMax scaling to the sequence
    sequence = np.array(sequenceList).reshape(1, 6, 408)
    for i in range(408):  # Iterate over features to scale
        sequence[:, :, i] = scalers[i].transform(sequence[:, :, i])

    # Predict using the model
    prediction = model.predict(sequence)

    # Decode the prediction into a label and confidence score
    decoded_label, confidence = decode_prediction(prediction)

    # Return error if confidence is low
    if decoded_label is None:
        return jsonify({"error": "Low prediction confidence"}), 400

    current_time = datetime.now()
    time_difference = (current_time - last_prediction_time).total_seconds()

    # Check for repeated predictions within a short time frame (2 seconds as an example)
    if decoded_label == last_prediction and time_difference < 2:
        return jsonify({"error": "Repeated prediction detected"}), 400

    # Update global variables with current prediction and timestamp
    last_prediction = decoded_label
    last_prediction_time = current_time

    # Debug prints
    print("Raw Prediction Array:", prediction)
    print("Predicted Label:", decoded_label)
    print("Prediction Confidence:", confidence)

    response = {
        'translation': decoded_label,
        'confidence': str(confidence)
    }
    return jsonify(response)


def decode_prediction(prediction, threshold=0.9):
    """
    Decodes model predictions into readable labels.
    """
    label_map = {
        'AIRPORT': 0, 'BUS': 1, 'CAR': 2, 'Drink': 3, 'FOOD': 4,
        'GOOD': 5, 'HELLO': 6, 'HOWAREYOU': 7, 'I': 8, 'NAME': 9,
        'PLANE': 10, 'RESTAURANT': 11, 'SORRY': 12, 'TAXI': 13,
        'THANKS': 14, 'TIME': 15, 'WHERE': 16
    }

    confidence = np.max(prediction)
    index = np.argmax(prediction)

    if confidence >= threshold:
        text_label = [label for label, num in label_map.items() if num == index][0]
        return text_label, confidence
    else:
        return None, confidence


if __name__ == '__main__':
    app.run(port=5000, debug=True)


