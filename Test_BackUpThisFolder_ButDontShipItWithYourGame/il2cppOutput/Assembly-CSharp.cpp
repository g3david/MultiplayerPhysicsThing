#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,VivoxUnity.AsyncResult`1<vx_resp_base_t>>
struct Dictionary_2_tD8BBE259C7E6FD61AD9381C7499473B5E4E2FC90;
// System.EventHandler`1<VivoxUnity.KeyEventArg`1<System.String>>
struct EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003;
// System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>>
struct EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199;
// System.EventHandler`1<VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>>
struct EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Func`2<VivoxUnity.IChannelSession,System.Boolean>
struct Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560;
// System.Func`2<VivoxUnity.ITTSVoice,System.Boolean>
struct Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA;
// System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<RosterItem,System.Boolean>
struct Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<VivoxUnity.ChannelId>
struct IEnumerable_1_tECF2D7CDFD4255BC4F6CC614F4FF6B3DE14BC660;
// System.Collections.Generic.IEnumerable`1<VivoxUnity.IChannelSession>
struct IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA;
// System.Collections.Generic.IEnumerable`1<VivoxUnity.ITTSVoice>
struct IEnumerable_1_t58DBA6FF91F82D16FB76A25AABA1A340EC610BEF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<RosterItem>
struct IEnumerable_1_t091B68EF9FF478B6579DB8D31E3C54E170E21D7F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Dropdown/OptionData>
struct IEnumerable_1_t48D22DF1140C37CEBB51C4E365703A607B2A4F07;
// System.Collections.Generic.IEqualityComparer`1<VivoxUnity.ChannelId>
struct IEqualityComparer_1_tB803645520F68827C20A2A2104523875AB52CD9E;
// System.Collections.Generic.IList`1<VivoxUnity.ITTSVoice>
struct IList_1_tC7FE9F3E0ED9E449901ABC86E6008538EF327B60;
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>
struct IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7;
// System.Collections.Generic.Dictionary`2/KeyCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct KeyCollection_t6F1D86EFF3D4A6D6BD469ABF3E0A143779AE2599;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// VivoxUnity.KeyEventArg`1<System.Object>
struct KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC;
// VivoxUnity.KeyEventArg`1<System.String>
struct KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<RosterItem>
struct List_1_tAE139C421211C38725830D12DDCEDA806DB9318C;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A;
// VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>
struct QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F;
// VivoxUnity.QueueItemAddedEventArgs`1<System.Object>
struct QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962;
// System.Collections.Generic.Queue`1<System.IAsyncResult>
struct Queue_1_t743B3EE70937096E881F123BA206A7E669A90D09;
// VivoxUnity.Common.ReadWriteDictionary`3<VivoxUnity.AccountId,VivoxUnity.ILoginSession,VivoxUnity.Private.LoginSession>
struct ReadWriteDictionary_3_t8B56E807D7964CF0B393CF66BF2CAA1699DEE758;
// VivoxUnity.Common.ReadWriteDictionary`3<System.String,VivoxUnity.IAudioDevice,VivoxUnity.Private.AudioDevice>
struct ReadWriteDictionary_3_t1DD2D76DB83434DE9C779326477FA9C17621DC76;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>
struct UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// System.Collections.Generic.Dictionary`2/ValueCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// VivoxUnity.ValueEventArg`2<System.Object,System.Object>
struct ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42;
// VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>
struct ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803;
// System.Collections.Generic.Dictionary`2/Entry<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>[]
struct EntryU5BU5D_t7CA4657B61E65E8D1901278BB2135492AED27FE0;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PhysicsHand[]
struct PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// RosterItem[]
struct RosterItemU5BU5D_t6C44C60406B2C8A23B2623D558666C00201476CB;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// VivoxUnity.AccountId
struct AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// VivoxUnity.Private.AudioDevice
struct AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4;
// VivoxUnity.Private.AudioInputDevices
struct AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D;
// VivoxUnity.Private.AudioOutputDevices
struct AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonState
struct ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// VivoxUnity.Channel3DProperties
struct Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA;
// VivoxUnity.ChannelId
struct ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E;
// VivoxUnity.Client
struct Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CurrentTime
struct CurrentTime_t395AC26D7890816DC640C1C9DD3161C0F72473DA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FollowXZAxisPhysics
struct FollowXZAxisPhysics_tE12ADD7B78F901E9532689407B5E0CB283DC22F4;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Tanks.UI.HUDMultiplayerScore
struct HUDMultiplayerScore_t4D339331C2461AC4FFB3FB339EBD6099A1467A5B;
// HeadFloorOffsetSetter
struct HeadFloorOffsetSetter_t104A3363B40385895A89FDEA367B16F24B6771F9;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// VivoxUnity.IAudioDevices
struct IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97;
// VivoxUnity.IChannelSession
struct IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614;
// VivoxUnity.IChannelTextMessage
struct IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// VivoxUnity.ILoginSession
struct ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152;
// VivoxUnity.IParticipant
struct IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD;
// VivoxUnity.ITTSVoice
struct ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// VivoxUnity.ITextToSpeech
struct ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LobbyScreenUI
struct LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8;
// LoginScreenUI
struct LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056;
// MainMenuOptions
struct MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PhysicsHand
struct PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// PositionalVoice
struct PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// RandomRotationOnStart
struct RandomRotationOnStart_t31563B4B424FED7F559914472B4DD5B4F8A666B7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RosterItem
struct RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44;
// RosterManager
struct RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// VivoxUnity.TTSMessage
struct TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// TextChatUI
struct TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UIDirectionControl
struct UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VivoxUnity.VivoxConfig
struct VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47;
// VivoxUnity.VivoxDebug
struct VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D;
// VivoxVoiceManager
struct VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VivoxUnity.VxClient
struct VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// vx_sdk_config_t
struct vx_sdk_config_t_tB3B1C8F939BA20DD0C196892DA093C3011564FDD;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// GameManager/<StartBuffer>d__10
struct U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// LobbyScreenUI/<>c
struct U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178;
// MainMenuOptions/<>c
struct U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PositionalVoice/OnParticipantProperty
struct OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// RosterManager/<>c
struct U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07;
// RosterManager/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// TextChatUI/<>c
struct U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B;
// TextChatUI/<SendScrollRectToBottom>d__20
struct U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// VivoxVoiceManager/<>c
struct U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD;
// VivoxVoiceManager/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559;
// VivoxVoiceManager/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2;
// VivoxVoiceManager/ChannelTextMessageChangedHandler
struct ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18;
// VivoxVoiceManager/LoginStatusChangedHandler
struct LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164;
// VivoxVoiceManager/ParticipantStatusChangedHandler
struct ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C;
// VivoxVoiceManager/ParticipantValueChangedHandler
struct ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF;
// VivoxVoiceManager/ParticipantValueUpdatedHandler
struct ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0;
// VivoxUnity.VxClient/HandleEventMessage
struct HandleEventMessage_t1C4D47B6ECA4CC02E505F31A583E432388A6FC3A;

IL2CPP_EXTERN_C RuntimeClass* AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2679F53F451E7C1669158B0255B7E39A2EEC2739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyedItemNotifyPropertyChanged_1_tBEDC8697E50901BE98E4B60602E8C465B04BBB76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAE139C421211C38725830D12DDCEDA806DB9318C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral09FF7F74F0F90C892E57933991F15B128305B1B3;
IL2CPP_EXTERN_C String_t* _stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911;
IL2CPP_EXTERN_C String_t* _stringLiteral173C668D8C2E557FF1CE6EABBF44A4A11B021C26;
IL2CPP_EXTERN_C String_t* _stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277;
IL2CPP_EXTERN_C String_t* _stringLiteral209D6C95315F539F036E51E085C33C40C40878D0;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26DDDA1B466C36EAF63ACFA7687FAC59D13AB0B8;
IL2CPP_EXTERN_C String_t* _stringLiteral282CB43FF4408CF43337C7A755263A1653212341;
IL2CPP_EXTERN_C String_t* _stringLiteral2D69CAE0AC1651DB4F092E55B86400B20FA0ECBB;
IL2CPP_EXTERN_C String_t* _stringLiteral2F40939B6CDDD36215CEF4124FF4F34AA9D77261;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral3A78E8CC1D676269140A4C0540A77A03A816A051;
IL2CPP_EXTERN_C String_t* _stringLiteral4942855047E86FFC88CE37CAE0742423E10F4038;
IL2CPP_EXTERN_C String_t* _stringLiteral4A931BAD21B30C92ED8BBF021BCB27387AC5BF4D;
IL2CPP_EXTERN_C String_t* _stringLiteral50FD7BF6C27C395B9804B3F9FDD503078D1DADE5;
IL2CPP_EXTERN_C String_t* _stringLiteral598FD815901C07C96F51F94285D0E6575675E0FE;
IL2CPP_EXTERN_C String_t* _stringLiteral6020785A926649CF038C7965768B025B64B74D66;
IL2CPP_EXTERN_C String_t* _stringLiteral696330D1E2AB3205FE1000DD6FD10D31CD721E3B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral7AED3CB487C10B345B79E6F1F11EFB4CC9D12723;
IL2CPP_EXTERN_C String_t* _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846;
IL2CPP_EXTERN_C String_t* _stringLiteral861698B5BDD391BC46A7D641FEBD491AFBB82D39;
IL2CPP_EXTERN_C String_t* _stringLiteral88C27C9252BDD577AD8270EB246D1191CC7C3091;
IL2CPP_EXTERN_C String_t* _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E;
IL2CPP_EXTERN_C String_t* _stringLiteral95F8B627CF4695408981A5FA5E7908623ADE1956;
IL2CPP_EXTERN_C String_t* _stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81;
IL2CPP_EXTERN_C String_t* _stringLiteral9677373A0B351941BE702A287F0B29AB6FC8B438;
IL2CPP_EXTERN_C String_t* _stringLiteralA36ABA82D87141283BD158FECF8AC5B3CAF978E7;
IL2CPP_EXTERN_C String_t* _stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659;
IL2CPP_EXTERN_C String_t* _stringLiteralB00436C38DF6739F15950C8C6C451CD5028B7DB7;
IL2CPP_EXTERN_C String_t* _stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E8F452E773B053530D43B51D8A29193CFA1BF5;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E369BE80D93F75A8B15354C47AF689AF0AA656;
IL2CPP_EXTERN_C String_t* _stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D6FD59178F3010F1AB669541164B6651F97367;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE158875ED390F9488AC132A775BB0C1A63CBB4D7;
IL2CPP_EXTERN_C String_t* _stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F23301F43FAF9CE1C2CD40E552B9952348975D;
IL2CPP_EXTERN_C String_t* _stringLiteralE9DB762CCB331794CDC9C04C10E3F770EEC07040;
IL2CPP_EXTERN_C String_t* _stringLiteralEADCFF2F9527E00370498BA0B164417E77D2B663;
IL2CPP_EXTERN_C String_t* _stringLiteralEB5B5DC2248D49B73508E62B24DC71BBDDA0B4E0;
IL2CPP_EXTERN_C String_t* _stringLiteralEEAED6BA2FFAC91E74FA8CC2645691A5D41227E2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3ED7812E5EBC284BAA9EF0CE704248361EEDD50;
IL2CPP_EXTERN_C String_t* _stringLiteralF7AB9A490B68662219B76EACAAC39DCF86D23E73;
IL2CPP_EXTERN_C String_t* _stringLiteralFF5911A90ECA2D7170D6A38695A7121E94F4037D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2C2A32AA4FD62D8B9BF5E40B7E2F3EF738C532A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m137258D9BB3E27EE9CF5B7DCE7DCE75EA63CD214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m0E859F4DF37A7F966E9D2CBC4A8E5639ADD5C1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m7DA4669EDBC7BCD235D880FCF93075B5424BECC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0AD2ADA9866535557DDC01FBA6C3E9A63DC7B535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m57BC98B8CE45574EB6DE4526EA23489B30211999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m680675B469A226462A423341C7E59513CE74BBDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m4186B5E40E7CFCBAF81BE71C83580274D3A01313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m52C3FB212878F7D85DF576BE39F648C716AE9B60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB41C7CB81C40B9C130DDFC40E0479A95D429D29F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mC5FE026F362B1A81D7AAE1B8DEE61592DF5986D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mEE539C3B1B8D539AF945B63CBF3286B51040B3C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m1654D7764B99CE498AD51D600613923D438B323A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_m6252497A5C37E0D60958C2EF07F79C1ECDA6B9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mCD53A60D8A4F787A084D44330770702CA1EF987B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA09CDC0A2851BAA32AB66D9B0C6853ACE0C714AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m03186BDD1ED08A600C0CFFB405F900475980F18D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEE276D47C3EC05841798A630D90132149CC22498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_mF6DF04DB1B7CE5B7FC8BE0B29D0B1DF7D7E0B087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_mFD204C4A79BDCA431E976533D0363060E41BA7E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC9712D4976AE7CF982E325549A3C7A98592A0829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m72BA5082A99AAEF3CB7E9D2A0B2C197D8A563F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0DCD7906ECB4BD0F97BA2E727C52B7A2A984B94B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7C09D0F6D108B1644FCA8FCA1E8477308DEC0E8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_U3CAwakeU3Eb__5_0_m8AA29219BB4027C12E9780E1DB3331825416E5B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_U3COnUserLoggedInU3Eb__10_0_m0C89EC6715BFC27180D58B811E0E04F8CB95D976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_U3CAwakeU3Eb__7_0_m74A6921737F1A82F786D44E26673F301B983DCF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenUI_U3CAwakeU3Eb__7_1_m49B952BECC2AE49C3DBC5C347F2260C21B1094DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_ConfirmNoAction_m81DDDF541046EC3561982DEBD9AD036AB41ADF74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_ConfirmYesButtonAction_m6D83A6DF984BABEDEBD795BA99D23538E3B11BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_QuitButtonAction_m4512CD72E7B426931F931B133F3FC6DB3CB11F19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_U3CSaveActionU3Eb__25_0_mF987D0307A6861DA762A1F47F5B67EABE4B0F510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_mB9F560AF77D26059CD82762A42D8B0E764D9FA06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainMenuOptions_U3CStartU3Eb__15_0_m7F4C5FE55FE04F3F7510CA2FF4F1D0ACA1CE957E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PositionalVoice_Participant_PropertyChanged_mC741AF7AC8B5D93FB9564C284203567D6837438A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterItem_U3CSetupRosterItemU3Eb__16_0_m27DC58BD31D578EA04F2F1AAFBDCD7CD1EB93948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterItem_U3CSetupRosterItemU3Eb__16_1_mE5FF4BBFF972E2EEDF89319E1F245181C31EC310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterManager_OnParticipantAdded_mE4A2CA577D736B08357FD5FE30DD04800C1B880E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterManager_OnParticipantRemoved_mEDA7D15949921EB94CCD9121DEC380AD1AF13DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RosterManager_OnUserLoggedOut_m9A0F7E4A0D3B552260F30115EE8E2CF6D80C67C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_OnParticipantAdded_m9B1F03FE8D1087DD3748DAC055ED554A01C8138C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_OnTextMessageLogReceivedEvent_m052C3A295924666088CACE3688EFAE2E4CE7AB9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_SubmitTTSMessageToVivox_mDA9AA740530FD53271A50C916FB1B4EC8848E126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_SubmitTextToVivox_m1A72C98FD5B63E7B46C30692E066E263A2F08201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_TTSToggleValueChanged_mDE90661640EC052C8BA6FF04E8DB7B2C972DE945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextChatUI_U3CAwakeU3Eb__11_0_m340F5DBEAEC19727D14A6B1890BE3DA8584BDE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_Reset_mC319DF7C03405FB1AD59AEA6FD23EFB0428DAA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartBufferU3Ed__10_System_Collections_IEnumerator_Reset_m2DCEBA923633BFF2607E2F326ECA5F792518486A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m3D2254028A15C7833B4342A587710CE39FF791C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__11_1_mCB704AC38ABAE576B9D5D9FAC9BB718522AFACBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__5_0_mB234D00B79271DBA13ED98D823B9F9EDE574A1A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnUserLoggedInU3Eb__10_1_m688DA21323D86BD70F589D0E93E993B5278F6507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_TransmittingSessionU3Eb__54_0_mCD60EA9DCB9B14D3A1D4920037DC81DFCD0262CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m2DB69DB17B670C531AC98EF759AD13CEEE82CFFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass61_0_U3CJoinChannelU3Eb__0_mBB10C3FF82B3431047CEBCF2438EC7B4F1DDEE08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass62_0_U3CSendTextMessageU3Eb__0_m7A5F70FB950D911B8D36A94C1CCAC462654B1768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mB0BE9F521CAD858D6A8D28D72D78B1167508DDC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_SendTextMessage_mD8BFEDDD0E2D0AC542C62E9930FB1C882D913519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_U3CLoginU3Eb__59_0_m0D7DA3D4159BE9E06465CFCE1FA34C6F960599FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VivoxVoiceManager_get_TransmittingSession_m39CB237844F84DA8E331A99A2B88D792D22D236F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7CA4657B61E65E8D1901278BB2135492AED27FE0* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6F1D86EFF3D4A6D6BD469ABF3E0A143779AE2599* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct KeyCollection_t6F1D86EFF3D4A6D6BD469ABF3E0A143779AE2599  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* ____dictionary_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<RosterItem>
struct List_1_tAE139C421211C38725830D12DDCEDA806DB9318C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RosterItemU5BU5D_t6C44C60406B2C8A23B2623D558666C00201476CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAE139C421211C38725830D12DDCEDA806DB9318C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RosterItemU5BU5D_t6C44C60406B2C8A23B2623D558666C00201476CB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tF56CF744A9E6A0DBB0AC2072BE52F7C8D2E1947F* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<VivoxUnity.ITTSVoice>
struct ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// VivoxUnity.AccountId
struct AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368  : public RuntimeObject
{
	// System.String VivoxUnity.AccountId::_domain
	String_t* ____domain_1;
	// System.String VivoxUnity.AccountId::_name
	String_t* ____name_2;
	// System.String VivoxUnity.AccountId::_issuer
	String_t* ____issuer_3;
	// System.String VivoxUnity.AccountId::_displayname
	String_t* ____displayname_4;
	// System.String[] VivoxUnity.AccountId::_spokenLanguages
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____spokenLanguages_5;
};
struct Il2CppArrayBounds;

// VivoxUnity.Private.AudioInputDevices
struct AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D  : public RuntimeObject
{
	// System.String VivoxUnity.Private.AudioInputDevices::DefaultSystemDevice
	String_t* ___DefaultSystemDevice_0;
	// System.String VivoxUnity.Private.AudioInputDevices::DefaultCommunicationDevice
	String_t* ___DefaultCommunicationDevice_1;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_defaultSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultSystemDevice_2;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_defaultCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultCommunicationDevice_3;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_currentSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentSystemDevice_4;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_currentCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentCommunicationDevice_5;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_activeDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____activeDevice_6;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioInputDevices::_effectiveDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____effectiveDevice_7;
	// System.Int32 VivoxUnity.Private.AudioInputDevices::_audioGain
	int32_t ____audioGain_8;
	// System.Boolean VivoxUnity.Private.AudioInputDevices::_muted
	bool ____muted_9;
	// VivoxUnity.VxClient VivoxUnity.Private.AudioInputDevices::_client
	VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* ____client_10;
	// VivoxUnity.Common.ReadWriteDictionary`3<System.String,VivoxUnity.IAudioDevice,VivoxUnity.Private.AudioDevice> VivoxUnity.Private.AudioInputDevices::_devices
	ReadWriteDictionary_3_t1DD2D76DB83434DE9C779326477FA9C17621DC76* ____devices_11;
	// System.ComponentModel.PropertyChangedEventHandler VivoxUnity.Private.AudioInputDevices::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_12;
};

// VivoxUnity.Private.AudioOutputDevices
struct AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6  : public RuntimeObject
{
	// System.String VivoxUnity.Private.AudioOutputDevices::DefaultSystemDevice
	String_t* ___DefaultSystemDevice_0;
	// System.String VivoxUnity.Private.AudioOutputDevices::DefaultCommunicationDevice
	String_t* ___DefaultCommunicationDevice_1;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_defaultSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultSystemDevice_2;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_defaultCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____defaultCommunicationDevice_3;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_currentSystemDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentSystemDevice_4;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_currentCommunicationDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____currentCommunicationDevice_5;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_activeDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____activeDevice_6;
	// VivoxUnity.Private.AudioDevice VivoxUnity.Private.AudioOutputDevices::_effectiveDevice
	AudioDevice_t5865F9B02B0D138FF42D03C7EFC84DCC024493E4* ____effectiveDevice_7;
	// System.Int32 VivoxUnity.Private.AudioOutputDevices::_volumeAdjustment
	int32_t ____volumeAdjustment_8;
	// System.Boolean VivoxUnity.Private.AudioOutputDevices::_muted
	bool ____muted_9;
	// VivoxUnity.VxClient VivoxUnity.Private.AudioOutputDevices::_client
	VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* ____client_10;
	// VivoxUnity.Common.ReadWriteDictionary`3<System.String,VivoxUnity.IAudioDevice,VivoxUnity.Private.AudioDevice> VivoxUnity.Private.AudioOutputDevices::_devices
	ReadWriteDictionary_3_t1DD2D76DB83434DE9C779326477FA9C17621DC76* ____devices_11;
	// System.ComponentModel.PropertyChangedEventHandler VivoxUnity.Private.AudioOutputDevices::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_12;
};

// VivoxUnity.Client
struct Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF  : public RuntimeObject
{
	// VivoxUnity.Common.ReadWriteDictionary`3<VivoxUnity.AccountId,VivoxUnity.ILoginSession,VivoxUnity.Private.LoginSession> VivoxUnity.Client::_loginSessions
	ReadWriteDictionary_3_t8B56E807D7964CF0B393CF66BF2CAA1699DEE758* ____loginSessions_0;
	// VivoxUnity.Private.AudioInputDevices VivoxUnity.Client::_inputDevices
	AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D* ____inputDevices_1;
	// VivoxUnity.Private.AudioOutputDevices VivoxUnity.Client::_outputDevices
	AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6* ____outputDevices_2;
	// System.String VivoxUnity.Client::_connectorHandle
	String_t* ____connectorHandle_4;
	// System.Collections.Generic.Queue`1<System.IAsyncResult> VivoxUnity.Client::_pendingConnectorCreateRequests
	Queue_1_t743B3EE70937096E881F123BA206A7E669A90D09* ____pendingConnectorCreateRequests_5;
	// System.Boolean VivoxUnity.Client::_ttsIsInitialized
	bool ____ttsIsInitialized_6;
	// System.UInt32 VivoxUnity.Client::_ttsManagerId
	uint32_t ____ttsManagerId_7;
};

struct Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_StaticFields
{
	// System.Int32 VivoxUnity.Client::_nextHandle
	int32_t ____nextHandle_3;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// VivoxUnity.VivoxConfig
struct VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47  : public RuntimeObject
{
	// vx_sdk_config_t VivoxUnity.VivoxConfig::vx_sdk_config
	vx_sdk_config_t_tB3B1C8F939BA20DD0C196892DA093C3011564FDD* ___vx_sdk_config_0;
	// System.Boolean VivoxUnity.VivoxConfig::<SkipPrepareForVivox>k__BackingField
	bool ___U3CSkipPrepareForVivoxU3Ek__BackingField_1;
};

// VivoxUnity.VivoxDebug
struct VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D  : public RuntimeObject
{
	// System.Int32 VivoxUnity.VivoxDebug::debugLocation
	int32_t ___debugLocation_1;
	// System.Boolean VivoxUnity.VivoxDebug::throwInternalExcepetions
	bool ___throwInternalExcepetions_2;
};

struct VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D_StaticFields
{
	// VivoxUnity.VivoxDebug VivoxUnity.VivoxDebug::_instance
	VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* ____instance_0;
};

// VivoxUnity.VxClient
struct VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,VivoxUnity.AsyncResult`1<vx_resp_base_t>> VivoxUnity.VxClient::_pendingRequests
	Dictionary_2_tD8BBE259C7E6FD61AD9381C7499473B5E4E2FC90* ____pendingRequests_1;
	// System.Int64 VivoxUnity.VxClient::_nextRequestId
	int64_t ____nextRequestId_2;
	// System.Int32 VivoxUnity.VxClient::_startCount
	int32_t ____startCount_3;
	// VivoxUnity.VivoxDebug VivoxUnity.VxClient::vivoxDebug
	VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* ___vivoxDebug_5;
	// VivoxUnity.VxClient/HandleEventMessage VivoxUnity.VxClient::EventMessageReceived
	HandleEventMessage_t1C4D47B6ECA4CC02E505F31A583E432388A6FC3A* ___EventMessageReceived_6;
	// System.Boolean VivoxUnity.VxClient::disposed
	bool ___disposed_7;
};

struct VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583_StaticFields
{
	// VivoxUnity.VxClient VivoxUnity.VxClient::_instance
	VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* ____instance_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F  : public RuntimeObject
{
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// GameManager/<StartBuffer>d__10
struct U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F  : public RuntimeObject
{
	// System.Int32 GameManager/<StartBuffer>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartBuffer>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<StartBuffer>d__10::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// LobbyScreenUI/<>c
struct U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178  : public RuntimeObject
{
};

struct U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields
{
	// LobbyScreenUI/<>c LobbyScreenUI/<>c::<>9
	U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* ___U3CU3E9_0;
	// System.AsyncCallback LobbyScreenUI/<>c::<>9__10_1
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___U3CU3E9__10_1_1;
};

// MainMenuOptions/<>c
struct U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174  : public RuntimeObject
{
};

struct U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_StaticFields
{
	// MainMenuOptions/<>c MainMenuOptions/<>c::<>9
	U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData> MainMenuOptions/<>c::<>9__20_0
	Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* ___U3CU3E9__20_0_1;
};

// RosterManager/<>c
struct U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07  : public RuntimeObject
{
};

struct U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_StaticFields
{
	// RosterManager/<>c RosterManager/<>c::<>9
	U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.IChannelSession,System.Boolean> RosterManager/<>c::<>9__5_0
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___U3CU3E9__5_0_1;
};

// RosterManager/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112  : public RuntimeObject
{
	// VivoxUnity.IParticipant RosterManager/<>c__DisplayClass12_0::participant
	RuntimeObject* ___participant_0;
};

// TextChatUI/<>c
struct U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B  : public RuntimeObject
{
};

struct U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_StaticFields
{
	// TextChatUI/<>c TextChatUI/<>c::<>9
	U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.IChannelSession,System.Boolean> TextChatUI/<>c::<>9__11_1
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___U3CU3E9__11_1_1;
};

// TextChatUI/<SendScrollRectToBottom>d__20
struct U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932  : public RuntimeObject
{
	// System.Int32 TextChatUI/<SendScrollRectToBottom>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TextChatUI/<SendScrollRectToBottom>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TextChatUI TextChatUI/<SendScrollRectToBottom>d__20::<>4__this
	TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* ___U3CU3E4__this_2;
};

// VivoxVoiceManager/<>c
struct U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD  : public RuntimeObject
{
};

struct U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_StaticFields
{
	// VivoxVoiceManager/<>c VivoxVoiceManager/<>c::<>9
	U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD* ___U3CU3E9_0;
	// System.Func`2<VivoxUnity.IChannelSession,System.Boolean> VivoxVoiceManager/<>c::<>9__54_0
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___U3CU3E9__54_0_1;
};

// VivoxVoiceManager/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559  : public RuntimeObject
{
	// VivoxUnity.IChannelSession VivoxVoiceManager/<>c__DisplayClass61_0::channelSession
	RuntimeObject* ___channelSession_0;
	// VivoxVoiceManager VivoxVoiceManager/<>c__DisplayClass61_0::<>4__this
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ___U3CU3E4__this_1;
};

// VivoxVoiceManager/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2  : public RuntimeObject
{
	// VivoxUnity.IChannelSession VivoxVoiceManager/<>c__DisplayClass62_0::channelSession
	RuntimeObject* ___channelSession_0;
	// VivoxVoiceManager VivoxVoiceManager/<>c__DisplayClass62_0::<>4__this
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<RosterItem>
struct Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>
struct Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// VivoxUnity.KeyEventArg`1<System.Object>
struct KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.KeyEventArg`1::<Key>k__BackingField
	RuntimeObject* ___U3CKeyU3Ek__BackingField_1;
};

// VivoxUnity.KeyEventArg`1<System.String>
struct KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.KeyEventArg`1::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_1;
};

// VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>
struct QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// T VivoxUnity.QueueItemAddedEventArgs`1::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// VivoxUnity.QueueItemAddedEventArgs`1<System.Object>
struct QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// T VivoxUnity.QueueItemAddedEventArgs`1::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>
struct UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// VivoxUnity.ValueEventArg`2<System.Object,System.Object>
struct ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.ValueEventArg`2::<Key>k__BackingField
	RuntimeObject* ___U3CKeyU3Ek__BackingField_1;
	// TV VivoxUnity.ValueEventArg`2::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_2;
	// System.String VivoxUnity.ValueEventArg`2::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_3;
};

// VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>
struct ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TK VivoxUnity.ValueEventArg`2::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_1;
	// TV VivoxUnity.ValueEventArg`2::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_2;
	// System.String VivoxUnity.ValueEventArg`2::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String System.ComponentModel.PropertyChangedEventArgs::_propertyName
	String_t* ____propertyName_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// VivoxUnity.AudioFadeModel
