﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0F6AB019D77D717D42BE5AD848FFBD032B14CFFC 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.XRDevice
struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194  : public RuntimeObject
{
};

struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields
{
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deviceLoaded_0;
};

// UnityEngine.XR.XRSettings
struct XRSettings_t783533FF87B79D6D0C6A47FA8EC9B17EC0820D97  : public RuntimeObject
{
};

// UnityEngine.XR.XRStats
struct XRStats_t9A9610FCC5B821A97F3D26AE091CBF7F8ABD0FF0  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.XRSettings::get_occlusionMaskScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSettings_get_occlusionMaskScale_mFA46FF99DD385D5D88247C356DA2B454B4C8132D (const RuntimeMethod* method) 
{
	typedef float (*XRSettings_get_occlusionMaskScale_mFA46FF99DD385D5D88247C356DA2B454B4C8132D_ftn) ();
	static XRSettings_get_occlusionMaskScale_mFA46FF99DD385D5D88247C356DA2B454B4C8132D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_occlusionMaskScale_mFA46FF99DD385D5D88247C356DA2B454B4C8132D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_occlusionMaskScale()");
	float icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRSettings::set_occlusionMaskScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_set_occlusionMaskScale_mFB321295E98DE1A01268FABCCB167CC2DCD8157E (float ___value0, const RuntimeMethod* method) 
{
	typedef void (*XRSettings_set_occlusionMaskScale_mFB321295E98DE1A01268FABCCB167CC2DCD8157E_ftn) (float);
	static XRSettings_set_occlusionMaskScale_mFB321295E98DE1A01268FABCCB167CC2DCD8157E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_set_occlusionMaskScale_mFB321295E98DE1A01268FABCCB167CC2DCD8157E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::set_occlusionMaskScale(System.Single)");
	_il2cpp_icall_func(___value0);
}
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243 (const RuntimeMethod* method) 
{
	typedef String_t* (*XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243_ftn) ();
	static XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_loadedDeviceName()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.XR.XRSettings/StereoRenderingMode UnityEngine.XR.XRSettings::get_stereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_stereoRenderingMode_mD66918C11E2216B1F8FA76934F79D5F85BC303FC (const RuntimeMethod* method) 
{
	typedef int32_t (*XRSettings_get_stereoRenderingMode_mD66918C11E2216B1F8FA76934F79D5F85BC303FC_ftn) ();
	static XRSettings_get_stereoRenderingMode_mD66918C11E2216B1F8FA76934F79D5F85BC303FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_stereoRenderingMode_mD66918C11E2216B1F8FA76934F79D5F85BC303FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_stereoRenderingMode()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_DisableAutoXRCameraTracking_m1243FCAD2AC9C4D5C2E551255A1B2BA266E12A52 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, bool ___disabled1, const RuntimeMethod* method) 
{
	typedef void (*XRDevice_DisableAutoXRCameraTracking_m1243FCAD2AC9C4D5C2E551255A1B2BA266E12A52_ftn) (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, bool);
	static XRDevice_DisableAutoXRCameraTracking_m1243FCAD2AC9C4D5C2E551255A1B2BA266E12A52_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_DisableAutoXRCameraTracking_m1243FCAD2AC9C4D5C2E551255A1B2BA266E12A52_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)");
	_il2cpp_icall_func(___camera0, ___disabled1);
}
// System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_InvokeDeviceLoaded_mBE2198DE44A72E2F5059566C46B9907D82782790 (String_t* ___loadedDeviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_il2cpp_TypeInfo_var))->___deviceLoaded_0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ((XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_il2cpp_TypeInfo_var))->___deviceLoaded_0;
		String_t* L_3 = ___loadedDeviceName0;
		NullCheck(L_2);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.XRStats::TryGetGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetGPUTimeLastFrame_mBA5DF9EBBAEAE27F75273CBEB41F57D4A34C5672 (float* ___gpuTimeLastFrame0, const RuntimeMethod* method) 
{
	typedef bool (*XRStats_TryGetGPUTimeLastFrame_mBA5DF9EBBAEAE27F75273CBEB41F57D4A34C5672_ftn) (float*);
	static XRStats_TryGetGPUTimeLastFrame_mBA5DF9EBBAEAE27F75273CBEB41F57D4A34C5672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRStats_TryGetGPUTimeLastFrame_mBA5DF9EBBAEAE27F75273CBEB41F57D4A34C5672_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRStats::TryGetGPUTimeLastFrame(System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(___gpuTimeLastFrame0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