struct AudioFadeModel_t9EDAC7D7258CFA5014063FAC0AA7F7CB38C23D8A 
{
	// System.Int32 VivoxUnity.AudioFadeModel::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// VivoxUnity.ChannelType
struct ChannelType_t5C55337BD26B9CAB2F163F86123EBC387C9419DE 
{
	// System.Int32 VivoxUnity.ChannelType::value__
	int32_t ___value___2;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// VivoxUnity.ConnectionState
struct ConnectionState_tB61473F988BCB33026F70E9554BAF2DF0D29534E 
{
	// System.Int32 VivoxUnity.ConnectionState::value__
	int32_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// UnityEngine.ForceMode
struct ForceMode_t603F3ECB085E4FDD30C91273A469047EA64F4459 
{
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// VivoxUnity.LoginState
struct LoginState_tB9471F31EA13D9591BC9B2AA60BD3CDC6925E46E 
{
	// System.Int32 VivoxUnity.LoginState::value__
	int32_t ___value___2;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// VivoxUnity.SubscriptionMode
struct SubscriptionMode_t3F1DD1C1F13E9A99446A2710CA06A37947F55CF5 
{
	// System.Int32 VivoxUnity.SubscriptionMode::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// VivoxUnity.TTSDestination
struct TTSDestination_tF76CEEBE7FB04DD8805B60E5EE076794B9886144 
{
	// System.Int32 VivoxUnity.TTSDestination::value__
	int32_t ___value___2;
};

// VivoxUnity.TTSMessageState
struct TTSMessageState_t58905ADFADE32D84C569FF535D9DABA21293E5F4 
{
	// System.Int32 VivoxUnity.TTSMessageState::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TextAnchor
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;
};

// VivoxUnity.TransmissionMode
struct TransmissionMode_tFF974523726413963F749EF80EA050FC072A19EC 
{
	// System.Int32 VivoxUnity.TransmissionMode::value__
	int32_t ___value___2;
};

// System.UriFormat
struct UriFormat_tCFECBDF50112D695E5A4C3F05AE60480FB77A2C0 
{
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.UriKind
struct UriKind_t6597BD6BF48C695D63244DF8541B5EA48FF7F9E7 
{
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// vx_log_level
struct vx_log_level_t9DF6DD87BD2CC2662DB9EACDBF9A5A6D4CB22AA4 
{
	// System.Int32 vx_log_level::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380 
{
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/ContentType
struct ContentType_t7E546E516F92E955324D479BB71667931F1A7956 
{
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.UI.InputField/InputType
struct InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4 
{
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/LineType
struct LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B 
{
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;
};

// PositionalVoice/OnParticipantProperty
struct OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6  : public UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA
{
};

// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_t35B76DF2E479A4C67D7768854404EFB47BF1BBB6 
{
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t04A8B197CECE292E71BBB9145B1CA95BD450383E 
{
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_tCE3F3757423A29F22112989C6B4D087850A13ED7 
{
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// VivoxVoiceManager/ChangedProperty
struct ChangedProperty_t92A20D09D5FCD8784D8B81A8CA985C7585969D19 
{
	// System.Int32 VivoxVoiceManager/ChangedProperty::value__
	int32_t ___value___2;
};

// VivoxVoiceManager/ChatCapability
struct ChatCapability_tF3A3F90636B27C6F44880B513B9CC4A8AD99A50E 
{
	// System.Int32 VivoxVoiceManager/ChatCapability::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// VivoxUnity.Channel3DProperties
struct Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA  : public RuntimeObject
{
	// System.Int32 VivoxUnity.Channel3DProperties::_audibleDistance
	int32_t ____audibleDistance_0;
	// System.Int32 VivoxUnity.Channel3DProperties::_conversationalDistance
	int32_t ____conversationalDistance_1;
	// System.Single VivoxUnity.Channel3DProperties::_audioFadeIntensityByDistance
	float ____audioFadeIntensityByDistance_2;
	// VivoxUnity.AudioFadeModel VivoxUnity.Channel3DProperties::_audioFadeModel
	int32_t ____audioFadeModel_3;
};

// VivoxUnity.ChannelId
struct ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E  : public RuntimeObject
{
	// System.String VivoxUnity.ChannelId::_domain
	String_t* ____domain_0;
	// System.String VivoxUnity.ChannelId::_name
	String_t* ____name_1;
	// System.String VivoxUnity.ChannelId::_issuer
	String_t* ____issuer_2;
	// VivoxUnity.ChannelType VivoxUnity.ChannelId::_type
	int32_t ____type_3;
	// VivoxUnity.Channel3DProperties VivoxUnity.ChannelId::_properties
	Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ____properties_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// VivoxUnity.TTSMessage
struct TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E  : public RuntimeObject
{
	// System.String VivoxUnity.TTSMessage::_text
	String_t* ____text_0;
	// VivoxUnity.TTSDestination VivoxUnity.TTSMessage::_destination
	int32_t ____destination_1;
	// VivoxUnity.ITTSVoice VivoxUnity.TTSMessage::_voice
	RuntimeObject* ____voice_2;
	// VivoxUnity.TTSMessageState VivoxUnity.TTSMessage::_state
	int32_t ____state_3;
	// System.UInt32 VivoxUnity.TTSMessage::_numConsumers
	uint32_t ____numConsumers_4;
	// System.Double VivoxUnity.TTSMessage::_duration
	double ____duration_5;
	// System.UInt32 VivoxUnity.TTSMessage::_key
	uint32_t ____key_6;
	// VivoxUnity.ITextToSpeech VivoxUnity.TTSMessage::_ttsSubSystem
	RuntimeObject* ____ttsSubSystem_7;
	// System.ComponentModel.PropertyChangedEventHandler VivoxUnity.TTSMessage::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_8;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.EventHandler`1<VivoxUnity.KeyEventArg`1<System.String>>
struct EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003  : public MulticastDelegate_t
{
};

// System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>>
struct EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199  : public MulticastDelegate_t
{
};

// System.EventHandler`1<VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>>
struct EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01  : public MulticastDelegate_t
{
};

// System.Func`2<VivoxUnity.IChannelSession,System.Boolean>
struct Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560  : public MulticastDelegate_t
{
};

// System.Func`2<VivoxUnity.ITTSVoice,System.Boolean>
struct Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA  : public MulticastDelegate_t
{
};

// System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>
struct Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6  : public MulticastDelegate_t
{
};

// System.Func`2<RosterItem,System.Boolean>
struct Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>
struct Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA  : public MulticastDelegate_t
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// VivoxVoiceManager/ChannelTextMessageChangedHandler
struct ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/LoginStatusChangedHandler
struct LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ParticipantStatusChangedHandler
struct ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ParticipantValueChangedHandler
struct ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ParticipantValueUpdatedHandler
struct ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// ButtonState
struct ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ButtonState::_isPressed
	bool ____isPressed_4;
	// System.Boolean ButtonState::_isDown
	bool ____isDown_5;
	// System.Boolean ButtonState::_isUp
	bool ____isUp_6;
};

// CurrentTime
struct CurrentTime_t395AC26D7890816DC640C1C9DD3161C0F72473DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text CurrentTime::Clock
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___Clock_4;
	// System.String CurrentTime::ZuluTimeFormat
	String_t* ___ZuluTimeFormat_5;
	// System.String CurrentTime::LocalTimeFormat
	String_t* ___LocalTimeFormat_6;
	// System.Boolean CurrentTime::local
	bool ___local_7;
};

// FollowXZAxisPhysics
struct FollowXZAxisPhysics_tE12ADD7B78F901E9532689407B5E0CB283DC22F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FollowXZAxisPhysics::Follow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Follow_4;
	// UnityEngine.Rigidbody FollowXZAxisPhysics::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::localTank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___localTank_5;
	// UnityEngine.UI.Button GameManager::BoostButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BoostButton_6;
	// UnityEngine.UI.Button GameManager::ShootButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ShootButton_7;
	// System.Boolean GameManager::IsGameInputEnabled
	bool ___IsGameInputEnabled_8;
	// System.Int32 GameManager::RedTeamScore
	int32_t ___RedTeamScore_9;
	// System.Int32 GameManager::BlueTeamScore
	int32_t ___BlueTeamScore_10;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::s_Instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___s_Instance_4;
};

// Tanks.UI.HUDMultiplayerScore
struct HUDMultiplayerScore_t4D339331C2461AC4FFB3FB339EBD6099A1467A5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Tanks.UI.HUDMultiplayerScore::m_TargetValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TargetValue_4;
	// UnityEngine.GameObject[] Tanks.UI.HUDMultiplayerScore::m_ScoreParent
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_ScoreParent_5;
	// UnityEngine.UI.Image[] Tanks.UI.HUDMultiplayerScore::m_TeamIcons
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___m_TeamIcons_6;
	// UnityEngine.UI.Text[] Tanks.UI.HUDMultiplayerScore::m_TeamScores
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___m_TeamScores_7;
};

// HeadFloorOffsetSetter
struct HeadFloorOffsetSetter_t104A3363B40385895A89FDEA367B16F24B6771F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PhysicsHand[] HeadFloorOffsetSetter::feet
	PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6* ___feet_4;
	// UnityEngine.Transform[] HeadFloorOffsetSetter::hands
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___hands_5;
	// UnityEngine.Transform HeadFloorOffsetSetter::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_6;
	// UnityEngine.Transform HeadFloorOffsetSetter::floor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___floor_7;
	// System.Boolean HeadFloorOffsetSetter::centerFeetUnderHead
	bool ___centerFeetUnderHead_8;
};

// LobbyScreenUI
struct LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager LobbyScreenUI::_vivoxVoiceManager
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ____vivoxVoiceManager_4;
	// System.String LobbyScreenUI::LobbyChannelName
	String_t* ___LobbyChannelName_5;
	// UnityEngine.EventSystems.EventSystem LobbyScreenUI::_evtSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ____evtSystem_6;
	// UnityEngine.UI.Button LobbyScreenUI::LogoutButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LogoutButton_7;
	// UnityEngine.GameObject LobbyScreenUI::LobbyScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LobbyScreen_8;
};

// LoginScreenUI
struct LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager LoginScreenUI::_vivoxVoiceManager
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ____vivoxVoiceManager_4;
	// UnityEngine.UI.Button LoginScreenUI::LoginButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LoginButton_5;
	// UnityEngine.UI.InputField LoginScreenUI::DisplayNameInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___DisplayNameInput_6;
	// UnityEngine.GameObject LoginScreenUI::LoginScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LoginScreen_7;
	// System.Int32 LoginScreenUI::defaultMaxStringLength
	int32_t ___defaultMaxStringLength_8;
	// System.Boolean LoginScreenUI::PermissionsDenied
	bool ___PermissionsDenied_9;
	// UnityEngine.EventSystems.EventSystem LoginScreenUI::_evtSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ____evtSystem_10;
};

// MainMenuOptions
struct MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button MainMenuOptions::SaveButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SaveButton_4;
	// UnityEngine.UI.Button MainMenuOptions::QuitButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___QuitButton_5;
	// UnityEngine.UI.Dropdown MainMenuOptions::TTSVoiceDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___TTSVoiceDropdown_6;
	// UnityEngine.GameObject MainMenuOptions::ConfirmationMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConfirmationMenu_7;
	// UnityEngine.UI.Button MainMenuOptions::ConfirmYesButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ConfirmYesButton_8;
	// UnityEngine.UI.Button MainMenuOptions::ConfirmNoButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ConfirmNoButton_9;
	// UnityEngine.EventSystems.EventSystem MainMenuOptions::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_10;
	// System.Int32 MainMenuOptions::_selected_tts_voice_index
	int32_t ____selected_tts_voice_index_11;
	// System.String MainMenuOptions::tts_voice_setting
	String_t* ___tts_voice_setting_12;
};

// PhysicsHand
struct PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PhysicsHand::frequency
	float ___frequency_4;
	// System.Single PhysicsHand::damping
	float ___damping_5;
	// System.Single PhysicsHand::rotFrequency
	float ___rotFrequency_6;
	// System.Single PhysicsHand::rotDamping
	float ___rotDamping_7;
	// UnityEngine.Rigidbody PhysicsHand::playerRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRigidbody_8;
	// UnityEngine.Transform PhysicsHand::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_9;
	// UnityEngine.Vector3 PhysicsHand::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_10;
	// System.Boolean PhysicsHand::trackPos
	bool ___trackPos_11;
	// System.Boolean PhysicsHand::trackRot
	bool ___trackRot_12;
	// System.Single PhysicsHand::climbForce
	float ___climbForce_13;
	// System.Single PhysicsHand::climbDrag
	float ___climbDrag_14;
	// UnityEngine.Rigidbody PhysicsHand::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_15;
	// UnityEngine.Vector3 PhysicsHand::_previousPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousPosition_16;
	// System.Boolean PhysicsHand::_isColliding
	bool ____isColliding_17;
};

// PositionalVoice
struct PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PositionalVoice/OnParticipantProperty PositionalVoice::m_ParticipantPropertyEvent
	OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6* ___m_ParticipantPropertyEvent_4;
	// UnityEngine.GameObject PositionalVoice::PositionalGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PositionalGameObject_5;
	// System.Boolean PositionalVoice::<isSpeaking>k__BackingField
	bool ___U3CisSpeakingU3Ek__BackingField_6;
	// VivoxUnity.Channel3DProperties PositionalVoice::<ChannelProperties>k__BackingField
	Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___U3CChannelPropertiesU3Ek__BackingField_7;
	// VivoxUnity.IChannelSession PositionalVoice::ChannelSession
	RuntimeObject* ___ChannelSession_8;
	// System.String PositionalVoice::positionalChannelName
	String_t* ___positionalChannelName_9;
	// VivoxUnity.IParticipant PositionalVoice::_participant
	RuntimeObject* ____participant_10;
};

// RandomRotationOnStart
struct RandomRotationOnStart_t31563B4B424FED7F559914472B4DD5B4F8A666B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RandomRotationOnStart::minRotationSpeed
	float ___minRotationSpeed_4;
	// System.Single RandomRotationOnStart::maxRotationSpeed
	float ___maxRotationSpeed_5;
	// System.Boolean RandomRotationOnStart::disableAngularDrag
	bool ___disableAngularDrag_6;
};

// RosterItem
struct RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager RosterItem::_vivoxVoiceManager
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ____vivoxVoiceManager_4;
	// VivoxUnity.IParticipant RosterItem::Participant
	RuntimeObject* ___Participant_5;
	// UnityEngine.UI.Text RosterItem::PlayerNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PlayerNameText_6;
	// UnityEngine.UI.Image RosterItem::ChatStateImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ChatStateImage_7;
	// UnityEngine.Sprite RosterItem::MutedImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___MutedImage_8;
	// UnityEngine.Sprite RosterItem::SpeakingImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SpeakingImage_9;
	// UnityEngine.Sprite RosterItem::NotSpeakingImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___NotSpeakingImage_10;
	// System.Boolean RosterItem::isMuted
	bool ___isMuted_11;
	// System.Boolean RosterItem::isSpeaking
	bool ___isSpeaking_12;
};

// RosterManager
struct RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager RosterManager::_vivoxVoiceManager
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ____vivoxVoiceManager_5;
	// System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>> RosterManager::rosterObjects
	Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* ___rosterObjects_6;
	// UnityEngine.GameObject RosterManager::rosterItemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rosterItemPrefab_7;
};

// TextChatUI
struct TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager TextChatUI::_vivoxVoiceManager
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ____vivoxVoiceManager_4;
	// VivoxUnity.ChannelId TextChatUI::_lobbyChannelId
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ____lobbyChannelId_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TextChatUI::_messageObjPool
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____messageObjPool_7;
	// UnityEngine.UI.ScrollRect TextChatUI::_textChatScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ____textChatScrollRect_8;
	// UnityEngine.GameObject TextChatUI::ChatContentObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ChatContentObj_9;
	// UnityEngine.GameObject TextChatUI::MessageObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MessageObject_10;
	// UnityEngine.UI.Button TextChatUI::EnterButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___EnterButton_11;
	// UnityEngine.UI.Button TextChatUI::SendTTSMessageButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SendTTSMessageButton_12;
	// UnityEngine.UI.InputField TextChatUI::MessageInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___MessageInputField_13;
	// UnityEngine.UI.Toggle TextChatUI::ToggleTTS
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ToggleTTS_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIDirectionControl
struct UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VivoxVoiceManager
struct VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager/ParticipantValueChangedHandler VivoxVoiceManager::OnSpeechDetectedEvent
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* ___OnSpeechDetectedEvent_4;
	// VivoxVoiceManager/ParticipantValueUpdatedHandler VivoxVoiceManager::OnAudioEnergyChangedEvent
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* ___OnAudioEnergyChangedEvent_5;
	// VivoxVoiceManager/ParticipantStatusChangedHandler VivoxVoiceManager::OnParticipantAddedEvent
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___OnParticipantAddedEvent_6;
	// VivoxVoiceManager/ParticipantStatusChangedHandler VivoxVoiceManager::OnParticipantRemovedEvent
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___OnParticipantRemovedEvent_7;
	// VivoxVoiceManager/ChannelTextMessageChangedHandler VivoxVoiceManager::OnTextMessageLogReceivedEvent
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* ___OnTextMessageLogReceivedEvent_8;
	// VivoxVoiceManager/LoginStatusChangedHandler VivoxVoiceManager::OnUserLoggedInEvent
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___OnUserLoggedInEvent_9;
	// VivoxVoiceManager/LoginStatusChangedHandler VivoxVoiceManager::OnUserLoggedOutEvent
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___OnUserLoggedOutEvent_10;
	// System.String VivoxVoiceManager::_server
	String_t* ____server_11;
	// System.String VivoxVoiceManager::_domain
	String_t* ____domain_12;
	// System.String VivoxVoiceManager::_tokenIssuer
	String_t* ____tokenIssuer_13;
	// System.String VivoxVoiceManager::_tokenKey
	String_t* ____tokenKey_14;
	// System.TimeSpan VivoxVoiceManager::_tokenExpiration
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____tokenExpiration_15;
	// VivoxUnity.Client VivoxVoiceManager::_client
	Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* ____client_16;
	// VivoxUnity.AccountId VivoxVoiceManager::_accountId
	AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* ____accountId_17;
	// VivoxUnity.LoginState VivoxVoiceManager::<LoginState>k__BackingField
	int32_t ___U3CLoginStateU3Ek__BackingField_20;
	// VivoxUnity.ILoginSession VivoxVoiceManager::LoginSession
	RuntimeObject* ___LoginSession_21;
};

struct VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields
{
	// System.Object VivoxVoiceManager::m_Lock
	RuntimeObject* ___m_Lock_18;
	// VivoxVoiceManager VivoxVoiceManager::m_Instance
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* ___m_Instance_19;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// PhysicsHand[]
struct PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6  : public RuntimeArray
{
	ALIGN_FIELD (8) PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* m_Items[1];

	inline PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T VivoxUnity.QueueItemAddedEventArgs`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* QueueItemAddedEventArgs_1_get_Value_m139FA2D84818BAB6E3013D07AF409D656AD1A2E1_gshared_inline (QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962* __this, const RuntimeMethod* method) ;
// TK VivoxUnity.KeyEventArg`1<System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyEventArg_1_get_Key_m5A6721BC9397CFD07BBD5E71D877CF4B2208B895_gshared_inline (KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC* __this, const RuntimeMethod* method) ;
// TK VivoxUnity.ValueEventArg`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Key_m50FABB89833DC4941E8089DD37E5371F409A5C77_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) ;
// TV VivoxUnity.ValueEventArg`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Value_mD755E0B4406560927FCB160D66ABE2CAEB288F5D_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) ;
// System.String VivoxUnity.ValueEventArg`2<System.Object,System.Object>::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueEventArg_2_get_PropertyName_m8A88DE4C4BA8719F3F0B390A70FDB487D27A3FB5_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) ;

// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void PhysicsHand::PIDMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_PIDMovement_mB456FE520FC0952EEA3C0681217ED6A26A3AC2BF (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) ;
// System.Void PhysicsHand::PIDRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_PIDRotation_mF3DA827376AC97D082E7E328391D23DE3B6021E7 (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) ;
// System.Void PhysicsHand::HookesLaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_HookesLaw_mCCE9E3386FA687AC6BF6BC7133D01B7BDB50EB10 (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Single PhysicsHand::GetDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PhysicsHand_GetDrag_mAB59A6676CA6B2376C9C8764AC8DDACCA2B0FAA4 (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Rigidbody>(T&)
inline bool Component_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2C2A32AA4FD62D8B9BF5E40B7E2F3EF738C532A6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_onUnitSphere_mC73D40AE45EE139BB0F45F72442B9FFFEB3EED61 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::StartBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartBuffer_mD842DE7969229FED762ED0836A4830BD68D61129 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameManager/<StartBuffer>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10__ctor_mCB595E7CB80ABA045DC613F6408B152DB3A4BF79 (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// VivoxVoiceManager VivoxVoiceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject MainMenuOptions::get_m_optionsMenuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MainMenuOptions_get_m_optionsMenuPanel_m09AF82F5D0AF34964736D4662FF4E8A2035D4C7B (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// VivoxVoiceManager MainMenuOptions::get__vivoxVoiceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::AddAllTTSVoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_AddAllTTSVoices_m528C90C608185DA765FEC4555F5D882595D373EF (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___call0, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Func`2<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0C8B23ADA9BE8C9E7D2C61431B35D4B84DEFE28F (Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<VivoxUnity.ITTSVoice,UnityEngine.UI.Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mCD53A60D8A4F787A084D44330770702CA1EF987B (RuntimeObject* ___source0, Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void MainMenuOptions::SelectOptionFromSavedSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SelectOptionFromSavedSettings_m46382168A9C38E3156A06CF12BB6E850EC2FF46A (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.UI.Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8 (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767 (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* __this, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55*, Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean MainMenuOptions::get_isDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_get_isDirty_m1A3604F3BA080AAF5B0EC23BE2EB5D23B10CC6BA (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::ShowConfirmMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowConfirmMenu_m6E1DFD3EF2086F166A7DE1F233C8E18E3F7B2CC8 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, bool ___showMenu0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::ShowOptionsMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowOptionsMenu_m9A201B6CDBE41B7BC0E9450B16DEBBE2B95FB50C (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, bool ___showMenu0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<VivoxUnity.ITTSVoice,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6C3CCBA146B66D9CF90AA91673F10B351850BF32 (Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<VivoxUnity.ITTSVoice>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m1654D7764B99CE498AD51D600613923D438B323A (RuntimeObject* ___source0, Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::SaveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) ;
// System.Void MainMenuOptions::ttsDropdownValueChangedHandler(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ttsDropdownValueChangedHandler_m5209CAE0BCC12FB1AEEFA7BA2B533DFC39221875 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void MainMenuOptions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m935C7A131C5101C0CE2DA2056A13A37ED5AF7749 (U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m6321993E5D83F3A7E52ADC14C9276508D1129166 (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown/OptionData::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData_set_text_mA6022A455FC38025B0CA97B4E3629DA10FDE259E (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void PositionalVoice::SetupParticipantHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_SetupParticipantHandlers_m510C687639D4742B2DDE170AF492EC6AA1C0C23C (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// VivoxUnity.IParticipant PositionalVoice::get_Participant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PositionalVoice_get_Participant_m462D0F55BA9A33B2DBAC35A98A4B1C30B060A249 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82 (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA* __this, RuntimeObject* ___arg00, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA*, RuntimeObject*, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void PositionalVoice::set_isSpeaking(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PositionalVoice_set_isSpeaking_m4B2DA647915AEF2E6134D4CFAE7048C9C8BFDBF6_inline (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, bool ___value0, const RuntimeMethod* method) ;
// VivoxUnity.VxClient VivoxUnity.VxClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* VxClient_get_Instance_m1755598A9170C0E5C1CDFC852E74F72D0625DF9A (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void PositionalVoice::Update3dPosition(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Update3dPosition_mE7521DF9F212DE923BEC95EBB3664DDF574AE5E8 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___listener0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___speaker1, const RuntimeMethod* method) ;
// System.Void PositionalVoice/OnParticipantProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnParticipantProperty__ctor_mDE2D7CACB9443C530E5C2612C1E177D31D48D39C (OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<VivoxUnity.IParticipant,System.ComponentModel.PropertyChangedEventArgs>::.ctor()
inline void UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t9A6CFA8D04B9F63DA682F543EB532391E4F1AABA*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedInEvent_m6044CEDB43F4307A1B1F5347517D359C5CAC9DAE (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedOutEvent_mFE1D95D80D39419879FBCA469F5F923D824924C2 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) ;
// VivoxUnity.LoginState VivoxVoiceManager::get_LoginState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedInEvent_m9B3EFC525DE4B3D712373728AAEF381230CEA9C7 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedOutEvent_m2AFC45AD04360C25863812647DCECB0CEA64ADEE (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantAddedEvent_mA75BFAB812B1FB27403DFECA298852340DDCDEEE (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantAddedEvent_m500BDC8B95BB46783221FC5FB10E39176A19206B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::JoinChannel(System.String,VivoxUnity.ChannelType,VivoxVoiceManager/ChatCapability,System.Boolean,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_JoinChannel_m4F280BE051C67D62DDF48420C9723BE8BC3257B4 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___channelName0, int32_t ___channelType1, int32_t ___chatCapability2, bool ___switchTransmission3, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties4, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::DisconnectAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_DisconnectAllChannels_mCA9940C61EDB69601EC2498145A468F7547CCD4B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Logout_mF261BA7C59F983338BDDD178C3054C388AB3DC70 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) ;
// System.String VivoxUnity.ChannelId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___pointer1, const RuntimeMethod* method) ;
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxVoiceManager::get_ActiveChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<VivoxUnity.IChannelSession,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133 (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<VivoxUnity.IChannelSession>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62 (RuntimeObject* ___source0, Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Void LobbyScreenUI::JoinLobbyChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_JoinLobbyChannel_m4D0C4BEEF4FBD6A9E397756AA916AE94A2BD4C4C (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::LogoutOfVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_LogoutOfVivoxService_m7CD38D88C9C91A31EB6277BB9CA427632621AE12 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC919B10095C7D3C55FBAFE3F5F0E3239C5CB266 (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::get_onEndEdit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void LoginScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) ;
// System.String VivoxUnity.AccountId::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92 (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceName_m191E4B0E9579B2318378D25FA250E7AD4DAA542B (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Environment::get_MachineName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_MachineName_mCED88AE3AF98589BAD920D0CD6E44BC5F3E31EF4 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::LoginToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivox_m1CF8BEA5743E624B380C29A1CC7606245E27FDBC (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::Login(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Login_m53DEA79E943747428EEBD22E82EAC66DB085DF78 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___displayName0, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::HideLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_HideLoginUI_mDA5204184A251E8B2F6F11980FCAF0BEF5AF1740 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::ShowLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_ShowLoginUI_m171A5047ABE6813C90FABDBC840121AF891C57C7 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) ;
// System.Void LoginScreenUI::LoginToVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivoxService_m6D5C0BA4C02DFB97A4CB255EF59CE4124243D27A (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) ;
// VivoxUnity.IAudioDevices VivoxVoiceManager::get_AudioInputDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_AudioInputDevices_m5B807A4285A1303C3C30420A0430971EAF38360D (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) ;
// System.Void RosterItem::UpdateChatStateImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_UpdateChatStateImage_m9EBB344D2F96CE5701E1635D46338F61EC7B42FC (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, const RuntimeMethod* method) ;
// System.Boolean RosterItem::get_IsMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RosterItem_get_IsMuted_m91768DE7A6BFF3E975CD8D6374E8AC9D40929504 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void RosterItem::set_IsMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsMuted_mD4D43B118FE2FAD3820FDE357F96B4CCA721280D (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RosterItem::set_IsSpeaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsSpeaking_m9383CB3F27FAB9914CA0AC73F984BC8DDC520518 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void VivoxVoiceManager::add_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantRemovedEvent_mCBCBF1FB44335BDA56C33EF9DC1AC680B857F407 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) ;
// System.Void RosterManager::UpdateParticipantRoster(VivoxUnity.IParticipant,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_UpdateParticipantRoster_m97BF6F4A5D42F635A309705A37B15FAA53EABFAD (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, RuntimeObject* ___participant0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___isAddParticipant2, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantRemovedEvent_mB98F198869871340CC6ED5EE04E7497600831B7B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Values()
inline ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753* Dictionary_2_get_Values_m52C3FB212878F7D85DF576BE39F648C716AE9B60 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753* (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::GetEnumerator()
inline Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23 ValueCollection_GetEnumerator_mB0BE9F521CAD858D6A8D28D72D78B1167508DDC1 (ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23 (*) (ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Dispose()
inline void Enumerator_Dispose_mA09CDC0A2851BAA32AB66D9B0C6853ACE0C714AF (Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Current()
inline List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* Enumerator_get_Current_mEE276D47C3EC05841798A630D90132149CC22498_inline (Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23* __this, const RuntimeMethod* method)
{
	return ((  List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* (*) (Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RosterItem>::GetEnumerator()
inline Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91 List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368 (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91 (*) (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<RosterItem>::Dispose()
inline void Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD (Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<RosterItem>::get_Current()
inline RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_inline (Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91* __this, const RuntimeMethod* method)
{
	return ((  RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* (*) (Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<RosterItem>::MoveNext()
inline bool Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089 (Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RosterItem>::Clear()
inline void List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_inline (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::MoveNext()
inline bool Enumerator_MoveNext_m03186BDD1ED08A600C0CFFB405F900475980F18D (Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Clear()
inline void Dictionary_2_Clear_m0E859F4DF37A7F966E9D2CBC4A8E5639ADD5C1A2 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Item(TKey)
inline List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Remove(TKey)
inline bool Dictionary_2_Remove_m0AD2ADA9866535557DDC01FBA6C3E9A63DC7B535 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<RosterItem>::get_Count()
inline int32_t List_1_get_Count_m7C09D0F6D108B1644FCA8FCA1E8477308DEC0E8F_inline (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::get_Keys()
inline KeyCollection_t6F1D86EFF3D4A6D6BD469ABF3E0A143779AE2599* Dictionary_2_get_Keys_m4186B5E40E7CFCBAF81BE71C83580274D3A01313 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t6F1D86EFF3D4A6D6BD469ABF3E0A143779AE2599* (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Boolean System.Linq.Enumerable::Contains<VivoxUnity.ChannelId>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mC5FE026F362B1A81D7AAE1B8DEE61592DF5986D9 (RuntimeObject* ___source0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared)(___source0, ___value1, method);
}
// System.Void RosterManager::ClearChannelRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearChannelRoster_m19AB867648E3FBB58CFEFD169BE6D8DF0131BBD7 (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) ;
// System.Void RosterManager::ClearAllRosters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearAllRosters_m662A139F219022D374A982FDAEB31C3353FF0DFA (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, const RuntimeMethod* method) ;
// System.Void RosterManager/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m778E1458A0E63F92D6587E2264A0D828CFEAC710 (U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<RosterItem>()
inline RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* GameObject_GetComponent_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_mFD204C4A79BDCA431E976533D0363060E41BA7E6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m7DA4669EDBC7BCD235D880FCF93075B5424BECC3 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m57BC98B8CE45574EB6DE4526EA23489B30211999 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, List_1_tAE139C421211C38725830D12DDCEDA806DB9318C** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, List_1_tAE139C421211C38725830D12DDCEDA806DB9318C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RosterItem::SetupRosterItem(VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_SetupRosterItem_m04C0A038CAD9A1CDBBD92694DCEC186FBEF49107 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, RuntimeObject* ___participant0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<RosterItem>::Add(T)
inline void List_1_Add_mC9712D4976AE7CF982E325549A3C7A98592A0829_inline (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* __this, RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB41C7CB81C40B9C130DDFC40E0479A95D429D29F (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<RosterItem>::.ctor()
inline void List_1__ctor_m0DCD7906ECB4BD0F97BA2E727C52B7A2A984B94B (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m137258D9BB3E27EE9CF5B7DCE7DCE75EA63CD214 (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___key0, List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RosterManager::CleanRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_CleanRoster_mF84F01E19C1EC40AE63B19BC09092CF1D9824A8B (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) ;
// System.Void System.Func`2<RosterItem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m47BF6DB982CDEEE450FABF86843D01EADAF35420 (Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<RosterItem>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* Enumerable_FirstOrDefault_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_m6252497A5C37E0D60958C2EF07F79C1ECDA6B9BE (RuntimeObject* ___source0, Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2* ___predicate1, const RuntimeMethod* method)
{
	return ((  RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* (*) (RuntimeObject*, Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.List`1<RosterItem>::Remove(T)
inline bool List_1_Remove_m72BA5082A99AAEF3CB7E9D2A0B2C197D8A563F41 (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* __this, RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*, RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.String VivoxUnity.AccountId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<VivoxUnity.ChannelId,System.Collections.Generic.List`1<RosterItem>>::.ctor()
inline void Dictionary_2__ctor_m680675B469A226462A423341C7E59513CE74BBDF (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void RosterManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE862D63680349E212E37DD2F33D7013BA1AFC995 (U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void TextChatUI::ClearMessageObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearMessageObjectPool_mBCD0B6D80A6CDBA228DBC0FA0BED8D54CC89B780 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) ;
// System.Void TextChatUI::ClearOutTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearOutTextField_m909C38780BAB10A25BE351008364D45CAD4748FF (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler__ctor_mADA4DB349C64E9FF4FBD47E45FC3FD41CE41CBD9 (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnTextMessageLogReceivedEvent_mB8D5A4A7D5695AE05C0EE4668CAE1CFFB4A534EC (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void VivoxVoiceManager::remove_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnTextMessageLogReceivedEvent_m6B49FED4541B6B1DC2A09C30143FC85ECEF3D415 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.InputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void TextChatUI::SubmitTextToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_SubmitTextToVivox_m1A72C98FD5B63E7B46C30692E066E263A2F08201 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::SendTextMessage(System.String,VivoxUnity.ChannelId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_SendTextMessage_mD8BFEDDD0E2D0AC542C62E9930FB1C882D913519 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___messageToSend0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, String_t* ___applicationStanzaNamespace2, String_t* ___applicationStanzaBody3, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void VivoxUnity.TTSMessage::.ctor(System.String,VivoxUnity.TTSDestination)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* __this, String_t* ___text0, int32_t ___destination1, const RuntimeMethod* method) ;
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20__ctor_m098C10913DB994973460712F752C658DEC66C07F (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<VivoxUnity.IChannelSession>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mEE539C3B1B8D539AF945B63CBF3286B51040B3C4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TextChatUI::SendScrollRectToBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextChatUI_SendScrollRectToBottom_m3FCB0577B8EB4B7A2F03BBC5ECCA004109754E90 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.TTSMessage::Speak(VivoxUnity.ILoginSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSMessage_Speak_m92E6065934822C57329E81D4091624E79F24A5E6 (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* __this, RuntimeObject* ___userSpeaking0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TextChatUI::EnterKeyOnTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_EnterKeyOnTextField_mF14363D357629E2A4B8C4F2C13E407350FED1CD0 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) ;
// System.Void TextChatUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74F9659FF7D23F12454B4ED0C866A216F5AEC4A5 (U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mF9A94A2059CE512E485297DDBBA51C02B451E41F (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<VivoxVoiceManager>()
inline VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* GameObject_AddComponent_TisVivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_mF6DF04DB1B7CE5B7FC8BE0B29D0B1DF7D7E0B087 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// VivoxUnity.IAudioDevices VivoxUnity.Client::get_AudioInputDevices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioInputDevices_mEF09E43DA815E02795AD6E7A265CB6397DC6910A_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) ;
// VivoxUnity.IAudioDevices VivoxUnity.Client::get_AudioOutputDevices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioOutputDevices_m54D7860B92185C76D3E1E2A3EFAC8C8E955D3C52_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// VivoxUnity.ILoginSession VivoxUnity.Client::GetLoginSession(VivoxUnity.AccountId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* ___accountId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Uri VivoxVoiceManager::get__serverUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* VivoxVoiceManager_get__serverUri_m80C45EF3FF07AC74160272853BA129209FE6BCB7 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::Uninitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Uninitialize_mEC913D45A5B61D0929FECC5AF33E991514458DFB (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::Initialize(VivoxUnity.VivoxConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Initialize_m88F73EF0AE28DBFB33E413911CEC03ACA6F339AE (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47* ___config0, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Cleanup_m69C4C3A1466A15E8BF0AD46701167071727F6B15 (const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::VivoxLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.AccountId::.ctor(System.String,System.String,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountId__ctor_m26735BAFCF2E01C6B447898345BD28A45AD3FE44 (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, String_t* ___issuer0, String_t* ___name1, String_t* ___domain2, String_t* ___displayname3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___spokenLanguages4, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_inline (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/<>c__DisplayClass61_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0__ctor_mDEC37E47B2C3F5C2BCFEE5EC5E862D092A2537E8 (U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* __this, const RuntimeMethod* method) ;
// System.Void VivoxUnity.ChannelId::.ctor(System.String,System.String,System.String,VivoxUnity.ChannelType,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelId__ctor_m5F76E8868AF058C4223425B06A432D7E4F4A5A70 (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, String_t* ___issuer0, String_t* ___name1, String_t* ___domain2, int32_t ___type3, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties4, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<VivoxUnity.KeyEventArg`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107 (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067 (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474 (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void VivoxVoiceManager::VivoxLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLogError_mBA3C5A126CF342D9D9AA2CC7701731FA7604348C (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m32BBFA24296AAD092B635B56F895D11D6F87F06E (U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* __this, const RuntimeMethod* method) ;
// System.Boolean VivoxUnity.ChannelId::IsNullOrEmpty(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelId_IsNullOrEmpty_mC52B7E9EC29202072605B6A100F751200B4289A4 (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___id0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::ValidateArgs(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs0, const RuntimeMethod* method) ;
// T VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>::get_Value()
inline RuntimeObject* QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_inline (QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F*, const RuntimeMethod*))QueueItemAddedEventArgs_1_get_Value_m139FA2D84818BAB6E3013D07AF409D656AD1A2E1_gshared_inline)(__this, method);
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::Invoke(System.String,VivoxUnity.IChannelTextMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_inline (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::set_LoginState(VivoxUnity.LoginState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_LoginState_m758BF8328E2364F4643D5F73B1A0D16A8D171FA8_inline (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TK VivoxUnity.KeyEventArg`1<System.String>::get_Key()
inline String_t* KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_inline (KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6*, const RuntimeMethod*))KeyEventArg_1_get_Key_m5A6721BC9397CFD07BBD5E71D877CF4B2208B895_gshared_inline)(__this, method);
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_inline (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// TK VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>::get_Key()
inline String_t* ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_inline (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803*, const RuntimeMethod*))ValueEventArg_2_get_Key_m50FABB89833DC4941E8089DD37E5371F409A5C77_gshared_inline)(__this, method);
}
// TV VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>::get_Value()
inline RuntimeObject* ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803*, const RuntimeMethod*))ValueEventArg_2_get_Value_mD755E0B4406560927FCB160D66ABE2CAEB288F5D_gshared_inline)(__this, method);
}
// System.String VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>::get_PropertyName()
inline String_t* ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_inline (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803*, const RuntimeMethod*))ValueEventArg_2_get_PropertyName_m8A88DE4C4BA8719F3F0B390A70FDB487D27A3FB5_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_inline (ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_inline (ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5 (double ___value0, const RuntimeMethod* method) ;
// System.Void VivoxUnity.Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m09FE0564988C2D83C7861227814B1C409F2864DA (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCB5ED34D6420B2D938CF305283307F9FFBCFBD6F (U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Internal_ToAxisAngleRad_m15D0A132154BC073228AE48956EE43AD45ADF5F1 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, float* ___angle2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void CurrentTime::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentTime_LateUpdate_mABEA1290B6320BF21D292CFA371627C8EF6C68E7 (CurrentTime_t395AC26D7890816DC640C1C9DD3161C0F72473DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(local)
		bool L_0 = __this->___local_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// Clock.text = DateTime.Now.ToString(LocalTimeFormat);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___Clock_4;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_1 = L_3;
		String_t* L_4 = __this->___LocalTimeFormat_6;
		String_t* L_5;
		L_5 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		goto IL_004f;
	}

IL_002e:
	{
		// Clock.text = DateTime.UtcNow.ToString(ZuluTimeFormat);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___Clock_4;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD(NULL);
		V_1 = L_7;
		String_t* L_8 = __this->___ZuluTimeFormat_5;
		String_t* L_9;
		L_9 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), L_8, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_9);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void CurrentTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentTime__ctor_m4DBC61DB45BF9BC4778DFD2E1A2392DAB61B63C6 (CurrentTime_t395AC26D7890816DC640C1C9DD3161C0F72473DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral173C668D8C2E557FF1CE6EABBF44A4A11B021C26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA36ABA82D87141283BD158FECF8AC5B3CAF978E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private String ZuluTimeFormat="HHmmZ";
		__this->___ZuluTimeFormat_5 = _stringLiteral173C668D8C2E557FF1CE6EABBF44A4A11B021C26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ZuluTimeFormat_5), (void*)_stringLiteral173C668D8C2E557FF1CE6EABBF44A4A11B021C26);
		// [SerializeField] private String LocalTimeFormat="HHmmL";
		__this->___LocalTimeFormat_6 = _stringLiteralA36ABA82D87141283BD158FECF8AC5B3CAF978E7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LocalTimeFormat_6), (void*)_stringLiteralA36ABA82D87141283BD158FECF8AC5B3CAF978E7);
		// [SerializeField] private bool local=false;
		__this->___local_7 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FollowXZAxisPhysics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowXZAxisPhysics_Start_mB9CDBC62FF2F49BF41C8669CE8983ABE2C337A88 (FollowXZAxisPhysics_tE12ADD7B78F901E9532689407B5E0CB283DC22F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void FollowXZAxisPhysics::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowXZAxisPhysics_FixedUpdate_m9751D3E61B9AD9751675A9EE4198AD30F77E7112 (FollowXZAxisPhysics_tE12ADD7B78F901E9532689407B5E0CB283DC22F4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// pos.x=Follow.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Follow_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		(&V_0)->___x_2 = L_2;
		// pos.z=Follow.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___Follow_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		(&V_0)->___z_4 = L_5;
		// pos.y=transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		(&V_0)->___y_3 = L_8;
		// rb.MovePosition(pos);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_9);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void FollowXZAxisPhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowXZAxisPhysics__ctor_m55BB280700286E4D0EB6E820A11FC23C7AFA6149 (FollowXZAxisPhysics_tE12ADD7B78F901E9532689407B5E0CB283DC22F4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HeadFloorOffsetSetter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadFloorOffsetSetter_Start_m7AB5ABEFF539D2204D02081314B3440370DF5E1B (HeadFloorOffsetSetter_t104A3363B40385895A89FDEA367B16F24B6771F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(feet.Length==0) Destroy(this);
		PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6* L_0 = __this->___feet_4;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if(feet.Length==0) Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void HeadFloorOffsetSetter::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadFloorOffsetSetter_LateUpdate_m360418C8D8ADA68422232D6CD014A3774CE496AB (HeadFloorOffsetSetter_t104A3363B40385895A89FDEA367B16F24B6771F9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_6 = NULL;
	int32_t V_7 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_8 = NULL;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6* V_13 = NULL;
	int32_t V_14 = 0;
	PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* V_15 = NULL;
	{
		// Vector3 _offset=new Vector3(0f,floor.position.y-head.position.y,0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___floor_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___head_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), ((float)il2cpp_codegen_subtract(L_2, L_5)), (0.0f), NULL);
		// if(hands.Length>0)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___hands_5;
		NullCheck(L_6);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_6)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_017a;
		}
	}
	{
		// float lowest=500f;
		V_2 = (500.0f);
		// float hOffset=0f;
		V_3 = (0.0f);
		// float xC=0f;
		V_4 = (0.0f);
		// float zC=0f;
		V_5 = (0.0f);
		// foreach(Transform hand in hands)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_8 = __this->___hands_5;
		V_6 = L_8;
		V_7 = 0;
		goto IL_00fc;
	}

IL_0070:
	{
		// foreach(Transform hand in hands)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = V_6;
		int32_t L_10 = V_7;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_8 = L_12;
		// float check = hand.position.y-floor.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_8;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___floor_7;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		V_9 = ((float)il2cpp_codegen_subtract(L_15, L_18));
		// if(check<lowest)
		float L_19 = V_9;
		float L_20 = V_2;
		V_10 = (bool)((((float)L_19) < ((float)L_20))? 1 : 0);
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_00c5;
		}
	}
	{
		// lowest=check;
		float L_22 = V_9;
		V_2 = L_22;
		// hOffset=head.position.y-hand.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___head_6;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_8;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___y_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_25, L_28));
	}

IL_00c5:
	{
		// if(centerFeetUnderHead)
		bool L_29 = __this->___centerFeetUnderHead_8;
		V_11 = L_29;
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_00f5;
		}
	}
	{
		// xC+=hand.position.x;
		float L_31 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_8;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___x_2;
		V_4 = ((float)il2cpp_codegen_add(L_31, L_34));
		// zC+=hand.position.z;
		float L_35 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_8;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = L_37.___z_4;
		V_5 = ((float)il2cpp_codegen_add(L_35, L_38));
	}

IL_00f5:
	{
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00fc:
	{
		// foreach(Transform hand in hands)
		int32_t L_40 = V_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_41 = V_6;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0070;
		}
	}
	{
		// if(centerFeetUnderHead)
		bool L_42 = __this->___centerFeetUnderHead_8;
		V_12 = L_42;
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_016d;
		}
	}
	{
		// xC=xC/hands.Length;
		float L_44 = V_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_45 = __this->___hands_5;
		NullCheck(L_45);
		V_4 = ((float)(L_44/((float)((int32_t)(((RuntimeArray*)L_45)->max_length)))));
		// zC=zC/hands.Length;
		float L_46 = V_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_47 = __this->___hands_5;
		NullCheck(L_47);
		V_5 = ((float)(L_46/((float)((int32_t)(((RuntimeArray*)L_47)->max_length)))));
		// _offset.x-=(xC-head.position.x);
		float* L_48 = (&(&V_0)->___x_2);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = __this->___head_6;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		float L_54 = L_53.___x_2;
		*((float*)L_49) = (float)((float)il2cpp_codegen_subtract(L_50, ((float)il2cpp_codegen_subtract(L_51, L_54))));
		// _offset.z-=(zC-head.position.z);
		float* L_55 = (&(&V_0)->___z_4);
		float* L_56 = L_55;
		float L_57 = *((float*)L_56);
		float L_58 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = __this->___head_6;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61 = L_60.___z_4;
		*((float*)L_56) = (float)((float)il2cpp_codegen_subtract(L_57, ((float)il2cpp_codegen_subtract(L_58, L_61))));
	}

IL_016d:
	{
		// _offset.y+=hOffset;
		float* L_62 = (&(&V_0)->___y_3);
		float* L_63 = L_62;
		float L_64 = *((float*)L_63);
		float L_65 = V_3;
		*((float*)L_63) = (float)((float)il2cpp_codegen_add(L_64, L_65));
	}

IL_017a:
	{
		// foreach(PhysicsHand foot in feet)
		PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6* L_66 = __this->___feet_4;
		V_13 = L_66;
		V_14 = 0;
		goto IL_019f;
	}

IL_0188:
	{
		// foreach(PhysicsHand foot in feet)
		PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6* L_67 = V_13;
		int32_t L_68 = V_14;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_15 = L_70;
		// foot.offset=_offset;
		PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* L_71 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_0;
		NullCheck(L_71);
		L_71->___offset_10 = L_72;
		int32_t L_73 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_019f:
	{
		// foreach(PhysicsHand foot in feet)
		int32_t L_74 = V_14;
		PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6* L_75 = V_13;
		NullCheck(L_75);
		if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
		{
			goto IL_0188;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HeadFloorOffsetSetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadFloorOffsetSetter__ctor_m33C0237D053AB9BFCA61EC7BAD5FC59C71FCDC98 (HeadFloorOffsetSetter_t104A3363B40385895A89FDEA367B16F24B6771F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private PhysicsHand[] feet = new PhysicsHand[0];
		PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6* L_0 = (PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6*)(PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6*)SZArrayNew(PhysicsHandU5BU5D_t9554A870AFD7FF77706BD44F4812DEE2FBBBE6B6_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___feet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___feet_4), (void*)L_0);
		// [SerializeField] private Transform[] hands = new Transform[0];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___hands_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hands_5), (void*)L_1);
		// [SerializeField] private bool centerFeetUnderHead = true;
		__this->___centerFeetUnderHead_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PhysicsHand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_Start_m1BE648A4A7368A85CF696ED5155599E820FE348A (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_9;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// transform.rotation = target.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_9;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_5, NULL);
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rigidbody_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_15), (void*)L_6);
		// _rigidbody.maxAngularVelocity = float.PositiveInfinity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->____rigidbody_15;
		NullCheck(L_7);
		Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6(L_7, (std::numeric_limits<float>::infinity()), NULL);
		// _previousPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		__this->____previousPosition_16 = L_9;
		// }
		return;
	}
}
// System.Void PhysicsHand::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_FixedUpdate_mD3D85747BBCC3D735C308E0B96BAF815B6F4682C (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(trackPos) {PIDMovement();}
		bool L_0 = __this->___trackPos_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if(trackPos) {PIDMovement();}
		PhysicsHand_PIDMovement_mB456FE520FC0952EEA3C0681217ED6A26A3AC2BF(__this, NULL);
	}

IL_0014:
	{
		// if(trackRot) {PIDRotation();}
		bool L_2 = __this->___trackRot_12;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if(trackRot) {PIDRotation();}
		PhysicsHand_PIDRotation_mF3DA827376AC97D082E7E328391D23DE3B6021E7(__this, NULL);
	}

IL_0027:
	{
		// if(_isColliding) {HookesLaw();}
		bool L_4 = __this->____isColliding_17;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// if(_isColliding) {HookesLaw();}
		PhysicsHand_HookesLaw_mCCE9E3386FA687AC6BF6BC7133D01B7BDB50EB10(__this, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void PhysicsHand::PIDMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_PIDMovement_mB456FE520FC0952EEA3C0681217ED6A26A3AC2BF (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float dT = Time.fixedDeltaTime;
		float L_0;
		L_0 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		V_0 = L_0;
		// float kp = (6f * frequency) * (6f *frequency) * 0.25f;
		float L_1 = __this->___frequency_4;
		float L_2 = __this->___frequency_4;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.0f), L_1)), ((float)il2cpp_codegen_multiply((6.0f), L_2)))), (0.25f)));
		// float kd = 4.5f * frequency * damping;
		float L_3 = __this->___frequency_4;
		float L_4 = __this->___damping_5;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((4.5f), L_3)), L_4));
		// float g = 1/(1+kd * dT + kp * dT * dT);
		float L_5 = V_2;
		float L_6 = V_0;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_0;
		V_3 = ((float)((1.0f)/((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(L_5, L_6)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, L_8)), L_9))))));
		// float ksg = kp * g;
		float L_10 = V_1;
		float L_11 = V_3;
		V_4 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		// float kdg = (kd + kp * dT) * g;
		float L_12 = V_2;
		float L_13 = V_1;
		float L_14 = V_0;
		float L_15 = V_3;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)))), L_15));
		// Vector3 force = ((target.position + offset) - transform.position) * ksg + (playerRigidbody.velocity - _rigidbody.velocity) * kdg;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___target_9;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___offset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_19, L_21, NULL);
		float L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = __this->___playerRigidbody_8;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_25, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27 = __this->____rigidbody_15;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_26, L_28, NULL);
		float L_30 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_24, L_31, NULL);
		V_6 = L_32;
		// _rigidbody.AddForce(force,ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33 = __this->____rigidbody_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
		NullCheck(L_33);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_33, L_34, 5, NULL);
		// }
		return;
	}
}
// System.Void PhysicsHand::PIDRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_PIDRotation_mF3DA827376AC97D082E7E328391D23DE3B6021E7 (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	{
		// float dT = Time.fixedDeltaTime;
		float L_0;
		L_0 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		V_0 = L_0;
		// float kp = (6f * rotFrequency) * (6f * rotFrequency) * 0.25f;
		float L_1 = __this->___rotFrequency_6;
		float L_2 = __this->___rotFrequency_6;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.0f), L_1)), ((float)il2cpp_codegen_multiply((6.0f), L_2)))), (0.25f)));
		// float kd = 4.5f * rotFrequency * rotDamping;
		float L_3 = __this->___rotFrequency_6;
		float L_4 = __this->___rotDamping_7;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((4.5f), L_3)), L_4));
		// float g = 1 / (1 + kd * dT +kp * dT * dT);
		float L_5 = V_2;
		float L_6 = V_0;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_0;
		V_3 = ((float)((1.0f)/((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(L_5, L_6)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, L_8)), L_9))))));
		// float ksg = kp * g;
		float L_10 = V_1;
		float L_11 = V_3;
		V_4 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		// float kdg = (kd +kp * dT) * g;
		float L_12 = V_2;
		float L_13 = V_1;
		float L_14 = V_0;
		float L_15 = V_3;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)))), L_15));
		// Quaternion q = target.rotation * Quaternion.Inverse(transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___target_9;
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_17, L_20, NULL);
		V_6 = L_21;
		// if(q.w < 0)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_6;
		float L_23 = L_22.___w_3;
		V_10 = (bool)((((float)L_23) < ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_10;
		if (!L_24)
		{
			goto IL_00d3;
		}
	}
	{
		// q.x = -q.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_6;
		float L_26 = L_25.___x_0;
		(&V_6)->___x_0 = ((-L_26));
		// q.y = -q.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = V_6;
		float L_28 = L_27.___y_1;
		(&V_6)->___y_1 = ((-L_28));
		// q.z = -q.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_6;
		float L_30 = L_29.___z_2;
		(&V_6)->___z_2 = ((-L_30));
		// q.w = -q.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_6;
		float L_32 = L_31.___w_3;
		(&V_6)->___w_3 = ((-L_32));
	}

IL_00d3:
	{
		// q.ToAngleAxis(out float angle, out Vector3 axis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_6), (&V_7), (&V_8), NULL);
		// axis.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_8), NULL);
		// axis *= Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, (0.0174532924f), NULL);
		V_8 = L_34;
		// Vector3 torque = ksg * axis * angle + -_rigidbody.angularVelocity * kdg;
		float L_35 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_35, L_36, NULL);
		float L_38 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_37, L_38, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_40 = __this->____rigidbody_15;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_41, NULL);
		float L_43 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_42, L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_44, NULL);
		V_9 = L_45;
		// _rigidbody.AddTorque(torque,ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->____rigidbody_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_9;
		NullCheck(L_46);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_46, L_47, 5, NULL);
		// }
		return;
	}
}
// System.Void PhysicsHand::HookesLaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_HookesLaw_mCCE9E3386FA687AC6BF6BC7133D01B7BDB50EB10 (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Vector3 displacementFromResting = transform.position - (target.position+offset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_9;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_5, NULL);
		V_0 = L_6;
		// Vector3 force = displacementFromResting * climbForce;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = __this->___climbForce_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		V_1 = L_9;
		// float drag = GetDrag();
		float L_10;
		L_10 = PhysicsHand_GetDrag_mAB59A6676CA6B2376C9C8764AC8DDACCA2B0FAA4(__this, NULL);
		V_2 = L_10;
		// playerRigidbody.AddForce(force,ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___playerRigidbody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		NullCheck(L_11);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_11, L_12, 5, NULL);
		// playerRigidbody.AddForce(drag * -playerRigidbody.velocity * climbDrag, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___playerRigidbody_8;
		float L_14 = V_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___playerRigidbody_8;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_14, L_17, NULL);
		float L_19 = __this->___climbDrag_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_19, NULL);
		NullCheck(L_13);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_13, L_20, 5, NULL);
		// }
		return;
	}
}
// System.Single PhysicsHand::GetDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PhysicsHand_GetDrag_mAB59A6676CA6B2376C9C8764AC8DDACCA2B0FAA4 (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 handVelocity = (target.position - _previousPosition) / Time.fixedDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_9;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____previousPosition_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// float drag = 1 / handVelocity.magnitude + .01f;
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_1 = ((float)il2cpp_codegen_add(((float)((1.0f)/L_6)), (0.00999999978f)));
		// drag = Mathf.Clamp(drag,0.03f,1f);
		float L_7 = V_1;
		float L_8;
		L_8 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_7, (0.0299999993f), (1.0f), NULL);
		V_1 = L_8;
		// _previousPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		__this->____previousPosition_16 = L_10;
		// return drag;
		float L_11 = V_1;
		V_2 = L_11;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		float L_12 = V_2;
		return L_12;
	}
}
// System.Void PhysicsHand::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_OnCollisionEnter_mA50E9AF4CF7CAF2FFA4E82956F9D1BB82048B75B (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___cEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(transform.root == cEvent.collider.transform.root) { return; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_0, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___cEvent0;
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_5, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// if(transform.root == cEvent.collider.transform.root) { return; }
		goto IL_002f;
	}

IL_0028:
	{
		// _isColliding = true;
		__this->____isColliding_17 = (bool)1;
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PhysicsHand::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand_OnCollisionExit_m01ED376ACAC07517D741D86ABE234A9DE13EAA00 (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___cEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(transform.root == cEvent.collider.transform.root) { return; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_0, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___cEvent0;
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_5, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// if(transform.root == cEvent.collider.transform.root) { return; }
		goto IL_002f;
	}

IL_0028:
	{
		// _isColliding = false;
		__this->____isColliding_17 = (bool)0;
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PhysicsHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsHand__ctor_m0C34E77338F1A0C2A4E0E5F574EE38FE99F2404B (PhysicsHand_t3E668C3A676D3F4CFCE304384DF8F71BF97CC6DA* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float frequency = 50f;
		__this->___frequency_4 = (50.0f);
		// [SerializeField] float damping = 1f;
		__this->___damping_5 = (1.0f);
		// [SerializeField] float rotFrequency = 100f;
		__this->___rotFrequency_6 = (100.0f);
		// [SerializeField] float rotDamping = 0.9f;
		__this->___rotDamping_7 = (0.899999976f);
		// public Vector3 offset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___offset_10 = L_0;
		// [SerializeField] bool trackPos = true;
		__this->___trackPos_11 = (bool)1;
		// [SerializeField] bool trackRot = true;
		__this->___trackRot_12 = (bool)1;
		// [SerializeField] float climbForce = 1000f;
		__this->___climbForce_13 = (1000.0f);
		// [SerializeField] float climbDrag = 500f;
		__this->___climbDrag_14 = (500.0f);
		// bool _isColliding = false;
		__this->____isColliding_17 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RandomRotationOnStart::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomRotationOnStart_Update_m741F2F979AD4186214C8E2D8D826E15A3406E93A (RandomRotationOnStart_t31563B4B424FED7F559914472B4DD5B4F8A666B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2C2A32AA4FD62D8B9BF5E40B7E2F3EF738C532A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (TryGetComponent(out Rigidbody rotater))
		bool L_0;
		L_0 = Component_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2C2A32AA4FD62D8B9BF5E40B7E2F3EF738C532A6(__this, (&V_0), Component_TryGetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2C2A32AA4FD62D8B9BF5E40B7E2F3EF738C532A6_RuntimeMethod_var);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if(disableAngularDrag) {rotater.angularDrag=0f;}
		bool L_2 = __this->___disableAngularDrag_6;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// if(disableAngularDrag) {rotater.angularDrag=0f;}
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_0;
		NullCheck(L_4);
		Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C(L_4, (0.0f), NULL);
	}

IL_0026:
	{
		// rotater.angularVelocity = Random.onUnitSphere*Random.Range(minRotationSpeed,maxRotationSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Random_get_onUnitSphere_mC73D40AE45EE139BB0F45F72442B9FFFEB3EED61(NULL);
		float L_7 = __this->___minRotationSpeed_4;
		float L_8 = __this->___maxRotationSpeed_5;
		float L_9;
		L_9 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_9, NULL);
		NullCheck(L_5);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_5, L_10, NULL);
	}

IL_0049:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// }
		return;
	}
}
// System.Void RandomRotationOnStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomRotationOnStart__ctor_m5D1D6841E8EC27DFC6D7DAAC8FA8D9E1173246D5 (RandomRotationOnStart_t31563B4B424FED7F559914472B4DD5B4F8A666B7* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float minRotationSpeed=0.1f;
		__this->___minRotationSpeed_4 = (0.100000001f);
		// [SerializeField] private float maxRotationSpeed=0.3f;
		__this->___maxRotationSpeed_5 = (0.300000012f);
		// [SerializeField] private bool disableAngularDrag=true;
		__this->___disableAngularDrag_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(StartBuffer());
		RuntimeObject* L_0;
		L_0 = GameManager_StartBuffer_mD842DE7969229FED762ED0836A4830BD68D61129(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::StartBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartBuffer_mD842DE7969229FED762ED0836A4830BD68D61129 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* L_0 = (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F*)il2cpp_codegen_object_new(U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartBufferU3Ed__10__ctor_mCB595E7CB80ABA045DC613F6408B152DB3A4BF79(L_0, 0, NULL);
		U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::RemoveTank(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RemoveTank_m21FFFCAC1745BB4E22D35484C1524DBA228AF6CF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tank0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(tank);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___tank0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGameInputEnabled = false;
		__this->___IsGameInputEnabled_8 = (bool)0;
		// public int RedTeamScore = 0;
		__this->___RedTeamScore_9 = 0;
		// public int BlueTeamScore = 0;
		__this->___BlueTeamScore_10 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<StartBuffer>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10__ctor_mCB595E7CB80ABA045DC613F6408B152DB3A4BF79 (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<StartBuffer>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10_System_IDisposable_Dispose_m38DCEE672E7A7E2F4B633169B180FAB076B3BD34 (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartBuffer>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartBufferU3Ed__10_MoveNext_m7FB968A949C1236E812C4322EBEDB7F5ACA46499 (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// IsGameInputEnabled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		L_4->___IsGameInputEnabled_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<StartBuffer>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBufferU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDBD75565C37F38AB1E9162E135AC587C6F01D05F (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<StartBuffer>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBufferU3Ed__10_System_Collections_IEnumerator_Reset_m2DCEBA923633BFF2607E2F326ECA5F792518486A (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartBufferU3Ed__10_System_Collections_IEnumerator_Reset_m2DCEBA923633BFF2607E2F326ECA5F792518486A_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartBuffer>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBufferU3Ed__10_System_Collections_IEnumerator_get_Current_m3E2596D06164FA9E8B15021F9FD8922DD9616AF4 (U3CStartBufferU3Ed__10_t2B252C8987EA90E505528A46A816AB23C6F5DB4F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.GameObject MainMenuOptions::get_m_optionsMenuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MainMenuOptions_get_m_optionsMenuPanel_m09AF82F5D0AF34964736D4662FF4E8A2035D4C7B (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject m_optionsMenuPanel => gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
	}
}
// VivoxVoiceManager MainMenuOptions::get__vivoxVoiceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private VivoxVoiceManager _vivoxVoiceManager => VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0;
		L_0 = VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7(NULL);
		return L_0;
	}
}
// System.Void MainMenuOptions::ttsDropdownValueChangedHandler(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ttsDropdownValueChangedHandler_m5209CAE0BCC12FB1AEEFA7BA2B533DFC39221875 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A78E8CC1D676269140A4C0540A77A03A816A051);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("selected: " + target.value);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3A78E8CC1D676269140A4C0540A77A03A816A051, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// _selected_tts_voice_index = target.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = ___target0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C(L_4, NULL);
		__this->____selected_tts_voice_index_11 = L_5;
		// }
		return;
	}
}
// System.Void MainMenuOptions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_Awake_mB4DE65798ABD1E64E00CD713363FA84BF824688F (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D6FD59178F3010F1AB669541164B6651F97367);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_optionsMenuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = MainMenuOptions_get_m_optionsMenuPanel_m09AF82F5D0AF34964736D4662FF4E8A2035D4C7B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (!_vivoxVoiceManager)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_1;
		L_1 = MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogError("Unable to find VivoxVoiceManager object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralD3D6FD59178F3010F1AB669541164B6651F97367, NULL);
	}

IL_002d:
	{
		// AddAllTTSVoices();
		MainMenuOptions_AddAllTTSVoices_m528C90C608185DA765FEC4555F5D882595D373EF(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_Start_m7B6B2DA9FBE9DB6FE830012F3677DA785B34D6F6 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmNoAction_m81DDDF541046EC3561982DEBD9AD036AB41ADF74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmYesButtonAction_m6D83A6DF984BABEDEBD795BA99D23538E3B11BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_QuitButtonAction_m4512CD72E7B426931F931B133F3FC6DB3CB11F19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_U3CStartU3Eb__15_0_m7F4C5FE55FE04F3F7510CA2FF4F1D0ACA1CE957E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_EventSystem = EventSystem.current;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		__this->___m_EventSystem_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventSystem_10), (void*)L_0);
		// TTSVoiceDropdown.onValueChanged.AddListener(delegate {
		//     ttsDropdownValueChangedHandler(TTSVoiceDropdown);
		// });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_1);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_2;
		L_2 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_1, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_3 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_3, __this, (intptr_t)((void*)MainMenuOptions_U3CStartU3Eb__15_0_m7F4C5FE55FE04F3F7510CA2FF4F1D0ACA1CE957E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_2, L_3, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// SaveButton.onClick.AddListener(SaveAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___SaveButton_4;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// QuitButton.onClick.AddListener(QuitButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___QuitButton_5;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)MainMenuOptions_QuitButtonAction_m4512CD72E7B426931F931B133F3FC6DB3CB11F19_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// ConfirmYesButton.onClick.AddListener(ConfirmYesButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___ConfirmYesButton_8;
		NullCheck(L_10);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_11;
		L_11 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_10, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_12, __this, (intptr_t)((void*)MainMenuOptions_ConfirmYesButtonAction_m6D83A6DF984BABEDEBD795BA99D23538E3B11BCF_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_12, NULL);
		// ConfirmNoButton.onClick.AddListener(ConfirmNoAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___ConfirmNoButton_9;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)MainMenuOptions_ConfirmNoAction_m81DDDF541046EC3561982DEBD9AD036AB41ADF74_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_OnDestroy_m19A4D61A32E02E1AD388F867287E14229D3CD106 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmNoAction_m81DDDF541046EC3561982DEBD9AD036AB41ADF74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_ConfirmYesButtonAction_m6D83A6DF984BABEDEBD795BA99D23538E3B11BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_QuitButtonAction_m4512CD72E7B426931F931B133F3FC6DB3CB11F19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TTSVoiceDropdown.onValueChanged.RemoveAllListeners();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_0);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_1;
		L_1 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_0, NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
		// SaveButton.onClick.RemoveListener(SaveAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___SaveButton_4;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
		// QuitButton.onClick.RemoveListener(QuitButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___QuitButton_5;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)MainMenuOptions_QuitButtonAction_m4512CD72E7B426931F931B133F3FC6DB3CB11F19_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_6, L_7, NULL);
		// ConfirmYesButton.onClick.RemoveListener(ConfirmYesButtonAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___ConfirmYesButton_8;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)MainMenuOptions_ConfirmYesButtonAction_m6D83A6DF984BABEDEBD795BA99D23538E3B11BCF_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_9, L_10, NULL);
		// ConfirmNoButton.onClick.RemoveListener(ConfirmNoAction);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___ConfirmNoButton_9;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)MainMenuOptions_ConfirmNoAction_m81DDDF541046EC3561982DEBD9AD036AB41ADF74_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_Update_mF858AA394BA32709DB1134A47E91928174A1C32A (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean MainMenuOptions::get_isDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_get_isDirty_m1A3604F3BA080AAF5B0EC23BE2EB5D23B10CC6BA (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return TTSVoiceDropdown.options[_selected_tts_voice_index].text != PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_0);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_1;
		L_1 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_0, NULL);
		int32_t L_2 = __this->____selected_tts_voice_index_11;
		NullCheck(L_1);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_3;
		L_3 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_1, L_2, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_3, NULL);
		String_t* L_5 = __this->___tts_voice_setting_12;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_6;
		L_6 = MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___LoginSession_21;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.ITTSVoice VivoxUnity.ITextToSpeech::get_CurrentVoice() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_9);
		String_t* L_11;
		L_11 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(L_5, L_10, NULL);
		bool L_12;
		L_12 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_4, L_11, NULL);
		V_0 = L_12;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void MainMenuOptions::AddAllTTSVoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_AddAllTTSVoices_m528C90C608185DA765FEC4555F5D882595D373EF (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mCD53A60D8A4F787A084D44330770702CA1EF987B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m3D2254028A15C7833B4342A587710CE39FF791C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* V_0 = NULL;
	Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* G_B2_0 = NULL;
	ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* G_B2_1 = NULL;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* G_B2_2 = NULL;
	Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* G_B1_0 = NULL;
	ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* G_B1_1 = NULL;
	List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* G_B1_2 = NULL;
	{
		// var all_voices = _vivoxVoiceManager.LoginSession.TTS.AvailableVoices;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0;
		L_0 = MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___LoginSession_21;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* L_3;
		L_3 = InterfaceFuncInvoker0< ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* >::Invoke(0 /* System.Collections.ObjectModel.ReadOnlyCollection`1<VivoxUnity.ITTSVoice> VivoxUnity.ITextToSpeech::get_AvailableVoices() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		// TTSVoiceDropdown.options.Clear();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_4);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_5;
		L_5 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_4, NULL);
		NullCheck(L_5);
		List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_inline(L_5, List_1_Clear_mB0D3FB298F277A44C412CEDCD92122D6895D381D_RuntimeMethod_var);
		// TTSVoiceDropdown.options.AddRange(all_voices.Select(
		//     // Fill the dropdown menu options with all voices
		//     v => new Dropdown.OptionData() { text = v.Name })
		//     );
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_6);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_7;
		L_7 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_6, NULL);
		ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var);
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_9 = ((U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1;
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = L_7;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = L_7;
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var);
		U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174* L_11 = ((U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_12 = (Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6*)il2cpp_codegen_object_new(Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m0C8B23ADA9BE8C9E7D2C61431B35D4B84DEFE28F(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m3D2254028A15C7833B4342A587710CE39FF791C9_RuntimeMethod_var), NULL);
		Func_2_tE758A748C4990A1F37388D61E458026AE7E976D6* L_13 = L_12;
		((U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1), (void*)L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0053:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mCD53A60D8A4F787A084D44330770702CA1EF987B(G_B2_1, G_B2_0, Enumerable_Select_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_TisOptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_mCD53A60D8A4F787A084D44330770702CA1EF987B_RuntimeMethod_var);
		NullCheck(G_B2_2);
		List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6(G_B2_2, L_14, List_1_AddRange_m21EE6AAB123A8ADEF7496275D1648343638D5CC6_RuntimeMethod_var);
		// SelectOptionFromSavedSettings();
		MainMenuOptions_SelectOptionFromSavedSettings_m46382168A9C38E3156A06CF12BB6E850EC2FF46A(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::SelectOptionFromSavedSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SelectOptionFromSavedSettings_m46382168A9C38E3156A06CF12BB6E850EC2FF46A (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_mB9F560AF77D26059CD82762A42D8B0E764D9FA06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var voiceToSelect = TTSVoiceDropdown.options.FindIndex((i) => { return i.text.Equals(PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name)); });
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_0);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_1;
		L_1 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_0, NULL);
		Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A* L_2 = (Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A*)il2cpp_codegen_object_new(Predicate_1_t4EA8AFB1F51920E1B2ECC4B92AF7BC6FB66E294A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Predicate_1__ctor_m7A84E959305036F80FCD7B6544C987F1B27784E8(L_2, __this, (intptr_t)((void*)MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_mB9F560AF77D26059CD82762A42D8B0E764D9FA06_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767(L_1, L_2, List_1_FindIndex_m91890E1010A118DC3987ABC87DD1E2A6B18FC767_RuntimeMethod_var);
		V_0 = L_3;
		// TTSVoiceDropdown.value = voiceToSelect;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___TTSVoiceDropdown_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_4, L_5, NULL);
		// _selected_tts_voice_index = voiceToSelect;
		int32_t L_6 = V_0;
		__this->____selected_tts_voice_index_11 = L_6;
		// }
		return;
	}
}
// System.Void MainMenuOptions::ShowOptionsMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowOptionsMenu_m9A201B6CDBE41B7BC0E9450B16DEBBE2B95FB50C (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, bool ___showMenu0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (showMenu == false && isDirty)
		bool L_0 = ___showMenu0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		bool L_1;
		L_1 = MainMenuOptions_get_isDirty_m1A3604F3BA080AAF5B0EC23BE2EB5D23B10CC6BA(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// ShowConfirmMenu(true);
		MainMenuOptions_ShowConfirmMenu_m6E1DFD3EF2086F166A7DE1F233C8E18E3F7B2CC8(__this, (bool)1, NULL);
		goto IL_0034;
	}

IL_001d:
	{
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m6E1DFD3EF2086F166A7DE1F233C8E18E3F7B2CC8(__this, (bool)0, NULL);
		// m_optionsMenuPanel.SetActive(showMenu);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = MainMenuOptions_get_m_optionsMenuPanel_m09AF82F5D0AF34964736D4662FF4E8A2035D4C7B(__this, NULL);
		bool L_4 = ___showMenu0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void MainMenuOptions::ShowConfirmMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ShowConfirmMenu_m6E1DFD3EF2086F166A7DE1F233C8E18E3F7B2CC8 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, bool ___showMenu0, const RuntimeMethod* method) 
{
	{
		// ConfirmationMenu.SetActive(showMenu);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ConfirmationMenu_7;
		bool L_1 = ___showMenu0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::MenuInputAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_MenuInputAction_m1ACF5BFAB52300AB9E125A686D8B20E66D5EBE37 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (m_optionsMenuPanel.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = MainMenuOptions_get_m_optionsMenuPanel_m09AF82F5D0AF34964736D4662FF4E8A2035D4C7B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m9A201B6CDBE41B7BC0E9450B16DEBBE2B95FB50C(__this, (bool)0, NULL);
		goto IL_0026;
	}

IL_001c:
	{
		// ShowOptionsMenu(true);
		MainMenuOptions_ShowOptionsMenu_m9A201B6CDBE41B7BC0E9450B16DEBBE2B95FB50C(__this, (bool)1, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void MainMenuOptions::SaveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m1654D7764B99CE498AD51D600613923D438B323A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuOptions_U3CSaveActionU3Eb__25_0_mF987D0307A6861DA762A1F47F5B67EABE4B0F510_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(tts_voice_setting, TTSVoiceDropdown.options[_selected_tts_voice_index].text);
		String_t* L_0 = __this->___tts_voice_setting_12;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_1);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_2;
		L_2 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_1, NULL);
		int32_t L_3 = __this->____selected_tts_voice_index_11;
		NullCheck(L_2);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_4;
		L_4 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_2, L_3, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_4, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_0, L_5, NULL);
		// _vivoxVoiceManager.LoginSession.TTS.CurrentVoice = _vivoxVoiceManager.LoginSession.TTS.AvailableVoices.FirstOrDefault(v => v.Name == TTSVoiceDropdown.options[_selected_tts_voice_index].text);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_6;
		L_6 = MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___LoginSession_21;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_7);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_9;
		L_9 = MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___LoginSession_21;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* L_12;
		L_12 = InterfaceFuncInvoker0< ReadOnlyCollection_1_tCB60FFE97C5A31ACFB206F4A992042D29B5BF63E* >::Invoke(0 /* System.Collections.ObjectModel.ReadOnlyCollection`1<VivoxUnity.ITTSVoice> VivoxUnity.ITextToSpeech::get_AvailableVoices() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_11);
		Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA* L_13 = (Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA*)il2cpp_codegen_object_new(Func_2_t9C51CBEDA8773F9BF4AEDEBFC8FC8B6792EBE7FA_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m6C3CCBA146B66D9CF90AA91673F10B351850BF32(L_13, __this, (intptr_t)((void*)MainMenuOptions_U3CSaveActionU3Eb__25_0_mF987D0307A6861DA762A1F47F5B67EABE4B0F510_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m1654D7764B99CE498AD51D600613923D438B323A(L_12, L_13, Enumerable_FirstOrDefault_TisITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_m1654D7764B99CE498AD51D600613923D438B323A_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void VivoxUnity.ITextToSpeech::set_CurrentVoice(VivoxUnity.ITTSVoice) */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_8, L_14);
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m9A201B6CDBE41B7BC0E9450B16DEBBE2B95FB50C(__this, (bool)0, NULL);
		// m_EventSystem.SetSelectedGameObject(null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_15 = __this->___m_EventSystem_10;
		NullCheck(L_15);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_15, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::QuitButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_QuitButtonAction_m4512CD72E7B426931F931B133F3FC6DB3CB11F19 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	{
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m9A201B6CDBE41B7BC0E9450B16DEBBE2B95FB50C(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::ConfirmYesButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ConfirmYesButtonAction_m6D83A6DF984BABEDEBD795BA99D23538E3B11BCF (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	{
		// SaveAction();
		MainMenuOptions_SaveAction_m8714D346B4688B309BA1274A489ACF8CD8790615(__this, NULL);
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m6E1DFD3EF2086F166A7DE1F233C8E18E3F7B2CC8(__this, (bool)0, NULL);
		// ShowOptionsMenu(false);
		MainMenuOptions_ShowOptionsMenu_m9A201B6CDBE41B7BC0E9450B16DEBBE2B95FB50C(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::ConfirmNoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_ConfirmNoAction_m81DDDF541046EC3561982DEBD9AD036AB41ADF74 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	{
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m6E1DFD3EF2086F166A7DE1F233C8E18E3F7B2CC8(__this, (bool)0, NULL);
		// ShowConfirmMenu(false);
		MainMenuOptions_ShowConfirmMenu_m6E1DFD3EF2086F166A7DE1F233C8E18E3F7B2CC8(__this, (bool)0, NULL);
		// m_optionsMenuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = MainMenuOptions_get_m_optionsMenuPanel_m09AF82F5D0AF34964736D4662FF4E8A2035D4C7B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// SelectOptionFromSavedSettings();
		MainMenuOptions_SelectOptionFromSavedSettings_m46382168A9C38E3156A06CF12BB6E850EC2FF46A(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenuOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions__ctor_mF821FBCF4FBBDCC3B0766F376A586556E9779498 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string tts_voice_setting = "VivoxTTSVoice";
		__this->___tts_voice_setting_12 = _stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tts_voice_setting_12), (void*)_stringLiteral1960C5DA4F11A477B1648C5AE8A9A6CD7D3AA277);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MainMenuOptions::<Start>b__15_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuOptions_U3CStartU3Eb__15_0_m7F4C5FE55FE04F3F7510CA2FF4F1D0ACA1CE957E (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// ttsDropdownValueChangedHandler(TTSVoiceDropdown);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___TTSVoiceDropdown_6;
		MainMenuOptions_ttsDropdownValueChangedHandler_m5209CAE0BCC12FB1AEEFA7BA2B533DFC39221875(__this, L_0, NULL);
		// });
		return;
	}
}
// System.Boolean MainMenuOptions::<SelectOptionFromSavedSettings>b__21_0(UnityEngine.UI.Dropdown/OptionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_U3CSelectOptionFromSavedSettingsU3Eb__21_0_mB9F560AF77D26059CD82762A42D8B0E764D9FA06 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var voiceToSelect = TTSVoiceDropdown.options.FindIndex((i) => { return i.text.Equals(PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name)); });
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_0 = ___i0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_0, NULL);
		String_t* L_2 = __this->___tts_voice_setting_12;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_3;
		L_3 = MainMenuOptions_get__vivoxVoiceManager_m2DA95F872AAB36426341A3A0C2900A26A95BA808(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___LoginSession_21;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.ITTSVoice VivoxUnity.ITextToSpeech::get_CurrentVoice() */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(L_2, L_7, NULL);
		NullCheck(L_1);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_8, NULL);
		V_0 = L_9;
		goto IL_0034;
	}

IL_0034:
	{
		// var voiceToSelect = TTSVoiceDropdown.options.FindIndex((i) => { return i.text.Equals(PlayerPrefs.GetString(tts_voice_setting, _vivoxVoiceManager.LoginSession.TTS.CurrentVoice.Name)); });
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean MainMenuOptions::<SaveAction>b__25_0(VivoxUnity.ITTSVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainMenuOptions_U3CSaveActionU3Eb__25_0_mF987D0307A6861DA762A1F47F5B67EABE4B0F510 (MainMenuOptions_t45A0F9E8E924E1F346BCE4AFA446AD5596BE74B9* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.LoginSession.TTS.CurrentVoice = _vivoxVoiceManager.LoginSession.TTS.AvailableVoices.FirstOrDefault(v => v.Name == TTSVoiceDropdown.options[_selected_tts_voice_index].text);
		RuntimeObject* L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_0);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___TTSVoiceDropdown_6;
		NullCheck(L_2);
		List_1_tCEC1993B65ACD0529D8C0BB5006274E22D7D8A55* L_3;
		L_3 = Dropdown_get_options_m30F757DBA22980CB77DADB8315207D5B87307816(L_2, NULL);
		int32_t L_4 = __this->____selected_tts_voice_index_11;
		NullCheck(L_3);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_5;
		L_5 = List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366(L_3, L_4, List_1_get_Item_m6248FAA3EA9E9148D0E784C78FA4B1F5FFDD6366_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = OptionData_get_text_m147C3EFE4B7D157914D2C6CF653B32CE2D987AF1(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_6, NULL);
		return L_7;
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
// System.Void MainMenuOptions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5E85EEA223F24130027D527F21BD3E52759AFBF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174* L_0 = (U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174*)il2cpp_codegen_object_new(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m935C7A131C5101C0CE2DA2056A13A37ED5AF7749(L_0, NULL);
		((U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void MainMenuOptions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m935C7A131C5101C0CE2DA2056A13A37ED5AF7749 (U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.UI.Dropdown/OptionData MainMenuOptions/<>c::<AddAllTTSVoices>b__20_0(VivoxUnity.ITTSVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* U3CU3Ec_U3CAddAllTTSVoicesU3Eb__20_0_m3D2254028A15C7833B4342A587710CE39FF791C9 (U3CU3Ec_t9BE82F6976B7608C2A00912E50AD823CDD76C174* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// v => new Dropdown.OptionData() { text = v.Name })
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_0 = (OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F*)il2cpp_codegen_object_new(OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OptionData__ctor_m6321993E5D83F3A7E52ADC14C9276508D1129166(L_0, NULL);
		OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* L_1 = L_0;
		RuntimeObject* L_2 = ___v0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String VivoxUnity.ITTSVoice::get_Name() */, ITTSVoice_t2E25F330097D0CAE10A0D5DA25C356184C6F5116_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		OptionData_set_text_mA6022A455FC38025B0CA97B4E3629DA10FDE259E(L_1, L_3, NULL);
		return L_1;
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
// System.Void UIDirectionControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Start_m65D2950489864CF8340EFB1A8F2139EFD29A900B (UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIDirectionControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl_Update_m63D25FB201A8A1F266C566D696DA1450610C1E9F (UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.transform.LookAt(Camera.main.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_1);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void UIDirectionControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDirectionControl__ctor_m6FE5D7698E4081816839646A8889BA7C6A5D02AC (UIDirectionControl_t775508F79221E6B213D975A199282C696DBD9450* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean ButtonState::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonState_get_isPressed_mE9202CE2F097DDBEC808875D6BBDDC4F1803D59B (ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _isPressed;
		bool L_0 = __this->____isPressed_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ButtonState::get_isDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonState_get_isDown_m9806745B338ED1A484D6A7F2967C161E914A8554 (ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// var currentIsDown = _isDown;
		bool L_0 = __this->____isDown_5;
		V_0 = L_0;
		// _isDown = false;
		__this->____isDown_5 = (bool)0;
		// return currentIsDown;
		bool L_1 = V_0;
		V_1 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Boolean ButtonState::get_isUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonState_get_isUp_mB0FA3652A0FD824C0E9CC2A478A51F121EE2F1A6 (ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// var currentIsUp = _isUp;
		bool L_0 = __this->____isUp_6;
		V_0 = L_0;
		// _isUp = false;
		__this->____isUp_6 = (bool)0;
		// return currentIsUp;
		bool L_1 = V_0;
		V_1 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void ButtonState::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState_OnPointerDown_mBE137A93B711D947CAF9DE3BB3F1D3BBFAAC0903 (ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _isDown = true;
		__this->____isDown_5 = (bool)1;
		// _isPressed = true;
		__this->____isPressed_4 = (bool)1;
		// _isUp = false;
		__this->____isUp_6 = (bool)0;
		// }
		return;
	}
}
// System.Void ButtonState::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState_OnPointerUp_m7C14585BB7E421E543A08D8AE4A6AD4743B5D596 (ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _isDown = false;
		__this->____isDown_5 = (bool)0;
		// _isPressed = false;
		__this->____isPressed_4 = (bool)0;
		// _isUp = true;
		__this->____isUp_6 = (bool)1;
		// }
		return;
	}
}
// System.Void ButtonState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState__ctor_m5F1584B47F9A1831DFAE47AB1E59AE83DFB9221F (ButtonState_t9E64D4E376BF9D025B6C26739A6A183EDD164754* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean PositionalVoice::get_isSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionalVoice_get_isSpeaking_m367AAC6896890DB6D227E9AAD432C942781AC159 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) 
{
	{
		// public bool isSpeaking { get; private set; }
		bool L_0 = __this->___U3CisSpeakingU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void PositionalVoice::set_isSpeaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_set_isSpeaking_m4B2DA647915AEF2E6134D4CFAE7048C9C8BFDBF6 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isSpeaking { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisSpeakingU3Ek__BackingField_6 = L_0;
		return;
	}
}
// VivoxUnity.Channel3DProperties PositionalVoice::get_ChannelProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* PositionalVoice_get_ChannelProperties_mE500F976B589F2153A76FFA0A2B6EE3EBA7C2C5A (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) 
{
	{
		// public Channel3DProperties ChannelProperties { get; private set; }
		Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* L_0 = __this->___U3CChannelPropertiesU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void PositionalVoice::set_ChannelProperties(VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_set_ChannelProperties_mCA97D33C3A9CAE4692AA2C9AAF564E93BB2C75B1 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___value0, const RuntimeMethod* method) 
{
	{
		// public Channel3DProperties ChannelProperties { get; private set; }
		Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* L_0 = ___value0;
		__this->___U3CChannelPropertiesU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChannelPropertiesU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// VivoxUnity.IParticipant PositionalVoice::get_Participant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PositionalVoice_get_Participant_m462D0F55BA9A33B2DBAC35A98A4B1C30B060A249 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return _participant;
		RuntimeObject* L_0 = __this->____participant_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void PositionalVoice::set_Participant(VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_set_Participant_m3CB3424ABFE450696770505B5D8149088021567C (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _participant = value;
		RuntimeObject* L_2 = ___value0;
		__this->____participant_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____participant_10), (void*)L_2);
		// SetupParticipantHandlers();
		PositionalVoice_SetupParticipantHandlers_m510C687639D4742B2DDE170AF492EC6AA1C0C23C(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::SetupParticipantHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_SetupParticipantHandlers_m510C687639D4742B2DDE170AF492EC6AA1C0C23C (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionalVoice_Participant_PropertyChanged_mC741AF7AC8B5D93FB9564C284203567D6837438A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* G_B2_0 = NULL;
	PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* G_B3_1 = NULL;
	{
		// PositionalGameObject = PositionalGameObject != null ? PositionalGameObject : gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PositionalGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0018:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___PositionalGameObject_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___PositionalGameObject_5 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___PositionalGameObject_5), (void*)G_B3_0);
		// ChannelSession = Participant.ParentChannelSession;
		RuntimeObject* L_4;
		L_4 = PositionalVoice_get_Participant_m462D0F55BA9A33B2DBAC35A98A4B1C30B060A249(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_4);
		__this->___ChannelSession_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ChannelSession_8), (void*)L_5);
		// Participant.PropertyChanged -= Participant_PropertyChanged;
		RuntimeObject* L_6;
		L_6 = PositionalVoice_get_Participant_m462D0F55BA9A33B2DBAC35A98A4B1C30B060A249(__this, NULL);
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_7 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_7, __this, (intptr_t)((void*)PositionalVoice_Participant_PropertyChanged_mC741AF7AC8B5D93FB9564C284203567D6837438A_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_6, L_7);
		// Participant.PropertyChanged += Participant_PropertyChanged;
		RuntimeObject* L_8;
		L_8 = PositionalVoice_get_Participant_m462D0F55BA9A33B2DBAC35A98A4B1C30B060A249(__this, NULL);
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_9 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_9, __this, (intptr_t)((void*)PositionalVoice_Participant_PropertyChanged_mC741AF7AC8B5D93FB9564C284203567D6837438A_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void PositionalVoice::Participant_PropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Participant_PropertyChanged_mC741AF7AC8B5D93FB9564C284203567D6837438A (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6020785A926649CF038C7965768B025B64B74D66);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// IParticipant participant = (IParticipant)sender;
		RuntimeObject* L_0 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var));
		// m_ParticipantPropertyEvent.Invoke(participant, e);
		OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6* L_1 = __this->___m_ParticipantPropertyEvent_4;
		RuntimeObject* L_2 = V_0;
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_3 = ___e1;
		NullCheck(L_1);
		UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F(L_1, L_2, L_3, UnityEvent_2_Invoke_m5166109858D98DAD662792EB89DFD5ECCA648D3F_RuntimeMethod_var);
		// switch (e.PropertyName)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_4);
		V_2 = L_5;
		String_t* L_6 = V_2;
		V_1 = L_6;
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral6020785A926649CF038C7965768B025B64B74D66, NULL);
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003d;
	}

IL_002e:
	{
		// isSpeaking = participant.SpeechDetected;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_9);
		PositionalVoice_set_isSpeaking_m4B2DA647915AEF2E6134D4CFAE7048C9C8BFDBF6_inline(__this, L_10, NULL);
		// break;
		goto IL_003f;
	}

IL_003d:
	{
		// break;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::Update3dPosition(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Update3dPosition_mE7521DF9F212DE923BEC95EBB3664DDF574AE5E8 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___listener0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___speaker1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (listener == null || speaker == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___listener0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___speaker1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// VxClient.Instance.vivoxDebug.DebugMessage("Cannot set 3D position: Either speaker or listener is null", vx_log_level.log_error);
		VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* L_5;
		L_5 = VxClient_get_Instance_m1755598A9170C0E5C1CDFC852E74F72D0625DF9A(NULL);
		NullCheck(L_5);
		VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* L_6 = L_5->___vivoxDebug_5;
		NullCheck(L_6);
		VirtualActionInvoker2< RuntimeObject*, int32_t >::Invoke(4 /* System.Void VivoxUnity.VivoxDebug::DebugMessage(System.Object,vx_log_level) */, L_6, _stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3, 0);
		// return;
		goto IL_008e;
	}

IL_0031:
	{
		// if (ChannelSession != null && ChannelSession.AudioState == ConnectionState.Connected)
		RuntimeObject* L_7 = __this->___ChannelSession_8;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_8 = __this->___ChannelSession_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_8);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B8_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B8_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// ChannelSession.Set3DPosition(speaker.position, listener.position, listener.forward, listener.up);
		RuntimeObject* L_11 = __this->___ChannelSession_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___speaker1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___listener0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___listener0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___listener0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(28 /* System.Void VivoxUnity.IChannelSession::Set3DPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_11, L_13, L_15, L_17, L_19);
		goto IL_008e;
	}

IL_0076:
	{
		// VxClient.Instance.vivoxDebug.DebugMessage("Cannot set 3D position: Either speaker or listener is null", vx_log_level.log_info);
		VxClient_tA8FAD4D226666F2E473D55D0081E97997CD59583* L_20;
		L_20 = VxClient_get_Instance_m1755598A9170C0E5C1CDFC852E74F72D0625DF9A(NULL);
		NullCheck(L_20);
		VivoxDebug_t97638853E37CBDBB4589BD2047927DF5FA07EE3D* L_21 = L_20->___vivoxDebug_5;
		NullCheck(L_21);
		VirtualActionInvoker2< RuntimeObject*, int32_t >::Invoke(4 /* System.Void VivoxUnity.VivoxDebug::DebugMessage(System.Object,vx_log_level) */, L_21, _stringLiteralCC129F07568E30D7C8F3475EF183E33F17BAEBF3, 2);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_Update_m25B061687A83DA299155F242DB33DA1AE5BCF201 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// if (PositionalGameObject && PositionalGameObject.transform && ChannelSession != null && ChannelSession.AudioState == ConnectionState.Connected)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PositionalGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PositionalGameObject_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_5 = __this->___ChannelSession_8;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_6 = __this->___ChannelSession_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_6);
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 0;
	}

IL_0039:
	{
		V_0 = (bool)G_B5_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// Update3dPosition(PositionalGameObject.transform, PositionalGameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___PositionalGameObject_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___PositionalGameObject_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		PositionalVoice_Update3dPosition_mE7521DF9F212DE923BEC95EBB3664DDF574AE5E8(__this, L_10, L_12, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void PositionalVoice::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice_OnDestroy_mFA730DA41BEC5030603CD9120D6932BBA7D4382B (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) 
{
	{
		// m_ParticipantPropertyEvent.RemoveAllListeners();
		OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6* L_0 = __this->___m_ParticipantPropertyEvent_4;
		NullCheck(L_0);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_0, NULL);
		// }
		return;
	}
}
// System.Void PositionalVoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionalVoice__ctor_m8CF596E2E40B453F7EA034396FE1C9513E79DE13 (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OnParticipantProperty m_ParticipantPropertyEvent = new OnParticipantProperty();
		OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6* L_0 = (OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6*)il2cpp_codegen_object_new(OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnParticipantProperty__ctor_mDE2D7CACB9443C530E5C2612C1E177D31D48D39C(L_0, NULL);
		__this->___m_ParticipantPropertyEvent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticipantPropertyEvent_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PositionalVoice/OnParticipantProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnParticipantProperty__ctor_mDE2D7CACB9443C530E5C2612C1E177D31D48D39C (OnParticipantProperty_tDE553C1CA86860D187A1C944B4ADC53E6DB2D5A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F(__this, UnityEvent_2__ctor_m5C6BC5839C55AEDD809EC9DE30D0C70BF999C65F_RuntimeMethod_var);
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
// System.Void LobbyScreenUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_Awake_m50252EB5903C8903BEA5C326A16110BB47FFF805 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_U3CAwakeU3Eb__5_0_m8AA29219BB4027C12E9780E1DB3331825416E5B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// _evtSystem = EventSystem.current;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		__this->____evtSystem_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____evtSystem_6), (void*)L_0);
		// if (!_evtSystem)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1 = __this->____evtSystem_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogError("Unable to find EventSystem object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81, NULL);
	}

IL_002b:
	{
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_4;
		L_4 = VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7(NULL);
		__this->____vivoxVoiceManager_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_4);
		// _vivoxVoiceManager.OnUserLoggedInEvent += OnUserLoggedIn;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_5 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_6 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_6, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		VivoxVoiceManager_add_OnUserLoggedInEvent_m6044CEDB43F4307A1B1F5347517D359C5CAC9DAE(L_5, L_6, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent += OnUserLoggedOut;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_7 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_8 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_8, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		VivoxVoiceManager_add_OnUserLoggedOutEvent_mFE1D95D80D39419879FBCA469F5F923D824924C2(L_7, L_8, NULL);
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___LogoutButton_7;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)LobbyScreenUI_U3CAwakeU3Eb__5_0_m8AA29219BB4027C12E9780E1DB3331825416E5B9_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// if (_vivoxVoiceManager.LoginState == LoginState.LoggedIn)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_12 = __this->____vivoxVoiceManager_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline(L_12, NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		// OnUserLoggedIn();
		LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3(__this, NULL);
		goto IL_00a9;
	}

IL_00a0:
	{
		// OnUserLoggedOut();
		LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A(__this, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnDestroy_m7250665A952B73BD383AD150934C317FC580B6DE (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnUserLoggedInEvent -= OnUserLoggedIn;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_1 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_1, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnUserLoggedInEvent_m9B3EFC525DE4B3D712373728AAEF381230CEA9C7(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent -= OnUserLoggedOut;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_3 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_3, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnUserLoggedOutEvent_m2AFC45AD04360C25863812647DCECB0CEA64ADEE(L_2, L_3, NULL);
		// _vivoxVoiceManager.OnParticipantAddedEvent -= VivoxVoiceManager_OnParticipantAddedEvent;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_4 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_5 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_5, __this, (intptr_t)((void*)LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VivoxVoiceManager_remove_OnParticipantAddedEvent_mA75BFAB812B1FB27403DFECA298852340DDCDEEE(L_4, L_5, NULL);
		// LogoutButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___LogoutButton_7;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_6, NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_7, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::JoinLobbyChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_JoinLobbyChannel_m4D0C4BEEF4FBD6A9E397756AA916AE94A2BD4C4C (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnParticipantAddedEvent += VivoxVoiceManager_OnParticipantAddedEvent;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_1 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_1, __this, (intptr_t)((void*)LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_add_OnParticipantAddedEvent_m500BDC8B95BB46783221FC5FB10E39176A19206B(L_0, L_1, NULL);
		// _vivoxVoiceManager.JoinChannel(LobbyChannelName, ChannelType.NonPositional, VivoxVoiceManager.ChatCapability.TextAndAudio);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->____vivoxVoiceManager_4;
		String_t* L_3 = __this->___LobbyChannelName_5;
		NullCheck(L_2);
		VivoxVoiceManager_JoinChannel_m4F280BE051C67D62DDF48420C9723BE8BC3257B4(L_2, L_3, 0, 2, (bool)1, (Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::LogoutOfVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_LogoutOfVivoxService_m7CD38D88C9C91A31EB6277BB9CA427632621AE12 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	{
		// LogoutButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___LogoutButton_7;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// _vivoxVoiceManager.DisconnectAllChannels();
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_1 = __this->____vivoxVoiceManager_4;
		NullCheck(L_1);
		VivoxVoiceManager_DisconnectAllChannels_mCA9940C61EDB69601EC2498145A468F7547CCD4B(L_1, NULL);
		// _vivoxVoiceManager.Logout();
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->____vivoxVoiceManager_4;
		NullCheck(L_2);
		VivoxVoiceManager_Logout_mF261BA7C59F983338BDDD178C3054C388AB3DC70(L_2, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::VivoxVoiceManager_OnParticipantAddedEvent(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (channel.Name == LobbyChannelName && participant.IsSelf)
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_0 = ___channel1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_0, NULL);
		String_t* L_2 = __this->___LobbyChannelName_5;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_4 = ___participant2;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_U3COnUserLoggedInU3Eb__10_0_m0C89EC6715BFC27180D58B811E0E04F8CB95D976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnUserLoggedInU3Eb__10_1_m688DA21323D86BD70F589D0E93E993B5278F6507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject* G_B9_3 = NULL;
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B8_3 = NULL;
	{
		// LobbyScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LobbyScreen_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// LogoutButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___LogoutButton_7;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// _evtSystem.SetSelectedGameObject(LogoutButton.gameObject, null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2 = __this->____evtSystem_6;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___LogoutButton_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_2, L_4, (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*)NULL, NULL);
		// var lobbychannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_5 = __this->____vivoxVoiceManager_4;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_5, NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_7 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_7, __this, (intptr_t)((void*)LobbyScreenUI_U3COnUserLoggedInU3Eb__10_0_m0C89EC6715BFC27180D58B811E0E04F8CB95D976_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62(L_6, L_7, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		V_0 = L_8;
		// if ((_vivoxVoiceManager && _vivoxVoiceManager.ActiveChannels.Count == 0)
		//     || lobbychannel == null)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_9 = __this->____vivoxVoiceManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_9, NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_11 = __this->____vivoxVoiceManager_4;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_0075;
		}
	}

IL_006f:
	{
		RuntimeObject* L_14 = V_0;
		G_B4_0 = ((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0076;
	}

IL_0075:
	{
		G_B4_0 = 1;
	}

IL_0076:
	{
		V_1 = (bool)G_B4_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		// JoinLobbyChannel();
		LobbyScreenUI_JoinLobbyChannel_m4D0C4BEEF4FBD6A9E397756AA916AE94A2BD4C4C(__this, NULL);
		goto IL_00be;
	}

IL_0085:
	{
		// if (lobbychannel.AudioState == ConnectionState.Disconnected)
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_16);
		V_2 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00bd;
		}
	}
	{
		// lobbychannel.BeginSetAudioConnected(true, true, ar =>
		// {
		//     Debug.Log("Now transmitting into lobby channel");
		// });
		RuntimeObject* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_1;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_21 = L_20;
		G_B8_0 = L_21;
		G_B8_1 = 1;
		G_B8_2 = 1;
		G_B8_3 = L_19;
		if (L_21)
		{
			G_B9_0 = L_21;
			G_B9_1 = 1;
			G_B9_2 = 1;
			G_B9_3 = L_19;
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* L_22 = ((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_23 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3COnUserLoggedInU3Eb__10_1_m688DA21323D86BD70F589D0E93E993B5278F6507_RuntimeMethod_var), NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_24 = L_23;
		((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_1), (void*)L_24);
		G_B9_0 = L_24;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_00b6:
	{
		NullCheck(G_B9_3);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, bool, bool, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(18 /* System.IAsyncResult VivoxUnity.IChannelSession::BeginSetAudioConnected(System.Boolean,System.Boolean,System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, G_B9_3, (bool)G_B9_2, (bool)G_B9_1, G_B9_0);
	}

IL_00bd:
	{
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	{
		// _vivoxVoiceManager.DisconnectAllChannels();
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = __this->____vivoxVoiceManager_4;
		NullCheck(L_0);
		VivoxVoiceManager_DisconnectAllChannels_mCA9940C61EDB69601EC2498145A468F7547CCD4B(L_0, NULL);
		// LobbyScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LobbyScreen_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI__ctor_m273F2B1472AE37E67E1491DBD3227111B201A159 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string LobbyChannelName = "lobbyChannel";
		__this->___LobbyChannelName_5 = _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LobbyChannelName_5), (void*)_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LobbyScreenUI::<Awake>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_U3CAwakeU3Eb__5_0_m8AA29219BB4027C12E9780E1DB3331825416E5B9 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	{
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		LobbyScreenUI_LogoutOfVivoxService_m7CD38D88C9C91A31EB6277BB9CA427632621AE12(__this, NULL);
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		return;
	}
}
// System.Boolean LobbyScreenUI::<OnUserLoggedIn>b__10_0(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LobbyScreenUI_U3COnUserLoggedInU3Eb__10_0_m0C89EC6715BFC27180D58B811E0E04F8CB95D976 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, RuntimeObject* ___ac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var lobbychannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		RuntimeObject* L_0 = ___ac0;
		NullCheck(L_0);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1;
		L_1 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_1, NULL);
		String_t* L_3 = __this->___LobbyChannelName_5;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, L_3, NULL);
		return L_4;
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
// System.Void LobbyScreenUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC268066E6EBCAC483BF6D13A9983A1C67B04E484 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* L_0 = (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178*)il2cpp_codegen_object_new(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEC919B10095C7D3C55FBAFE3F5F0E3239C5CB266(L_0, NULL);
		((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LobbyScreenUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC919B10095C7D3C55FBAFE3F5F0E3239C5CB266 (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LobbyScreenUI/<>c::<OnUserLoggedIn>b__10_1(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnUserLoggedInU3Eb__10_1_m688DA21323D86BD70F589D0E93E993B5278F6507 (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209D6C95315F539F036E51E085C33C40C40878D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Now transmitting into lobby channel");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral209D6C95315F539F036E51E085C33C40C40878D0, NULL);
		// });
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
// System.Void LoginScreenUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_Awake_m2BA3864089A265F767579A4CC7DBDF008DAC3170 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_tBEDC8697E50901BE98E4B60602E8C465B04BBB76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_U3CAwakeU3Eb__7_0_m74A6921737F1A82F786D44E26673F301B983DCF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_U3CAwakeU3Eb__7_1_m49B952BECC2AE49C3DBC5C347F2260C21B1094DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// _evtSystem = FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		__this->____evtSystem_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____evtSystem_10), (void*)L_0);
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_1;
		L_1 = VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7(NULL);
		__this->____vivoxVoiceManager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_1);
		// _vivoxVoiceManager.OnUserLoggedInEvent += OnUserLoggedIn;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_3 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_3, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_add_OnUserLoggedInEvent_m6044CEDB43F4307A1B1F5347517D359C5CAC9DAE(L_2, L_3, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent += OnUserLoggedOut;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_4 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_5 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_5, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VivoxVoiceManager_add_OnUserLoggedOutEvent_mFE1D95D80D39419879FBCA469F5F923D824924C2(L_4, L_5, NULL);
		// DisplayNameInput.onEndEdit.AddListener((string text) => { LoginToVivoxService(); });
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___DisplayNameInput_6;
		NullCheck(L_6);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_7;
		L_7 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_6, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_8 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_8, __this, (intptr_t)((void*)LoginScreenUI_U3CAwakeU3Eb__7_0_m74A6921737F1A82F786D44E26673F301B983DCF7_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_7, L_8, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// LoginButton.onClick.AddListener(() => { LoginToVivoxService(); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___LoginButton_5;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)LoginScreenUI_U3CAwakeU3Eb__7_1_m49B952BECC2AE49C3DBC5C347F2260C21B1094DD_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// if (_vivoxVoiceManager.LoginState == VivoxUnity.LoginState.LoggedIn)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_12 = __this->____vivoxVoiceManager_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline(L_12, NULL);
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_00bf;
		}
	}
	{
		// OnUserLoggedIn();
		LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D(__this, NULL);
		// DisplayNameInput.text = _vivoxVoiceManager.LoginSession.Key.DisplayName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___DisplayNameInput_6;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_16 = __this->____vivoxVoiceManager_4;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___LoginSession_21;
		NullCheck(L_17);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_18;
		L_18 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.AccountId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_tBEDC8697E50901BE98E4B60602E8C465B04BBB76_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92(L_18, NULL);
		NullCheck(L_15);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_15, L_19, NULL);
		goto IL_010d;
	}

IL_00bf:
	{
		// OnUserLoggedOut();
		LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276(__this, NULL);
		// var systInfoDeviceName = String.IsNullOrWhiteSpace(SystemInfo.deviceName) == false ? SystemInfo.deviceName : Environment.MachineName;
		String_t* L_20;
		L_20 = SystemInfo_get_deviceName_m191E4B0E9579B2318378D25FA250E7AD4DAA542B(NULL);
		bool L_21;
		L_21 = String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B(L_20, NULL);
		if (!L_21)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_22;
		L_22 = Environment_get_MachineName_mCED88AE3AF98589BAD920D0CD6E44BC5F3E31EF4(NULL);
		G_B5_0 = L_22;
		goto IL_00df;
	}

IL_00da:
	{
		String_t* L_23;
		L_23 = SystemInfo_get_deviceName_m191E4B0E9579B2318378D25FA250E7AD4DAA542B(NULL);
		G_B5_0 = L_23;
	}

IL_00df:
	{
		V_1 = G_B5_0;
		// DisplayNameInput.text = Environment.MachineName.Substring(0, Math.Min(defaultMaxStringLength, Environment.MachineName.Length));
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_24 = __this->___DisplayNameInput_6;
		String_t* L_25;
		L_25 = Environment_get_MachineName_mCED88AE3AF98589BAD920D0CD6E44BC5F3E31EF4(NULL);
		int32_t L_26 = __this->___defaultMaxStringLength_8;
		String_t* L_27;
		L_27 = Environment_get_MachineName_mCED88AE3AF98589BAD920D0CD6E44BC5F3E31EF4(NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_26, L_28, NULL);
		NullCheck(L_25);
		String_t* L_30;
		L_30 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_25, 0, L_29, NULL);
		NullCheck(L_24);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_24, L_30, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void LoginScreenUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnDestroy_m8FF5FB8AB54B68E452CD6E1D4124023E608024D6 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnUserLoggedInEvent -= OnUserLoggedIn;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_1 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_1, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnUserLoggedInEvent_m9B3EFC525DE4B3D712373728AAEF381230CEA9C7(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent -= OnUserLoggedOut;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_3 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_3, __this, (intptr_t)((void*)LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnUserLoggedOutEvent_m2AFC45AD04360C25863812647DCECB0CEA64ADEE(L_2, L_3, NULL);
		// LoginButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___LoginButton_5;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_4, NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_5, NULL);
		// DisplayNameInput.onEndEdit.RemoveAllListeners();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___DisplayNameInput_6;
		NullCheck(L_6);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_7;
		L_7 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_6, NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_7, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::ShowLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_ShowLoginUI_m171A5047ABE6813C90FABDBC840121AF891C57C7 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	{
		// LoginScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LoginScreen_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// LoginButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___LoginButton_5;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// _evtSystem.SetSelectedGameObject(LoginButton.gameObject, null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2 = __this->____evtSystem_10;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___LoginButton_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_2, L_4, (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::HideLoginUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_HideLoginUI_mDA5204184A251E8B2F6F11980FCAF0BEF5AF1740 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	{
		// LoginScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LoginScreen_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::LoginToVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivoxService_m6D5C0BA4C02DFB97A4CB255EF59CE4124243D27A (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Permission.HasUserAuthorizedPermission(Permission.Microphone))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// LoginToVivox();
		LoginScreenUI_LoginToVivox_m1CF8BEA5743E624B380C29A1CC7606245E27FDBC(__this, NULL);
		goto IL_004c;
	}

IL_001a:
	{
		// if (PermissionsDenied)
		bool L_2 = __this->___PermissionsDenied_9;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// PermissionsDenied = false;
		__this->___PermissionsDenied_9 = (bool)0;
		// LoginToVivox();
		LoginScreenUI_LoginToVivox_m1CF8BEA5743E624B380C29A1CC7606245E27FDBC(__this, NULL);
		goto IL_004b;
	}

IL_0037:
	{
		// PermissionsDenied = true;
		__this->___PermissionsDenied_9 = (bool)1;
		// Permission.RequestUserPermission(Permission.Microphone);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
	}

IL_004b:
	{
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void LoginScreenUI::LoginToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_LoginToVivox_m1CF8BEA5743E624B380C29A1CC7606245E27FDBC (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FF7F74F0F90C892E57933991F15B128305B1B3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// LoginButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___LoginButton_5;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// if (string.IsNullOrEmpty(DisplayNameInput.text))
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___DisplayNameInput_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_1, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("Please enter a display name.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral09FF7F74F0F90C892E57933991F15B128305B1B3, NULL);
		// return;
		goto IL_0047;
	}

IL_0030:
	{
		// _vivoxVoiceManager.Login(DisplayNameInput.text);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_5 = __this->____vivoxVoiceManager_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___DisplayNameInput_6;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_6, NULL);
		NullCheck(L_5);
		VivoxVoiceManager_Login_m53DEA79E943747428EEBD22E82EAC66DB085DF78(L_5, L_7, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void LoginScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedIn_m4ADDE51ED0C3CA034F0B24056EC3F53C0FB4B66D (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	{
		// HideLoginUI();
		LoginScreenUI_HideLoginUI_mDA5204184A251E8B2F6F11980FCAF0BEF5AF1740(__this, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_OnUserLoggedOut_m6DBFA0E6C1DAF57CAC79C9F07D61A79694131276 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	{
		// ShowLoginUI();
		LoginScreenUI_ShowLoginUI_m171A5047ABE6813C90FABDBC840121AF891C57C7(__this, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI__ctor_m1ABB4D1C08C83726D8682EA6FC40964794B5D399 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	{
		// private int defaultMaxStringLength = 9;
		__this->___defaultMaxStringLength_8 = ((int32_t)9);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LoginScreenUI::<Awake>b__7_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_U3CAwakeU3Eb__7_0_m74A6921737F1A82F786D44E26673F301B983DCF7 (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// DisplayNameInput.onEndEdit.AddListener((string text) => { LoginToVivoxService(); });
		LoginScreenUI_LoginToVivoxService_m6D5C0BA4C02DFB97A4CB255EF59CE4124243D27A(__this, NULL);
		// DisplayNameInput.onEndEdit.AddListener((string text) => { LoginToVivoxService(); });
		return;
	}
}
// System.Void LoginScreenUI::<Awake>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenUI_U3CAwakeU3Eb__7_1_m49B952BECC2AE49C3DBC5C347F2260C21B1094DD (LoginScreenUI_t2B71874034AE223A157C8C630D00968718A05056* __this, const RuntimeMethod* method) 
{
	{
		// LoginButton.onClick.AddListener(() => { LoginToVivoxService(); });
		LoginScreenUI_LoginToVivoxService_m6D5C0BA4C02DFB97A4CB255EF59CE4124243D27A(__this, NULL);
		// LoginButton.onClick.AddListener(() => { LoginToVivoxService(); });
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
// System.Boolean RosterItem::get_IsMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RosterItem_get_IsMuted_m91768DE7A6BFF3E975CD8D6374E8AC9D40929504 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return isMuted; }
		bool L_0 = __this->___isMuted_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return isMuted; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void RosterItem::set_IsMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsMuted_mD4D43B118FE2FAD3820FDE357F96B4CCA721280D (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Participant.IsSelf)
		RuntimeObject* L_0 = __this->___Participant_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _vivoxVoiceManager.AudioInputDevices.Muted = value;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_3 = __this->____vivoxVoiceManager_4;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VivoxVoiceManager_get_AudioInputDevices_m5B807A4285A1303C3C30420A0430971EAF38360D(L_3, NULL);
		bool L_5 = ___value0;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void VivoxUnity.IAudioDevices::set_Muted(System.Boolean) */, IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var, L_4, L_5);
		goto IL_0046;
	}

IL_0026:
	{
		// if (Participant.InAudio)
		RuntimeObject* L_6 = __this->___Participant_5;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean VivoxUnity.IParticipantProperties::get_InAudio() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// Participant.LocalMute = value;
		RuntimeObject* L_9 = __this->___Participant_5;
		bool L_10 = ___value0;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(10 /* System.Void VivoxUnity.IParticipantProperties::set_LocalMute(System.Boolean) */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_0045:
	{
	}

IL_0046:
	{
		// isMuted = value;
		bool L_11 = ___value0;
		__this->___isMuted_11 = L_11;
		// UpdateChatStateImage();
		RosterItem_UpdateChatStateImage_m9EBB344D2F96CE5701E1635D46338F61EC7B42FC(__this, NULL);
		// }
		return;
	}
}
// System.Boolean RosterItem::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RosterItem_get_IsSpeaking_m1CB9500DA59EE9789ABBDCD238D091F796E7E3DA (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return isSpeaking; }
		bool L_0 = __this->___isSpeaking_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return isSpeaking; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void RosterItem::set_IsSpeaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_set_IsSpeaking_m9383CB3F27FAB9914CA0AC73F984BC8DDC520518 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if  (ChatStateImage && !IsMuted)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___ChatStateImage_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = RosterItem_get_IsMuted_m91768DE7A6BFF3E975CD8D6374E8AC9D40929504(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// isSpeaking = value;
		bool L_4 = ___value0;
		__this->___isSpeaking_12 = L_4;
		// UpdateChatStateImage();
		RosterItem_UpdateChatStateImage_m9EBB344D2F96CE5701E1635D46338F61EC7B42FC(__this, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void RosterItem::UpdateChatStateImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_UpdateChatStateImage_m9EBB344D2F96CE5701E1635D46338F61EC7B42FC (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsMuted)
		bool L_0;
		L_0 = RosterItem_get_IsMuted_m91768DE7A6BFF3E975CD8D6374E8AC9D40929504(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// ChatStateImage.sprite = MutedImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___ChatStateImage_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___MutedImage_8;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// ChatStateImage.gameObject.transform.localScale = Vector3.one;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___ChatStateImage_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		goto IL_008d;
	}

IL_003c:
	{
		// if (isSpeaking)
		bool L_8 = __this->___isSpeaking_12;
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		// ChatStateImage.sprite = SpeakingImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___ChatStateImage_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___SpeakingImage_9;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_11, NULL);
		// ChatStateImage.gameObject.transform.localScale = Vector3.one;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___ChatStateImage_7;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_15, NULL);
		goto IL_008c;
	}

IL_0078:
	{
		// ChatStateImage.sprite = NotSpeakingImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___ChatStateImage_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___NotSpeakingImage_10;
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_17, NULL);
	}

IL_008c:
	{
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void RosterItem::SetupRosterItem(VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_SetupRosterItem_m04C0A038CAD9A1CDBBD92694DCEC186FBEF49107 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, RuntimeObject* ___participant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterItem_U3CSetupRosterItemU3Eb__16_0_m27DC58BD31D578EA04F2F1AAFBDCD7CD1EB93948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterItem_U3CSetupRosterItemU3Eb__16_1_mE5FF4BBFF972E2EEDF89319E1F245181C31EC310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* G_B2_0 = NULL;
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* G_B1_0 = NULL;
	bool G_B3_0 = false;
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* G_B3_1 = NULL;
	{
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0;
		L_0 = VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7(NULL);
		__this->____vivoxVoiceManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_0);
		// Participant = participant;
		RuntimeObject* L_1 = ___participant0;
		__this->___Participant_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Participant_5), (void*)L_1);
		// PlayerNameText.text = Participant.Account.DisplayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___PlayerNameText_6;
		RuntimeObject* L_3 = __this->___Participant_5;
		NullCheck(L_3);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_4;
		L_4 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92(L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// IsMuted = participant.IsSelf ? _vivoxVoiceManager.AudioInputDevices.Muted : Participant.LocalMute;
		RuntimeObject* L_6 = ___participant0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_6);
		G_B1_0 = __this;
		if (L_7)
		{
			G_B2_0 = __this;
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_8 = __this->___Participant_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean VivoxUnity.IParticipantProperties::get_LocalMute() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_8);
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0055;
	}

IL_0045:
	{
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_10 = __this->____vivoxVoiceManager_4;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VivoxVoiceManager_get_AudioInputDevices_m5B807A4285A1303C3C30420A0430971EAF38360D(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean VivoxUnity.IAudioDevices::get_Muted() */, IAudioDevices_tD674845AA4A2F3C9558A7B40CE8B4D89C95BBC97_il2cpp_TypeInfo_var, L_11);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_0055:
	{
		NullCheck(G_B3_1);
		RosterItem_set_IsMuted_mD4D43B118FE2FAD3820FDE357F96B4CCA721280D(G_B3_1, G_B3_0, NULL);
		// IsSpeaking = participant.SpeechDetected;
		RuntimeObject* L_13 = ___participant0;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_13);
		RosterItem_set_IsSpeaking_m9383CB3F27FAB9914CA0AC73F984BC8DDC520518(__this, L_14, NULL);
		// gameObject.GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     IsMuted = !IsMuted;
		// });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_15);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16;
		L_16 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_15, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_16);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_17;
		L_17 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_16, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, __this, (intptr_t)((void*)RosterItem_U3CSetupRosterItemU3Eb__16_0_m27DC58BD31D578EA04F2F1AAFBDCD7CD1EB93948_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_17, L_18, NULL);
		// Participant.PropertyChanged += (obj, args) =>
		// {
		//     switch (args.PropertyName)
		//     {
		//         case "SpeechDetected":
		//             IsSpeaking = Participant.SpeechDetected;
		//             break;
		//     }
		// };
		RuntimeObject* L_19 = __this->___Participant_5;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_20 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_20, __this, (intptr_t)((void*)RosterItem_U3CSetupRosterItemU3Eb__16_1_mE5FF4BBFF972E2EEDF89319E1F245181C31EC310_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_19, L_20);
		// }
		return;
	}
}
// System.Void RosterItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem__ctor_m2190F0333209AB8FE94A80097B986B3536E380EE (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void RosterItem::<SetupRosterItem>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_U3CSetupRosterItemU3Eb__16_0_m27DC58BD31D578EA04F2F1AAFBDCD7CD1EB93948 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, const RuntimeMethod* method) 
{
	{
		// IsMuted = !IsMuted;
		bool L_0;
		L_0 = RosterItem_get_IsMuted_m91768DE7A6BFF3E975CD8D6374E8AC9D40929504(__this, NULL);
		RosterItem_set_IsMuted_mD4D43B118FE2FAD3820FDE357F96B4CCA721280D(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// });
		return;
	}
}
// System.Void RosterItem::<SetupRosterItem>b__16_1(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterItem_U3CSetupRosterItemU3Eb__16_1_mE5FF4BBFF972E2EEDF89319E1F245181C31EC310 (RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* __this, RuntimeObject* ___obj0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6020785A926649CF038C7965768B025B64B74D66);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// switch (args.PropertyName)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_0);
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral6020785A926649CF038C7965768B025B64B74D66, NULL);
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_002d;
	}

IL_0019:
	{
		// IsSpeaking = Participant.SpeechDetected;
		RuntimeObject* L_5 = __this->___Participant_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_5);
		RosterItem_set_IsSpeaking_m9383CB3F27FAB9914CA0AC73F984BC8DDC520518(__this, L_6, NULL);
		// break;
		goto IL_002d;
	}

IL_002d:
	{
		// };
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
// System.Void RosterManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_Start_m208E169C7BBE39AF61A8E947FA9E469D7343515D (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RosterManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_Awake_m126BB173BEA8EC53113AAD217064BA997FA5D985 (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantAdded_mE4A2CA577D736B08357FD5FE30DD04800C1B880E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantRemoved_mEDA7D15949921EB94CCD9121DEC380AD1AF13DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnUserLoggedOut_m9A0F7E4A0D3B552260F30115EE8E2CF6D80C67C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__5_0_mB234D00B79271DBA13ED98D823B9F9EDE574A1A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t G_B3_0 = 0;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0;
		L_0 = VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7(NULL);
		__this->____vivoxVoiceManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_5), (void*)L_0);
		// _vivoxVoiceManager.OnParticipantAddedEvent += OnParticipantAdded;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_1 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_2 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_2, __this, (intptr_t)((void*)RosterManager_OnParticipantAdded_mE4A2CA577D736B08357FD5FE30DD04800C1B880E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		VivoxVoiceManager_add_OnParticipantAddedEvent_m500BDC8B95BB46783221FC5FB10E39176A19206B(L_1, L_2, NULL);
		// _vivoxVoiceManager.OnParticipantRemovedEvent += OnParticipantRemoved;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_3 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_4 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_4, __this, (intptr_t)((void*)RosterManager_OnParticipantRemoved_mEDA7D15949921EB94CCD9121DEC380AD1AF13DD9_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VivoxVoiceManager_add_OnParticipantRemovedEvent_mCBCBF1FB44335BDA56C33EF9DC1AC680B857F407(L_3, L_4, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent += OnUserLoggedOut;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_5 = __this->____vivoxVoiceManager_5;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_6 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_6, __this, (intptr_t)((void*)RosterManager_OnUserLoggedOut_m9A0F7E4A0D3B552260F30115EE8E2CF6D80C67C5_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		VivoxVoiceManager_add_OnUserLoggedOutEvent_mFE1D95D80D39419879FBCA469F5F923D824924C2(L_5, L_6, NULL);
		// if (_vivoxVoiceManager &&  _vivoxVoiceManager.ActiveChannels.Count > 0)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_7 = __this->____vivoxVoiceManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_9 = __this->____vivoxVoiceManager_5;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_10);
		G_B3_0 = ((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B3_0 = 0;
	}

IL_0077:
	{
		V_0 = (bool)G_B3_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0106;
		}
	}
	{
		// var LobbyChannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_13 = __this->____vivoxVoiceManager_5;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_15 = ((U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_16 = L_15;
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_16)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_00a9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var);
		U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07* L_17 = ((U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_18 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__5_0_mB234D00B79271DBA13ED98D823B9F9EDE574A1A8_RuntimeMethod_var), NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_19 = L_18;
		((U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_19);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_1;
	}

IL_00a9:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62(G_B6_1, G_B6_0, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		V_1 = L_20;
		// foreach (var participant in _vivoxVoiceManager.LoginSession.GetChannelSession(LobbyChannel.Channel).Participants)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_21 = __this->____vivoxVoiceManager_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->___LoginSession_21;
		RuntimeObject* L_23 = V_1;
		NullCheck(L_23);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_24;
		L_24 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_22);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(26 /* VivoxUnity.IChannelSession VivoxUnity.ILoginSession::GetChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_22, L_24);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VivoxUnity.IParticipant>::GetEnumerator() */, IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var, L_26);
		V_2 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fa:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_2;
					if (!L_28)
					{
						goto IL_0104;
					}
				}
				{
					RuntimeObject* L_29 = V_2;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_0104:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f0_1;
			}

IL_00d3_1:
			{
				// foreach (var participant in _vivoxVoiceManager.LoginSession.GetChannelSession(LobbyChannel.Channel).Participants)
				RuntimeObject* L_30 = V_2;
				NullCheck(L_30);
				RuntimeObject* L_31;
				L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VivoxUnity.IParticipant>::get_Current() */, IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var, L_30);
				V_3 = L_31;
				// UpdateParticipantRoster(participant, participant.ParentChannelSession.Channel, true);
				RuntimeObject* L_32 = V_3;
				RuntimeObject* L_33 = V_3;
				NullCheck(L_33);
				RuntimeObject* L_34;
				L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_33);
				NullCheck(L_34);
				ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_35;
				L_35 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_34);
				RosterManager_UpdateParticipantRoster_m97BF6F4A5D42F635A309705A37B15FAA53EABFAD(__this, L_32, L_35, (bool)1, NULL);
			}

IL_00f0_1:
			{
				// foreach (var participant in _vivoxVoiceManager.LoginSession.GetChannelSession(LobbyChannel.Channel).Participants)
				RuntimeObject* L_36 = V_2;
				NullCheck(L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_00d3_1;
				}
			}
			{
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
	}

IL_0106:
	{
		// }
		return;
	}
}
// System.Void RosterManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnDestroy_m839C90E726506007F9EC3BDC254BD9312CE54F15 (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantAdded_mE4A2CA577D736B08357FD5FE30DD04800C1B880E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnParticipantRemoved_mEDA7D15949921EB94CCD9121DEC380AD1AF13DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RosterManager_OnUserLoggedOut_m9A0F7E4A0D3B552260F30115EE8E2CF6D80C67C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnParticipantAddedEvent -= OnParticipantAdded;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_1 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_1, __this, (intptr_t)((void*)RosterManager_OnParticipantAdded_mE4A2CA577D736B08357FD5FE30DD04800C1B880E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnParticipantAddedEvent_mA75BFAB812B1FB27403DFECA298852340DDCDEEE(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnParticipantRemovedEvent -= OnParticipantRemoved;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->____vivoxVoiceManager_5;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_3 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_3, __this, (intptr_t)((void*)RosterManager_OnParticipantRemoved_mEDA7D15949921EB94CCD9121DEC380AD1AF13DD9_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnParticipantRemovedEvent_mB98F198869871340CC6ED5EE04E7497600831B7B(L_2, L_3, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent -= OnUserLoggedOut;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_4 = __this->____vivoxVoiceManager_5;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_5 = (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)il2cpp_codegen_object_new(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD(L_5, __this, (intptr_t)((void*)RosterManager_OnUserLoggedOut_m9A0F7E4A0D3B552260F30115EE8E2CF6D80C67C5_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VivoxVoiceManager_remove_OnUserLoggedOutEvent_m2AFC45AD04360C25863812647DCECB0CEA64ADEE(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::ClearAllRosters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearAllRosters_m662A139F219022D374A982FDAEB31C3353FF0DFA (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m0E859F4DF37A7F966E9D2CBC4A8E5639ADD5C1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m52C3FB212878F7D85DF576BE39F648C716AE9B60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA09CDC0A2851BAA32AB66D9B0C6853ACE0C714AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m03186BDD1ED08A600C0CFFB405F900475980F18D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEE276D47C3EC05841798A630D90132149CC22498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mB0BE9F521CAD858D6A8D28D72D78B1167508DDC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* V_1 = NULL;
	Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* V_3 = NULL;
	{
		// foreach(List<RosterItem> rosterList in rosterObjects.Values)
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_0 = __this->___rosterObjects_6;
		NullCheck(L_0);
		ValueCollection_t0B23EA3183C72084FDC52A295BFCC1410E7AA753* L_1;
		L_1 = Dictionary_2_get_Values_m52C3FB212878F7D85DF576BE39F648C716AE9B60(L_0, Dictionary_2_get_Values_m52C3FB212878F7D85DF576BE39F648C716AE9B60_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t11511AA88782AB280E124DABFBCAB2D99AEEBB23 L_2;
		L_2 = ValueCollection_GetEnumerator_mB0BE9F521CAD858D6A8D28D72D78B1167508DDC1(L_1, ValueCollection_GetEnumerator_mB0BE9F521CAD858D6A8D28D72D78B1167508DDC1_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA09CDC0A2851BAA32AB66D9B0C6853ACE0C714AF((&V_0), Enumerator_Dispose_mA09CDC0A2851BAA32AB66D9B0C6853ACE0C714AF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0015_1:
			{
				// foreach(List<RosterItem> rosterList in rosterObjects.Values)
				List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_3;
				L_3 = Enumerator_get_Current_mEE276D47C3EC05841798A630D90132149CC22498_inline((&V_0), Enumerator_get_Current_mEE276D47C3EC05841798A630D90132149CC22498_RuntimeMethod_var);
				V_1 = L_3;
				// foreach(RosterItem item in rosterList)
				List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_4 = V_1;
				NullCheck(L_4);
				Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91 L_5;
				L_5 = List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368(L_4, List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0049_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD((&V_2), Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_003e_2;
					}

IL_0028_2:
					{
						// foreach(RosterItem item in rosterList)
						RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_6;
						L_6 = Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_inline((&V_2), Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_RuntimeMethod_var);
						V_3 = L_6;
						// Destroy(item.gameObject);
						RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_7 = V_3;
						NullCheck(L_7);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
						L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
					}

IL_003e_2:
					{
						// foreach(RosterItem item in rosterList)
						bool L_9;
						L_9 = Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089((&V_2), Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089_RuntimeMethod_var);
						if (L_9)
						{
							goto IL_0028_2;
						}
					}
					{
						goto IL_0058_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0058_1:
			{
				// rosterList.Clear();
				List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_10 = V_1;
				NullCheck(L_10);
				List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_inline(L_10, List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_RuntimeMethod_var);
			}

IL_0060_1:
			{
				// foreach(List<RosterItem> rosterList in rosterObjects.Values)
				bool L_11;
				L_11 = Enumerator_MoveNext_m03186BDD1ED08A600C0CFFB405F900475980F18D((&V_0), Enumerator_MoveNext_m03186BDD1ED08A600C0CFFB405F900475980F18D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// rosterObjects.Clear();
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_12 = __this->___rosterObjects_6;
		NullCheck(L_12);
		Dictionary_2_Clear_m0E859F4DF37A7F966E9D2CBC4A8E5639ADD5C1A2(L_12, Dictionary_2_Clear_m0E859F4DF37A7F966E9D2CBC4A8E5639ADD5C1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RosterManager::ClearChannelRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_ClearChannelRoster_m19AB867648E3FBB58CFEFD169BE6D8DF0131BBD7 (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0AD2ADA9866535557DDC01FBA6C3E9A63DC7B535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* V_0 = NULL;
	Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* V_2 = NULL;
	{
		// List<RosterItem> rosterList = rosterObjects[channel];
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_0 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1 = ___channel0;
		NullCheck(L_0);
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_2;
		L_2 = Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5(L_0, L_1, Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var);
		V_0 = L_2;
		// foreach(RosterItem item in rosterList)
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t2726A86F6F54C7B3749B42706854D16A16AC2E91 L_4;
		L_4 = List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368(L_3, List_1_GetEnumerator_m9BB1EE6DD9658322C1A7F9B11FA5341FBB4EF368_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD((&V_1), Enumerator_Dispose_m427C979C64C14679B5A60B69D3E2CD97564853FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0018_1:
			{
				// foreach(RosterItem item in rosterList)
				RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_5;
				L_5 = Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_inline((&V_1), Enumerator_get_Current_m58D710D7F1204BE1B18D106B1D411799D0864BE0_RuntimeMethod_var);
				V_2 = L_5;
				// Destroy(item.gameObject);
				RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_6 = V_2;
				NullCheck(L_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
			}

IL_002e_1:
			{
				// foreach(RosterItem item in rosterList)
				bool L_8;
				L_8 = Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089((&V_1), Enumerator_MoveNext_m6BB150F72D750913B1FEEE1A10ED4DBCF0C21089_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// rosterList.Clear();
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_9 = V_0;
		NullCheck(L_9);
		List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_inline(L_9, List_1_Clear_mC966CD087D8C8F90247D59635CBA207A412F6D70_RuntimeMethod_var);
		// rosterObjects.Remove(channel);
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_10 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_11 = ___channel0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_Remove_m0AD2ADA9866535557DDC01FBA6C3E9A63DC7B535(L_10, L_11, Dictionary_2_Remove_m0AD2ADA9866535557DDC01FBA6C3E9A63DC7B535_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RosterManager::CleanRoster(VivoxUnity.ChannelId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_CleanRoster_mF84F01E19C1EC40AE63B19BC09092CF1D9824A8B (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7C09D0F6D108B1644FCA8FCA1E8477308DEC0E8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// RectTransform rt = this.gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		V_0 = L_1;
		// rt.sizeDelta = new Vector2(0, rosterObjects[channel].Count * 50);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = V_0;
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_3 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_4 = ___channel0;
		NullCheck(L_3);
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_5;
		L_5 = Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5(L_3, L_4, Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m7C09D0F6D108B1644FCA8FCA1E8477308DEC0E8F_inline(L_5, List_1_get_Count_m7C09D0F6D108B1644FCA8FCA1E8477308DEC0E8F_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), ((float)((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)50)))), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_2, L_7, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::OnChannelDisconnected(VivoxUnity.ChannelId,VivoxUnity.ConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnChannelDisconnected_m2524DA544BDC0785E67BB819A321E58DC55193DA (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel0, int32_t ___audioConnectionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m4186B5E40E7CFCBAF81BE71C83580274D3A01313_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mC5FE026F362B1A81D7AAE1B8DEE61592DF5986D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(rosterObjects.Keys.Contains(channel))
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_0 = __this->___rosterObjects_6;
		NullCheck(L_0);
		KeyCollection_t6F1D86EFF3D4A6D6BD469ABF3E0A143779AE2599* L_1;
		L_1 = Dictionary_2_get_Keys_m4186B5E40E7CFCBAF81BE71C83580274D3A01313(L_0, Dictionary_2_get_Keys_m4186B5E40E7CFCBAF81BE71C83580274D3A01313_RuntimeMethod_var);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_2 = ___channel0;
		bool L_3;
		L_3 = Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mC5FE026F362B1A81D7AAE1B8DEE61592DF5986D9(L_1, L_2, Enumerable_Contains_TisChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_mC5FE026F362B1A81D7AAE1B8DEE61592DF5986D9_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// ClearChannelRoster(channel);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_5 = ___channel0;
		RosterManager_ClearChannelRoster_m19AB867648E3FBB58CFEFD169BE6D8DF0131BBD7(__this, L_5, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void RosterManager::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnUserLoggedOut_m9A0F7E4A0D3B552260F30115EE8E2CF6D80C67C5 (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, const RuntimeMethod* method) 
{
	{
		// ClearAllRosters();
		RosterManager_ClearAllRosters_m662A139F219022D374A982FDAEB31C3353FF0DFA(__this, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::UpdateParticipantRoster(VivoxUnity.IParticipant,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_UpdateParticipantRoster_m97BF6F4A5D42F635A309705A37B15FAA53EABFAD (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, RuntimeObject* ___participant0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___isAddParticipant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m137258D9BB3E27EE9CF5B7DCE7DCE75EA63CD214_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7DA4669EDBC7BCD235D880FCF93075B5424BECC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m57BC98B8CE45574EB6DE4526EA23489B30211999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB41C7CB81C40B9C130DDFC40E0479A95D429D29F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_m6252497A5C37E0D60958C2EF07F79C1ECDA6B9BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_mFD204C4A79BDCA431E976533D0363060E41BA7E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC9712D4976AE7CF982E325549A3C7A98592A0829_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m72BA5082A99AAEF3CB7E9D2A0B2C197D8A563F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0DCD7906ECB4BD0F97BA2E727C52B7A2A984B94B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAE139C421211C38725830D12DDCEDA806DB9318C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m2DB69DB17B670C531AC98EF759AD13CEEE82CFFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEAED6BA2FFAC91E74FA8CC2645691A5D41227E2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* V_3 = NULL;
	List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* V_7 = NULL;
	bool V_8 = false;
	{
		U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* L_0 = (U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m778E1458A0E63F92D6587E2264A0D828CFEAC710(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* L_1 = V_0;
		RuntimeObject* L_2 = ___participant0;
		NullCheck(L_1);
		L_1->___participant_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___participant_0), (void*)L_2);
		// if (isAddParticipant)
		bool L_3 = ___isAddParticipant2;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00b8;
		}
	}
	{
		// GameObject newRosterObject = GameObject.Instantiate(rosterItemPrefab, this.gameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___rosterItemPrefab_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_2 = L_8;
		// RosterItem newRosterItem = newRosterObject.GetComponent<RosterItem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_9);
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_10;
		L_10 = GameObject_GetComponent_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_mFD204C4A79BDCA431E976533D0363060E41BA7E6(L_9, GameObject_GetComponent_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_mFD204C4A79BDCA431E976533D0363060E41BA7E6_RuntimeMethod_var);
		V_3 = L_10;
		// if (rosterObjects.ContainsKey(channel))
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_11 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_12 = ___channel1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m7DA4669EDBC7BCD235D880FCF93075B5424BECC3(L_11, L_12, Dictionary_2_ContainsKey_m7DA4669EDBC7BCD235D880FCF93075B5424BECC3_RuntimeMethod_var);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		// rosterObjects.TryGetValue(channel, out thisChannelList);
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_15 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_16 = ___channel1;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_TryGetValue_m57BC98B8CE45574EB6DE4526EA23489B30211999(L_15, L_16, (&V_4), Dictionary_2_TryGetValue_m57BC98B8CE45574EB6DE4526EA23489B30211999_RuntimeMethod_var);
		// newRosterItem.SetupRosterItem(participant);
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_18 = V_3;
		U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* L_19 = V_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___participant_0;
		NullCheck(L_18);
		RosterItem_SetupRosterItem_m04C0A038CAD9A1CDBBD92694DCEC186FBEF49107(L_18, L_20, NULL);
		// thisChannelList.Add(newRosterItem);
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_21 = V_4;
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_22 = V_3;
		NullCheck(L_21);
		List_1_Add_mC9712D4976AE7CF982E325549A3C7A98592A0829_inline(L_21, L_22, List_1_Add_mC9712D4976AE7CF982E325549A3C7A98592A0829_RuntimeMethod_var);
		// rosterObjects[channel] = thisChannelList;
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_23 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_24 = ___channel1;
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_25 = V_4;
		NullCheck(L_23);
		Dictionary_2_set_Item_mB41C7CB81C40B9C130DDFC40E0479A95D429D29F(L_23, L_24, L_25, Dictionary_2_set_Item_mB41C7CB81C40B9C130DDFC40E0479A95D429D29F_RuntimeMethod_var);
		goto IL_00ad;
	}

IL_007f:
	{
		// thisChannelList = new List<RosterItem>();
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_26 = (List_1_tAE139C421211C38725830D12DDCEDA806DB9318C*)il2cpp_codegen_object_new(List_1_tAE139C421211C38725830D12DDCEDA806DB9318C_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_m0DCD7906ECB4BD0F97BA2E727C52B7A2A984B94B(L_26, List_1__ctor_m0DCD7906ECB4BD0F97BA2E727C52B7A2A984B94B_RuntimeMethod_var);
		V_4 = L_26;
		// thisChannelList.Add(newRosterItem);
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_27 = V_4;
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_28 = V_3;
		NullCheck(L_27);
		List_1_Add_mC9712D4976AE7CF982E325549A3C7A98592A0829_inline(L_27, L_28, List_1_Add_mC9712D4976AE7CF982E325549A3C7A98592A0829_RuntimeMethod_var);
		// newRosterItem.SetupRosterItem(participant);
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_29 = V_3;
		U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* L_30 = V_0;
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->___participant_0;
		NullCheck(L_29);
		RosterItem_SetupRosterItem_m04C0A038CAD9A1CDBBD92694DCEC186FBEF49107(L_29, L_31, NULL);
		// rosterObjects.Add(channel, thisChannelList);
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_32 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_33 = ___channel1;
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_34 = V_4;
		NullCheck(L_32);
		Dictionary_2_Add_m137258D9BB3E27EE9CF5B7DCE7DCE75EA63CD214(L_32, L_33, L_34, Dictionary_2_Add_m137258D9BB3E27EE9CF5B7DCE7DCE75EA63CD214_RuntimeMethod_var);
	}

IL_00ad:
	{
		// CleanRoster(channel);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_35 = ___channel1;
		RosterManager_CleanRoster_mF84F01E19C1EC40AE63B19BC09092CF1D9824A8B(__this, L_35, NULL);
		goto IL_0135;
	}

IL_00b8:
	{
		// if (rosterObjects.ContainsKey(channel))
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_36 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_37 = ___channel1;
		NullCheck(L_36);
		bool L_38;
		L_38 = Dictionary_2_ContainsKey_m7DA4669EDBC7BCD235D880FCF93075B5424BECC3(L_36, L_37, Dictionary_2_ContainsKey_m7DA4669EDBC7BCD235D880FCF93075B5424BECC3_RuntimeMethod_var);
		V_6 = L_38;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_0134;
		}
	}
	{
		// RosterItem removedItem = rosterObjects[channel].FirstOrDefault(p => p.Participant.Account.Name == participant.Account.Name);
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_40 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_41 = ___channel1;
		NullCheck(L_40);
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_42;
		L_42 = Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5(L_40, L_41, Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var);
		U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* L_43 = V_0;
		Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2* L_44 = (Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2*)il2cpp_codegen_object_new(Func_2_t90F58794AA2E2127C00F7B6D2B644AB8BDFB2DA2_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Func_2__ctor_m47BF6DB982CDEEE450FABF86843D01EADAF35420(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m2DB69DB17B670C531AC98EF759AD13CEEE82CFFD_RuntimeMethod_var), NULL);
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_45;
		L_45 = Enumerable_FirstOrDefault_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_m6252497A5C37E0D60958C2EF07F79C1ECDA6B9BE(L_42, L_44, Enumerable_FirstOrDefault_TisRosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44_m6252497A5C37E0D60958C2EF07F79C1ECDA6B9BE_RuntimeMethod_var);
		V_7 = L_45;
		// if (removedItem != null)
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_46 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_47;
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_0126;
		}
	}
	{
		// rosterObjects[channel].Remove(removedItem);
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_49 = __this->___rosterObjects_6;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_50 = ___channel1;
		NullCheck(L_49);
		List_1_tAE139C421211C38725830D12DDCEDA806DB9318C* L_51;
		L_51 = Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5(L_49, L_50, Dictionary_2_get_Item_m5F4FB48EB38D3092DAF8880D08497353A3EEACB5_RuntimeMethod_var);
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_52 = V_7;
		NullCheck(L_51);
		bool L_53;
		L_53 = List_1_Remove_m72BA5082A99AAEF3CB7E9D2A0B2C197D8A563F41(L_51, L_52, List_1_Remove_m72BA5082A99AAEF3CB7E9D2A0B2C197D8A563F41_RuntimeMethod_var);
		// Destroy(removedItem.gameObject);
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_54 = V_7;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_55, NULL);
		// CleanRoster(channel);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_56 = ___channel1;
		RosterManager_CleanRoster_mF84F01E19C1EC40AE63B19BC09092CF1D9824A8B(__this, L_56, NULL);
		goto IL_0133;
	}

IL_0126:
	{
		// Debug.LogError("Trying to remove a participant that has no roster item.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralEEAED6BA2FFAC91E74FA8CC2645691A5D41227E2, NULL);
	}

IL_0133:
	{
	}

IL_0134:
	{
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void RosterManager::OnParticipantAdded(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnParticipantAdded_mE4A2CA577D736B08357FD5FE30DD04800C1B880E (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, String_t* ___userName0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AED3CB487C10B345B79E6F1F11EFB4CC9D12723);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnPartAdded: " + userName);
		String_t* L_0 = ___userName0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7AED3CB487C10B345B79E6F1F11EFB4CC9D12723, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// UpdateParticipantRoster(participant, channel, true);
		RuntimeObject* L_2 = ___participant2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_3 = ___channel1;
		RosterManager_UpdateParticipantRoster_m97BF6F4A5D42F635A309705A37B15FAA53EABFAD(__this, L_2, L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::OnParticipantRemoved(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager_OnParticipantRemoved_mEDA7D15949921EB94CCD9121DEC380AD1AF13DD9 (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, String_t* ___userName0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A931BAD21B30C92ED8BBF021BCB27387AC5BF4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnPartRemoved: " + participant.Account.Name);
		RuntimeObject* L_0 = ___participant2;
		NullCheck(L_0);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_1;
		L_1 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4A931BAD21B30C92ED8BBF021BCB27387AC5BF4D, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// UpdateParticipantRoster(participant, channel, false);
		RuntimeObject* L_4 = ___participant2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_5 = ___channel1;
		RosterManager_UpdateParticipantRoster_m97BF6F4A5D42F635A309705A37B15FAA53EABFAD(__this, L_4, L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RosterManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosterManager__ctor_m14D52E403659B4BCBF3AB786A9C3F9188C4F622A (RosterManager_tACF8D2E31C92B719940F4559DFB8A35351D3E356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m680675B469A226462A423341C7E59513CE74BBDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<ChannelId, List<RosterItem>> rosterObjects = new Dictionary<ChannelId, List<RosterItem>>();
		Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B* L_0 = (Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B*)il2cpp_codegen_object_new(Dictionary_2_t03EF26F09E06E6A75CB37DD9AB32CAF6E574EE1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m680675B469A226462A423341C7E59513CE74BBDF(L_0, Dictionary_2__ctor_m680675B469A226462A423341C7E59513CE74BBDF_RuntimeMethod_var);
		__this->___rosterObjects_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rosterObjects_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RosterManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB3989EC8C9FFC91C830793C0502BDD91E196E784 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07* L_0 = (U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07*)il2cpp_codegen_object_new(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE862D63680349E212E37DD2F33D7013BA1AFC995(L_0, NULL);
		((U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void RosterManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE862D63680349E212E37DD2F33D7013BA1AFC995 (U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean RosterManager/<>c::<Awake>b__5_0(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__5_0_mB234D00B79271DBA13ED98D823B9F9EDE574A1A8 (U3CU3Ec_t9A6DF13502DD3DE0E2411CC94C6FB753CAD25B07* __this, RuntimeObject* ___ac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var LobbyChannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName);
		RuntimeObject* L_0 = ___ac0;
		NullCheck(L_0);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1;
		L_1 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE, NULL);
		return L_3;
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
// System.Void RosterManager/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m778E1458A0E63F92D6587E2264A0D828CFEAC710 (U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean RosterManager/<>c__DisplayClass12_0::<UpdateParticipantRoster>b__0(RosterItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CUpdateParticipantRosterU3Eb__0_m2DB69DB17B670C531AC98EF759AD13CEEE82CFFD (U3CU3Ec__DisplayClass12_0_t17196115AE0A86083AD77B7ECE116D9796820112* __this, RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RosterItem removedItem = rosterObjects[channel].FirstOrDefault(p => p.Participant.Account.Name == participant.Account.Name);
		RosterItem_t9E9F561EC9208C5099A7636B7A280668E9866A44* L_0 = ___p0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___Participant_5;
		NullCheck(L_1);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_2;
		L_2 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_2, NULL);
		RuntimeObject* L_4 = __this->___participant_0;
		NullCheck(L_4);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_5;
		L_5 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_6, NULL);
		return L_7;
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
// System.Void TextChatUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_Awake_mF32A77BACE655F8834D6C5562233D8C68C9DD31F (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnParticipantAdded_m9B1F03FE8D1087DD3748DAC055ED554A01C8138C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnTextMessageLogReceivedEvent_m052C3A295924666088CACE3688EFAE2E4CE7AB9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_SubmitTTSMessageToVivox_mDA9AA740530FD53271A50C916FB1B4EC8848E126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_SubmitTextToVivox_m1A72C98FD5B63E7B46C30692E066E263A2F08201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_TTSToggleValueChanged_mDE90661640EC052C8BA6FF04E8DB7B2C972DE945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_U3CAwakeU3Eb__11_0_m340F5DBEAEC19727D14A6B1890BE3DA8584BDE79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__11_1_mCB704AC38ABAE576B9D5D9FAC9BB718522AFACBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* G_B5_2 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* G_B4_2 = NULL;
	{
		// _textChatScrollRect = GetComponent<ScrollRect>();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(__this, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		__this->____textChatScrollRect_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textChatScrollRect_8), (void*)L_0);
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_1;
		L_1 = VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7(NULL);
		__this->____vivoxVoiceManager_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_1);
		// if (_messageObjPool.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->____messageObjPool_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// ClearMessageObjectPool();
		TextChatUI_ClearMessageObjectPool_mBCD0B6D80A6CDBA228DBC0FA0BED8D54CC89B780(__this, NULL);
	}

IL_0033:
	{
		// ClearOutTextField();
		TextChatUI_ClearOutTextField_m909C38780BAB10A25BE351008364D45CAD4748FF(__this, NULL);
		// _vivoxVoiceManager.OnParticipantAddedEvent += OnParticipantAdded;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_5 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_6 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_6, __this, (intptr_t)((void*)TextChatUI_OnParticipantAdded_m9B1F03FE8D1087DD3748DAC055ED554A01C8138C_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		VivoxVoiceManager_add_OnParticipantAddedEvent_m500BDC8B95BB46783221FC5FB10E39176A19206B(L_5, L_6, NULL);
		// _vivoxVoiceManager.OnTextMessageLogReceivedEvent += OnTextMessageLogReceivedEvent;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_7 = __this->____vivoxVoiceManager_4;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_8 = (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)il2cpp_codegen_object_new(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ChannelTextMessageChangedHandler__ctor_mADA4DB349C64E9FF4FBD47E45FC3FD41CE41CBD9(L_8, __this, (intptr_t)((void*)TextChatUI_OnTextMessageLogReceivedEvent_m052C3A295924666088CACE3688EFAE2E4CE7AB9C_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		VivoxVoiceManager_add_OnTextMessageLogReceivedEvent_mB8D5A4A7D5695AE05C0EE4668CAE1CFFB4A534EC(L_7, L_8, NULL);
		// EnterButton.onClick.AddListener(SubmitTextToVivox);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___EnterButton_11;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)TextChatUI_SubmitTextToVivox_m1A72C98FD5B63E7B46C30692E066E263A2F08201_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// MessageInputField.onEndEdit.AddListener((string text) => { EnterKeyOnTextField(); });
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___MessageInputField_13;
		NullCheck(L_12);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_13;
		L_13 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_12, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_14 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_14, __this, (intptr_t)((void*)TextChatUI_U3CAwakeU3Eb__11_0_m340F5DBEAEC19727D14A6B1890BE3DA8584BDE79_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_13, L_14, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// SendTTSMessageButton.onClick.AddListener(SubmitTTSMessageToVivox);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___SendTTSMessageButton_12;
		NullCheck(L_15);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_16;
		L_16 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_15, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, __this, (intptr_t)((void*)TextChatUI_SubmitTTSMessageToVivox_mDA9AA740530FD53271A50C916FB1B4EC8848E126_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_16, L_17, NULL);
		// ToggleTTS.onValueChanged.AddListener(TTSToggleValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = __this->___ToggleTTS_14;
		NullCheck(L_18);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_19 = L_18->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_20 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_20, __this, (intptr_t)((void*)TextChatUI_TTSToggleValueChanged_mDE90661640EC052C8BA6FF04E8DB7B2C972DE945_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_19, L_20, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// if (_vivoxVoiceManager.ActiveChannels.Count > 0)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_21 = __this->____vivoxVoiceManager_4;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_21, NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_22);
		V_1 = (bool)((((int32_t)L_23) > ((int32_t)0))? 1 : 0);
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_0131;
		}
	}
	{
		// _lobbyChannelId = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName).Key;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_25 = __this->____vivoxVoiceManager_4;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_27 = ((U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_1;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_28 = L_27;
		G_B4_0 = L_28;
		G_B4_1 = L_26;
		G_B4_2 = __this;
		if (L_28)
		{
			G_B5_0 = L_28;
			G_B5_1 = L_26;
			G_B5_2 = __this;
			goto IL_0121;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B* L_29 = ((U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_30 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_30, L_29, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__11_1_mCB704AC38ABAE576B9D5D9FAC9BB718522AFACBB_RuntimeMethod_var), NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_31 = L_30;
		((U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_1), (void*)L_31);
		G_B5_0 = L_31;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_0121:
	{
		RuntimeObject* L_32;
		L_32 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62(G_B5_1, G_B5_0, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		NullCheck(L_32);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_33;
		L_33 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_32);
		NullCheck(G_B5_2);
		G_B5_2->____lobbyChannelId_6 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_2->____lobbyChannelId_6), (void*)L_33);
	}

IL_0131:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_OnDestroy_mDF6D778039FF9DA2D5AFE9EF154E3D5EA98C6111 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnParticipantAdded_m9B1F03FE8D1087DD3748DAC055ED554A01C8138C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextChatUI_OnTextMessageLogReceivedEvent_m052C3A295924666088CACE3688EFAE2E4CE7AB9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnParticipantAddedEvent -= OnParticipantAdded;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_1 = (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B(L_1, __this, (intptr_t)((void*)TextChatUI_OnParticipantAdded_m9B1F03FE8D1087DD3748DAC055ED554A01C8138C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnParticipantAddedEvent_mA75BFAB812B1FB27403DFECA298852340DDCDEEE(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnTextMessageLogReceivedEvent -= OnTextMessageLogReceivedEvent;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->____vivoxVoiceManager_4;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_3 = (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)il2cpp_codegen_object_new(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ChannelTextMessageChangedHandler__ctor_mADA4DB349C64E9FF4FBD47E45FC3FD41CE41CBD9(L_3, __this, (intptr_t)((void*)TextChatUI_OnTextMessageLogReceivedEvent_m052C3A295924666088CACE3688EFAE2E4CE7AB9C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnTextMessageLogReceivedEvent_m6B49FED4541B6B1DC2A09C30143FC85ECEF3D415(L_2, L_3, NULL);
		// EnterButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___EnterButton_11;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_4, NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_5, NULL);
		// MessageInputField.onEndEdit.RemoveAllListeners();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___MessageInputField_13;
		NullCheck(L_6);
		EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* L_7;
		L_7 = InputField_get_onEndEdit_m92C86FF7CA6108C4B14392CED20C9ED9D39AD9A3(L_6, NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_7, NULL);
		// SendTTSMessageButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___SendTTSMessageButton_12;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		NullCheck(L_9);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_9, NULL);
		// ToggleTTS.onValueChanged.RemoveAllListeners();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = __this->___ToggleTTS_14;
		NullCheck(L_10);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_11 = L_10->___onValueChanged_23;
		NullCheck(L_11);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_11, NULL);
		// }
		return;
	}
}
// System.Void TextChatUI::TTSToggleValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_TTSToggleValueChanged_mDE90661640EC052C8BA6FF04E8DB7B2C972DE945 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, bool ___toggleTTS0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!ToggleTTS.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___ToggleTTS_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// _vivoxVoiceManager.LoginSession.TTS.CancelDestination(TTSDestination.QueuedLocalPlayback);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_3 = __this->____vivoxVoiceManager_4;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___LoginSession_21;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void VivoxUnity.ITextToSpeech::CancelDestination(VivoxUnity.TTSDestination) */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_5, 4);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::ClearMessageObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearMessageObjectPool_mBCD0B6D80A6CDBA228DBC0FA0BED8D54CC89B780 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < _messageObjPool.Count; i++)
		V_0 = 0;
		goto IL_001d;
	}

IL_0005:
	{
		// Destroy(_messageObjPool[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____messageObjPool_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// for (int i = 0; i < _messageObjPool.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < _messageObjPool.Count; i++)
		int32_t L_4 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____messageObjPool_7;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// _messageObjPool.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->____messageObjPool_7;
		NullCheck(L_8);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_8, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TextChatUI::ClearOutTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_ClearOutTextField_m909C38780BAB10A25BE351008364D45CAD4748FF (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageInputField.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___MessageInputField_13;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// MessageInputField.Select();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___MessageInputField_13;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(38 /* System.Void UnityEngine.UI.Selectable::Select() */, L_2);
		// MessageInputField.ActivateInputField();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___MessageInputField_13;
		NullCheck(L_3);
		InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05(L_3, NULL);
		// }
		return;
	}
}
// System.Void TextChatUI::EnterKeyOnTextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_EnterKeyOnTextField_mF14363D357629E2A4B8C4F2C13E407350FED1CD0 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(!Input.GetKeyDown(KeyCode.Return))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)13), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_0019;
	}

IL_0012:
	{
		// SubmitTextToVivox();
		TextChatUI_SubmitTextToVivox_m1A72C98FD5B63E7B46C30692E066E263A2F08201(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::SubmitTextToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_SubmitTextToVivox_m1A72C98FD5B63E7B46C30692E066E263A2F08201 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (string.IsNullOrEmpty(MessageInputField.text))
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___MessageInputField_13;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_003e;
	}

IL_0018:
	{
		// _vivoxVoiceManager.SendTextMessage(MessageInputField.text, _lobbyChannelId);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_4 = __this->____vivoxVoiceManager_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___MessageInputField_13;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_5, NULL);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_7 = __this->____lobbyChannelId_6;
		NullCheck(L_4);
		VivoxVoiceManager_SendTextMessage_mD8BFEDDD0E2D0AC542C62E9930FB1C882D913519(L_4, L_6, L_7, (String_t*)NULL, (String_t*)NULL, NULL);
		// ClearOutTextField();
		TextChatUI_ClearOutTextField_m909C38780BAB10A25BE351008364D45CAD4748FF(__this, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.String TextChatUI::TruncateAtWord(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextChatUI_TruncateAtWord_m514789EFD5954E8401AAABB86B481E4EE3FD8001 (String_t* ___value0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (value == null || value.Length < length || value.IndexOf(" ", length) == -1)
		String_t* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = ___value0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		int32_t L_3 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = ___value0;
		int32_t L_5 = ___length1;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_5, NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B4_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B4_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		// return value;
		String_t* L_8 = ___value0;
		V_1 = L_8;
		goto IL_003d;
	}

IL_0027:
	{
		// return value.Substring(0, value.IndexOf(" ", length));
		String_t* L_9 = ___value0;
		String_t* L_10 = ___value0;
		int32_t L_11 = ___length1;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_11, NULL);
		NullCheck(L_9);
		String_t* L_13;
		L_13 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, 0, L_12, NULL);
		V_1 = L_13;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		String_t* L_14 = V_1;
		return L_14;
	}
}
// System.Void TextChatUI::SubmitTTSMessageToVivox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_SubmitTTSMessageToVivox_mDA9AA740530FD53271A50C916FB1B4EC8848E126 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* V_0 = NULL;
	bool V_1 = false;
	{
		// if (string.IsNullOrEmpty(MessageInputField.text))
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___MessageInputField_13;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_0048;
	}

IL_0018:
	{
		// var ttsMessage = new TTSMessage(MessageInputField.text, TTSDestination.QueuedRemoteTransmissionWithLocalPlayback);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___MessageInputField_13;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_4, NULL);
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_6 = (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E*)il2cpp_codegen_object_new(TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA(L_6, L_5, 5, NULL);
		V_0 = L_6;
		// _vivoxVoiceManager.LoginSession.TTS.Speak(ttsMessage);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_7 = __this->____vivoxVoiceManager_4;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___LoginSession_21;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* VivoxUnity.ITextToSpeech VivoxUnity.ILoginSession::get_TTS() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_8);
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* >::Invoke(3 /* System.Void VivoxUnity.ITextToSpeech::Speak(VivoxUnity.TTSMessage) */, ITextToSpeech_t3608AB8595AB9EBA29650E8CBB3DF269AE489C49_il2cpp_TypeInfo_var, L_9, L_10);
		// ClearOutTextField();
		TextChatUI_ClearOutTextField_m909C38780BAB10A25BE351008364D45CAD4748FF(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TextChatUI::SendScrollRectToBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextChatUI_SendScrollRectToBottom_m3FCB0577B8EB4B7A2F03BBC5ECCA004109754E90 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* L_0 = (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932*)il2cpp_codegen_object_new(U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendScrollRectToBottomU3Ed__20__ctor_m098C10913DB994973460712F752C658DEC66C07F(L_0, 0, NULL);
		U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TextChatUI::DisplayHostingMessage(VivoxUnity.IChannelTextMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_DisplayHostingMessage_m2EBEF5D7FE427572A9609CBAD269CDC8F7CD5051 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, RuntimeObject* ___channelTextMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	{
		// var newMessageObj = Instantiate(MessageObject, ChatContentObj.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MessageObject_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___ChatContentObj_9;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_3;
		// _messageObjPool.Add(newMessageObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____messageObjPool_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_5, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Text newMessageText = newMessageObj.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_6, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		V_1 = L_7;
		// }
		return;
	}
}
// System.Void TextChatUI::OnParticipantAdded(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_OnParticipantAdded_m9B1F03FE8D1087DD3748DAC055ED554A01C8138C (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mEE539C3B1B8D539AF945B63CBF3286B51040B3C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_vivoxVoiceManager.ActiveChannels.Count > 0)
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = __this->____vivoxVoiceManager_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_1);
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// _lobbyChannelId = _vivoxVoiceManager.ActiveChannels.FirstOrDefault().Channel;
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_4 = __this->____vivoxVoiceManager_4;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mEE539C3B1B8D539AF945B63CBF3286B51040B3C4(L_5, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_mEE539C3B1B8D539AF945B63CBF3286B51040B3C4_RuntimeMethod_var);
		NullCheck(L_6);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_7;
		L_7 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_6);
		__this->____lobbyChannelId_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lobbyChannelId_6), (void*)L_7);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::OnTextMessageLogReceivedEvent(System.String,VivoxUnity.IChannelTextMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_OnTextMessageLogReceivedEvent_m052C3A295924666088CACE3688EFAE2E4CE7AB9C (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral861698B5BDD391BC46A7D641FEBD491AFBB82D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F8B627CF4695408981A5FA5E7908623ADE1956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADCFF2F9527E00370498BA0B164417E77D2B663);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// if (!String.IsNullOrEmpty(channelTextMessage.ApplicationStanzaNamespace))
		RuntimeObject* L_0 = ___channelTextMessage1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String VivoxUnity.IChannelTextMessage::get_ApplicationStanzaNamespace() */, IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0129;
	}

IL_0019:
	{
		// var newMessageObj = Instantiate(MessageObject, ChatContentObj.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___MessageObject_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___ChatContentObj_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_7;
		// _messageObjPool.Add(newMessageObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->____messageObjPool_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_8, L_9, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// Text newMessageText = newMessageObj.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11;
		L_11 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_10, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		V_1 = L_11;
		// if (channelTextMessage.FromSelf)
		RuntimeObject* L_12 = ___channelTextMessage1;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean VivoxUnity.IChannelTextMessage::get_FromSelf() */, IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var, L_12);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0097;
		}
	}
	{
		// newMessageText.alignment = TextAnchor.MiddleRight;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = V_1;
		NullCheck(L_15);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_15, 5, NULL);
		// newMessageText.text = string.Format($"{channelTextMessage.Message} :<color=blue>{sender} </color>\n<color=#5A5A5A><size=8>{channelTextMessage.ReceivedTime}</size></color>");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = V_1;
		RuntimeObject* L_17 = ___channelTextMessage1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_17);
		String_t* L_19 = ___sender0;
		RuntimeObject* L_20 = ___channelTextMessage1;
		NullCheck(L_20);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21;
		L_21 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime VivoxUnity.ITextMessage::get_ReceivedTime() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_20);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = L_21;
		RuntimeObject* L_23 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralEADCFF2F9527E00370498BA0B164417E77D2B663, L_18, L_19, L_23, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25;
		L_25 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		String_t* L_26;
		L_26 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_24, L_25, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_26);
		// StartCoroutine(SendScrollRectToBottom());
		RuntimeObject* L_27;
		L_27 = TextChatUI_SendScrollRectToBottom_m3FCB0577B8EB4B7A2F03BBC5ECCA004109754E90(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_28;
		L_28 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_27, NULL);
		goto IL_0129;
	}

IL_0097:
	{
		// newMessageText.alignment = TextAnchor.MiddleLeft;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = V_1;
		NullCheck(L_29);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_29, 3, NULL);
		// newMessageText.text = string.Format($"<color=green>{sender} </color>: {channelTextMessage.Message}\n<color=#5A5A5A><size=8>{channelTextMessage.ReceivedTime}</size></color>");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = V_1;
		String_t* L_31 = ___sender0;
		RuntimeObject* L_32 = ___channelTextMessage1;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_32);
		RuntimeObject* L_34 = ___channelTextMessage1;
		NullCheck(L_34);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_35;
		L_35 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0 /* System.DateTime VivoxUnity.ITextMessage::get_ReceivedTime() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_34);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_36 = L_35;
		RuntimeObject* L_37 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38;
		L_38 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral861698B5BDD391BC46A7D641FEBD491AFBB82D39, L_31, L_33, L_37, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39;
		L_39 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		String_t* L_40;
		L_40 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_38, L_39, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_40);
		// if (ToggleTTS.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_41 = __this->___ToggleTTS_14;
		NullCheck(L_41);
		bool L_42;
		L_42 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_41, NULL);
		V_4 = L_42;
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_0128;
		}
	}
	{
		// new TTSMessage($"{sender} said,", TTSDestination.QueuedLocalPlayback).Speak(_vivoxVoiceManager.LoginSession);
		String_t* L_44 = ___sender0;
		String_t* L_45;
		L_45 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_44, _stringLiteral95F8B627CF4695408981A5FA5E7908623ADE1956, NULL);
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_46 = (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E*)il2cpp_codegen_object_new(TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA(L_46, L_45, 4, NULL);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_47 = __this->____vivoxVoiceManager_4;
		NullCheck(L_47);
		RuntimeObject* L_48 = L_47->___LoginSession_21;
		NullCheck(L_46);
		TTSMessage_Speak_m92E6065934822C57329E81D4091624E79F24A5E6(L_46, L_48, NULL);
		// new TTSMessage($"{channelTextMessage.Message}", TTSDestination.QueuedLocalPlayback).Speak(_vivoxVoiceManager.LoginSession);
		RuntimeObject* L_49 = ___channelTextMessage1;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_49);
		String_t* L_51 = L_50;
		G_B6_0 = L_51;
		if (L_51)
		{
			G_B7_0 = L_51;
			goto IL_0110;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0110:
	{
		TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E* L_52 = (TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E*)il2cpp_codegen_object_new(TTSMessage_t4393E6E8FEA17A968AA83E29A976090D11DF6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		TTSMessage__ctor_m4476A00818F82EDCCCB43DB82874E027CE2D10DA(L_52, G_B7_0, 4, NULL);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_53 = __this->____vivoxVoiceManager_4;
		NullCheck(L_53);
		RuntimeObject* L_54 = L_53->___LoginSession_21;
		NullCheck(L_52);
		TTSMessage_Speak_m92E6065934822C57329E81D4091624E79F24A5E6(L_52, L_54, NULL);
	}

IL_0128:
	{
	}

IL_0129:
	{
		// }
		return;
	}
}
// System.Void TextChatUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI__ctor_mF60A3C86E5A055E7927781380443D2D2C8C9417E (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> _messageObjPool = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____messageObjPool_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____messageObjPool_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TextChatUI::<Awake>b__11_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextChatUI_U3CAwakeU3Eb__11_0_m340F5DBEAEC19727D14A6B1890BE3DA8584BDE79 (TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// MessageInputField.onEndEdit.AddListener((string text) => { EnterKeyOnTextField(); });
		TextChatUI_EnterKeyOnTextField_mF14363D357629E2A4B8C4F2C13E407350FED1CD0(__this, NULL);
		// MessageInputField.onEndEdit.AddListener((string text) => { EnterKeyOnTextField(); });
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
// System.Void TextChatUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m90E4E4043C07B2AE2981B6C105312FB93F09ECAA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B* L_0 = (U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B*)il2cpp_codegen_object_new(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m74F9659FF7D23F12454B4ED0C866A216F5AEC4A5(L_0, NULL);
		((U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TextChatUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74F9659FF7D23F12454B4ED0C866A216F5AEC4A5 (U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TextChatUI/<>c::<Awake>b__11_1(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__11_1_mCB704AC38ABAE576B9D5D9FAC9BB718522AFACBB (U3CU3Ec_tA807953430C4622F4514FC0F3209C9B0E797485B* __this, RuntimeObject* ___ac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lobbyChannelId = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName).Key;
		RuntimeObject* L_0 = ___ac0;
		NullCheck(L_0);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1;
		L_1 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral0172FB26015EA976F428ECC1497ADF6FF39C4BFE, NULL);
		return L_3;
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
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20__ctor_m098C10913DB994973460712F752C658DEC66C07F (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20_System_IDisposable_Dispose_mE276A94619D97FECE610B1BC98231F7CAC172DFB (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TextChatUI/<SendScrollRectToBottom>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendScrollRectToBottomU3Ed__20_MoveNext_mCDAE3C9B5D6157DEA10CF87FA3915783A3926986 (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_003f;
	}

IL_001f:
	{
		goto IL_0076;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_2 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_2, NULL);
		__this->___U3CU3E2__current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_2);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _textChatScrollRect.normalizedPosition = new Vector2(0, 0);
		TextChatUI_t882CAE03AD9AB73426F8CC1368ECC13F34B18363* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = L_3->____textChatScrollRect_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E(L_4, L_5, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object TextChatUI/<SendScrollRectToBottom>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScrollRectToBottomU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7745F22E9309943E6BB7862E836D0FB0EDA33009 (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TextChatUI/<SendScrollRectToBottom>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_Reset_mC319DF7C03405FB1AD59AEA6FD23EFB0428DAA00 (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_Reset_mC319DF7C03405FB1AD59AEA6FD23EFB0428DAA00_RuntimeMethod_var)));
	}
}
// System.Object TextChatUI/<SendScrollRectToBottom>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScrollRectToBottomU3Ed__20_System_Collections_IEnumerator_get_Current_m50B2CF079532B5CD57135EE45F43894DCEBDAFDD (U3CSendScrollRectToBottomU3Ed__20_t9430CC0310C3E78D00D17E98CECBEC788691F932* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void VivoxVoiceManager::add_OnSpeechDetectedEvent(VivoxVoiceManager/ParticipantValueChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnSpeechDetectedEvent_mFBADDC660056EB3850B2441583935179EDACD02A (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* V_0 = NULL;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* V_1 = NULL;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* V_2 = NULL;
	{
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_0 = __this->___OnSpeechDetectedEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_2 = V_1;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF_il2cpp_TypeInfo_var));
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF** L_5 = (&__this->___OnSpeechDetectedEvent_4);
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_6 = V_2;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_7 = V_1;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_9 = V_0;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*)L_9) == ((RuntimeObject*)(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnSpeechDetectedEvent(VivoxVoiceManager/ParticipantValueChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnSpeechDetectedEvent_mA68E1004286A1FC789863895A04F0E7C930A675D (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* V_0 = NULL;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* V_1 = NULL;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* V_2 = NULL;
	{
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_0 = __this->___OnSpeechDetectedEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_2 = V_1;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF_il2cpp_TypeInfo_var));
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF** L_5 = (&__this->___OnSpeechDetectedEvent_4);
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_6 = V_2;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_7 = V_1;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_9 = V_0;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*)L_9) == ((RuntimeObject*)(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnAudioEnergyChangedEvent(VivoxVoiceManager/ParticipantValueUpdatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnAudioEnergyChangedEvent_mDE141AFEFCB2616D597B362645B47365E8347B6F (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* V_0 = NULL;
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* V_1 = NULL;
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* V_2 = NULL;
	{
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_0 = __this->___OnAudioEnergyChangedEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_2 = V_1;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0_il2cpp_TypeInfo_var));
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0** L_5 = (&__this->___OnAudioEnergyChangedEvent_5);
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_6 = V_2;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_7 = V_1;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_9 = V_0;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*)L_9) == ((RuntimeObject*)(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnAudioEnergyChangedEvent(VivoxVoiceManager/ParticipantValueUpdatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnAudioEnergyChangedEvent_m7EAA5B19612FFF4862A2F6D23AFA1A3060A8F860 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* V_0 = NULL;
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* V_1 = NULL;
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* V_2 = NULL;
	{
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_0 = __this->___OnAudioEnergyChangedEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_1 = V_0;
		V_1 = L_1;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_2 = V_1;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*)CastclassSealed((RuntimeObject*)L_4, ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0_il2cpp_TypeInfo_var));
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0** L_5 = (&__this->___OnAudioEnergyChangedEvent_5);
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_6 = V_2;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_7 = V_1;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_9 = V_0;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*)L_9) == ((RuntimeObject*)(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantAddedEvent_m500BDC8B95BB46783221FC5FB10E39176A19206B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_0 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_1 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_0 = __this->___OnParticipantAddedEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_2 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C** L_5 = (&__this->___OnParticipantAddedEvent_6);
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_6 = V_2;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_7 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_9 = V_0;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantAddedEvent_mA75BFAB812B1FB27403DFECA298852340DDCDEEE (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_0 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_1 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_0 = __this->___OnParticipantAddedEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_2 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C** L_5 = (&__this->___OnParticipantAddedEvent_6);
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_6 = V_2;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_7 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_9 = V_0;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantRemovedEvent_mCBCBF1FB44335BDA56C33EF9DC1AC680B857F407 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_0 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_1 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_0 = __this->___OnParticipantRemovedEvent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_2 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C** L_5 = (&__this->___OnParticipantRemovedEvent_7);
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_6 = V_2;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_7 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_9 = V_0;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnParticipantRemovedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantRemovedEvent_mB98F198869871340CC6ED5EE04E7497600831B7B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_0 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_1 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* V_2 = NULL;
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_0 = __this->___OnParticipantRemovedEvent_7;
		V_0 = L_0;
	}

IL_0007:
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_1 = V_0;
		V_1 = L_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_2 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)CastclassSealed((RuntimeObject*)L_4, ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C_il2cpp_TypeInfo_var));
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C** L_5 = (&__this->___OnParticipantRemovedEvent_7);
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_6 = V_2;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_7 = V_1;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_8;
		L_8 = InterlockedCompareExchangeImpl<ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*>(L_5, L_6, L_7);
		V_0 = L_8;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_9 = V_0;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_10 = V_1;
		if ((!(((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_9) == ((RuntimeObject*)(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnTextMessageLogReceivedEvent_mB8D5A4A7D5695AE05C0EE4668CAE1CFFB4A534EC (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* V_0 = NULL;
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* V_1 = NULL;
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* V_2 = NULL;
	{
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_0 = __this->___OnTextMessageLogReceivedEvent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_1 = V_0;
		V_1 = L_1;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_2 = V_1;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)CastclassSealed((RuntimeObject*)L_4, ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var));
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18** L_5 = (&__this->___OnTextMessageLogReceivedEvent_8);
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_6 = V_2;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_7 = V_1;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_8;
		L_8 = InterlockedCompareExchangeImpl<ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*>(L_5, L_6, L_7);
		V_0 = L_8;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_9 = V_0;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_10 = V_1;
		if ((!(((RuntimeObject*)(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)L_9) == ((RuntimeObject*)(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnTextMessageLogReceivedEvent(VivoxVoiceManager/ChannelTextMessageChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnTextMessageLogReceivedEvent_m6B49FED4541B6B1DC2A09C30143FC85ECEF3D415 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* V_0 = NULL;
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* V_1 = NULL;
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* V_2 = NULL;
	{
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_0 = __this->___OnTextMessageLogReceivedEvent_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_1 = V_0;
		V_1 = L_1;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_2 = V_1;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)CastclassSealed((RuntimeObject*)L_4, ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18_il2cpp_TypeInfo_var));
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18** L_5 = (&__this->___OnTextMessageLogReceivedEvent_8);
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_6 = V_2;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_7 = V_1;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_8;
		L_8 = InterlockedCompareExchangeImpl<ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*>(L_5, L_6, L_7);
		V_0 = L_8;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_9 = V_0;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_10 = V_1;
		if ((!(((RuntimeObject*)(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)L_9) == ((RuntimeObject*)(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedInEvent_m6044CEDB43F4307A1B1F5347517D359C5CAC9DAE (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_0 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_1 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_2 = NULL;
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_0 = __this->___OnUserLoggedInEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_2 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164** L_5 = (&__this->___OnUserLoggedInEvent_9);
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_6 = V_2;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_7 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_9 = V_0;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedInEvent_m9B3EFC525DE4B3D712373728AAEF381230CEA9C7 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_0 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_1 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_2 = NULL;
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_0 = __this->___OnUserLoggedInEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_2 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164** L_5 = (&__this->___OnUserLoggedInEvent_9);
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_6 = V_2;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_7 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_9 = V_0;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::add_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedOutEvent_mFE1D95D80D39419879FBCA469F5F923D824924C2 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_0 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_1 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_2 = NULL;
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_0 = __this->___OnUserLoggedOutEvent_10;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_2 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164** L_5 = (&__this->___OnUserLoggedOutEvent_10);
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_6 = V_2;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_7 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_9 = V_0;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VivoxVoiceManager::remove_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedOutEvent_m2AFC45AD04360C25863812647DCECB0CEA64ADEE (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_0 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_1 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* V_2 = NULL;
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_0 = __this->___OnUserLoggedOutEvent_10;
		V_0 = L_0;
	}

IL_0007:
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_1 = V_0;
		V_1 = L_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_2 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)CastclassSealed((RuntimeObject*)L_4, LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164_il2cpp_TypeInfo_var));
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164** L_5 = (&__this->___OnUserLoggedOutEvent_10);
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_6 = V_2;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_7 = V_1;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_8;
		L_8 = InterlockedCompareExchangeImpl<LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*>(L_5, L_6, L_7);
		V_0 = L_8;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_9 = V_0;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_10 = V_1;
		if ((!(((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_9) == ((RuntimeObject*)(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Uri VivoxVoiceManager::get__serverUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* VivoxVoiceManager_get__serverUri_m80C45EF3FF07AC74160272853BA129209FE6BCB7 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => new Uri(_server);
		String_t* L_0 = __this->____server_11;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void VivoxVoiceManager::set__serverUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_set__serverUri_mBF2A06ADDAFE50209CB772FD1CAA702E95B2ACF9 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// _server = value.ToString();
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		__this->____server_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____server_11), (void*)L_1);
		// }
		return;
	}
}
// VivoxVoiceManager VivoxVoiceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* VivoxVoiceManager_get_Instance_mF38A45749469476C8A587005846BEABF5C1210A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_mF6DF04DB1B7CE5B7FC8BE0B29D0B1DF7D7E0B087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE158875ED390F9488AC132A775BB0C1A63CBB4D7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* V_5 = NULL;
	{
		// lock (m_Lock)
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Lock_18;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a5;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_00a5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (m_Instance == null)
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
				VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_4 = ((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_2 = L_5;
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0082_1;
				}
			}
			{
				// m_Instance = (VivoxVoiceManager)FindObjectOfType(typeof(VivoxVoiceManager));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_8;
				L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
				L_9 = Object_FindObjectOfType_mF9A94A2059CE512E485297DDBBA51C02B451E41F(L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
				((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19 = ((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8*)CastclassClass((RuntimeObject*)L_9, VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19), (void*)((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8*)CastclassClass((RuntimeObject*)L_9, VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var)));
				// if (m_Instance == null)
				VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_10 = ((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19;
				bool L_11;
				L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_0081_1;
				}
			}
			{
				// var singletonObject = new GameObject();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_13, NULL);
				V_4 = L_13;
				// m_Instance = singletonObject.AddComponent<VivoxVoiceManager>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_4;
				NullCheck(L_14);
				VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_15;
				L_15 = GameObject_AddComponent_TisVivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_mF6DF04DB1B7CE5B7FC8BE0B29D0B1DF7D7E0B087(L_14, GameObject_AddComponent_TisVivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_mF6DF04DB1B7CE5B7FC8BE0B29D0B1DF7D7E0B087_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
				((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19), (void*)L_15);
				// singletonObject.name = typeof(VivoxVoiceManager).ToString() + " (Singleton)";
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
				String_t* L_20;
				L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_19, _stringLiteralE158875ED390F9488AC132A775BB0C1A63CBB4D7, NULL);
				NullCheck(L_16);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_16, L_20, NULL);
			}

IL_0081_1:
			{
			}

IL_0082_1:
			{
				// DontDestroyOnLoad(m_Instance.gameObject);
				il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
				VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_21 = ((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19;
				NullCheck(L_21);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
				L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_22, NULL);
				// return m_Instance;
				VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_23 = ((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19;
				V_5 = L_23;
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// }
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_24 = V_5;
		return L_24;
	}
}
// VivoxUnity.LoginState VivoxVoiceManager::get_LoginState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = __this->___U3CLoginStateU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void VivoxVoiceManager::set_LoginState(VivoxUnity.LoginState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_LoginState_m758BF8328E2364F4643D5F73B1A0D16A8D171FA8 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CLoginStateU3Ek__BackingField_20 = L_0;
		return;
	}
}
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxVoiceManager::get_ActiveChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// public VivoxUnity.IReadOnlyDictionary<ChannelId, IChannelSession> ActiveChannels => LoginSession?.ChannelSessions;
		RuntimeObject* L_0 = __this->___LoginSession_21;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxUnity.ILoginSession::get_ChannelSessions() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// VivoxUnity.IAudioDevices VivoxVoiceManager::get_AudioInputDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_AudioInputDevices_m5B807A4285A1303C3C30420A0430971EAF38360D (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioInputDevices => _client.AudioInputDevices;
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = __this->____client_16;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Client_get_AudioInputDevices_mEF09E43DA815E02795AD6E7A265CB6397DC6910A_inline(L_0, NULL);
		return L_1;
	}
}
// VivoxUnity.IAudioDevices VivoxVoiceManager::get_AudioOutputDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_AudioOutputDevices_m0299A9B9F7C2B98AD831B122846EA1423A3A089C (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioOutputDevices => _client.AudioOutputDevices;
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = __this->____client_16;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Client_get_AudioOutputDevices_m54D7860B92185C76D3E1E2A3EFAC8C8E955D3C52_inline(L_0, NULL);
		return L_1;
	}
}
// VivoxUnity.IChannelSession VivoxVoiceManager::get_TransmittingSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_TransmittingSession_m39CB237844F84DA8E331A99A2B88D792D22D236F (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_TransmittingSessionU3Eb__54_0_mCD60EA9DCB9B14D3A1D4920037DC81DFCD0262CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// if (_client == null)
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = __this->____client_16;
		V_0 = (bool)((((RuntimeObject*)(Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new NullReferenceException("client");
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_get_TransmittingSession_m39CB237844F84DA8E331A99A2B88D792D22D236F_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return _client.GetLoginSession(_accountId).ChannelSessions.FirstOrDefault(x => x.IsTransmitting);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_3 = __this->____client_16;
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_4 = __this->____accountId_17;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_3, L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxUnity.ILoginSession::get_ChannelSessions() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_5);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_7 = ((U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var))->___U3CU3E9__54_0_1;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var);
		U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD* L_9 = ((U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_10 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3Cget_TransmittingSessionU3Eb__54_0_mCD60EA9DCB9B14D3A1D4920037DC81DFCD0262CC_RuntimeMethod_var), NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_11 = L_10;
		((U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var))->___U3CU3E9__54_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var))->___U3CU3E9__54_0_1), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_004e:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62(G_B4_1, G_B4_0, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m0A71F2975F578F7FE36DA69F7F3B5FDADF4F0B62_RuntimeMethod_var);
		V_1 = L_12;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		RuntimeObject* L_13 = V_1;
		return L_13;
	}
}
// System.Void VivoxVoiceManager::set_TransmittingSession(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_TransmittingSession_mFB6D73CE1072DA40559D1D182A4068AD2639EDA9 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// _client.GetLoginSession(_accountId).SetTransmissionMode(TransmissionMode.Single, value.Channel);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_2 = __this->____client_16;
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_3 = __this->____accountId_17;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_2, L_3, NULL);
		RuntimeObject* L_5 = ___value0;
		NullCheck(L_5);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_6;
		L_6 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(45 /* System.Void VivoxUnity.ILoginSession::SetTransmissionMode(VivoxUnity.TransmissionMode,VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_4, 1, L_6);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Awake_mC3E33BA280651FA2BA6B59DF1BB8CA751D30A368 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral282CB43FF4408CF43337C7A755263A1653212341);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Instance != this)
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_0 = ((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Instance_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogWarning("Multiple VivoxVoiceManager detected in the scene. Only one VivoxVoiceManager can exist at a time. The duplicate VivoxVoiceManager will be destroyed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral282CB43FF4408CF43337C7A755263A1653212341, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// return;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Start_mE33349D932346267874B2DE0B5CC864B39F9785A (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4942855047E86FFC88CE37CAE0742423E10F4038);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E8F452E773B053530D43B51D8A29193CFA1BF5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// if (_serverUri.ToString() == "https://GETFROMPORTAL.www.vivox.com/api2" ||
		//     _domain == "GET VALUE FROM VIVOX DEVELOPER PORTAL" ||
		//     _tokenKey == "GET VALUE FROM VIVOX DEVELOPER PORTAL" ||
		//     _tokenIssuer == "GET VALUE FROM VIVOX DEVELOPER PORTAL")
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0;
		L_0 = VivoxVoiceManager_get__serverUri_m80C45EF3FF07AC74160272853BA129209FE6BCB7(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralC7E8F452E773B053530D43B51D8A29193CFA1BF5, NULL);
		if (L_2)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_3 = __this->____domain_12;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659, NULL);
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_5 = __this->____tokenKey_14;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659, NULL);
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_7 = __this->____tokenIssuer_13;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659, NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_004f;
	}

IL_004e:
	{
		G_B5_0 = 1;
	}

IL_004f:
	{
		V_0 = (bool)G_B5_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogError("The default VivoxVoiceServer values (Server, Domain, TokenIssuer, and TokenKey) must be replaced with application specific issuer and key values from your developer account.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral4942855047E86FFC88CE37CAE0742423E10F4038, NULL);
	}

IL_0060:
	{
		// _client.Uninitialize();
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_10 = __this->____client_16;
		NullCheck(L_10);
		Client_Uninitialize_mEC913D45A5B61D0929FECC5AF33E991514458DFB(L_10, NULL);
		// _client.Initialize();
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_11 = __this->____client_16;
		NullCheck(L_11);
		Client_Initialize_m88F73EF0AE28DBFB33E413911CEC03ACA6F339AE(L_11, (VivoxConfig_t744498CB94E4A4610DB5752ACE2C01BDC566CA47*)NULL, NULL);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnApplicationQuit_m34FE7E89CF9ADBA0C23902E000116577F56AFE63 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9677373A0B351941BE702A287F0B29AB6FC8B438);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Client.Cleanup();
		Client_Cleanup_m69C4C3A1466A15E8BF0AD46701167071727F6B15(NULL);
		// if (_client != null)
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_0 = __this->____client_16;
		V_0 = (bool)((!(((RuntimeObject*)(Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// VivoxLog("Uninitializing client.");
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, _stringLiteral9677373A0B351941BE702A287F0B29AB6FC8B438, NULL);
		// _client.Uninitialize();
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_2 = __this->____client_16;
		NullCheck(L_2);
		Client_Uninitialize_mEC913D45A5B61D0929FECC5AF33E991514458DFB(L_2, NULL);
		// _client = null;
		__this->____client_16 = (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_16), (void*)(Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Login(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Login_m53DEA79E943747428EEBD22E82EAC66DB085DF78 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___displayName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_U3CLoginU3Eb__59_0_m0D7DA3D4159BE9E06465CFCE1FA34C6F960599FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string uniqueId = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// _accountId = new AccountId(_tokenIssuer, uniqueId, _domain, displayName);
		String_t* L_2 = __this->____tokenIssuer_13;
		String_t* L_3 = V_0;
		String_t* L_4 = __this->____domain_12;
		String_t* L_5 = ___displayName0;
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_6 = (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368*)il2cpp_codegen_object_new(AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AccountId__ctor_m26735BAFCF2E01C6B447898345BD28A45AD3FE44(L_6, L_2, L_3, L_4, L_5, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		__this->____accountId_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____accountId_17), (void*)L_6);
		// LoginSession = _client.GetLoginSession(_accountId);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_7 = __this->____client_16;
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_8 = __this->____accountId_17;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_7, L_8, NULL);
		__this->___LoginSession_21 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LoginSession_21), (void*)L_9);
		// LoginSession.PropertyChanged += OnLoginSessionPropertyChanged;
		RuntimeObject* L_10 = __this->___LoginSession_21;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_11 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_11, __this, (intptr_t)((void*)VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_10, L_11);
		// LoginSession.BeginLogin(_serverUri, LoginSession.GetLoginToken(_tokenKey, _tokenExpiration), SubscriptionMode.Accept, null, null, null, ar =>
		// {
		//     try
		//     {
		//         LoginSession.EndLogin(ar);
		//     }
		//     catch (Exception e)
		//     {
		//         // Handle error
		//         VivoxLogError(nameof(e));
		//         // Unbind if we failed to login.
		//         LoginSession.PropertyChanged -= OnLoginSessionPropertyChanged;
		//         return;
		//     }
		// });
		RuntimeObject* L_12 = __this->___LoginSession_21;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13;
		L_13 = VivoxVoiceManager_get__serverUri_m80C45EF3FF07AC74160272853BA129209FE6BCB7(__this, NULL);
		RuntimeObject* L_14 = __this->___LoginSession_21;
		String_t* L_15 = __this->____tokenKey_14;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_16 = __this->____tokenExpiration_15;
		NullCheck(L_14);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker2< String_t*, String_t*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A >::Invoke(47 /* System.String VivoxUnity.ILoginSession::GetLoginToken(System.String,System.TimeSpan) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_14, L_15, L_16);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_18 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_18, __this, (intptr_t)((void*)VivoxVoiceManager_U3CLoginU3Eb__59_0_m0D7DA3D4159BE9E06465CFCE1FA34C6F960599FB_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker7< RuntimeObject*, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, RuntimeObject*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(21 /* System.IAsyncResult VivoxUnity.ILoginSession::BeginLogin(System.Uri,System.String,VivoxUnity.SubscriptionMode,VivoxUnity.IReadOnlyHashSet`1<VivoxUnity.AccountId>,VivoxUnity.IReadOnlyHashSet`1<VivoxUnity.AccountId>,VivoxUnity.IReadOnlyHashSet`1<VivoxUnity.AccountId>,System.AsyncCallback) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_12, L_13, L_17, 0, (RuntimeObject*)NULL, (RuntimeObject*)NULL, (RuntimeObject*)NULL, L_18);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Logout_mF261BA7C59F983338BDDD178C3054C388AB3DC70 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* G_B7_0 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* G_B6_0 = NULL;
	{
		// if (LoginSession != null && LoginState != LoginState.LoggedOut && LoginState != LoginState.LoggingOut)
		RuntimeObject* L_0 = __this->___LoginSession_21;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1;
		L_1 = VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2;
		L_2 = VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline(__this, NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		// OnUserLoggedOutEvent?.Invoke();
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_4 = __this->___OnUserLoggedOutEvent_10;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_5 = L_4;
		G_B6_0 = L_5;
		if (L_5)
		{
			G_B7_0 = L_5;
			goto IL_0031;
		}
	}
	{
		goto IL_0037;
	}

IL_0031:
	{
		NullCheck(G_B7_0);
		LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_inline(G_B7_0, NULL);
	}

IL_0037:
	{
		// LoginSession.PropertyChanged -= OnLoginSessionPropertyChanged;
		RuntimeObject* L_6 = __this->___LoginSession_21;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_7 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_7, __this, (intptr_t)((void*)VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_6, L_7);
		// LoginSession.Logout();
		RuntimeObject* L_8 = __this->___LoginSession_21;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(46 /* System.Void VivoxUnity.ILoginSession::Logout() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_8);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::JoinChannel(System.String,VivoxUnity.ChannelType,VivoxVoiceManager/ChatCapability,System.Boolean,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_JoinChannel_m4F280BE051C67D62DDF48420C9723BE8BC3257B4 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___channelName0, int32_t ___channelType1, int32_t ___chatCapability2, bool ___switchTransmission3, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass61_0_U3CJoinChannelU3Eb__0_mBB10C3FF82B3431047CEBCF2438EC7B4F1DDEE08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C27C9252BDD577AD8270EB246D1191CC7C3091);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* V_1 = NULL;
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* V_2 = NULL;
	{
		// if (LoginState == LoginState.LoggedIn)
		int32_t L_0;
		L_0 = VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0112;
		}
	}
	{
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_2 = (U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass61_0__ctor_mDEC37E47B2C3F5C2BCFEE5EC5E862D092A2537E8(L_2, NULL);
		V_1 = L_2;
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_3 = V_1;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// ChannelId channelId = new ChannelId(_tokenIssuer, channelName, _domain, channelType, properties);
		String_t* L_4 = __this->____tokenIssuer_13;
		String_t* L_5 = ___channelName0;
		String_t* L_6 = __this->____domain_12;
		int32_t L_7 = ___channelType1;
		Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* L_8 = ___properties4;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_9 = (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*)il2cpp_codegen_object_new(ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ChannelId__ctor_m5F76E8868AF058C4223425B06A432D7E4F4A5A70(L_9, L_4, L_5, L_6, L_7, L_8, NULL);
		V_2 = L_9;
		// IChannelSession channelSession = LoginSession.GetChannelSession(channelId);
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_10 = V_1;
		RuntimeObject* L_11 = __this->___LoginSession_21;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(26 /* VivoxUnity.IChannelSession VivoxUnity.ILoginSession::GetChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_10);
		L_10->___channelSession_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___channelSession_0), (void*)L_13);
		// channelSession.PropertyChanged += OnChannelPropertyChanged;
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___channelSession_0;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_16 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_16, __this, (intptr_t)((void*)VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(0 /* System.Void System.ComponentModel.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_15, L_16);
		// channelSession.Participants.AfterKeyAdded += OnParticipantAdded;
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___channelSession_0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_18);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_20 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_20, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(0 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::add_AfterKeyAdded(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_19, L_20);
		// channelSession.Participants.BeforeKeyRemoved += OnParticipantRemoved;
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_21 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->___channelSession_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_22);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_24 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_24, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(2 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::add_BeforeKeyRemoved(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_23, L_24);
		// channelSession.Participants.AfterValueUpdated += OnParticipantValueUpdated;
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_25 = V_1;
		NullCheck(L_25);
		RuntimeObject* L_26 = L_25->___channelSession_0;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_26);
		EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* L_28 = (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*)il2cpp_codegen_object_new(EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067(L_28, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* >::Invoke(4 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::add_AfterValueUpdated(System.EventHandler`1<VivoxUnity.ValueEventArg`2<TK,T>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_27, L_28);
		// channelSession.MessageLog.AfterItemAdded += OnMessageLogRecieved;
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___channelSession_0;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage> VivoxUnity.IChannelSession::get_MessageLog() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_30);
		EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* L_32 = (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*)il2cpp_codegen_object_new(EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474(L_32, __this, (intptr_t)((void*)VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* >::Invoke(0 /* System.Void VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage>::add_AfterItemAdded(System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<T>>) */, IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var, L_31, L_32);
		// channelSession.BeginConnect(chatCapability != ChatCapability.TextOnly, chatCapability != ChatCapability.AudioOnly, switchTransmission, channelSession.GetConnectToken(_tokenKey, _tokenExpiration), ar =>
		// {
		//     try
		//     {
		//         channelSession.EndConnect(ar);
		//     }
		//     catch (Exception e)
		//     {
		//         // Handle error
		//         VivoxLogError($"Could not connect to voice channel: {e.Message}");
		//         return;
		//     }
		// });
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_33 = V_1;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___channelSession_0;
		int32_t L_35 = ___chatCapability2;
		int32_t L_36 = ___chatCapability2;
		bool L_37 = ___switchTransmission3;
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_38 = V_1;
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->___channelSession_0;
		String_t* L_40 = __this->____tokenKey_14;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_41 = __this->____tokenExpiration_15;
		NullCheck(L_39);
		String_t* L_42;
		L_42 = InterfaceFuncInvoker2< String_t*, String_t*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A >::Invoke(27 /* System.String VivoxUnity.IChannelSession::GetConnectToken(System.String,System.TimeSpan) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_39, L_40, L_41);
		U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* L_43 = V_1;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_44 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass61_0_U3CJoinChannelU3Eb__0_mBB10C3FF82B3431047CEBCF2438EC7B4F1DDEE08_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker5< RuntimeObject*, bool, bool, bool, String_t*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(15 /* System.IAsyncResult VivoxUnity.IChannelSession::BeginConnect(System.Boolean,System.Boolean,System.Boolean,System.String,System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_34, (bool)((!(((uint32_t)L_35) <= ((uint32_t)0)))? 1 : 0), (bool)((((int32_t)((((int32_t)L_36) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_37, L_42, L_44);
		goto IL_0120;
	}

IL_0112:
	{
		// VivoxLogError("Cannot join a channel when not logged in.");
		VivoxVoiceManager_VivoxLogError_mBA3C5A126CF342D9D9AA2CC7701731FA7604348C(__this, _stringLiteral88C27C9252BDD577AD8270EB246D1191CC7C3091, NULL);
	}

IL_0120:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::SendTextMessage(System.String,VivoxUnity.ChannelId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_SendTextMessage_mD8BFEDDD0E2D0AC542C62E9930FB1C882D913519 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___messageToSend0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, String_t* ___applicationStanzaNamespace2, String_t* ___applicationStanzaBody3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_0_U3CSendTextMessageU3Eb__0_m7A5F70FB950D911B8D36A94C1CCAC462654B1768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* L_0 = (U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass62_0__ctor_m32BBFA24296AAD092B635B56F895D11D6F87F06E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// if (ChannelId.IsNullOrEmpty(channel))
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_2 = ___channel1;
		bool L_3;
		L_3 = ChannelId_IsNullOrEmpty_mC52B7E9EC29202072605B6A100F751200B4289A4(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Must provide a valid ChannelId");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F23301F43FAF9CE1C2CD40E552B9952348975D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_SendTextMessage_mD8BFEDDD0E2D0AC542C62E9930FB1C882D913519_RuntimeMethod_var)));
	}

IL_0024:
	{
		// if (string.IsNullOrEmpty(messageToSend))
		String_t* L_6 = ___messageToSend0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// throw new ArgumentException("Must provide a message to send");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral696330D1E2AB3205FE1000DD6FD10D31CD721E3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_SendTextMessage_mD8BFEDDD0E2D0AC542C62E9930FB1C882D913519_RuntimeMethod_var)));
	}

IL_003a:
	{
		// var channelSession = LoginSession.GetChannelSession(channel);
		U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* L_10 = V_0;
		RuntimeObject* L_11 = __this->___LoginSession_21;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_12 = ___channel1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(26 /* VivoxUnity.IChannelSession VivoxUnity.ILoginSession::GetChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_10);
		L_10->___channelSession_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___channelSession_0), (void*)L_13);
		// channelSession.BeginSendText(null, messageToSend, applicationStanzaNamespace, applicationStanzaBody, ar =>
		// {
		//     try
		//     {
		//         channelSession.EndSendText(ar);
		//     }
		//     catch (Exception e)
		//     {
		//         VivoxLog($"SendTextMessage failed with exception {e.Message}");
		//     }
		// });
		U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___channelSession_0;
		String_t* L_16 = ___messageToSend0;
		String_t* L_17 = ___applicationStanzaNamespace2;
		String_t* L_18 = ___applicationStanzaBody3;
		U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* L_19 = V_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass62_0_U3CSendTextMessageU3Eb__0_m7A5F70FB950D911B8D36A94C1CCAC462654B1768_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker5< RuntimeObject*, String_t*, String_t*, String_t*, String_t*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(23 /* System.IAsyncResult VivoxUnity.IChannelSession::BeginSendText(System.String,System.String,System.String,System.String,System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_15, (String_t*)NULL, L_16, L_17, L_18, L_20);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::DisconnectAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_DisconnectAllChannels_mCA9940C61EDB69601EC2498145A468F7547CCD4B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2679F53F451E7C1669158B0255B7E39A2EEC2739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (ActiveChannels?.Count > 0)
		RuntimeObject* L_0;
		L_0 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// foreach (var channelSession in ActiveChannels)
		RuntimeObject* L_4;
		L_4 = VivoxVoiceManager_get_ActiveChannels_m438AEEC580190669736FADC484C055ED4376B5CF(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VivoxUnity.IChannelSession>::GetEnumerator() */, IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_1;
					if (!L_6)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_002a_1:
			{
				// foreach (var channelSession in ActiveChannels)
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VivoxUnity.IChannelSession>::get_Current() */, IEnumerator_1_t2679F53F451E7C1669158B0255B7E39A2EEC2739_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				// channelSession?.Disconnect();
				RuntimeObject* L_10 = V_2;
				if (L_10)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_003f_1;
			}

IL_0037_1:
			{
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker1< RuntimeObject*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(17 /* System.IAsyncResult VivoxUnity.IChannelSession::Disconnect(System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_11, (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)NULL);
			}

IL_003f_1:
			{
			}

IL_0040_1:
			{
				// foreach (var channelSession in ActiveChannels)
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnMessageLogRecieved(System.Object,VivoxUnity.QueueItemAddedEventArgs`1<VivoxUnity.IChannelTextMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___sender0, QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* ___textMessage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* G_B2_0 = NULL;
	ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* G_B1_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, textMessage });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* L_4 = ___textMessage1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB(L_3, NULL);
		// IChannelTextMessage channelTextMessage = textMessage.Value;
		QueueItemAddedEventArgs_1_tE9EDA384AB2435DA15E0C42B96D4701EEA696D0F* L_5 = ___textMessage1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_inline(L_5, QueueItemAddedEventArgs_1_get_Value_mE519032AB102D3283506AB3605A59E686FD372E1_RuntimeMethod_var);
		V_0 = L_6;
		// VivoxLog(channelTextMessage.Message);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String VivoxUnity.ITextMessage::get_Message() */, ITextMessage_t5EB9A897B9F959620FD924F8E5C2F7FBED062598_il2cpp_TypeInfo_var, L_7);
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, L_8, NULL);
		// OnTextMessageLogReceivedEvent?.Invoke(channelTextMessage.Sender.DisplayName, channelTextMessage);
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_9 = __this->___OnTextMessageLogReceivedEvent_8;
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* L_10 = L_9;
		G_B1_0 = L_10;
		if (L_10)
		{
			G_B2_0 = L_10;
			goto IL_0035;
		}
	}
	{
		goto IL_0047;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_12;
		L_12 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(1 /* VivoxUnity.AccountId VivoxUnity.IChannelTextMessage::get_Sender() */, IChannelTextMessage_t6EE31F5EA5237266D098A87E68D9856524252624_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = AccountId_get_DisplayName_m4B65701915D56093AB5E02F1DFA943C7883D3E92(L_12, NULL);
		RuntimeObject* L_14 = V_0;
		NullCheck(G_B2_0);
		ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_inline(G_B2_0, L_13, L_14, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnLoginSessionPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___propertyChangedEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DDDA1B466C36EAF63ACFA7687FAC59D13AB0B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50FD7BF6C27C395B9804B3F9FDD503078D1DADE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB00436C38DF6739F15950C8C6C451CD5028B7DB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9E369BE80D93F75A8B15354C47AF689AF0AA656);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB5B5DC2248D49B73508E62B24DC71BBDDA0B4E0);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* G_B7_0 = NULL;
	LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* G_B6_0 = NULL;
	{
		// if (propertyChangedEventArgs.PropertyName != "State")
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_0 = ___propertyChangedEventArgs1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_0);
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_1, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_00c4;
	}

IL_001b:
	{
		// var loginSession = (ILoginSession)sender;
		RuntimeObject* L_4 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var));
		// LoginState = loginSession.State;
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* VivoxUnity.LoginState VivoxUnity.ILoginSession::get_State() */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_5);
		VivoxVoiceManager_set_LoginState_m758BF8328E2364F4643D5F73B1A0D16A8D171FA8_inline(__this, L_6, NULL);
		// VivoxLog("Detecting login session change");
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, _stringLiteral50FD7BF6C27C395B9804B3F9FDD503078D1DADE5, NULL);
		// switch (LoginState)
		int32_t L_7;
		L_7 = VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline(__this, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_009b;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_008c;
			}
		}
	}
	{
		goto IL_00c2;
	}

IL_005c:
	{
		// VivoxLog("Logging in");
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, _stringLiteralB00436C38DF6739F15950C8C6C451CD5028B7DB7, NULL);
		// break;
		goto IL_00c4;
	}

IL_006b:
	{
		// VivoxLog("Connected to voice server and logged in.");
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, _stringLiteralEB5B5DC2248D49B73508E62B24DC71BBDDA0B4E0, NULL);
		// OnUserLoggedInEvent?.Invoke();
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_10 = __this->___OnUserLoggedInEvent_9;
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* L_11 = L_10;
		G_B6_0 = L_11;
		if (L_11)
		{
			G_B7_0 = L_11;
			goto IL_0084;
		}
	}
	{
		goto IL_008a;
	}

IL_0084:
	{
		NullCheck(G_B7_0);
		LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_inline(G_B7_0, NULL);
	}

IL_008a:
	{
		// break;
		goto IL_00c4;
	}

IL_008c:
	{
		// VivoxLog("Logging out");
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, _stringLiteralC9E369BE80D93F75A8B15354C47AF689AF0AA656, NULL);
		// break;
		goto IL_00c4;
	}

IL_009b:
	{
		// VivoxLog("Logged out");
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, _stringLiteral26DDDA1B466C36EAF63ACFA7687FAC59D13AB0B8, NULL);
		// LoginSession.PropertyChanged -= OnLoginSessionPropertyChanged;
		RuntimeObject* L_12 = __this->___LoginSession_21;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_13 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_13, __this, (intptr_t)((void*)VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_12, L_13);
		// break;
		goto IL_00c4;
	}

IL_00c2:
	{
		// break;
		goto IL_00c4;
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnParticipantAdded(System.Object,VivoxUnity.KeyEventArg`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___sender0, KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* ___keyEventArg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* G_B2_0 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* G_B1_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, keyEventArg });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_4 = ___keyEventArg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB(L_3, NULL);
		// var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var));
		// var participant = source[keyEventArg.Key];
		RuntimeObject* L_6 = V_0;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_7 = ___keyEventArg1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_inline(L_7, KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(7 /* T VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::get_Item(TK) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_6, L_8);
		V_1 = L_9;
		// var username = participant.Account.Name;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_11;
		L_11 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_11, NULL);
		V_2 = L_12;
		// var channel = participant.ParentChannelSession.Key;
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_15;
		L_15 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
		// var channelSession = participant.ParentChannelSession;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_16);
		V_4 = L_17;
		// OnParticipantAddedEvent?.Invoke(username, channel, participant);
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_18 = __this->___OnParticipantAddedEvent_6;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_19 = L_18;
		G_B1_0 = L_19;
		if (L_19)
		{
			G_B2_0 = L_19;
			goto IL_0055;
		}
	}
	{
		goto IL_005e;
	}

IL_0055:
	{
		String_t* L_20 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_21 = V_3;
		RuntimeObject* L_22 = V_1;
		NullCheck(G_B2_0);
		ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_inline(G_B2_0, L_20, L_21, L_22, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnParticipantRemoved(System.Object,VivoxUnity.KeyEventArg`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___sender0, KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* ___keyEventArg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* G_B4_0 = NULL;
	ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* G_B3_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, keyEventArg });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_4 = ___keyEventArg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB(L_3, NULL);
		// var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var));
		// var participant = source[keyEventArg.Key];
		RuntimeObject* L_6 = V_0;
		KeyEventArg_1_tE8BCC1A933DEE606FE19CAD9D374858F905711D6* L_7 = ___keyEventArg1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_inline(L_7, KeyEventArg_1_get_Key_mDF81BA6EB161F9368724B97A3951859789DE3C49_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(7 /* T VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::get_Item(TK) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_6, L_8);
		V_1 = L_9;
		// var username = participant.Account.Name;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_11;
		L_11 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_11, NULL);
		V_2 = L_12;
		// var channel = participant.ParentChannelSession.Key;
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_15;
		L_15 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
		// var channelSession = participant.ParentChannelSession;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_16);
		V_4 = L_17;
		// if (participant.IsSelf)
		RuntimeObject* L_18 = V_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_18);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0111;
		}
	}
	{
		// VivoxLog($"Unsubscribing from: {channelSession.Key.Name}");
		RuntimeObject* L_21 = V_4;
		NullCheck(L_21);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_22;
		L_22 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594, L_23, NULL);
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, L_24, NULL);
		// channelSession.PropertyChanged -= OnChannelPropertyChanged;
		RuntimeObject* L_25 = V_4;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_26 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_26, __this, (intptr_t)((void*)VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_25, L_26);
		// channelSession.Participants.AfterKeyAdded -= OnParticipantAdded;
		RuntimeObject* L_27 = V_4;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_27);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_29 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_29, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterKeyAdded(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_28, L_29);
		// channelSession.Participants.BeforeKeyRemoved -= OnParticipantRemoved;
		RuntimeObject* L_30 = V_4;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_30);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_32 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_32, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(3 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_BeforeKeyRemoved(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_31, L_32);
		// channelSession.Participants.AfterValueUpdated -= OnParticipantValueUpdated;
		RuntimeObject* L_33 = V_4;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_33);
		EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* L_35 = (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*)il2cpp_codegen_object_new(EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067(L_35, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* >::Invoke(5 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterValueUpdated(System.EventHandler`1<VivoxUnity.ValueEventArg`2<TK,T>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_34, L_35);
		// channelSession.MessageLog.AfterItemAdded -= OnMessageLogRecieved;
		RuntimeObject* L_36 = V_4;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage> VivoxUnity.IChannelSession::get_MessageLog() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_36);
		EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* L_38 = (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*)il2cpp_codegen_object_new(EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474(L_38, __this, (intptr_t)((void*)VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage>::remove_AfterItemAdded(System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<T>>) */, IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var, L_37, L_38);
		// var user = _client.GetLoginSession(_accountId);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_39 = __this->____client_16;
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_40 = __this->____accountId_17;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_39, L_40, NULL);
		V_6 = L_41;
		// user.DeleteChannelSession(channelSession.Channel);
		RuntimeObject* L_42 = V_6;
		RuntimeObject* L_43 = V_4;
		NullCheck(L_43);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_44;
		L_44 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_42);
		InterfaceActionInvoker1< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(27 /* System.Void VivoxUnity.ILoginSession::DeleteChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_42, L_44);
	}

IL_0111:
	{
		// OnParticipantRemovedEvent?.Invoke(username, channel, participant);
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_45 = __this->___OnParticipantRemovedEvent_7;
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* L_46 = L_45;
		G_B3_0 = L_46;
		if (L_46)
		{
			G_B4_0 = L_46;
			goto IL_011d;
		}
	}
	{
		goto IL_0126;
	}

IL_011d:
	{
		String_t* L_47 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_48 = V_3;
		RuntimeObject* L_49 = V_1;
		NullCheck(G_B4_0);
		ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_inline(G_B4_0, L_47, L_48, L_49, NULL);
	}

IL_0126:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::ValidateArgs(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (var obj in objs)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___objs0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0030;
	}

IL_0008:
	{
		// foreach (var obj in objs)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (obj == null)
		RuntimeObject* L_5 = V_2;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// throw new ArgumentNullException(obj.GetType().ToString(), "Specify a non-null/non-empty argument.");
		RuntimeObject* L_7 = V_2;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_10 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_10, L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral598FD815901C07C96F51F94285D0E6575675E0FE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB_RuntimeMethod_var)));
	}

IL_002b:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0030:
	{
		// foreach (var obj in objs)
		int32_t L_12 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnParticipantValueUpdated(System.Object,VivoxUnity.ValueEventArg`2<System.String,VivoxUnity.IParticipant>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___sender0, ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* ___valueEventArg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F40939B6CDDD36215CEF4124FF4F34AA9D77261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6020785A926649CF038C7965768B025B64B74D66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7AB9A490B68662219B76EACAAC39DCF86D23E73);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* G_B5_0 = NULL;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* G_B4_0 = NULL;
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* G_B9_0 = NULL;
	ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* G_B8_0 = NULL;
	{
		// ValidateArgs(new object[] { sender, valueEventArg });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_4 = ___valueEventArg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB(L_3, NULL);
		// var source = (VivoxUnity.IReadOnlyDictionary<string, IParticipant>)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var));
		// var participant = source[valueEventArg.Key];
		RuntimeObject* L_6 = V_0;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_7 = ___valueEventArg1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_inline(L_7, ValueEventArg_2_get_Key_m9DE089255309A023A9F276E1CF29B343AA882A6D_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(7 /* T VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::get_Item(TK) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_6, L_8);
		V_1 = L_9;
		// string username = valueEventArg.Value.Account.Name;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_10 = ___valueEventArg1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_10, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_11);
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_12;
		L_12 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_12, NULL);
		V_2 = L_13;
		// ChannelId channel = valueEventArg.Value.ParentChannelSession.Key;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_14 = ___valueEventArg1;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_14, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* VivoxUnity.IChannelSession VivoxUnity.IParticipant::get_ParentChannelSession() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_17;
		L_17 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
		// string property = valueEventArg.PropertyName;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_18 = ___valueEventArg1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_inline(L_18, ValueEventArg_2_get_PropertyName_mEF8D931C7B2D4508E6AD09325790E7AEE22E46F0_RuntimeMethod_var);
		V_4 = L_19;
		// switch (property)
		String_t* L_20 = V_4;
		V_6 = L_20;
		String_t* L_21 = V_6;
		V_5 = L_21;
		String_t* L_22 = V_5;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral6020785A926649CF038C7965768B025B64B74D66, NULL);
		if (L_23)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_24 = V_5;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteralF7AB9A490B68662219B76EACAAC39DCF86D23E73, NULL);
		if (L_25)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00d0;
	}

IL_0079:
	{
		// VivoxLog($"OnSpeechDetectedEvent: {username} in {channel}.");
		String_t* L_26 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_27 = V_3;
		String_t* L_28;
		L_28 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2F40939B6CDDD36215CEF4124FF4F34AA9D77261, L_26, L_27, NULL);
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, L_28, NULL);
		// OnSpeechDetectedEvent?.Invoke(username, channel, valueEventArg.Value.SpeechDetected);
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_29 = __this->___OnSpeechDetectedEvent_4;
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_30 = L_29;
		G_B4_0 = L_30;
		if (L_30)
		{
			G_B5_0 = L_30;
			goto IL_0099;
		}
	}
	{
		goto IL_00ac;
	}

IL_0099:
	{
		String_t* L_31 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_32 = V_3;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_33 = ___valueEventArg1;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_33, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_34);
		bool L_35;
		L_35 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean VivoxUnity.IParticipantProperties::get_SpeechDetected() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_34);
		NullCheck(G_B5_0);
		ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_inline(G_B5_0, L_31, L_32, L_35, NULL);
	}

IL_00ac:
	{
		// break;
		goto IL_00d2;
	}

IL_00ae:
	{
		// OnAudioEnergyChangedEvent?.Invoke(username, channel, valueEventArg.Value.AudioEnergy);
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_36 = __this->___OnAudioEnergyChangedEvent_5;
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* L_37 = L_36;
		G_B8_0 = L_37;
		if (L_37)
		{
			G_B9_0 = L_37;
			goto IL_00bb;
		}
	}
	{
		goto IL_00ce;
	}

IL_00bb:
	{
		String_t* L_38 = V_2;
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_39 = V_3;
		ValueEventArg_2_tCBCDA8549FCF6BC64A478394D45077F160EFC803* L_40 = ___valueEventArg1;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_inline(L_40, ValueEventArg_2_get_Value_m05CC719B961997F8405C08AA17B6E39E46500341_RuntimeMethod_var);
		NullCheck(L_41);
		double L_42;
		L_42 = InterfaceFuncInvoker0< double >::Invoke(6 /* System.Double VivoxUnity.IParticipantProperties::get_AudioEnergy() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_41);
		NullCheck(G_B9_0);
		ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_inline(G_B9_0, L_38, L_39, L_42, NULL);
	}

IL_00ce:
	{
		// break;
		goto IL_00d2;
	}

IL_00d0:
	{
		// break;
		goto IL_00d2;
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::OnChannelPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___sender0, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___propertyChangedEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3ED7812E5EBC284BAA9EF0CE704248361EEDD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF5911A90ECA2D7170D6A38695A7121E94F4037D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* G_B8_0 = NULL;
	ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* G_B7_0 = NULL;
	int32_t G_B21_0 = 0;
	{
		// ValidateArgs(new object[] { sender, propertyChangedEventArgs });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		RuntimeObject* L_2 = ___sender0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_4 = ___propertyChangedEventArgs1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		VivoxVoiceManager_ValidateArgs_mFEF079617399686D8325A9752C21B0DC7679C2FB(L_3, NULL);
		// var channelSession = (IChannelSession)sender;
		RuntimeObject* L_5 = ___sender0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var));
		// if (propertyChangedEventArgs.PropertyName == "AudioState" && channelSession.AudioState == ConnectionState.Disconnected)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_6 = ___propertyChangedEventArgs1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_6);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_9);
		G_B3_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 0;
	}

IL_003a:
	{
		V_1 = (bool)G_B3_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00ad;
		}
	}
	{
		// VivoxLog($"Audio disconnected from: {channelSession.Key.Name}");
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_13;
		L_13 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFF5911A90ECA2D7170D6A38695A7121E94F4037D, L_14, NULL);
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, L_15, NULL);
		// foreach (var participant in channelSession.Participants)
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<VivoxUnity.IParticipant>::GetEnumerator() */, IEnumerable_1_t6FE960368F27F046E92B6C9B502BC95A4565F856_il2cpp_TypeInfo_var, L_17);
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_19 = V_2;
					if (!L_19)
					{
						goto IL_00ab;
					}
				}
				{
					RuntimeObject* L_20 = V_2;
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
				}

IL_00ab:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0097_1;
			}

IL_006a_1:
			{
				// foreach (var participant in channelSession.Participants)
				RuntimeObject* L_21 = V_2;
				NullCheck(L_21);
				RuntimeObject* L_22;
				L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<VivoxUnity.IParticipant>::get_Current() */, IEnumerator_1_t830A790E924690F5FEEDF0D67D024D3CB39B1CF1_il2cpp_TypeInfo_var, L_21);
				V_3 = L_22;
				// OnSpeechDetectedEvent?.Invoke(participant.Account.Name, channelSession.Channel, false);
				ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_23 = __this->___OnSpeechDetectedEvent_4;
				ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* L_24 = L_23;
				G_B7_0 = L_24;
				if (L_24)
				{
					G_B8_0 = L_24;
					goto IL_007e_1;
				}
			}
			{
				goto IL_0096_1;
			}

IL_007e_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck(L_25);
				AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_26;
				L_26 = InterfaceFuncInvoker0< AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* >::Invoke(2 /* VivoxUnity.AccountId VivoxUnity.IParticipant::get_Account() */, IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD_il2cpp_TypeInfo_var, L_25);
				NullCheck(L_26);
				String_t* L_27;
				L_27 = AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline(L_26, NULL);
				RuntimeObject* L_28 = V_0;
				NullCheck(L_28);
				ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_29;
				L_29 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_28);
				NullCheck(G_B8_0);
				ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_inline(G_B8_0, L_27, L_29, (bool)0, NULL);
			}

IL_0096_1:
			{
			}

IL_0097_1:
			{
				// foreach (var participant in channelSession.Participants)
				RuntimeObject* L_30 = V_2;
				NullCheck(L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_006a_1;
				}
			}
			{
				goto IL_00ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		// if ((propertyChangedEventArgs.PropertyName == "AudioState" || propertyChangedEventArgs.PropertyName == "TextState") &&
		//     channelSession.AudioState == ConnectionState.Disconnected &&
		//     channelSession.TextState == ConnectionState.Disconnected)
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_32 = ___propertyChangedEventArgs1;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_32);
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteralB47D0C69E9096A29CC82A6719ABF53C3AE403776, NULL);
		if (L_34)
		{
			goto IL_00d1;
		}
	}
	{
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_35 = ___propertyChangedEventArgs1;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.PropertyChangedEventArgs::get_PropertyName() */, L_35);
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralF3ED7812E5EBC284BAA9EF0CE704248361EEDD50, NULL);
		if (!L_37)
		{
			goto IL_00e4;
		}
	}

IL_00d1:
	{
		RuntimeObject* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_38);
		if (L_39)
		{
			goto IL_00e4;
		}
	}
	{
		RuntimeObject* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_TextState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_40);
		G_B21_0 = ((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		goto IL_00e5;
	}

IL_00e4:
	{
		G_B21_0 = 0;
	}

IL_00e5:
	{
		V_4 = (bool)G_B21_0;
		bool L_42 = V_4;
		if (!L_42)
		{
			goto IL_01a0;
		}
	}
	{
		// VivoxLog($"Unsubscribing from: {channelSession.Key.Name}");
		RuntimeObject* L_43 = V_0;
		NullCheck(L_43);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_44;
		L_44 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(0 /* TK VivoxUnity.IKeyedItemNotifyPropertyChanged`1<VivoxUnity.ChannelId>::get_Key() */, IKeyedItemNotifyPropertyChanged_1_t2255D7AED1AE5A99FD71816D00461696B6EDCFAE_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_44, NULL);
		String_t* L_46;
		L_46 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE55EB599B562F8A35CFE2521E0505E65560B6594, L_45, NULL);
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(__this, L_46, NULL);
		// channelSession.PropertyChanged -= OnChannelPropertyChanged;
		RuntimeObject* L_47 = V_0;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_48 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_48, __this, (intptr_t)((void*)VivoxVoiceManager_OnChannelPropertyChanged_m20ADD24FC7331F45F194B54CF7F29C2B937BFE54_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var, L_47, L_48);
		// channelSession.Participants.AfterKeyAdded -= OnParticipantAdded;
		RuntimeObject* L_49 = V_0;
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_49);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_51 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_51, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantAdded_m63BEF4D3BF7C647F98B0CC20767A5669A4069737_RuntimeMethod_var), NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterKeyAdded(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_50, L_51);
		// channelSession.Participants.BeforeKeyRemoved -= OnParticipantRemoved;
		RuntimeObject* L_52 = V_0;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_52);
		EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* L_54 = (EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003*)il2cpp_codegen_object_new(EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		EventHandler_1__ctor_mEF373D02C08E16B76D4A6718E050FC63D6811107(L_54, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantRemoved_mA6510C927BB4764B67DA28EAF8F184D10CF13882_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< EventHandler_1_t57B6BABA89E1D507E8C1C060D639F8E284538003* >::Invoke(3 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_BeforeKeyRemoved(System.EventHandler`1<VivoxUnity.KeyEventArg`1<TK>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_53, L_54);
		// channelSession.Participants.AfterValueUpdated -= OnParticipantValueUpdated;
		RuntimeObject* L_55 = V_0;
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant> VivoxUnity.IChannelSession::get_Participants() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_55);
		EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* L_57 = (EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01*)il2cpp_codegen_object_new(EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		EventHandler_1__ctor_m1E224F97ED4FD1D72AAB2B981A1F4A339572D067(L_57, __this, (intptr_t)((void*)VivoxVoiceManager_OnParticipantValueUpdated_m5C9B7CA292421322DB473AA2E39B8456921D8E5D_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		InterfaceActionInvoker1< EventHandler_1_t8A61551F2208122BA78975B5D0C52E98306B6F01* >::Invoke(5 /* System.Void VivoxUnity.IReadOnlyDictionary`2<System.String,VivoxUnity.IParticipant>::remove_AfterValueUpdated(System.EventHandler`1<VivoxUnity.ValueEventArg`2<TK,T>>) */, IReadOnlyDictionary_2_t8F293AE113527BDB46D1F33C74ABC0954173786E_il2cpp_TypeInfo_var, L_56, L_57);
		// channelSession.MessageLog.AfterItemAdded -= OnMessageLogRecieved;
		RuntimeObject* L_58 = V_0;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage> VivoxUnity.IChannelSession::get_MessageLog() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_58);
		EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* L_60 = (EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199*)il2cpp_codegen_object_new(EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		EventHandler_1__ctor_m5E06C11418535612DF07937D3529081C2316F474(L_60, __this, (intptr_t)((void*)VivoxVoiceManager_OnMessageLogRecieved_mBC8C12B4EC198B8F537BB3421C8E5B85F7D035E6_RuntimeMethod_var), NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< EventHandler_1_tDC300C16CD21E3ADB3EAA4361C9A7B19FBBB3199* >::Invoke(1 /* System.Void VivoxUnity.IReadOnlyQueue`1<VivoxUnity.IChannelTextMessage>::remove_AfterItemAdded(System.EventHandler`1<VivoxUnity.QueueItemAddedEventArgs`1<T>>) */, IReadOnlyQueue_1_tBF689B021B4CBA2B68247BA990FCF77E36815375_il2cpp_TypeInfo_var, L_59, L_60);
		// var user = _client.GetLoginSession(_accountId);
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_61 = __this->____client_16;
		AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* L_62 = __this->____accountId_17;
		NullCheck(L_61);
		RuntimeObject* L_63;
		L_63 = Client_GetLoginSession_mBEE8C8614EC7CC2534B980F5B9F5E29DD73272CE(L_61, L_62, NULL);
		V_5 = L_63;
		// user.DeleteChannelSession(channelSession.Channel);
		RuntimeObject* L_64 = V_5;
		RuntimeObject* L_65 = V_0;
		NullCheck(L_65);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_66;
		L_66 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(14 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_64);
		InterfaceActionInvoker1< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(27 /* System.Void VivoxUnity.ILoginSession::DeleteChannelSession(VivoxUnity.ChannelId) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_64, L_66);
	}

IL_01a0:
	{
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::VivoxLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("<color=green>VivoxVoice: </color>: " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::VivoxLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_VivoxLogError_mBA3C5A126CF342D9D9AA2CC7701731FA7604348C (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("<color=green>VivoxVoice: </color>: " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral10D6C94D4F6D194D66ABE4D19C9B3565FDE46911, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_1, NULL);
		// }
		return;
	}
}
// System.Void VivoxVoiceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager__ctor_m4EF812D0598C88E98FAF956724173BA538EDAAD3 (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E8F452E773B053530D43B51D8A29193CFA1BF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _server = "https://GETFROMPORTAL.www.vivox.com/api2";
		__this->____server_11 = _stringLiteralC7E8F452E773B053530D43B51D8A29193CFA1BF5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____server_11), (void*)_stringLiteralC7E8F452E773B053530D43B51D8A29193CFA1BF5);
		// private string _domain = "GET VALUE FROM VIVOX DEVELOPER PORTAL";
		__this->____domain_12 = _stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____domain_12), (void*)_stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659);
		// private string _tokenIssuer = "GET VALUE FROM VIVOX DEVELOPER PORTAL";
		__this->____tokenIssuer_13 = _stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tokenIssuer_13), (void*)_stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659);
		// private string _tokenKey = "GET VALUE FROM VIVOX DEVELOPER PORTAL";
		__this->____tokenKey_14 = _stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tokenKey_14), (void*)_stringLiteralAE485FB41D047AE3EE7472D193B3D44661709659);
		// private TimeSpan _tokenExpiration = TimeSpan.FromSeconds(90);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromSeconds_mE585CC8180040ED064DC8B6546E6C94A129BFFC5((90.0), NULL);
		__this->____tokenExpiration_15 = L_0;
		// private Client _client = new Client();
		Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* L_1 = (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF*)il2cpp_codegen_object_new(Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Client__ctor_m09FE0564988C2D83C7861227814B1C409F2864DA(L_1, NULL);
		__this->____client_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_16), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void VivoxVoiceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager__cctor_m4E82EEBE7264F541AE593CDDB4F05A2CCB53F94B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static object m_Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Lock_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_StaticFields*)il2cpp_codegen_static_fields_for(VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8_il2cpp_TypeInfo_var))->___m_Lock_18), (void*)L_0);
		return;
	}
}
// System.Void VivoxVoiceManager::<Login>b__59_0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_U3CLoginU3Eb__59_0_m0D7DA3D4159BE9E06465CFCE1FA34C6F960599FB (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// LoginSession.EndLogin(ar);
		RuntimeObject* L_0 = __this->___LoginSession_21;
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void VivoxUnity.ILoginSession::EndLogin(System.IAsyncResult) */, ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152_il2cpp_TypeInfo_var, L_0, L_1);
		goto IL_003a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VivoxLogError(nameof(e));
		VivoxVoiceManager_VivoxLogError_mBA3C5A126CF342D9D9AA2CC7701731FA7604348C(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		// LoginSession.PropertyChanged -= OnLoginSessionPropertyChanged;
		RuntimeObject* L_2 = __this->___LoginSession_21;
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_3 = (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		PropertyChangedEventHandler__ctor_m4015A035EDCA8077D1EA9A8EAB5FE1CCD06A5B82(L_3, __this, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VivoxVoiceManager_OnLoginSessionPropertyChanged_m2BB28524E885B4E32BED06B4016976C01E18DCEE_RuntimeMethod_var))), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* >::Invoke(1 /* System.Void System.ComponentModel.INotifyPropertyChanged::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&INotifyPropertyChanged_tF956261A15128123778A0D86196231401847CF8C_il2cpp_TypeInfo_var)), L_2, L_3);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003a;
	}// end catch (depth: 1)

IL_003a:
	{
		// });
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
void ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_Multicast(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* currentDelegate = reinterpret_cast<ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_Open(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___value2, method);
}
void ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_OpenStaticInvoker(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___username0, ___channel1, ___value2);
}
void ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_ClosedStaticInvoker(ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___username0, ___channel1, ___value2);
}
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler__ctor_mE5DF4A48D9BA853F334739E1AD149DA4ABE65E87 (ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_Multicast;
}
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6 (ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ParticipantValueChangedHandler::BeginInvoke(System.String,VivoxUnity.ChannelId,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticipantValueChangedHandler_BeginInvoke_mE29FDD886CCCAB4C44ECA797B6F9D261734D69A6 (ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___username0;
	__d_args[1] = ___channel1;
	__d_args[2] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void VivoxVoiceManager/ParticipantValueChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_EndInvoke_mC7FB70AC1C189E18DADF7A5C6DF9E238B6F3CF66 (ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_Multicast(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* currentDelegate = reinterpret_cast<ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_Open(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___value2, method);
}
void ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_OpenStaticInvoker(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double >::Invoke(__this->___method_ptr_0, method, NULL, ___username0, ___channel1, ___value2);
}
void ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_ClosedStaticInvoker(ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___username0, ___channel1, ___value2);
}
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler__ctor_m7C1E7644E9A55E22B6056F2B2D4C7965338F2CA8 (ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_Multicast;
}
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::Invoke(System.String,VivoxUnity.ChannelId,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195 (ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ParticipantValueUpdatedHandler::BeginInvoke(System.String,VivoxUnity.ChannelId,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticipantValueUpdatedHandler_BeginInvoke_mC1950418AA06FDF58190EB00543355E0D739CCDF (ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___username0;
	__d_args[1] = ___channel1;
	__d_args[2] = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &___value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void VivoxVoiceManager/ParticipantValueUpdatedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_EndInvoke_m44AADEB7BE2DEB1B66A22F4A1718987701E1E1A0 (ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_Multicast(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* currentDelegate = reinterpret_cast<ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___username0, ___channel1, ___participant2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_Open(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___username0, ___channel1, ___participant2, method);
}
void ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_OpenStaticInvoker(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___username0, ___channel1, ___participant2);
}
void ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_ClosedStaticInvoker(ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___username0, ___channel1, ___participant2);
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler__ctor_mAD00BC8A4A86BE414EA92F90BE9FF4CB59BD792B (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_Multicast;
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::Invoke(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3 (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___participant2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ParticipantStatusChangedHandler::BeginInvoke(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticipantStatusChangedHandler_BeginInvoke_m45741ED62A90885B268ECFCC31D50C7DDC639FA6 (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___username0;
	__d_args[1] = ___channel1;
	__d_args[2] = ___participant2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_EndInvoke_mB0FD833B920CCD557C4FA674BF6A6A3E46175263 (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_Multicast(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* currentDelegate = reinterpret_cast<ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___channelTextMessage1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_Open(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___channelTextMessage1, method);
}
void ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_OpenStaticInvoker(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___channelTextMessage1);
}
void ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_ClosedStaticInvoker(ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___channelTextMessage1);
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler__ctor_mADA4DB349C64E9FF4FBD47E45FC3FD41CE41CBD9 (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_Multicast;
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::Invoke(System.String,VivoxUnity.IChannelTextMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___channelTextMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/ChannelTextMessageChangedHandler::BeginInvoke(System.String,VivoxUnity.IChannelTextMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChannelTextMessageChangedHandler_BeginInvoke_mA2B8A39638951A774FF3BA1433F4641ED0696576 (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___channelTextMessage1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void VivoxVoiceManager/ChannelTextMessageChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_EndInvoke_mBB837EFCB2B095D1139670533D07A677169F79E8 (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_Multicast(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* currentDelegate = reinterpret_cast<LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_Open(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_OpenStaticInvoker(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_ClosedStaticInvoker(LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164 (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler__ctor_m8B788D0AECBBDCFA853CE0FC67CAC085F558E4FD (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_Multicast;
}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514 (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VivoxVoiceManager/LoginStatusChangedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoginStatusChangedHandler_BeginInvoke_m497CC422D7DC7507434F8907803F9FBA1E55CB8F (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_EndInvoke_m4334677F67894ACB5E691FEC80FB4A3999BC1D42 (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VivoxVoiceManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4A58F8C3100B0400A105D73EF223CA85D36F9C82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD* L_0 = (U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD*)il2cpp_codegen_object_new(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCB5ED34D6420B2D938CF305283307F9FFBCFBD6F(L_0, NULL);
		((U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void VivoxVoiceManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCB5ED34D6420B2D938CF305283307F9FFBCFBD6F (U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean VivoxVoiceManager/<>c::<get_TransmittingSession>b__54_0(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_TransmittingSessionU3Eb__54_0_mCD60EA9DCB9B14D3A1D4920037DC81DFCD0262CC (U3CU3Ec_t6BFC5C99B896CE978276A841441F1C4D7D9AA6AD* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _client.GetLoginSession(_accountId).ChannelSessions.FirstOrDefault(x => x.IsTransmitting);
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(12 /* System.Boolean VivoxUnity.IChannelSession::get_IsTransmitting() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void VivoxVoiceManager/<>c__DisplayClass61_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0__ctor_mDEC37E47B2C3F5C2BCFEE5EC5E862D092A2537E8 (U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VivoxVoiceManager/<>c__DisplayClass61_0::<JoinChannel>b__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3CJoinChannelU3Eb__0_mBB10C3FF82B3431047CEBCF2438EC7B4F1DDEE08 (U3CU3Ec__DisplayClass61_0_t8569B0541D0FDF6805D2C00C7764167C710C3559* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// channelSession.EndConnect(ar);
		RuntimeObject* L_0 = __this->___channelSession_0;
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(16 /* System.Void VivoxUnity.IChannelSession::EndConnect(System.IAsyncResult) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0, L_1);
		goto IL_0032;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VivoxLogError($"Could not connect to voice channel: {e.Message}");
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->___U3CU3E4__this_1;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9DB762CCB331794CDC9C04C10E3F770EEC07040)), L_4, NULL);
		NullCheck(L_2);
		VivoxVoiceManager_VivoxLogError_mBA3C5A126CF342D9D9AA2CC7701731FA7604348C(L_2, L_5, NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0032;
	}// end catch (depth: 1)

IL_0032:
	{
		// });
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
// System.Void VivoxVoiceManager/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m32BBFA24296AAD092B635B56F895D11D6F87F06E (U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VivoxVoiceManager/<>c__DisplayClass62_0::<SendTextMessage>b__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CSendTextMessageU3Eb__0_m7A5F70FB950D911B8D36A94C1CCAC462654B1768 (U3CU3Ec__DisplayClass62_0_t8075CE760296FD7D6CE8A53B2222D3784BE8BAA2* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// channelSession.EndSendText(ar);
		RuntimeObject* L_0 = __this->___channelSession_0;
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(24 /* System.Void VivoxUnity.IChannelSession::EndSendText(System.IAsyncResult) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0, L_1);
		goto IL_0033;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// VivoxLog($"SendTextMessage failed with exception {e.Message}");
		VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* L_2 = __this->___U3CU3E4__this_1;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2D69CAE0AC1651DB4F092E55B86400B20FA0ECBB)), L_4, NULL);
		NullCheck(L_2);
		VivoxVoiceManager_VivoxLog_mBF47D6B022CE6A227DC524C5D201E3E9A79F9C2B(L_2, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0033;
	}// end catch (depth: 1)

IL_0033:
	{
		// });
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
// System.Void Tanks.UI.HUDMultiplayerScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDMultiplayerScore_Start_mE758DA0CDE2714C6283959CC310787BA6CF785E9 (HUDMultiplayerScore_t4D339331C2461AC4FFB3FB339EBD6099A1467A5B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Tanks.UI.HUDMultiplayerScore::UpdateScoreDisplay(UnityEngine.Color[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDMultiplayerScore_UpdateScoreDisplay_m34020F29DE310E6478AFED4454755EF3B5792D32 (HUDMultiplayerScore_t4D339331C2461AC4FFB3FB339EBD6099A1467A5B* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colours0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___scores1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// for (int i = 0; i < m_ScoreParent.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// m_ScoreParent[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___m_ScoreParent_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < m_ScoreParent.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < m_ScoreParent.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___m_ScoreParent_5;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// for (int i = 0; i < colours.Length; i++)
		V_2 = 0;
		goto IL_0071;
	}

IL_002d:
	{
		// m_ScoreParent[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___m_ScoreParent_5;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// m_TeamIcons[i].color = colours[i];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_12 = __this->___m_TeamIcons_6;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16 = ___colours0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_19);
		// m_TeamScores[i].text = scores[i].ToString();
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_20 = __this->___m_TeamScores_7;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___scores1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// for (int i = 0; i < colours.Length; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < colours.Length; i++)
		int32_t L_28 = V_2;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_29 = ___colours0;
		NullCheck(L_29);
		V_3 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_002d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Tanks.UI.HUDMultiplayerScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDMultiplayerScore__ctor_m230CBB8F7F03A35C652D4C9EA79D271625D34804 (HUDMultiplayerScore_t4D339331C2461AC4FFB3FB339EBD6099A1467A5B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___axis1;
		float* L_2 = ___angle0;
		Quaternion_Internal_ToAxisAngleRad_m15D0A132154BC073228AE48956EE43AD45ADF5F1(L_0, L_1, L_2, NULL);
		float* L_3 = ___angle0;
		float* L_4 = ___angle0;
		float L_5 = *((float*)L_4);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PositionalVoice_set_isSpeaking_m4B2DA647915AEF2E6134D4CFAE7048C9C8BFDBF6_inline (PositionalVoice_t35AB9A9C3ABA56E0E45F47A351A2ECBE0E003D13* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isSpeaking { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CisSpeakingU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mB563BA13AB1EA1E74E0DBFCA620980564F4A8DDC_inline (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = __this->___U3CLoginStateU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => _name;
		String_t* L_0 = __this->____name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccountId_get_Name_mF4379CD91526B5F63036779C2EC30A5447F4CD15_inline (AccountId_t407A3EF006C87C1018E67502479E7E74AEA8C368* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => _name;
		String_t* L_0 = __this->____name_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioInputDevices_mEF09E43DA815E02795AD6E7A265CB6397DC6910A_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioInputDevices => _inputDevices;
		AudioInputDevices_t66A64D6B01AB65F996E324DCC390DA3F4517728D* L_0 = __this->____inputDevices_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_AudioOutputDevices_m54D7860B92185C76D3E1E2A3EFAC8C8E955D3C52_inline (Client_tEBD34B14AD5095F840EEABBE11062942B4B300DF* __this, const RuntimeMethod* method) 
{
	{
		// public IAudioDevices AudioOutputDevices => _outputDevices;
		AudioOutputDevices_t091838B20322C11B563F81CBBFC501F950C92FC6* L_0 = __this->____outputDevices_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoginStatusChangedHandler_Invoke_m2C1BB5B40DEBCFAE63176E4563C64DD95BD80514_inline (LoginStatusChangedHandler_t160CA175A7EAA0CC9019E7F24B1071040CE1B164* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChannelTextMessageChangedHandler_Invoke_m526904120D270D5E624B7957E1D58A7B2A6FD15A_inline (ChannelTextMessageChangedHandler_t8109EACC929FAD6E3E04F85B3D36DE7BCDB36F18* __this, String_t* ___sender0, RuntimeObject* ___channelTextMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___channelTextMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VivoxVoiceManager_set_LoginState_m758BF8328E2364F4643D5F73B1A0D16A8D171FA8_inline (VivoxVoiceManager_tC1CECC77585F5A0004A1D8A8D02B3686ADC163A8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CLoginStateU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler_Invoke_m0526CC1825AA1963617A1B0F82632BE5A7E352A3_inline (ParticipantStatusChangedHandler_tB6902416EA3340520FFB95426F056C0D7092CD4C* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___participant2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueChangedHandler_Invoke_mDAB8C0A2F0A6EA9DB23EFA2EE8D9E5B4F1B340A6_inline (ParticipantValueChangedHandler_tC26877A464897C7697DC5686AF076B43D8D781AF* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, bool ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParticipantValueUpdatedHandler_Invoke_mCA09EE8A3A068CF1E2444002768A36B30BC69195_inline (ParticipantValueUpdatedHandler_t360E12A7FD4A3904FA6AF866A747D55739D721F0* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, double ___value2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___username0, ___channel1, ___value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* QueueItemAddedEventArgs_1_get_Value_m139FA2D84818BAB6E3013D07AF409D656AD1A2E1_gshared_inline (QueueItemAddedEventArgs_1_t64C712687947974CEFCD6FA1A0C5F431B34BA962* __this, const RuntimeMethod* method) 
{
	{
		// public T Value { get; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyEventArg_1_get_Key_m5A6721BC9397CFD07BBD5E71D877CF4B2208B895_gshared_inline (KeyEventArg_1_t89A2EFF3F6BA86A1A7C679AC90F511B469301ADC* __this, const RuntimeMethod* method) 
{
	{
		// public TK Key { get; set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Key_m50FABB89833DC4941E8089DD37E5371F409A5C77_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) 
{
	{
		// public TK Key { get; set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueEventArg_2_get_Value_mD755E0B4406560927FCB160D66ABE2CAEB288F5D_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) 
{
	{
		// public TV Value { get; set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueEventArg_2_get_PropertyName_m8A88DE4C4BA8719F3F0B390A70FDB487D27A3FB5_gshared_inline (ValueEventArg_2_t90E794BBCFF3E0C8F162DC4E42B85305AAD12D42* __this, const RuntimeMethod* method) 
{
	{
		// public string PropertyName { get; set; }
		String_t* L_0 = (String_t*)__this->___U3CPropertyNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
