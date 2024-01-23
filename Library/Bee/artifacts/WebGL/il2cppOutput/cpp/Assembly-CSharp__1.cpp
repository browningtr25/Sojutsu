#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Renderer>
struct IEnumerable_1_t170888152DF4E9BBEB4E9C4079A32DD39DA2E812;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_t5139D729B43788C8618F24D1F6B76B894363E655;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_t0E9A2C72E46C1A4FE7861BB40E8035E7D4F67174;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_tC4E52A001D3CCFFBDFC279A1458CEC1C823D9F91;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_t5C470EAF9AA6787C72B36CCEE35F46DBB4C9FCCA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t1C870790D27AB51836CCACB01C95C83D56DB8DDF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_tDF03C6AF2EFF2661D3B821514E06D6DF189BAAA7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_tC196E4DEEA396B4A08BFAE8A94A45FD14403C9CF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Cainos.LucidEditor.AssetsOnlyAttribute
struct AssetsOnlyAttribute_tF5F746B4696AB7E4D487AAE7A335830D704AF387;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Cainos.LucidEditor.BlockquoteAttribute
struct BlockquoteAttribute_t321BD5E8E9680A0098BE392B2D3D66671B9F8CF0;
// Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform
struct BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636;
// Cainos.LucidEditor.BoxGroupAttribute
struct BoxGroupAttribute_tEFA615925511A98EFD501E05AA3D7D2BDA9FAA70;
// Cainos.LucidEditor.ButtonAttribute
struct ButtonAttribute_tFCF245656C2761768BBE09FCCBCF6B60750A43BE;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Cainos.PixelArtPlatformer_VillageProps.Chest
struct Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Cainos.LucidEditor.DisableIfAttribute
struct DisableIfAttribute_tFF49816FDEFD32456822D76C29118983AC0FC051;
// Cainos.LucidEditor.DisableInEditModeAttribute
struct DisableInEditModeAttribute_t26E882F407EC81B7EF26EC2A69DC66309EAB4E6A;
// Cainos.LucidEditor.DisableInPlayModeAttribute
struct DisableInPlayModeAttribute_tD1C8B93FDE93A7BDC37FCBF5840FF30195894EF7;
// Cainos.LucidEditor.DisableLucidEditorAttribute
struct DisableLucidEditorAttribute_t7BDACF7188D2713AC3A0216E851C37503960E97E;
// Cainos.PixelArtPlatformer_VillageProps.Elevator
struct Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF;
// Cainos.LucidEditor.EnableIfAttribute
struct EnableIfAttribute_t75415C5D824038652A22EC8CB793F9A8DEB849DD;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82;
// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D;
// Cainos.LucidEditor.FoldoutGroupAttribute
struct FoldoutGroupAttribute_t561E61B39EA834DFD4FA85DBA6801DDE248DD910;
// Cainos.LucidEditor.GUIColorAttribute
struct GUIColorAttribute_tD3EA72B4D19D38F773D45F4D870C4E536D9BE19F;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Cainos.LucidEditor.GroupAttribute
struct GroupAttribute_t4ABDDA4B2C83300C37A72286F506BFB9A94D0A1F;
// Cainos.LucidEditor.HelpBoxAttribute
struct HelpBoxAttribute_tF4BBF0A7C9D813BDCCDAE7D3F50596BDFA1E0114;
// Cainos.LucidEditor.HelpBoxIfAttribute
struct HelpBoxIfAttribute_tC0BE26CC2A6FABDFD075D9FE2593AF62DDCED0BC;
// Cainos.LucidEditor.HideIfAttribute
struct HideIfAttribute_tA899F880C37E80221FB801DD796A9668E8A90890;
// Cainos.LucidEditor.HideLabelAttribute
struct HideLabelAttribute_t1774FCDAF3FB939C80683FC7500416B8FE51D828;
// Cainos.LucidEditor.HideMonoScriptAttribute
struct HideMonoScriptAttribute_t088F4C18769C7D28234E6AF6642AF6D4BA0DD2FB;
// Cainos.LucidEditor.HorizontalGroupAttribute
struct HorizontalGroupAttribute_t4557B115CD51D74BB0B2EC2B6F699C443DED6EB8;
// Cainos.LucidEditor.HorizontalLineAttribute
struct HorizontalLineAttribute_t43B6425C428A74A304E5D8F40AE69C5D4F847BCF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Cainos.LucidEditor.IndentAttribute
struct IndentAttribute_tB25EB10C1E1BCA0AFFE3DED1815DEDF0B012291D;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2;
// Cainos.LucidEditor.LabelTextAttribute
struct LabelTextAttribute_tFEC1FBCBBA6BA362A94F4F239A78F3E54289E5FE;
// Cainos.LucidEditor.LabelWidthAttribute
struct LabelWidthAttribute_t5226EDF187DD0AC82710C2FBC67356D2E7B1037C;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894;
// Cainos.PixelArtPlatformer_VillageProps.MovingPlatform
struct MovingPlatform_t3A4D92615851A1E3E83ABAABB5B9890CE556CA13;
// NinjaController.NinjaController
struct NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Cainos.LucidEditor.OnValueChangedAttribute
struct OnValueChangedAttribute_t3E475F2A972AC2799C03E2BB26A364A1B6B580FC;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t2F3F6683B2A351832C9011794CAB3A0096FAE5B5;
// NinjaController.PhysicsParams
struct PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F;
// NinjaController.PhysicsParamsContainer
struct PhysicsParamsContainer_t1171A75EE0F646D9B8A3CCCFC510CBB76F3AE82A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Cainos.LucidEditor.PropertyGroupAttribute
struct PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95;
// Cainos.LucidEditor.PropertyOrderAttribute
struct PropertyOrderAttribute_t7247B1F6821BC7AF7C0500061C25201EFC536C2B;
// Cainos.LucidEditor.ReadOnlyAttribute
struct ReadOnlyAttribute_tB227C8C099BCA02D4AC918F6457898B41B0C10B9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Cainos.LucidEditor.RequiredAttribute
struct RequiredAttribute_tFCC2EF3341029BD6081E4718D2F2BB6AB0040E65;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Cainos.LucidEditor.SectionHeaderAttribute
struct SectionHeaderAttribute_t8E188106D58463DC237DD696045CE87C93047783;
// Cainos.LucidEditor.ShowIfAttribute
struct ShowIfAttribute_t8A0E99425DC0E9D618062031C6A1E1696D45F94D;
// Cainos.LucidEditor.ShowInInspectorAttribute
struct ShowInInspectorAttribute_tC23E0B6A0D54FDC9B4D16254E9CF7D2F77530782;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// System.String
struct String_t;
// Cainos.LucidEditor.TabGroupAttribute
struct TabGroupAttribute_t160F7F31CF49A334AE43C5C0F9DB9F6A77B3125D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3;
// Cainos.LucidEditor.TitleHeaderAttribute
struct TitleHeaderAttribute_t334C708DD7BCC79F595283EB54F6F888AB5F1772;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Cainos.LucidEditor.ValidateInputAttribute
struct ValidateInputAttribute_t45F3ABE08CAA0BCC3A93502F9E543CC60B72FAC7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// Cainos.LucidEditor.PropertyGroupAttribute/<>c
struct U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9;
IL2CPP_EXTERN_C String_t* _stringLiteral5D00521C9083F7DED1A85AECC652F6C9C9C80BA0;
IL2CPP_EXTERN_C String_t* _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE1921D3070489B1532E810684C2992B44215A052;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m28EB00D8747BD14E8E8EC3BFDB9D79F689CB0293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4A64C7AA98342D76E2AC5F8C36FC5ECDDA49DD78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6747F4F338B10D3A415CA51956A4C83C1791FE1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m60598916F3157C85AB5F2E7192E5B838DD82D8A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m016EA90C4579158CA1606EDC1B15DA13F4494B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A9D055E5BA54A5D31EECDD694AAF0536F9D2609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1EB22FD0342D3BBEB512736B1738F417CD152A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEA1BAAC8DD08A01FBB410E93C82E0D280A2ADB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9FA145FA647E8F48B5A154D5821B704AE2DA1AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m18046D64FD3FA546A46227B43826992EE5D5F434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF54F2E66A8607C234890CE88852412F8AB6B2331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_m8EF5220F525E9FB5DB001CDF874690F2860FF148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6;
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1C870790D27AB51836CCACB01C95C83D56DB8DDF* ____entries_1;
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
	KeyCollection_t5139D729B43788C8618F24D1F6B76B894363E655* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC4E52A001D3CCFFBDFC279A1458CEC1C823D9F91* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF03C6AF2EFF2661D3B821514E06D6DF189BAAA7* ____entries_1;
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
	KeyCollection_t0E9A2C72E46C1A4FE7861BB40E8035E7D4F67174* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5C470EAF9AA6787C72B36CCEE35F46DBB4C9FCCA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Rigidbody2DU5BU5D_tC196E4DEEA396B4A08BFAE8A94A45FD14403C9CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8  : public RuntimeObject
{
};

// UnityStandardAssets.Utility.FOVKick
struct FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82  : public RuntimeObject
{
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___IncreaseCurve_5;
};

// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::m_Offset
	float ___m_Offset_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// NinjaController.PhysicsParams
struct PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F  : public RuntimeObject
{
	// System.Single NinjaController.PhysicsParams::playerMass
	float ___playerMass_0;
	// System.Single NinjaController.PhysicsParams::gameGravity
	float ___gameGravity_1;
	// System.Single NinjaController.PhysicsParams::jumpUpForce
	float ___jumpUpForce_2;
	// System.Single NinjaController.PhysicsParams::jumpUpVel
	float ___jumpUpVel_3;
	// System.Single NinjaController.PhysicsParams::jumpGravity
	float ___jumpGravity_4;
	// System.Single NinjaController.PhysicsParams::jumpWallVelVertical
	float ___jumpWallVelVertical_5;
	// System.Single NinjaController.PhysicsParams::jumpWallVelHorizontal
	float ___jumpWallVelHorizontal_6;
	// System.Single NinjaController.PhysicsParams::inAirMaxVelHorizontal
	float ___inAirMaxVelHorizontal_7;
	// System.Single NinjaController.PhysicsParams::inAirMoveHorizontalForce
	float ___inAirMoveHorizontalForce_8;
	// System.Single NinjaController.PhysicsParams::inAirMoveHorizontalForceReverse
	float ___inAirMoveHorizontalForceReverse_9;
	// System.Single NinjaController.PhysicsParams::onGroundMaxVelHorizontal
	float ___onGroundMaxVelHorizontal_10;
	// System.Single NinjaController.PhysicsParams::onGroundMoveHorizontalForce
	float ___onGroundMoveHorizontalForce_11;
	// System.Single NinjaController.PhysicsParams::onGroundMoveHorizontalForceReverse
	float ___onGroundMoveHorizontalForceReverse_12;
	// System.Single NinjaController.PhysicsParams::groundFriction
	float ___groundFriction_13;
	// System.Single NinjaController.PhysicsParams::groundFrictionEpsilon
	float ___groundFrictionEpsilon_14;
	// System.Single NinjaController.PhysicsParams::wallFriction
	float ___wallFriction_15;
	// System.Single NinjaController.PhysicsParams::wallFrictionStrongVelThreshold
	float ___wallFrictionStrongVelThreshold_16;
	// System.Single NinjaController.PhysicsParams::wallFrictionStrong
	float ___wallFrictionStrong_17;
	// System.Int32 NinjaController.PhysicsParams::version
	int32_t ___version_18;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;
};

// Cainos.LucidEditor.PropertyGroupAttribute/<>c
struct U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F  : public RuntimeObject
{
};

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75  : public RuntimeObject
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
struct Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// Cainos.LucidEditor.AssetsOnlyAttribute
struct AssetsOnlyAttribute_tF5F746B4696AB7E4D487AAE7A335830D704AF387  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// Cainos.LucidEditor.BlockquoteAttribute
struct BlockquoteAttribute_t321BD5E8E9680A0098BE392B2D3D66671B9F8CF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.BlockquoteAttribute::text
	String_t* ___text_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Cainos.LucidEditor.ButtonAttribute
struct ButtonAttribute_tFCF245656C2761768BBE09FCCBCF6B60750A43BE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.ButtonAttribute::label
	String_t* ___label_0;
	// Cainos.LucidEditor.InspectorButtonSize Cainos.LucidEditor.ButtonAttribute::size
	int32_t ___size_1;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// Cainos.LucidEditor.DisableIfAttribute
struct DisableIfAttribute_tFF49816FDEFD32456822D76C29118983AC0FC051  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.DisableIfAttribute::condition
	String_t* ___condition_0;
};

// Cainos.LucidEditor.DisableInEditModeAttribute
struct DisableInEditModeAttribute_t26E882F407EC81B7EF26EC2A69DC66309EAB4E6A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Cainos.LucidEditor.DisableInPlayModeAttribute
struct DisableInPlayModeAttribute_tD1C8B93FDE93A7BDC37FCBF5840FF30195894EF7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Cainos.LucidEditor.DisableLucidEditorAttribute
struct DisableLucidEditorAttribute_t7BDACF7188D2713AC3A0216E851C37503960E97E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Cainos.LucidEditor.EnableIfAttribute
struct EnableIfAttribute_t75415C5D824038652A22EC8CB793F9A8DEB849DD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.EnableIfAttribute::condition
	String_t* ___condition_0;
};

// Cainos.LucidEditor.HelpBoxAttribute
struct HelpBoxAttribute_tF4BBF0A7C9D813BDCCDAE7D3F50596BDFA1E0114  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.HelpBoxAttribute::message
	String_t* ___message_0;
	// Cainos.LucidEditor.HelpBoxMessageType Cainos.LucidEditor.HelpBoxAttribute::type
	int32_t ___type_1;
};

// Cainos.LucidEditor.HelpBoxIfAttribute
struct HelpBoxIfAttribute_tC0BE26CC2A6FABDFD075D9FE2593AF62DDCED0BC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.HelpBoxIfAttribute::condition
	String_t* ___condition_0;
	// System.String Cainos.LucidEditor.HelpBoxIfAttribute::message
	String_t* ___message_1;
	// Cainos.LucidEditor.HelpBoxMessageType Cainos.LucidEditor.HelpBoxIfAttribute::type
	int32_t ___type_2;
};

// Cainos.LucidEditor.HideIfAttribute
struct HideIfAttribute_tA899F880C37E80221FB801DD796A9668E8A90890  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.HideIfAttribute::condition
	String_t* ___condition_0;
};

// Cainos.LucidEditor.HideLabelAttribute
struct HideLabelAttribute_t1774FCDAF3FB939C80683FC7500416B8FE51D828  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Cainos.LucidEditor.HideMonoScriptAttribute
struct HideMonoScriptAttribute_t088F4C18769C7D28234E6AF6642AF6D4BA0DD2FB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Cainos.LucidEditor.IndentAttribute
struct IndentAttribute_tB25EB10C1E1BCA0AFFE3DED1815DEDF0B012291D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 Cainos.LucidEditor.IndentAttribute::indent
	int32_t ___indent_0;
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

// Cainos.LucidEditor.LabelTextAttribute
struct LabelTextAttribute_tFEC1FBCBBA6BA362A94F4F239A78F3E54289E5FE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.LabelTextAttribute::label
	String_t* ___label_0;
};

// Cainos.LucidEditor.LabelWidthAttribute
struct LabelWidthAttribute_t5226EDF187DD0AC82710C2FBC67356D2E7B1037C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Single Cainos.LucidEditor.LabelWidthAttribute::width
	float ___width_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// Cainos.LucidEditor.OnValueChangedAttribute
struct OnValueChangedAttribute_t3E475F2A972AC2799C03E2BB26A364A1B6B580FC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.OnValueChangedAttribute::methodName
	String_t* ___methodName_0;
};

// Cainos.LucidEditor.PropertyGroupAttribute
struct PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.PropertyGroupAttribute::path
	String_t* ___path_0;
	// System.String Cainos.LucidEditor.PropertyGroupAttribute::name
	String_t* ___name_1;
	// System.Int32 Cainos.LucidEditor.PropertyGroupAttribute::groupDepth
	int32_t ___groupDepth_2;
};

// Cainos.LucidEditor.PropertyOrderAttribute
struct PropertyOrderAttribute_t7247B1F6821BC7AF7C0500061C25201EFC536C2B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 Cainos.LucidEditor.PropertyOrderAttribute::propertyOrder
	int32_t ___propertyOrder_0;
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

// Cainos.LucidEditor.ReadOnlyAttribute
struct ReadOnlyAttribute_tB227C8C099BCA02D4AC918F6457898B41B0C10B9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Cainos.LucidEditor.RequiredAttribute
struct RequiredAttribute_tFCC2EF3341029BD6081E4718D2F2BB6AB0040E65  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.RequiredAttribute::message
	String_t* ___message_0;
};

// Cainos.LucidEditor.SectionHeaderAttribute
struct SectionHeaderAttribute_t8E188106D58463DC237DD696045CE87C93047783  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.SectionHeaderAttribute::title
	String_t* ___title_0;
};

// Cainos.LucidEditor.ShowIfAttribute
struct ShowIfAttribute_t8A0E99425DC0E9D618062031C6A1E1696D45F94D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.ShowIfAttribute::condition
	String_t* ___condition_0;
};

// Cainos.LucidEditor.ShowInInspectorAttribute
struct ShowInInspectorAttribute_tC23E0B6A0D54FDC9B4D16254E9CF7D2F77530782  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Cainos.LucidEditor.TitleHeaderAttribute
struct TitleHeaderAttribute_t334C708DD7BCC79F595283EB54F6F888AB5F1772  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.TitleHeaderAttribute::title
	String_t* ___title_0;
};

// Cainos.LucidEditor.ValidateInputAttribute
struct ValidateInputAttribute_t45F3ABE08CAA0BCC3A93502F9E543CC60B72FAC7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Cainos.LucidEditor.ValidateInputAttribute::condition
	String_t* ___condition_0;
	// System.String Cainos.LucidEditor.ValidateInputAttribute::message
	String_t* ___message_1;
	// Cainos.LucidEditor.HelpBoxMessageType Cainos.LucidEditor.ValidateInputAttribute::type
	int32_t ___type_2;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// Cainos.LucidEditor.BoxGroupAttribute
struct BoxGroupAttribute_tEFA615925511A98EFD501E05AA3D7D2BDA9FAA70  : public PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95
{
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
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

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_0;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Bobcurve_2;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_3;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionX
	float ___m_CyclePositionX_4;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionY
	float ___m_CyclePositionY_5;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_BobBaseInterval
	float ___m_BobBaseInterval_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_7;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_Time
	float ___m_Time_8;
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

// Cainos.LucidEditor.FoldoutGroupAttribute
struct FoldoutGroupAttribute_t561E61B39EA834DFD4FA85DBA6801DDE248DD910  : public PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95
{
};

// Cainos.LucidEditor.GUIColorAttribute
struct GUIColorAttribute_tD3EA72B4D19D38F773D45F4D870C4E536D9BE19F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Cainos.LucidEditor.InspectorColor Cainos.LucidEditor.GUIColorAttribute::color
	int32_t ___color_0;
	// System.Boolean Cainos.LucidEditor.GUIColorAttribute::useCustomColor
	bool ___useCustomColor_1;
	// UnityEngine.Color Cainos.LucidEditor.GUIColorAttribute::customColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___customColor_2;
};

// Cainos.LucidEditor.GroupAttribute
struct GroupAttribute_t4ABDDA4B2C83300C37A72286F506BFB9A94D0A1F  : public PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95
{
};

// Cainos.LucidEditor.HorizontalGroupAttribute
struct HorizontalGroupAttribute_t4557B115CD51D74BB0B2EC2B6F699C443DED6EB8  : public PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95
{
};

// Cainos.LucidEditor.HorizontalLineAttribute
struct HorizontalLineAttribute_t43B6425C428A74A304E5D8F40AE69C5D4F847BCF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Cainos.LucidEditor.InspectorColor Cainos.LucidEditor.HorizontalLineAttribute::color
	int32_t ___color_0;
	// System.Boolean Cainos.LucidEditor.HorizontalLineAttribute::useCustomColor
	bool ___useCustomColor_1;
	// UnityEngine.Color Cainos.LucidEditor.HorizontalLineAttribute::customColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___customColor_2;
};

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::XSensitivity
	float ___XSensitivity_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::YSensitivity
	float ___YSensitivity_1;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::clampVerticalRotation
	bool ___clampVerticalRotation_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MinimumX
	float ___MinimumX_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MaximumX
	float ___MaximumX_4;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::smooth
	bool ___smooth_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::smoothTime
	float ___smoothTime_6;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::lockCursor
	bool ___lockCursor_7;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CharacterTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CharacterTargetRot_8;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CameraTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CameraTargetRot_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::m_cursorIsLocked
	bool ___m_cursorIsLocked_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
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
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Cainos.Common.SecondOrderDynamics
struct SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C 
{
	// UnityEngine.Vector3 Cainos.Common.SecondOrderDynamics::xp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___xp_0;
	// UnityEngine.Vector3 Cainos.Common.SecondOrderDynamics::y
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___y_1;
	// UnityEngine.Vector3 Cainos.Common.SecondOrderDynamics::yd
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___yd_2;
	// System.Single Cainos.Common.SecondOrderDynamics::k1
	float ___k1_3;
	// System.Single Cainos.Common.SecondOrderDynamics::k2
	float ___k2_4;
	// System.Single Cainos.Common.SecondOrderDynamics::k3
	float ___k3_5;
	// UnityEngine.Vector3 Cainos.Common.SecondOrderDynamics::xd
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___xd_6;
	// System.Single Cainos.Common.SecondOrderDynamics::k2_stable
	float ___k2_stable_7;
	// System.Single Cainos.Common.SecondOrderDynamics::f
	float ___f_8;
	// System.Single Cainos.Common.SecondOrderDynamics::d
	float ___d_9;
	// System.Single Cainos.Common.SecondOrderDynamics::r
	float ___r_10;
};

// Cainos.LucidEditor.TabGroupAttribute
struct TabGroupAttribute_t160F7F31CF49A334AE43C5C0F9DB9F6A77B3125D  : public PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95
{
	// System.String Cainos.LucidEditor.TabGroupAttribute::tabName
	String_t* ___tabName_3;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_AlwaysUseVirtual_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
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
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_7;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* ___m_PairedWith_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_Axis_9;
};

// Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform
struct BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::platform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___platform_4;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::waitTime
	float ___waitTime_5;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::retrieveSpeed
	float ___retrieveSpeed_6;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::pushSpeed
	float ___pushSpeed_7;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::platformYPosDown
	float ___platformYPosDown_8;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::platformYPosUp
	float ___platformYPosUp_9;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::platformYPos
	float ___platformYPos_10;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::waitTimer
	float ___waitTimer_11;
	// Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform/State Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::curState
	int32_t ___curState_12;
	// UnityEngine.Vector3 Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::platformPrevPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___platformPrevPos_13;
	// UnityEngine.Vector2 Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::platformVel
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___platformVel_14;
	// Cainos.Common.SecondOrderDynamics Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::secondOrderDynamics
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C ___secondOrderDynamics_15;
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::onPlatformRigidbodies
	List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* ___onPlatformRigidbodies_16;
};

// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_4;
};

// Cainos.PixelArtPlatformer_VillageProps.Chest
struct Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Cainos.PixelArtPlatformer_VillageProps.Chest::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// System.Boolean Cainos.PixelArtPlatformer_VillageProps.Chest::isOpened
	bool ___isOpened_5;
};

// Cainos.PixelArtPlatformer_VillageProps.Elevator
struct Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 Cainos.PixelArtPlatformer_VillageProps.Elevator::lengthRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lengthRange_4;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::waitTime
	float ___waitTime_5;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::moveSpeed
	float ___moveSpeed_6;
	// Cainos.PixelArtPlatformer_VillageProps.Elevator/State Cainos.PixelArtPlatformer_VillageProps.Elevator::startState
	int32_t ___startState_7;
	// UnityEngine.Rigidbody2D Cainos.PixelArtPlatformer_VillageProps.Elevator::platform
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___platform_8;
	// UnityEngine.SpriteRenderer Cainos.PixelArtPlatformer_VillageProps.Elevator::chainL
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___chainL_9;
	// UnityEngine.SpriteRenderer Cainos.PixelArtPlatformer_VillageProps.Elevator::chainR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___chainR_10;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::length
	float ___length_11;
	// Cainos.PixelArtPlatformer_VillageProps.Elevator/State Cainos.PixelArtPlatformer_VillageProps.Elevator::curState
	int32_t ___curState_12;
	// System.Boolean Cainos.PixelArtPlatformer_VillageProps.Elevator::isWaiting
	bool ___isWaiting_13;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::waitTimer
	float ___waitTimer_14;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::curSpeed
	float ___curSpeed_15;
	// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::targetLength
	float ___targetLength_16;
	// Cainos.Common.SecondOrderDynamics Cainos.PixelArtPlatformer_VillageProps.Elevator::secondOrderDynamics
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C ___secondOrderDynamics_17;
};

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_IsWalking
	bool ___m_IsWalking_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_WalkSpeed
	float ___m_WalkSpeed_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunSpeed
	float ___m_RunSpeed_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunstepLenghten
	float ___m_RunstepLenghten_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSpeed
	float ___m_JumpSpeed_8;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StickToGroundForce
	float ___m_StickToGroundForce_9;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_GravityMultiplier
	float ___m_GravityMultiplier_10;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MouseLook
	MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* ___m_MouseLook_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseFovKick
	bool ___m_UseFovKick_12;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FovKick
	FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* ___m_FovKick_13;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseHeadBob
	bool ___m_UseHeadBob_14;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_HeadBob
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* ___m_HeadBob_15;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpBob
	LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* ___m_JumpBob_16;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepInterval
	float ___m_StepInterval_17;
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jump
	bool ___m_Jump_19;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_YRotation
	float ___m_YRotation_20;
	// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Input_21;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MoveDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDir_22;
	// UnityEngine.CharacterController UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_23;
	// UnityEngine.CollisionFlags UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CollisionFlags
	int32_t ___m_CollisionFlags_24;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_25;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_26;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepCycle
	float ___m_StepCycle_27;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_NextStep
	float ___m_NextStep_28;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jumping
	bool ___m_Jumping_29;
};

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_4;
};

// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_4;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_VerticalVirtualAxis_12;
};

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Cainos.PixelArtPlatformer_VillageProps.MovingPlatform
struct MovingPlatform_t3A4D92615851A1E3E83ABAABB5B9890CE556CA13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::velocityInheritPercent
	float ___velocityInheritPercent_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::onPlatformObjects
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___onPlatformObjects_5;
	// UnityEngine.Vector3 Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::prevPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prevPos_6;
	// UnityEngine.Vector2 Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___velocity_7;
};

// NinjaController.NinjaController
struct NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D NinjaController.NinjaController::<RBody>k__BackingField
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___U3CRBodyU3Ek__BackingField_4;
	// NinjaController.PhysicsParams NinjaController.NinjaController::physicsParams
	PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* ___physicsParams_5;
	// System.Single NinjaController.NinjaController::timeRealLastGroundCollision
	float ___timeRealLastGroundCollision_6;
	// System.Single NinjaController.NinjaController::timeRealLastWallLeftCollision
	float ___timeRealLastWallLeftCollision_7;
	// System.Single NinjaController.NinjaController::timeRealLastWallRightCollision
	float ___timeRealLastWallRightCollision_8;
	// UnityEngine.Vector2 NinjaController.NinjaController::currentVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentVelocity_9;
	// UnityEngine.Vector2 NinjaController.NinjaController::currentForce
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentForce_10;
	// System.Boolean NinjaController.NinjaController::isPlayerInAir
	bool ___isPlayerInAir_11;
	// System.Boolean NinjaController.NinjaController::keyJumpRetrigger
	bool ___keyJumpRetrigger_12;
	// System.Boolean NinjaController.NinjaController::keyJumpPressed
	bool ___keyJumpPressed_13;
	// System.Boolean NinjaController.NinjaController::isPlayerOnWall
	bool ___isPlayerOnWall_14;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> NinjaController.NinjaController::allRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___allRenderers_15;
};

// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t2F3F6683B2A351832C9011794CAB3A0096FAE5B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.Effects.ParticleSystemMultiplier::multiplier
	float ___multiplier_4;
};

// NinjaController.PhysicsParamsContainer
struct PhysicsParamsContainer_t1171A75EE0F646D9B8A3CCCFC510CBB76F3AE82A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NinjaController.PhysicsParams NinjaController.PhysicsParamsContainer::physicsParams
	PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* ___physicsParams_4;
};

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* ___mapping_4;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_7;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_SteerAxis_8;
};

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_4;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_5;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_8;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPos_10;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousDelta_11;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_JoytickOutput_12;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_13;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_HorizontalVirtualAxis_15;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_VerticalVirtualAxis_16;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_17;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_18;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousTouchPos_19;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_20;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_Image_21;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_18;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_20;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_21;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_22;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_26;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_28;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_29;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_30;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Renderer>

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Rigidbody2DU5BU5D_tC196E4DEEA396B4A08BFAE8A94A45FD14403C9CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Attribute

// System.Attribute

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields
{
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___s_HardwareInput_2;
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager

// UnityStandardAssets.Utility.FOVKick

// UnityStandardAssets.Utility.FOVKick

// UnityStandardAssets.Utility.LerpControlledBob

// UnityStandardAssets.Utility.LerpControlledBob

// NinjaController.PhysicsParams

// NinjaController.PhysicsParams

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton

// Cainos.LucidEditor.PropertyGroupAttribute/<>c
struct U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_StaticFields
{
	// Cainos.LucidEditor.PropertyGroupAttribute/<>c Cainos.LucidEditor.PropertyGroupAttribute/<>c::<>9
	U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F* ___U3CU3E9_0;
	// System.Func`2<System.Char,System.Boolean> Cainos.LucidEditor.PropertyGroupAttribute/<>c::<>9__3_0
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___U3CU3E9__3_0_1;
};

// Cainos.LucidEditor.PropertyGroupAttribute/<>c

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>

// Cainos.LucidEditor.AssetsOnlyAttribute

// Cainos.LucidEditor.AssetsOnlyAttribute

// Cainos.LucidEditor.BlockquoteAttribute

// Cainos.LucidEditor.BlockquoteAttribute

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Cainos.LucidEditor.ButtonAttribute

// Cainos.LucidEditor.ButtonAttribute

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// Cainos.LucidEditor.DisableIfAttribute

// Cainos.LucidEditor.DisableIfAttribute

// Cainos.LucidEditor.DisableInEditModeAttribute

// Cainos.LucidEditor.DisableInEditModeAttribute

// Cainos.LucidEditor.DisableInPlayModeAttribute

// Cainos.LucidEditor.DisableInPlayModeAttribute

// Cainos.LucidEditor.DisableLucidEditorAttribute

// Cainos.LucidEditor.DisableLucidEditorAttribute

// System.Double

// System.Double

// Cainos.LucidEditor.EnableIfAttribute

// Cainos.LucidEditor.EnableIfAttribute

// Cainos.LucidEditor.HelpBoxAttribute

// Cainos.LucidEditor.HelpBoxAttribute

// Cainos.LucidEditor.HelpBoxIfAttribute

// Cainos.LucidEditor.HelpBoxIfAttribute

// Cainos.LucidEditor.HideIfAttribute

// Cainos.LucidEditor.HideIfAttribute

// Cainos.LucidEditor.HideLabelAttribute

// Cainos.LucidEditor.HideLabelAttribute

// Cainos.LucidEditor.HideMonoScriptAttribute

// Cainos.LucidEditor.HideMonoScriptAttribute

// Cainos.LucidEditor.IndentAttribute

// Cainos.LucidEditor.IndentAttribute

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Cainos.LucidEditor.LabelTextAttribute

// Cainos.LucidEditor.LabelTextAttribute

// Cainos.LucidEditor.LabelWidthAttribute

// Cainos.LucidEditor.LabelWidthAttribute

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// Cainos.LucidEditor.OnValueChangedAttribute

// Cainos.LucidEditor.OnValueChangedAttribute

// Cainos.LucidEditor.PropertyGroupAttribute

// Cainos.LucidEditor.PropertyGroupAttribute

// Cainos.LucidEditor.PropertyOrderAttribute

// Cainos.LucidEditor.PropertyOrderAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// Cainos.LucidEditor.ReadOnlyAttribute

// Cainos.LucidEditor.ReadOnlyAttribute

// Cainos.LucidEditor.RequiredAttribute

// Cainos.LucidEditor.RequiredAttribute

// Cainos.LucidEditor.SectionHeaderAttribute

// Cainos.LucidEditor.SectionHeaderAttribute

// Cainos.LucidEditor.ShowIfAttribute

// Cainos.LucidEditor.ShowIfAttribute

// Cainos.LucidEditor.ShowInInspectorAttribute

// Cainos.LucidEditor.ShowInInspectorAttribute

// System.Single

// System.Single

// Cainos.LucidEditor.TitleHeaderAttribute

// Cainos.LucidEditor.TitleHeaderAttribute

// Cainos.LucidEditor.ValidateInputAttribute

// Cainos.LucidEditor.ValidateInputAttribute

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::141253DC2E6542A74C1A4C854A9F711F8B1711068AEE2BE41671FCFC99CF4D98
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___141253DC2E6542A74C1A4C854A9F711F8B1711068AEE2BE41671FCFC99CF4D98_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::56CB0D047180B47A14C5CBF73CD1F71ED3D8F672188F45AD24969EE29449B64E
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___56CB0D047180B47A14C5CBF73CD1F71ED3D8F672188F45AD24969EE29449B64E_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::636952D3023D8CF5D8245AC30EFB93A443BD4BC23B5E331D51ECB82425FDC30A
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___636952D3023D8CF5D8245AC30EFB93A443BD4BC23B5E331D51ECB82425FDC30A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::CF9F4A4C8E8FA27F5B64870518C85D88D98FB016D6AA49AF672D0E295735D728
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___CF9F4A4C8E8FA27F5B64870518C85D88D98FB016D6AA49AF672D0E295735D728_3;
};

// <PrivateImplementationDetails>

// Cainos.LucidEditor.BoxGroupAttribute

// Cainos.LucidEditor.BoxGroupAttribute

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// UnityEngine.ContactPoint2D

// UnityEngine.ContactPoint2D

// UnityEngine.ControllerColliderHit

// UnityEngine.ControllerColliderHit

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityStandardAssets.Utility.CurveControlledBob

// UnityStandardAssets.Utility.CurveControlledBob

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Cainos.LucidEditor.FoldoutGroupAttribute

// Cainos.LucidEditor.FoldoutGroupAttribute

// Cainos.LucidEditor.GUIColorAttribute

// Cainos.LucidEditor.GUIColorAttribute

// Cainos.LucidEditor.GroupAttribute

// Cainos.LucidEditor.GroupAttribute

// Cainos.LucidEditor.HorizontalGroupAttribute

// Cainos.LucidEditor.HorizontalGroupAttribute

// Cainos.LucidEditor.HorizontalLineAttribute

// Cainos.LucidEditor.HorizontalLineAttribute

// UnityStandardAssets.Characters.FirstPerson.MouseLook

// UnityStandardAssets.Characters.FirstPerson.MouseLook

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Cainos.Common.SecondOrderDynamics

// Cainos.Common.SecondOrderDynamics

// Cainos.LucidEditor.TabGroupAttribute

// Cainos.LucidEditor.TabGroupAttribute

// UnityEngine.Touch

// UnityEngine.Touch

// UnityStandardAssets.CrossPlatformInput.VirtualInput

// UnityStandardAssets.CrossPlatformInput.VirtualInput

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput

// System.Type
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

// System.Type

// System.Func`2<System.Char,System.Boolean>

// System.Func`2<System.Char,System.Boolean>

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CharacterController

// UnityEngine.CharacterController

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton

// Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform

// Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform

// UnityStandardAssets.CrossPlatformInput.ButtonHandler

// UnityStandardAssets.CrossPlatformInput.ButtonHandler

// Cainos.PixelArtPlatformer_VillageProps.Chest

// Cainos.PixelArtPlatformer_VillageProps.Chest

// Cainos.PixelArtPlatformer_VillageProps.Elevator

// Cainos.PixelArtPlatformer_VillageProps.Elevator

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar

// UnityStandardAssets.CrossPlatformInput.Joystick

// UnityStandardAssets.CrossPlatformInput.Joystick

// UnityStandardAssets.CrossPlatformInput.MobileControlRig

// UnityStandardAssets.CrossPlatformInput.MobileControlRig

// Cainos.PixelArtPlatformer_VillageProps.MovingPlatform

// Cainos.PixelArtPlatformer_VillageProps.MovingPlatform

// NinjaController.NinjaController

// NinjaController.NinjaController

// UnityStandardAssets.Effects.ParticleSystemMultiplier

// UnityStandardAssets.Effects.ParticleSystemMultiplier

// NinjaController.PhysicsParamsContainer

// NinjaController.PhysicsParamsContainer

// UnityStandardAssets.CrossPlatformInput.TiltInput

// UnityStandardAssets.CrossPlatformInput.TiltInput

// UnityStandardAssets.CrossPlatformInput.TouchPad

// UnityStandardAssets.CrossPlatformInput.TouchPad

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.EventSystems.StandaloneInputModule

// UnityEngine.EventSystems.StandaloneInputModule
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6  : public RuntimeArray
{
	ALIGN_FIELD (8) AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* m_Items[1];

	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 m_Items[1];

	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		m_Items[index] = value;
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


// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Char,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m86D272566839A59489924C367E316D2E516EC1F2_gshared (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4A64C7AA98342D76E2AC5F8C36FC5ECDDA49DD78_gshared (RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Single UnityEngine.ParticleSystem::get_startSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_get_startSize_m1B22CB5B4B1BC3F2BA2305D1B08B728ABDCC6E3C (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_set_startSize_m46D039E084DE9E8A2CDAC3B74D7D890257BDD89A (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem::get_startSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_get_startSpeed_m983135F97864F901C54FFE008C49923C90CE0BD3 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_set_startSpeed_m1169742C95F5F82B92B3CD495083156C39312C27 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_get_startLifetime_m46F8AB758D7176C8E9FBD9CB953E4D40B2A864AE (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_set_startLifetime_mE1EA7E7BE400608849D41368BA159FD17C1A312E (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Clear_mE026AF9610248EB560530CD292FEED0F7571F732 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___0_axis, const RuntimeMethod* method) ;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___0_axis, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___0_button, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF (String_t* ___0_name, bool ___1_raw, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___0_name, bool ___1_matchToInputSettings, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___0_name, bool ___1_matchToInputSettings, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m1E6A9A7651B30B0DE215978492BBCD5AE02AC05D (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m0D1AB307179B4D57152E83DD463437D38899B14C (String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4 (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, bool ___0_enabled, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m11435FDBBFEE69E13CC719C9252BEBECA720A4C9 (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5855813A6C9C8682AD14D4A310B6955776ABFE7E (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mA2E9797A6C5E37A63363F8C0322D91BB062EDA70 (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___0_key, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___0_key, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(TKey)
inline bool Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(TKey)
inline bool Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(TKey)
inline VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m7C5C3BBD160D50D062C1A8395B795B015C983F1D (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___0_button, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(TKey)
inline VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_Setup_m7E73F218F4B74B175FC9BD1DD32B0711E048916F (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob_Setup_mDB98D5F434FDEBD472856B9686AF5DCE77056AF4 (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, float ___1_bobBaseInterval, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_character, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_camera, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m9B8928DC7CBC33DA6CC7350B42208BE838030577 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LerpControlledBob_DoBobCycle_m6C115FF5CB0A8C3A08F93F72A841B494325814CC (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float* ___0_speed, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, float ___1_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3_hitInfo, float ___4_maxDistance, int32_t ___5_layerMask, int32_t ___6_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_motion, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___0_speed, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___0_speed, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurveControlledBob_DoHeadBob_m9AC57FF9121912E844CE19359AC72857115DC4C5 (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* __this, float ___0_speed, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickDown_m9176B1195AEA7C88568D27F2860B13C98ECA188F (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickUp_m81F318FFA44E3CC3739EAB65EA8ACBD31882483B (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_character, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_camera, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, int32_t ___2_mode, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick__ctor_mB6A54D8492E90A1E07B02E1EC06EEC67100DC22F (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob__ctor_mBB05CB56470904C61063A0D32F021E7FD1285D22 (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpControlledBob__ctor_m2B5B7BE2359268DC4B0D49651AF01123D447793B (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody2D NinjaController.NinjaController::get_RBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* NinjaController_get_RBody_m79F8AD472C3FCFBDE1FC560FEF18E2DA5F43CACB_inline (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 NinjaController.NinjaController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NinjaController_get_Velocity_m1AE2964DC67C740908731E77994690A52C673383 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// NinjaController.PhysicsParams NinjaController.NinjaController::get_PhysicsParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Boolean NinjaController.NinjaController::GetIsColliding(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_GetIsColliding_mB622D93D0634A2213C5BE3F21F0B8A5F0A2AD4A0 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, float ___0_timeLastCollision, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void NinjaController.NinjaController::set_RBody(UnityEngine.Rigidbody2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NinjaController_set_RBody_m6751EE665BEF573C56B2FE9C637D52CBA3613D2C_inline (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m28EB00D8747BD14E8E8EC3BFDB9D79F689CB0293 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mF54F2E66A8607C234890CE88852412F8AB6B2331 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void NinjaController.NinjaController::SimResetForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_SimResetForce_m4DDCA6430E61B2C0CF8639632FF9EBBC1E161889 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// System.Single NinjaController.NinjaController::get_EntityMass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void NinjaController.NinjaController::SimAddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, const RuntimeMethod* method) ;
// System.Void NinjaController.NinjaController::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_ProcessInput_m887FE2A3496CD2957DD91974C6033B4D74393F8B (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// System.Void NinjaController.NinjaController::ComputeVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_ComputeVelocity_mFE552B8A12A562B049611E565910552CB488ED8F (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, float ___0_dt, const RuntimeMethod* method) ;
// System.Boolean NinjaController.NinjaController::get_IsOnWallLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsOnWallLeft_mDC2BE2CEE084103FD5F789D52609F509DD125D3B (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// System.Boolean NinjaController.NinjaController::get_IsOnWallRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsOnWallRight_m0258DF8265788AF2F3A834A97A6222CDB5FEAE93 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// System.Boolean NinjaController.NinjaController::get_IsOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsOnGround_mE8ED6AD636D52A7C1AC8F275F58BFE5CA49D3027 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// System.Boolean NinjaController.NinjaController::GetIsVectorClose(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_GetIsVectorClose_m103290BDAD61E427EC263730590A7A954DB8D458 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vectorA, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_vectorB, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Cainos.LucidEditor.PropertyGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute__ctor_m720E3F5F9EC44E4DFE41F620E065B89C89837095 (PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95* __this, String_t* ___0_groupPath, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared)(___0_source, method);
}
// System.Void System.Func`2<System.Char,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m86D272566839A59489924C367E316D2E516EC1F2 (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m86D272566839A59489924C367E316D2E516EC1F2_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline int32_t Enumerable_Count_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4A64C7AA98342D76E2AC5F8C36FC5ECDDA49DD78 (RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))Enumerable_Count_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4A64C7AA98342D76E2AC5F8C36FC5ECDDA49DD78_gshared)(___0_source, ___1_predicate, method);
}
// System.Void Cainos.LucidEditor.PropertyGroupAttribute/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE7DB111DB463B5581B9265ED42AB99EBB18758D (U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
inline Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6 List_1_GetEnumerator_mEA1BAAC8DD08A01FBB410E93C82E0D280A2ADB7A (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6 (*) (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::Dispose()
inline void Enumerator_Dispose_m6747F4F338B10D3A415CA51956A4C83C1791FE1D (Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::get_Current()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Enumerator_get_Current_m016EA90C4579158CA1606EDC1B15DA13F4494B57_inline (Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___0_d, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_a, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::MoveNext()
inline bool Enumerator_MoveNext_m60598916F3157C85AB5F2E7192E5B838DD82D8A0 (Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
inline void List_1_Clear_m1EB22FD0342D3BBEB512736B1738F417CD152A9C_inline (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
inline void List_1__ctor_m18046D64FD3FA546A46227B43826992EE5D5F434 (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Cainos.Common.SecondOrderDynamics::Reset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_m24838F469F2C0D0D85BA2B7F7985F2E8008964DB (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_x0, const RuntimeMethod* method) ;
// System.Void Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::Push()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingPlatform_Push_m8D7D50AA63A2A9A7BA25B0532F569FE2B72F911C (BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single Cainos.Common.SecondOrderDynamics::Update(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SecondOrderDynamics_Update_m5767F8ACAA35F03D1BD3D9BD962F183732C7C4C7 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_x, float ___1_t, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.RigidbodyType2D UnityEngine.Rigidbody2D::get_bodyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rigidbody2D_get_bodyType_m20709275F3D8215592B2B89736AA8DDD2BF44ED1 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
inline bool List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4 (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76*, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
inline void List_1_Add_m6A9D055E5BA54A5D31EECDD694AAF0536F9D2609_inline (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76*, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
inline bool List_1_Remove_m9FA145FA647E8F48B5A154D5821B704AE2DA1AEB (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76*, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void Cainos.Common.SecondOrderDynamics::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics__ctor_m8D1030258F61AB9EBB39D9F139BEEA876C90EB88 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_frequency, float ___1_damping, float ___2_response, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void Cainos.PixelArtPlatformer_VillageProps.Chest::set_IsOpened(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_set_IsOpened_m70AE3A7F953BD6D32DA75FA097FECFCC8EEA52FC (Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_size_mDC603B73F10D51A8FBD6D2592CD85719A3043A1B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::set_Length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_set_Length_m20E92A1C4602FE4AB8B3977E790A30A447A4BE5F (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Elevator_get_Length_m00371FB4612EB3BE937EEFEBE520CF348A8C44A7_inline (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) ;
// System.Boolean Cainos.PixelArtPlatformer_VillageProps.Elevator::get_IsWaiting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Elevator_get_IsWaiting_m0C46CDADDEC21102BD3E476B55DFB2F0D1890FA3_inline (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) ;
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::set_IsWaiting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_set_IsWaiting_m4E4721A65AD9C4F8F4568497FC426E1614BF02F9 (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(T)
inline bool List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Remove(T)
inline bool List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Single Cainos.Common.SecondOrderDynamics::get_Frequency()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Frequency_m52BC30092AE5C3278D4EF714BBA86D138A0B188E_inline (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) ;
// System.Void Cainos.Common.SecondOrderDynamics::UpdateInnerParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) ;
// System.Void Cainos.Common.SecondOrderDynamics::set_Frequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_set_Frequency_m1308F2A2C9703FE0DF410B239D3B3D5611C8C195 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Cainos.Common.SecondOrderDynamics::get_Damping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Damping_mEEE53E20E3ED005609F659AE720F4A15083A9EC4_inline (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) ;
// System.Void Cainos.Common.SecondOrderDynamics::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_set_Damping_m6005AC7C0FBB11968993BADEAEA4C061ADCA5139 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Cainos.Common.SecondOrderDynamics::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Response_mEAA69379E6CA54BC1FCB3D194FF86331A2CA46FC_inline (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) ;
// System.Void Cainos.Common.SecondOrderDynamics::set_Response(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_set_Response_m97EA3BC1BE9D28B071A45D2A94F30DE7D74B3878 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Cainos.Common.SecondOrderDynamics::Reset(System.Single,System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_frequency, float ___1_damping, float ___2_response, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_x0, const RuntimeMethod* method) ;
// System.Void Cainos.Common.SecondOrderDynamics::Reset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_mA2FFDB1B3C572A48E24B8DE9E2146464EF12FCC6 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x0, const RuntimeMethod* method) ;
// System.Void Cainos.Common.SecondOrderDynamics::Reset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_m31066B6B4A89F529B043FD25C2309AA7436685F6 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cainos.Common.SecondOrderDynamics::Update(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SecondOrderDynamics_Update_mF58B4FE8E26B18EC816EEBC38DA4E1D86E815DDE (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x, float ___1_t, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Cainos.Common.SecondOrderDynamics::Update(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SecondOrderDynamics_Update_mC2AA56F48C4A2912A44EB4A305BAA1B4543BC359 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, float ___1_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Effects.ParticleSystemMultiplier::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemMultiplier_Start_m1D8F0F76F51A304719B52F0BEECE23DE0C75FD9E (ParticleSystemMultiplier_t2F3F6683B2A351832C9011794CAB3A0096FAE5B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var systems = GetComponentsInChildren<ParticleSystem>();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0;
		L_0 = Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D(__this, Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		// foreach (ParticleSystem system in systems)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0065;
	}

IL_000b:
	{
		// foreach (ParticleSystem system in systems)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// system.startSize *= multiplier;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = L_4;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = L_5;
		float L_7;
		L_7 = ParticleSystem_get_startSize_m1B22CB5B4B1BC3F2BA2305D1B08B728ABDCC6E3C(L_6, NULL);
		float L_8 = __this->___multiplier_4;
		ParticleSystem_set_startSize_m46D039E084DE9E8A2CDAC3B74D7D890257BDD89A(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		// system.startSpeed *= multiplier;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = L_5;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = L_9;
		float L_11;
		L_11 = ParticleSystem_get_startSpeed_m983135F97864F901C54FFE008C49923C90CE0BD3(L_10, NULL);
		float L_12 = __this->___multiplier_4;
		ParticleSystem_set_startSpeed_m1169742C95F5F82B92B3CD495083156C39312C27(L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		// system.startLifetime *= Mathf.Lerp(multiplier, 1, 0.5f);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = L_9;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = L_13;
		float L_15;
		L_15 = ParticleSystem_get_startLifetime_m46F8AB758D7176C8E9FBD9CB953E4D40B2A864AE(L_14, NULL);
		float L_16 = __this->___multiplier_4;
		float L_17;
		L_17 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_16, (1.0f), (0.5f), NULL);
		ParticleSystem_set_startLifetime_mE1EA7E7BE400608849D41368BA159FD17C1A312E(L_14, ((float)il2cpp_codegen_multiply(L_15, L_17)), NULL);
		// system.Clear();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18 = L_13;
		ParticleSystem_Clear_mE026AF9610248EB560530CD292FEED0F7571F732(L_18, NULL);
		// system.Play();
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_18, NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0065:
	{
		// foreach (ParticleSystem system in systems)
		int32_t L_20 = V_1;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Effects.ParticleSystemMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemMultiplier__ctor_mF0D5D957974904809C8D5DB635C3C6045E9B5646 (ParticleSystemMultiplier_t2F3F6683B2A351832C9011794CAB3A0096FAE5B5* __this, const RuntimeMethod* method) 
{
	{
		// public float multiplier = 1;
		__this->___multiplier_4 = (1.0f);
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
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnEnable_mA0CB06BE093AC878BF534BBD84243381FD3B77DC (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CrossPlatformInputManager.AxisExists(axisName))
		String_t* L_0 = __this->___axisName_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// m_Axis = new CrossPlatformInputManager.VirtualAxis(axisName);
		String_t* L_2 = __this->___axisName_4;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_3, L_2, NULL);
		__this->___m_Axis_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Axis_9), (void*)L_3);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_Axis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = __this->___m_Axis_9;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_4, NULL);
		goto IL_003c;
	}

IL_002b:
	{
		// m_Axis = CrossPlatformInputManager.VirtualAxisReference(axisName);
		String_t* L_5 = __this->___axisName_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0(L_5, NULL);
		__this->___m_Axis_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Axis_9), (void*)L_6);
	}

IL_003c:
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var otherAxisButtons = FindObjectsOfType(typeof(AxisTouchButton)) as AxisTouchButton[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_1, NULL);
		V_0 = ((AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var));
		// if (otherAxisButtons != null)
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_001c:
	{
		// if (otherAxisButtons[i].axisName == axisName && otherAxisButtons[i] != this)
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		String_t* L_8 = L_7->___axisName_4;
		String_t* L_9 = __this->___axisName_4;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, __this, NULL);
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		// m_PairedWith = otherAxisButtons[i];
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		__this->___m_PairedWith_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PairedWith_8), (void*)L_19);
	}

IL_0045:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_001c;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnDisable_m8AA98C419101C6E74916DCC6D374FAA16E2447E6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	{
		// m_Axis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_Axis_9;
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerDown_mEAFB55F3168F0EB8686D4DD6806F1D6E7CEA587F (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PairedWith == null)
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_0 = __this->___m_PairedWith_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6(__this, NULL);
	}

IL_0014:
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, axisValue, responseSpeed * Time.deltaTime));
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2 = __this->___m_Axis_9;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = __this->___m_Axis_9;
		float L_4;
		L_4 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_3, NULL);
		float L_5 = __this->___axisValue_5;
		float L_6 = __this->___responseSpeed_6;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8;
		L_8 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_2, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerUp_mC153F4DEF33CD567AAC5F34655C9800A937D5921 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, 0, responseSpeed * Time.deltaTime));
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_Axis_9;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = __this->___m_Axis_9;
		float L_2;
		L_2 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_1, NULL);
		float L_3 = __this->___responseSpeed_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5;
		L_5 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_2, (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton__ctor_m9AF8E700094EE8527AB82CEBDB0A44DA0C95AF5C (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string axisName = "Horizontal"; // The name of the axis
		__this->___axisName_4 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisName_4), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public float axisValue = 1; // The axis that the value has
		__this->___axisValue_5 = (1.0f);
		// public float responseSpeed = 3; // The speed at which the axis touch button responds
		__this->___responseSpeed_6 = (3.0f);
		// public float returnToCentreSpeed = 3; // The speed at which the button will return to its centre
		__this->___returnToCentreSpeed_7 = (3.0f);
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_OnEnable_m21C7296FBD3571A6B202081ACD849E1F7D1BE1BE (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetDownState_m2D3541EE8B5D405AED991208F80E878C6ED20476 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonDown(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetUpState_m929AE70FC12438D4C1A1CE08ED2F50486A349DF3 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonUp(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisPositiveState_mD39C82A2278A40FF24C07F4ACA2CE50F7D781C07 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisPositive(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNeutralState_m64A43BE9D146431594B57B87BB2F06C513BC7DAE (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisZero(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNegativeState_m9BE3FEF95560F79235800816EC2550D1BFA15D21 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisNegative(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_Update_m2222E2C4831F0A1CC88D1632E831845549903F29 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m5D30325215B941B3A4F4DDBB1579D011CA20B6E1 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_m33746463243A0E08FFB62BBA37D748B8AD555B12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TouchInput = new MobileInput();
		MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* L_0 = (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C*)il2cpp_codegen_object_new(MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var);
		MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4(L_0, NULL);
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1), (void*)L_0);
		// s_HardwareInput = new StandaloneInput();
		StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* L_1 = (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100*)il2cpp_codegen_object_new(StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB(L_1, NULL);
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2), (void*)L_1);
		// activeInput = s_HardwareInput;
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_m0EF5871383993606792E15D981EB3F8E80B7D21E (int32_t ___0_activeInputMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_activeInputMethod;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_activeInputMethod;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// activeInput = s_HardwareInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// break;
		return;
	}

IL_0013:
	{
		// activeInput = s_TouchInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_3 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_3);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.AxisExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_mC20C99C73743856EE697EEBA83EA2208CE336A81 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.ButtonExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___0_axis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualAxis(axis);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = ___0_axis;
		VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m7C5C3BBD160D50D062C1A8395B795B015C983F1D (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___0_button, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualButton(button);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = ___0_button;
		VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == null)
		String_t* L_0 = ___0_name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("name");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99_RuntimeMethod_var)));
	}

IL_000e:
	{
		// activeInput.UnRegisterVirtualAxis(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_3 = ___0_name;
		VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m1E6A9A7651B30B0DE215978492BBCD5AE02AC05D (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.UnRegisterVirtualButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.VirtualAxisReference(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2;
		L_2 = VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, false);
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_m1E30C7F4B0BC79DFEB94B689712773864E1BEA1E (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, true);
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF (String_t* ___0_name, bool ___1_raw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetAxis(name, raw);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		bool L_2 = ___1_raw;
		float L_3;
		L_3 = VirtualFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_mD402C26AEAD64708BE60A84F3B16BE4C186AE920 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m9B8928DC7CBC33DA6CC7350B42208BE838030577 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_m6C03EE4715D687BD60050AE4B18956D9D6B6D970 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		VirtualActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisPositive(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisNegative(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisZero(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m0D1AB307179B4D57152E83DD463437D38899B14C (String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxis(name, value);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___0_name;
		float L_2 = ___1_value;
		VirtualActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CrossPlatformInputManager_get_mousePosition_m325A1685C29391023DB1F369D4857424E0EC8510 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return activeInput.MousePosition(); }
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m11435FDBBFEE69E13CC719C9252BEBECA720A4C9 (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionX(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___0_f;
		VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5855813A6C9C8682AD14D4A310B6955776ABFE7E (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionY(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___0_f;
		VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mA2E9797A6C5E37A63363F8C0322D91BB062EDA70 (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionZ(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___0_f;
		VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C(L_0, L_1, NULL);
		// }
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___0_name;
		VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___0_name, bool ___1_matchToInputSettings, const RuntimeMethod* method) 
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___0_name;
		VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___1_matchToInputSettings;
		VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___0_value;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_mEBE9F18357FD0B69593E8AB20379A5A5926AD589 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___0_name;
		VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___0_name, bool ___1_matchToInputSettings, const RuntimeMethod* method) 
{
	{
		// private int m_LastPressedFrame = -5;
		__this->___m_LastPressedFrame_2 = ((int32_t)-5);
		// private int m_ReleasedFrame = -5;
		__this->___m_ReleasedFrame_3 = ((int32_t)-5);
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___0_name;
		VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___1_matchToInputSettings;
		VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Pressed)
		bool L_0 = __this->___m_Pressed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->___m_Pressed_4 = (bool)1;
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___m_LastPressedFrame_2 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// m_Pressed = false;
		__this->___m_Pressed_4 = (bool)0;
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___m_ReleasedFrame_3 = L_0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m6A4CB0975158B909842CF00389034652DF8AD7A6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m1E6A9A7651B30B0DE215978492BBCD5AE02AC05D(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->___m_LastPressedFrame_2;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->___m_ReleasedFrame_3;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1))))? 1 : 0);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_Update_m8CCBB44BABB19D73FAE53FFD156A9D255BF23D1E (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_HandleInput_mE8DC6032B7922720E3A38AA79C079BDC3E3C8FDD (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxis(axis, (value*2f) - 1f);
		String_t* L_0 = __this->___axis_4;
		float L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_m0D1AB307179B4D57152E83DD463437D38899B14C(L_0, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, (2.0f))), (1.0f))), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar__ctor_m08089402416DD6BF7DA04774F504B2051AB8B1F1 (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnEnable_m01755C6055086498BC9A53A7EF7E086642A96658 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// CreateVirtualAxes();
		Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mAA898386E4DDBE88E5CBC3287983D48CDBEEC6C8 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// m_StartPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___m_StartPos_8 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var delta = m_StartPos - value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_StartPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// delta.y = -delta.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		(&V_0)->___y_3 = ((-L_4));
		// delta /= MovementRange;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		int32_t L_6 = __this->___MovementRange_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_5, ((float)L_6), NULL);
		V_0 = L_7;
		// if (m_UseX)
		bool L_8 = __this->___m_UseX_9;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(-delta.x);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_9 = __this->___m_HorizontalVirtualAxis_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_9, ((-L_11)), NULL);
	}

IL_0043:
	{
		// if (m_UseY)
		bool L_12 = __this->___m_UseY_10;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(delta.y);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_13 = __this->___m_VerticalVirtualAxis_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___y_3;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_13, L_15, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B2_0 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B3_1 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B5_0 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->___axesToUse_5;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___axesToUse_5;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		G_B3_1->___m_UseX_9 = (bool)G_B3_0;
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->___axesToUse_5;
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___axesToUse_5;
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->___m_UseY_10 = (bool)G_B6_0;
		// if (m_UseX)
		bool L_4 = __this->___m_UseX_9;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->___horizontalAxisName_6;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_6, L_5, NULL);
		__this->___m_HorizontalVirtualAxis_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalVirtualAxis_11), (void*)L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_7 = __this->___m_HorizontalVirtualAxis_11;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_7, NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->___m_UseY_10;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->___verticalAxisName_7;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_10, L_9, NULL);
		__this->___m_VerticalVirtualAxis_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalVirtualAxis_12), (void*)L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = __this->___m_VerticalVirtualAxis_12;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_11, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m57BB8D9C2A3A95FF403A37053B2C7A49453A8D0A (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 newPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->___m_UseX_9;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// int delta = (int)(data.position.x - m_StartPos.x);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_data;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		float L_4 = L_3.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___m_StartPos_8);
		float L_6 = L_5->___x_2;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_4, L_6)));
		// delta = Mathf.Clamp(delta, - MovementRange, MovementRange);
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___MovementRange_4;
		int32_t L_9 = __this->___MovementRange_4;
		int32_t L_10;
		L_10 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_7, ((-L_8)), L_9, NULL);
		V_1 = L_10;
		// newPos.x = delta;
		int32_t L_11 = V_1;
		(&V_0)->___x_2 = ((float)L_11);
	}

IL_0044:
	{
		// if (m_UseY)
		bool L_12 = __this->___m_UseY_10;
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// int delta = (int)(data.position.y - m_StartPos.y);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = ___0_data;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_13, NULL);
		float L_15 = L_14.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___m_StartPos_8);
		float L_17 = L_16->___y_3;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_15, L_17)));
		// delta = Mathf.Clamp(delta, -MovementRange, MovementRange);
		int32_t L_18 = V_2;
		int32_t L_19 = __this->___MovementRange_4;
		int32_t L_20 = __this->___MovementRange_4;
		int32_t L_21;
		L_21 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_18, ((-L_19)), L_20, NULL);
		V_2 = L_21;
		// newPos.y = delta;
		int32_t L_22 = V_2;
		(&V_0)->___y_3 = ((float)L_22);
	}

IL_0082:
	{
		// transform.position = new Vector3(m_StartPos.x + newPos.x, m_StartPos.y + newPos.y, m_StartPos.z + newPos.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___m_StartPos_8);
		float L_25 = L_24->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_StartPos_8);
		float L_29 = L_28->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___m_StartPos_8);
		float L_33 = L_32->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), ((float)il2cpp_codegen_add(L_25, L_27)), ((float)il2cpp_codegen_add(L_29, L_31)), ((float)il2cpp_codegen_add(L_33, L_35)), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_36, NULL);
		// UpdateVirtualAxes(transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16(__this, L_38, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mF173240831B95C9D6383EC1DDD9ADB5BEE449CC3 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// transform.position = m_StartPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_StartPos_8;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// UpdateVirtualAxes(m_StartPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_StartPos_8;
		Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF45E97F4E4424DB3A00653B04F1D3276A7BDAC72 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// public void OnPointerDown(PointerEventData data) { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDisable_m40ED45E6DE2625D6B0581C0D2873946DC44062CB (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// if (m_UseX)
		bool L_0 = __this->___m_UseX_9;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_HorizontalVirtualAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = __this->___m_HorizontalVirtualAxis_11;
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_1, NULL);
	}

IL_0013:
	{
		// if (m_UseY)
		bool L_2 = __this->___m_UseY_10;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_VerticalVirtualAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = __this->___m_VerticalVirtualAxis_12;
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m39C3347FCD4D7CC89994A5D9F9974AF2D05E8C60 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MovementRange = 100;
		__this->___MovementRange_4 = ((int32_t)100);
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->___horizontalAxisName_6 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxisName_6), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->___verticalAxisName_7 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxisName_7), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_OnEnable_mE74181228AA1673A5CBD68A8516F9A25473630B1 (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	{
		// CheckEnableControlRig();
		MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_Start_m83F603D565C73AA5C5E04697611EF764799EFBC9 (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.EventSystems.EventSystem system = GameObject.FindObjectOfType<UnityEngine.EventSystems.EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		// if (system == null)
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject o = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		// o.AddComponent<UnityEngine.EventSystems.EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_3, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// o.AddComponent<UnityEngine.EventSystems.StandaloneInputModule>();
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_3, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	{
		// EnableControlRig(false);
		MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Transform t in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_000e_1:
			{
				// foreach (Transform t in transform)
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// t.gameObject.SetActive(enabled);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				bool L_8 = ___0_enabled;
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
			}

IL_0024_1:
			{
				// foreach (Transform t in transform)
				RuntimeObject* L_9 = V_0;
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig__ctor_m516AE4C523FCAA62F202B54607B88C2F39CF949D (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnEnable_mCD2D3134FC211D2D6F9D815273EC358AD49693A4 (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mapping.type == AxisMapping.MappingType.NamedAxis)
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_0 = __this->___mapping_4;
		int32_t L_1 = L_0->___type_0;
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_SteerAxis = new CrossPlatformInputManager.VirtualAxis(mapping.axisName);
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_2 = __this->___mapping_4;
		String_t* L_3 = L_2->___axisName_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_4, L_3, NULL);
		__this->___m_SteerAxis_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SteerAxis_8), (void*)L_4);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_SteerAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_5 = __this->___m_SteerAxis_8;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_5, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_Update_m4E1268EABA144462DFBE1788E127E508A1B15A06 (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float angle = 0;
		V_0 = (0.0f);
		// if (Input.acceleration != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		// switch (tiltAroundAxis)
		int32_t L_3 = __this->___tiltAroundAxis_5;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0079;
	}

IL_0027:
	{
		// angle = Mathf.Atan2(Input.acceleration.x, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->___centreAngleOffset_7;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, (57.2957802f))), L_11));
		// break;
		goto IL_0079;
	}

IL_0051:
	{
		// angle = Mathf.Atan2(Input.acceleration.z, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_15 = L_14.___y_3;
		float L_16;
		L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->___centreAngleOffset_7;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, (57.2957802f))), L_17));
	}

IL_0079:
	{
		// float axisValue = Mathf.InverseLerp(-fullTiltAngle, fullTiltAngle, angle)*2 - 1;
		float L_18 = __this->___fullTiltAngle_6;
		float L_19 = __this->___fullTiltAngle_6;
		float L_20 = V_0;
		float L_21;
		L_21 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(((-L_18)), L_19, L_20, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (1.0f)));
		// switch (mapping.type)
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_22 = __this->___mapping_4;
		int32_t L_23 = L_22->___type_0;
		V_3 = L_23;
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00e5;
			}
		}
	}
	{
		return;
	}

IL_00bc:
	{
		// m_SteerAxis.Update(axisValue);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_25 = __this->___m_SteerAxis_8;
		float L_26 = V_1;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_25, L_26, NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionX(axisValue*Screen.width);
		float L_27 = V_1;
		int32_t L_28;
		L_28 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m11435FDBBFEE69E13CC719C9252BEBECA720A4C9(((float)il2cpp_codegen_multiply(L_27, ((float)L_28))), NULL);
		// break;
		return;
	}

IL_00d7:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionY(axisValue*Screen.width);
		float L_29 = V_1;
		int32_t L_30;
		L_30 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m5855813A6C9C8682AD14D4A310B6955776ABFE7E(((float)il2cpp_codegen_multiply(L_29, ((float)L_30))), NULL);
		// break;
		return;
	}

IL_00e5:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionZ(axisValue*Screen.width);
		float L_31 = V_1;
		int32_t L_32;
		L_32 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_mA2E9797A6C5E37A63363F8C0322D91BB062EDA70(((float)il2cpp_codegen_multiply(L_31, ((float)L_32))), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnDisable_mB91574F611389145239CA77BB7C9742DD2F32D4E (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	{
		// m_SteerAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_SteerAxis_8;
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput__ctor_mC0FEEAAA6072137009894B79BB86BB7763246B5B (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	{
		// public float fullTiltAngle = 25;
		__this->___fullTiltAngle_6 = (25.0f);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisMapping__ctor_m49E917651DFC426AB917F75ABAB55169B121AA0A (AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnEnable_m8EA8CC115883619758EF3093E98C6FD85C6AC9EC (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	{
		// CreateVirtualAxes();
		TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Start_mB8FEBAF0B2A06B12312707D6669B1A67AA8D581D (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___m_Image_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_21), (void*)L_0);
		// m_Center = m_Image.transform.position;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_Image_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___m_Center_20 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B2_0 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B3_1 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B5_0 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->___axesToUse_4;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___axesToUse_4;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		G_B3_1->___m_UseX_13 = (bool)G_B3_0;
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->___axesToUse_4;
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___axesToUse_4;
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->___m_UseY_14 = (bool)G_B6_0;
		// if (m_UseX)
		bool L_4 = __this->___m_UseX_13;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->___horizontalAxisName_6;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_6, L_5, NULL);
		__this->___m_HorizontalVirtualAxis_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalVirtualAxis_15), (void*)L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_7 = __this->___m_HorizontalVirtualAxis_15;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_7, NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->___m_UseY_14;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->___verticalAxisName_7;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_10, L_9, NULL);
		__this->___m_VerticalVirtualAxis_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalVirtualAxis_16), (void*)L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = __this->___m_VerticalVirtualAxis_16;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_11, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// value = value.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___0_value), NULL);
		___0_value = L_0;
		// if (m_UseX)
		bool L_1 = __this->___m_UseX_13;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(value.x);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2 = __this->___m_HorizontalVirtualAxis_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		float L_4 = L_3.___x_2;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_2, L_4, NULL);
	}

IL_0022:
	{
		// if (m_UseY)
		bool L_5 = __this->___m_UseY_14;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(value.y);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = __this->___m_VerticalVirtualAxis_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_value;
		float L_8 = L_7.___y_3;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, L_8, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerDown_m5F30C88782254C4577BB65883B6518F5D081E7F8 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// m_Dragging = true;
		__this->___m_Dragging_17 = (bool)1;
		// m_Id = data.pointerId;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_data;
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		__this->___m_Id_18 = L_1;
		// if (controlStyle != ControlStyle.Absolute )
		int32_t L_2 = __this->___controlStyle_5;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Center = data.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_data;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		__this->___m_Center_20 = L_5;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Update_m4BFDEA6F27C9C7BB91B0E160DEA45C64D6D4294F (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!m_Dragging)
		bool L_0 = __this->___m_Dragging_17;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Input.touchCount >= m_Id + 1 && m_Id != -1)
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		int32_t L_2 = __this->___m_Id_18;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_3 = __this->___m_Id_18;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (controlStyle == ControlStyle.Swipe)
		int32_t L_4 = __this->___controlStyle_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		// m_Center = m_PreviousTouchPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___m_PreviousTouchPos_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		__this->___m_Center_20 = L_6;
		// m_PreviousTouchPos = Input.touches[m_Id].position;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_7;
		L_7 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		int32_t L_8 = __this->___m_Id_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		__this->___m_PreviousTouchPos_19 = L_9;
	}

IL_005c:
	{
		// Vector2 pointerDelta = new Vector2(Input.touches[m_Id].position.x - m_Center.x , Input.touches[m_Id].position.y - m_Center.y).normalized;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_10;
		L_10 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		int32_t L_11 = __this->___m_Id_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11))), NULL);
		float L_13 = L_12.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___m_Center_20);
		float L_15 = L_14->___x_2;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_16;
		L_16 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		int32_t L_17 = __this->___m_Id_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17))), NULL);
		float L_19 = L_18.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___m_Center_20);
		float L_21 = L_20->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_subtract(L_19, L_21)), /*hidden argument*/NULL);
		V_1 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		V_0 = L_23;
		// pointerDelta.x *= Xsensitivity;
		float* L_24 = (&(&V_0)->___x_0);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = __this->___Xsensitivity_8;
		*((float*)L_25) = (float)((float)il2cpp_codegen_multiply(L_26, L_27));
		// pointerDelta.y *= Ysensitivity;
		float* L_28 = (&(&V_0)->___y_1);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = __this->___Ysensitivity_9;
		*((float*)L_29) = (float)((float)il2cpp_codegen_multiply(L_30, L_31));
		// UpdateVirtualAxes(new Vector3(pointerDelta.x, pointerDelta.y, 0));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_33, L_35, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B(__this, L_36, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerUp_m6F1AF8EE5932677BDC2B85144579FD5595329824 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// m_Dragging = false;
		__this->___m_Dragging_17 = (bool)0;
		// m_Id = -1;
		__this->___m_Id_18 = (-1);
		// UpdateVirtualAxes(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnDisable_m3D10A5340AC1035A16D811E93938D58066772A30 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CrossPlatformInputManager.AxisExists(horizontalAxisName))
		String_t* L_0 = __this->___horizontalAxisName_6;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(horizontalAxisName);
		String_t* L_2 = __this->___horizontalAxisName_6;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99(L_2, NULL);
	}

IL_0018:
	{
		// if (CrossPlatformInputManager.AxisExists(verticalAxisName))
		String_t* L_3 = __this->___verticalAxisName_7;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(verticalAxisName);
		String_t* L_5 = __this->___verticalAxisName_7;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad__ctor_mF557EEA00F689FCEEA4EB975E1AFDEA44D85D12D (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->___horizontalAxisName_6 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxisName_6), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->___verticalAxisName_7 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxisName_7), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public float Xsensitivity = 1f;
		__this->___Xsensitivity_8 = (1.0f);
		// public float Ysensitivity = 1f;
		__this->___Ysensitivity_9 = (1.0f);
		// int m_Id = -1;
		__this->___m_Id_18 = (-1);
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
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___0_axis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1921D3070489B1532E810684C2992B44215A052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = ___0_axis;
		String_t* L_2;
		L_2 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_2, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = ___0_axis;
		String_t* L_5;
		L_5 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE1921D3070489B1532E810684C2992B44215A052, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_7 = __this->___m_VirtualAxes_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_8 = ___0_axis;
		String_t* L_9;
		L_9 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_8, NULL);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = ___0_axis;
		Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3(L_7, L_9, L_10, Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = ___0_axis;
		bool L_12;
		L_12 = VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_14 = ___0_axis;
		String_t* L_15;
		L_15 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_14, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___0_button, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = ___0_button;
		String_t* L_2;
		L_2 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_2, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_4 = ___0_button;
		String_t* L_5;
		L_5 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_7 = __this->___m_VirtualButtons_2;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_8 = ___0_button;
		String_t* L_9;
		L_9 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_8, NULL);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10 = ___0_button;
		Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A(L_7, L_9, L_10, Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_11 = ___0_button;
		bool L_12;
		L_12 = VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_14 = ___0_button;
		String_t* L_15;
		L_15 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_14, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___0_name;
		bool L_5;
		L_5 = Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005(L_3, L_4, Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = __this->___m_VirtualButtons_2;
		String_t* L_4 = ___0_name;
		bool L_5;
		L_5 = Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276(L_3, L_4, Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)NULL;
	}

IL_0010:
	{
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_5;
		L_5 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_3, L_4, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___0_f, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___0_f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___0_f, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		float L_2 = ___0_f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___0_f, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_3 = L_2.___y_3;
		float L_4 = ___0_f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*)il2cpp_codegen_object_new(Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD(L_0, Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var);
		__this->___m_VirtualAxes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualAxes_1), (void*)L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_1 = (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*)il2cpp_codegen_object_new(Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F(L_1, Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var);
		__this->___m_VirtualButtons_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualButtons_2), (void*)L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_AlwaysUseVirtual_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AlwaysUseVirtual_3), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualButton(new CrossPlatformInputManager.VirtualButton(name));
		String_t* L_0 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460*)il2cpp_codegen_object_new(VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var);
		VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m7C5C3BBD160D50D062C1A8395B795B015C983F1D(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualAxis(new CrossPlatformInputManager.VirtualAxis(name));
		String_t* L_0 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_1, NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MobileInput_GetAxis_m6D73746928887AFAFC3F788C16B705D72EC562A4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, bool ___1_raw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___0_name;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// return m_VirtualAxes[name].GetValue;
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		float L_7;
		L_7 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_6, NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_m7A4BA4292DB7CC7360CE3AE6FF72FCFA4A4E34AC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___0_name;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Pressed();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_6;
		L_6 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_4, L_5, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_m40E01EEA1B15E563D12372B1C14BDFE4DA8307FC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___0_name;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Released();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_6;
		L_6 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_4, L_5, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_mAAE978384C1CCD201A2BE881FEC0B1C8465C729A (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___0_name;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(1f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_m5B8280854DB9F6045D32C86B4345FD62878DA2AC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___0_name;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(-1f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_m7D83495E99BD17EE9D4A37C75BDA63BA2BD60240 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___0_name;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(0f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxis_m88422C12DA1C2A1024F45C85EC0CE380939C9D2F (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___0_name;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(value);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___0_name;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		float L_7 = ___1_value;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_mB305873D769F101DEFDE7A8C92049374857525B2 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___0_name;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_m75ED55DE2FAA5ECE32EF1ABA1FF2571D9E0153A8 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___0_name;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButton_m1B3C5915BEF15B1169CD9872B9C04E19167980EC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___0_name;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___0_name;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___0_name;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline(L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MobileInput_MousePosition_mD554E5C1A85B0033F5DAFA823F5BB39A5ED35797 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) 
{
	{
		// return virtualMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B(__this, NULL);
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
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_m02DC4AC6E56EA7AF95E2A73AF4BC6962C95ADFCB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, bool ___1_raw, const RuntimeMethod* method) 
{
	{
		// return raw ? Input.GetAxisRaw(name) : Input.GetAxis(name);
		bool L_0 = ___1_raw;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___0_name;
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___0_name;
		float L_4;
		L_4 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_3, NULL);
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_m3BA6C26D8DB2B4BC6CD060CE26FAEE693D7BED57 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// return Input.GetButton(name);
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_mFE8024BBC93D07B8287A821DEA048ADC70EFD506 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonDown(name);
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_m481FD69EC3F9A475406EFB49E3BCA55505E1444D (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonUp(name);
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StandaloneInput_MousePosition_m753E2104FF5C3408E697A1776CF2CECAEFDC3205 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) 
{
	{
		// return Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Start_m4F55349288CAEA1EE6BC9809DEE275A02451589F (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CharacterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___m_CharacterController_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CharacterController_23), (void*)L_0);
		// m_Camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___m_Camera_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_18), (void*)L_1);
		// m_OriginalCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		__this->___m_OriginalCameraPosition_26 = L_4;
		// m_FovKick.Setup(m_Camera);
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_5 = __this->___m_FovKick_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_18;
		FOVKick_Setup_m7E73F218F4B74B175FC9BD1DD32B0711E048916F(L_5, L_6, NULL);
		// m_HeadBob.Setup(m_Camera, m_StepInterval);
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_7 = __this->___m_HeadBob_15;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___m_Camera_18;
		float L_9 = __this->___m_StepInterval_17;
		CurveControlledBob_Setup_mDB98D5F434FDEBD472856B9686AF5DCE77056AF4(L_7, L_8, L_9, NULL);
		// m_StepCycle = 0f;
		__this->___m_StepCycle_27 = (0.0f);
		// m_NextStep = m_StepCycle/2f;
		float L_10 = __this->___m_StepCycle_27;
		__this->___m_NextStep_28 = ((float)(L_10/(2.0f)));
		// m_Jumping = false;
		__this->___m_Jumping_29 = (bool)0;
		// m_MouseLook.Init(transform , m_Camera.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_11 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6(L_11, L_12, L_14, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Update_m91E31D9AFC61FB6B5F66FC10E8F15B660725013D (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateView();
		FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD(__this, NULL);
		// if (!m_Jump)
		bool L_0 = __this->___m_Jump_19;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_GetButtonDown_m9B8928DC7CBC33DA6CC7350B42208BE838030577(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->___m_Jump_19 = L_1;
	}

IL_001e:
	{
		// if (!m_PreviouslyGrounded && m_CharacterController.isGrounded)
		bool L_2 = __this->___m_PreviouslyGrounded_25;
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_3 = __this->___m_CharacterController_23;
		bool L_4;
		L_4 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_3, NULL);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// StartCoroutine(m_JumpBob.DoBobCycle());
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_5 = __this->___m_JumpBob_16;
		RuntimeObject* L_6;
		L_6 = LerpControlledBob_DoBobCycle_m6C115FF5CB0A8C3A08F93F72A841B494325814CC(L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___m_MoveDir_22);
		L_8->___y_3 = (0.0f);
		// m_Jumping = false;
		__this->___m_Jumping_29 = (bool)0;
	}

IL_005c:
	{
		// if (!m_CharacterController.isGrounded && !m_Jumping && m_PreviouslyGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_23;
		bool L_10;
		L_10 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_9, NULL);
		if (L_10)
		{
			goto IL_0089;
		}
	}
	{
		bool L_11 = __this->___m_Jumping_29;
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		bool L_12 = __this->___m_PreviouslyGrounded_25;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___m_MoveDir_22);
		L_13->___y_3 = (0.0f);
	}

IL_0089:
	{
		// m_PreviouslyGrounded = m_CharacterController.isGrounded;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_14 = __this->___m_CharacterController_23;
		bool L_15;
		L_15 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_14, NULL);
		__this->___m_PreviouslyGrounded_25 = L_15;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_FixedUpdate_m9AA7D2F59F8416796AACB7F4AC5270CA20B55CA5 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GetInput(out speed);
		FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26(__this, (&V_0), NULL);
		// Vector3 desiredMove = transform.forward * m_Input.y + transform.right * m_Input.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___m_Input_21);
		float L_3 = L_2->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___m_Input_21);
		float L_8 = L_7->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_9, NULL);
		V_1 = L_10;
		// Physics.SphereCast(transform.position, m_CharacterController.radius, Vector3.down, out hitInfo,
		//                    m_CharacterController.height / 2f, Physics.AllLayers, QueryTriggerInteraction.Ignore);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = __this->___m_CharacterController_23;
		float L_14;
		L_14 = CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_16 = __this->___m_CharacterController_23;
		float L_17;
		L_17 = CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF(L_16, NULL);
		bool L_18;
		L_18 = Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D(L_12, L_14, L_15, (&V_2), ((float)(L_17/(2.0f))), (-1), 1, NULL);
		// desiredMove = Vector3.ProjectOnPlane(desiredMove, hitInfo.normal).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_19, L_20, NULL);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_1 = L_22;
		// m_MoveDir.x = desiredMove.x * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___m_MoveDir_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = L_24.___x_2;
		float L_26 = V_0;
		L_23->___x_2 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// m_MoveDir.z = desiredMove.z * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___m_MoveDir_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		float L_29 = L_28.___z_4;
		float L_30 = V_0;
		L_27->___z_4 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// if (m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_31 = __this->___m_CharacterController_23;
		bool L_32;
		L_32 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_31, NULL);
		if (!L_32)
		{
			goto IL_00fe;
		}
	}
	{
		// m_MoveDir.y = -m_StickToGroundForce;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___m_MoveDir_22);
		float L_34 = __this->___m_StickToGroundForce_9;
		L_33->___y_3 = ((-L_34));
		// if (m_Jump)
		bool L_35 = __this->___m_Jump_19;
		if (!L_35)
		{
			goto IL_0129;
		}
	}
	{
		// m_MoveDir.y = m_JumpSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___m_MoveDir_22);
		float L_37 = __this->___m_JumpSpeed_8;
		L_36->___y_3 = L_37;
		// m_Jump = false;
		__this->___m_Jump_19 = (bool)0;
		// m_Jumping = true;
		__this->___m_Jumping_29 = (bool)1;
		goto IL_0129;
	}

IL_00fe:
	{
		// m_MoveDir += Physics.gravity * m_GravityMultiplier * Time.fixedDeltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___m_MoveDir_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_40 = __this->___m_GravityMultiplier_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_40, NULL);
		float L_42;
		L_42 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_43, NULL);
		__this->___m_MoveDir_22 = L_44;
	}

IL_0129:
	{
		// m_CollisionFlags = m_CharacterController.Move(m_MoveDir * Time.fixedDeltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_45 = __this->___m_CharacterController_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___m_MoveDir_22;
		float L_47;
		L_47 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, L_47, NULL);
		int32_t L_49;
		L_49 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_45, L_48, NULL);
		__this->___m_CollisionFlags_24 = L_49;
		// ProgressStepCycle(speed);
		float L_50 = V_0;
		FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7(__this, L_50, NULL);
		// UpdateCameraPosition(speed);
		float L_51 = V_0;
		FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E(__this, L_51, NULL);
		// m_MouseLook.UpdateCursorLock();
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_52 = __this->___m_MouseLook_11;
		MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E(L_52, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___0_speed, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B5_3 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B4_3 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B6_4 = NULL;
	{
		// if (m_CharacterController.velocity.sqrMagnitude > 0 && (m_Input.x != 0 || m_Input.y != 0))
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___m_CharacterController_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___m_Input_21);
		float L_4 = L_3->___x_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___m_Input_21);
		float L_6 = L_5->___y_1;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_007c;
		}
	}

IL_003e:
	{
		// m_StepCycle += (m_CharacterController.velocity.magnitude + (speed*(m_IsWalking ? 1f : m_RunstepLenghten)))*
		//              Time.fixedDeltaTime;
		float L_7 = __this->___m_StepCycle_27;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->___m_CharacterController_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_11 = ___0_speed;
		bool L_12 = __this->___m_IsWalking_4;
		G_B4_0 = L_11;
		G_B4_1 = L_10;
		G_B4_2 = L_7;
		G_B4_3 = __this;
		if (L_12)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			G_B5_2 = L_7;
			G_B5_3 = __this;
			goto IL_0069;
		}
	}
	{
		float L_13 = __this->___m_RunstepLenghten_7;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_006e;
	}

IL_0069:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_006e:
	{
		float L_14;
		L_14 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		G_B6_4->___m_StepCycle_27 = ((float)il2cpp_codegen_add(G_B6_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, G_B6_0)))), L_14))));
	}

IL_007c:
	{
		// if (!(m_StepCycle > m_NextStep))
		float L_15 = __this->___m_StepCycle_27;
		float L_16 = __this->___m_NextStep_28;
		if ((((float)L_15) > ((float)L_16)))
		{
			goto IL_008b;
		}
	}
	{
		// return;
		return;
	}

IL_008b:
	{
		// m_NextStep = m_StepCycle + m_StepInterval;
		float L_17 = __this->___m_StepCycle_27;
		float L_18 = __this->___m_StepInterval_17;
		__this->___m_NextStep_28 = ((float)il2cpp_codegen_add(L_17, L_18));
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___0_speed, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B6_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_3 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B5_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_3 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B7_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_4 = NULL;
	{
		// if (!m_UseHeadBob)
		bool L_0 = __this->___m_UseHeadBob_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CharacterController.velocity.magnitude > 0 && m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1 = __this->___m_CharacterController_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->___m_CharacterController_23;
		bool L_5;
		L_5 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_4, NULL);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		// m_Camera.transform.localPosition =
		//     m_HeadBob.DoHeadBob(m_CharacterController.velocity.magnitude +
		//                       (speed*(m_IsWalking ? 1f : m_RunstepLenghten)));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_8 = __this->___m_HeadBob_15;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_12 = ___0_speed;
		bool L_13 = __this->___m_IsWalking_4;
		G_B5_0 = L_12;
		G_B5_1 = L_11;
		G_B5_2 = L_8;
		G_B5_3 = L_7;
		if (L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_11;
			G_B6_2 = L_8;
			G_B6_3 = L_7;
			goto IL_006b;
		}
	}
	{
		float L_14 = __this->___m_RunstepLenghten_7;
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_0070;
	}

IL_006b:
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_0070:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = CurveControlledBob_DoHeadBob_m9AC57FF9121912E844CE19359AC72857115DC4C5(G_B7_3, ((float)il2cpp_codegen_add(G_B7_2, ((float)il2cpp_codegen_multiply(G_B7_1, G_B7_0)))), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B7_4, L_15, NULL);
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		V_0 = L_18;
		// newCameraPosition.y = m_Camera.transform.localPosition.y - m_JumpBob.Offset();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		float L_22 = L_21.___y_3;
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_23 = __this->___m_JumpBob_16;
		float L_24;
		L_24 = LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline(L_23, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		goto IL_00e6;
	}

IL_00b7:
	{
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		V_0 = L_27;
		// newCameraPosition.y = m_OriginalCameraPosition.y - m_JumpBob.Offset();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_OriginalCameraPosition_26);
		float L_29 = L_28->___y_3;
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_30 = __this->___m_JumpBob_16;
		float L_31;
		L_31 = LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline(L_30, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_29, L_31));
	}

IL_00e6:
	{
		// m_Camera.transform.localPosition = newCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float* ___0_speed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float* G_B2_0 = NULL;
	float* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	float* G_B3_1 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B10_0 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B9_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B11_1 = NULL;
	{
		// float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float vertical = CrossPlatformInputManager.GetAxis("Vertical");
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// bool waswalking = m_IsWalking;
		bool L_2 = __this->___m_IsWalking_4;
		V_2 = L_2;
		// m_IsWalking = !Input.GetKey(KeyCode.LeftShift);
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		__this->___m_IsWalking_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// speed = m_IsWalking ? m_WalkSpeed : m_RunSpeed;
		float* L_4 = ___0_speed;
		bool L_5 = __this->___m_IsWalking_4;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0041;
		}
	}
	{
		float L_6 = __this->___m_RunSpeed_6;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0047;
	}

IL_0041:
	{
		float L_7 = __this->___m_WalkSpeed_5;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0047:
	{
		*((float*)G_B3_1) = (float)G_B3_0;
		// m_Input = new Vector2(horizontal, vertical);
		float L_8 = V_0;
		float L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		__this->___m_Input_21 = L_10;
		// if (m_Input.sqrMagnitude > 1)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___m_Input_21);
		float L_12;
		L_12 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_11, NULL);
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// m_Input.Normalize();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___m_Input_21);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_13, NULL);
	}

IL_0072:
	{
		// if (m_IsWalking != waswalking && m_UseFovKick && m_CharacterController.velocity.sqrMagnitude > 0)
		bool L_14 = __this->___m_IsWalking_4;
		bool L_15 = V_2;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_16 = __this->___m_UseFovKick_12;
		if (!L_16)
		{
			goto IL_00ca;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_17 = __this->___m_CharacterController_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_17, NULL);
		V_3 = L_18;
		float L_19;
		L_19 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_3), NULL);
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(!m_IsWalking ? m_FovKick.FOVKickUp() : m_FovKick.FOVKickDown());
		bool L_20 = __this->___m_IsWalking_4;
		G_B9_0 = __this;
		if (!L_20)
		{
			G_B10_0 = __this;
			goto IL_00b9;
		}
	}
	{
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_21 = __this->___m_FovKick_13;
		RuntimeObject* L_22;
		L_22 = FOVKick_FOVKickDown_m9176B1195AEA7C88568D27F2860B13C98ECA188F(L_21, NULL);
		G_B11_0 = L_22;
		G_B11_1 = G_B9_0;
		goto IL_00c4;
	}

IL_00b9:
	{
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_23 = __this->___m_FovKick_13;
		RuntimeObject* L_24;
		L_24 = FOVKick_FOVKickUp_m81F318FFA44E3CC3739EAB65EA8ACBD31882483B(L_23, NULL);
		G_B11_0 = L_24;
		G_B11_1 = G_B10_0;
	}

IL_00c4:
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(G_B11_1, G_B11_0, NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	{
		// m_MouseLook.LookRotation(transform, m_Camera.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_0 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374(L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_OnControllerColliderHit_m55E1A25E5BE9BF1B3C3A3553BB5FF5531B0E88C0 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___0_hit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___0_hit;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (m_CollisionFlags == CollisionFlags.Below)
		int32_t L_3 = __this->___m_CollisionFlags_24;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (body == null || body.isKinematic)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = V_0;
		bool L_7;
		L_7 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_6, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// body.AddForceAtPosition(m_CharacterController.velocity*0.1f, hit.point, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = V_0;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, (0.100000001f), NULL);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___0_hit;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915(L_12, NULL);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_8, L_11, L_13, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController__ctor_mA7F22D3CB33C824C402A75A023030DD0A12B022A (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private FOVKick m_FovKick = new FOVKick();
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_0 = (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82*)il2cpp_codegen_object_new(FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82_il2cpp_TypeInfo_var);
		FOVKick__ctor_mB6A54D8492E90A1E07B02E1EC06EEC67100DC22F(L_0, NULL);
		__this->___m_FovKick_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FovKick_13), (void*)L_0);
		// [SerializeField] private CurveControlledBob m_HeadBob = new CurveControlledBob();
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_1 = (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8*)il2cpp_codegen_object_new(CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var);
		CurveControlledBob__ctor_mBB05CB56470904C61063A0D32F021E7FD1285D22(L_1, NULL);
		__this->___m_HeadBob_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadBob_15), (void*)L_1);
		// [SerializeField] private LerpControlledBob m_JumpBob = new LerpControlledBob();
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_2 = (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF*)il2cpp_codegen_object_new(LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var);
		LerpControlledBob__ctor_m2B5B7BE2359268DC4B0D49651AF01123D447793B(L_2, NULL);
		__this->___m_JumpBob_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JumpBob_16), (void*)L_2);
		// private Vector3 m_MoveDir = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_MoveDir_22 = L_3;
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
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_character, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_camera, const RuntimeMethod* method) 
{
	{
		// m_CharacterTargetRot = character.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_character;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___m_CharacterTargetRot_8 = L_1;
		// m_CameraTargetRot = camera.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_camera;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___m_CameraTargetRot_9 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_character, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float yRot = CrossPlatformInputManager.GetAxis("Mouse X") * XSensitivity;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___XSensitivity_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// float xRot = CrossPlatformInputManager.GetAxis("Mouse Y") * YSensitivity;
		float L_2;
		L_2 = CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_3 = __this->___YSensitivity_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// m_CharacterTargetRot *= Quaternion.Euler (0f, yRot, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___m_CharacterTargetRot_8;
		float L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_5, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_4, L_6, NULL);
		__this->___m_CharacterTargetRot_8 = L_7;
		// m_CameraTargetRot *= Quaternion.Euler (-xRot, 0f, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___m_CameraTargetRot_9;
		float L_9 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((-L_9)), (0.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_8, L_10, NULL);
		__this->___m_CameraTargetRot_9 = L_11;
		// if(clampVerticalRotation)
		bool L_12 = __this->___clampVerticalRotation_2;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		// m_CameraTargetRot = ClampRotationAroundXAxis (m_CameraTargetRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___m_CameraTargetRot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F(__this, L_13, NULL);
		__this->___m_CameraTargetRot_9 = L_14;
	}

IL_0081:
	{
		// if(smooth)
		bool L_15 = __this->___smooth_5;
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		// character.localRotation = Quaternion.Slerp (character.localRotation, m_CharacterTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___0_character;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___0_character;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = __this->___m_CharacterTargetRot_8;
		float L_20 = __this->___smoothTime_6;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_22, NULL);
		// camera.localRotation = Quaternion.Slerp (camera.localRotation, m_CameraTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___1_camera;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___1_camera;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = __this->___m_CameraTargetRot_9;
		float L_27 = __this->___smoothTime_6;
		float L_28;
		L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_25, L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_23, L_29, NULL);
		goto IL_00e9;
	}

IL_00d1:
	{
		// character.localRotation = m_CharacterTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___0_character;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = __this->___m_CharacterTargetRot_8;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		// camera.localRotation = m_CameraTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___1_camera;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = __this->___m_CameraTargetRot_9;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_32, L_33, NULL);
	}

IL_00e9:
	{
		// UpdateCursorLock();
		MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotationLoad(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotationLoad_m236A160E7A5EFBCA8E9C150FD64862C35FD91CFF (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_character, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_camera, const RuntimeMethod* method) 
{
	{
		// m_CharacterTargetRot = character.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_character;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___m_CharacterTargetRot_8 = L_1;
		// m_CameraTargetRot = camera.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_camera;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___m_CameraTargetRot_9 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::SetCursorLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_SetCursorLock_m22DD708E0CE7BD5BD6E517EF199C6A24309F985A (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// lockCursor = value;
		bool L_0 = ___0_value;
		__this->___lockCursor_7 = L_0;
		// if(!lockCursor)
		bool L_1 = __this->___lockCursor_7;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// if (lockCursor)
		bool L_0 = __this->___lockCursor_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InternalLockUpdate();
		MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// m_cursorIsLocked = false;
		__this->___m_cursorIsLocked_10 = (bool)0;
		goto IL_0021;
	}

IL_0012:
	{
		// else if(Input.GetMouseButtonUp(0))
		bool L_1;
		L_1 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
	}

IL_0021:
	{
		// if (m_cursorIsLocked)
		bool L_2 = __this->___m_cursorIsLocked_10;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		return;
	}

IL_0036:
	{
		// else if (!m_cursorIsLocked)
		bool L_3 = __this->___m_cursorIsLocked_10;
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// q.x /= q.w;
		float* L_0 = (&(&___0_q)->___x_0);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_q;
		float L_4 = L_3.___w_3;
		*((float*)L_1) = (float)((float)(L_2/L_4));
		// q.y /= q.w;
		float* L_5 = (&(&___0_q)->___y_1);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_q;
		float L_9 = L_8.___w_3;
		*((float*)L_6) = (float)((float)(L_7/L_9));
		// q.z /= q.w;
		float* L_10 = (&(&___0_q)->___z_2);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___0_q;
		float L_14 = L_13.___w_3;
		*((float*)L_11) = (float)((float)(L_12/L_14));
		// q.w = 1.0f;
		(&___0_q)->___w_3 = (1.0f);
		// float angleX = 2.0f * Mathf.Rad2Deg * Mathf.Atan (q.x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___0_q;
		float L_16 = L_15.___x_0;
		float L_17;
		L_17 = atanf(L_16);
		V_0 = ((float)il2cpp_codegen_multiply((114.59156f), L_17));
		// angleX = Mathf.Clamp (angleX, MinimumX, MaximumX);
		float L_18 = V_0;
		float L_19 = __this->___MinimumX_3;
		float L_20 = __this->___MaximumX_4;
		float L_21;
		L_21 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_18, L_19, L_20, NULL);
		V_0 = L_21;
		// q.x = Mathf.Tan (0.5f * Mathf.Deg2Rad * angleX);
		float L_22 = V_0;
		float L_23;
		L_23 = tanf(((float)il2cpp_codegen_multiply((0.00872664619f), L_22)));
		(&___0_q)->___x_0 = L_23;
		// return q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_q;
		return L_24;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m8EF7E4171402C13B7F9B772C748CB51382578363 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// public float XSensitivity = 2f;
		__this->___XSensitivity_0 = (2.0f);
		// public float YSensitivity = 2f;
		__this->___YSensitivity_1 = (2.0f);
		// public bool clampVerticalRotation = true;
		__this->___clampVerticalRotation_2 = (bool)1;
		// public float MinimumX = -90F;
		__this->___MinimumX_3 = (-90.0f);
		// public float MaximumX = 90F;
		__this->___MaximumX_4 = (90.0f);
		// public float smoothTime = 5f;
		__this->___smoothTime_6 = (5.0f);
		// public bool lockCursor = true;
		__this->___lockCursor_7 = (bool)1;
		// private bool m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Rigidbody2D NinjaController.NinjaController::get_RBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* NinjaController_get_RBody_m79F8AD472C3FCFBDE1FC560FEF18E2DA5F43CACB (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// private Rigidbody2D RBody { get; set; }
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___U3CRBodyU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void NinjaController.NinjaController::set_RBody(UnityEngine.Rigidbody2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_set_RBody_m6751EE665BEF573C56B2FE9C637D52CBA3613D2C (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_value, const RuntimeMethod* method) 
{
	{
		// private Rigidbody2D RBody { get; set; }
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___0_value;
		__this->___U3CRBodyU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRBodyU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector2 NinjaController.NinjaController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NinjaController_get_Velocity_m1AE2964DC67C740908731E77994690A52C673383 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Velocity { get { return(RBody.velocity); } }
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = NinjaController_get_RBody_m79F8AD472C3FCFBDE1FC560FEF18E2DA5F43CACB_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 NinjaController.NinjaController::get_VelocityRelativeGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NinjaController_get_VelocityRelativeGround_m3122CFACB0ADC003530ECFB4F493C3F8F5FB60F5 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 VelocityRelativeGround { get { return(Velocity / PhysicsParams.onGroundMaxVelHorizontal); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = NinjaController_get_Velocity_m1AE2964DC67C740908731E77994690A52C673383(__this, NULL);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_1;
		L_1 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_2 = L_1->___onGroundMaxVelHorizontal_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean NinjaController.NinjaController::get_IsOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsOnGround_mE8ED6AD636D52A7C1AC8F275F58BFE5CA49D3027 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// return GetIsColliding(timeRealLastGroundCollision);
		float L_0 = __this->___timeRealLastGroundCollision_6;
		bool L_1;
		L_1 = NinjaController_GetIsColliding_mB622D93D0634A2213C5BE3F21F0B8A5F0A2AD4A0(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean NinjaController.NinjaController::get_IsOnWallLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsOnWallLeft_mDC2BE2CEE084103FD5F789D52609F509DD125D3B (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// return GetIsColliding(timeRealLastWallLeftCollision);
		float L_0 = __this->___timeRealLastWallLeftCollision_7;
		bool L_1;
		L_1 = NinjaController_GetIsColliding_mB622D93D0634A2213C5BE3F21F0B8A5F0A2AD4A0(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean NinjaController.NinjaController::get_IsOnWallRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsOnWallRight_m0258DF8265788AF2F3A834A97A6222CDB5FEAE93 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// return GetIsColliding(timeRealLastWallRightCollision);
		float L_0 = __this->___timeRealLastWallRightCollision_8;
		bool L_1;
		L_1 = NinjaController_GetIsColliding_mB622D93D0634A2213C5BE3F21F0B8A5F0A2AD4A0(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean NinjaController.NinjaController::get_IsInAir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsInAir_m838321CFFAD13EC4A2907B901CA690A0A7BC79EA (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInAir { get { return isPlayerInAir; } }
		bool L_0 = __this->___isPlayerInAir_11;
		return L_0;
	}
}
// System.Boolean NinjaController.NinjaController::GetIsColliding(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_GetIsColliding_mB622D93D0634A2213C5BE3F21F0B8A5F0A2AD4A0 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, float ___0_timeLastCollision, const RuntimeMethod* method) 
{
	{
		// return(Time.realtimeSinceStartup < timeLastCollision + 0.05f);
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = ___0_timeLastCollision;
		return (bool)((((float)L_0) < ((float)((float)il2cpp_codegen_add(L_1, (0.0500000007f)))))? 1 : 0);
	}
}
// System.Single NinjaController.NinjaController::get_EntityMass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// private float EntityMass { get { return(PhysicsParams.playerMass); } }
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_0;
		L_0 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_1 = L_0->___playerMass_0;
		return L_1;
	}
}
// NinjaController.PhysicsParams NinjaController.NinjaController::get_PhysicsParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// get { return physicsParams; }
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_0 = __this->___physicsParams_5;
		return L_0;
	}
}
// System.Void NinjaController.NinjaController::set_PhysicsParams(NinjaController.PhysicsParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_set_PhysicsParams_m303AE9DB32F780925313254DBB13D77A88ECC963 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { physicsParams = value; }
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_0 = ___0_value;
		__this->___physicsParams_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___physicsParams_5), (void*)L_0);
		// set { physicsParams = value; }
		return;
	}
}
// UnityEngine.Vector2 NinjaController.NinjaController::get_CurrentForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NinjaController_get_CurrentForce_m973FD37B9C7954800CE70CD91FF842E158363208 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 CurrentForce { get { return currentForce; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___currentForce_10;
		return L_0;
	}
}
// System.Boolean NinjaController.NinjaController::get_IsOnWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_get_IsOnWall_mD95A163210776E77B79676586D383575B25CF8AC (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOnWall { get { return isPlayerOnWall; } }
		bool L_0 = __this->___isPlayerOnWall_14;
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Renderer> NinjaController.NinjaController::get_AllRenderers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* NinjaController_get_AllRenderers_m64D5F400D1BA5256D9FC8053F9A87CA822C39539 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// public List<Renderer> AllRenderers { get { return allRenderers; } }
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_0 = __this->___allRenderers_15;
		return L_0;
	}
}
// UnityEngine.Vector3 NinjaController.NinjaController::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NinjaController_get_Position_mFC920F2B3781D96A68D234F28C05C0C7467E937B (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// return transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Void NinjaController.NinjaController::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_set_Position_mFFBB82A04BD3D6932C7DE364C07FFFE0E875CB6C (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.position = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 NinjaController.NinjaController::get_Position2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NinjaController_get_Position2D_mECF949C061D970D5119340163BBBEDE9E9C3D86C (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// return transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void NinjaController.NinjaController::set_Position2D(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_set_Position2D_m6BE6B2530A65C733FBCF967553F0436B83AA23C3 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.position = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_Awake_m213BDF49CEE70CC0F6549431C242F5EF26B1E489 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m28EB00D8747BD14E8E8EC3BFDB9D79F689CB0293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF54F2E66A8607C234890CE88852412F8AB6B2331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		NinjaController_set_RBody_m6751EE665BEF573C56B2FE9C637D52CBA3613D2C_inline(__this, L_0, NULL);
		// allRenderers = new List<Renderer>(GetComponentsInChildren<Renderer>(true));
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1;
		L_1 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m28EB00D8747BD14E8E8EC3BFDB9D79F689CB0293(__this, (bool)1, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m28EB00D8747BD14E8E8EC3BFDB9D79F689CB0293_RuntimeMethod_var);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_2 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		List_1__ctor_mF54F2E66A8607C234890CE88852412F8AB6B2331(L_2, (RuntimeObject*)L_1, List_1__ctor_mF54F2E66A8607C234890CE88852412F8AB6B2331_RuntimeMethod_var);
		__this->___allRenderers_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allRenderers_15), (void*)L_2);
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_Update_m3C4DEB889DCC5D912EA673CF60AEC664EA091EC8 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* G_B2_0 = NULL;
	NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* G_B3_1 = NULL;
	{
		// SimResetForce();
		NinjaController_SimResetForce_m4DDCA6430E61B2C0CF8639632FF9EBBC1E161889(__this, NULL);
		// SimAddForce(new Vector2(0, PhysicsParams.gameGravity) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_0;
		L_0 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_1 = L_0->___gameGravity_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.0f), L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, L_3, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_4, NULL);
		// ProcessInput();
		NinjaController_ProcessInput_m887FE2A3496CD2957DD91974C6033B4D74393F8B(__this, NULL);
		// ComputeVelocity(Time.deltaTime);
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NinjaController_ComputeVelocity_mFE552B8A12A562B049611E565910552CB488ED8F(__this, L_5, NULL);
		// isPlayerOnWall = IsOnWallLeft || IsOnWallRight;
		bool L_6;
		L_6 = NinjaController_get_IsOnWallLeft_mDC2BE2CEE084103FD5F789D52609F509DD125D3B(__this, NULL);
		G_B1_0 = __this;
		if (L_6)
		{
			G_B2_0 = __this;
			goto IL_004e;
		}
	}
	{
		bool L_7;
		L_7 = NinjaController_get_IsOnWallRight_m0258DF8265788AF2F3A834A97A6222CDB5FEAE93(__this, NULL);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B1_0;
		goto IL_004f;
	}

IL_004e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_004f:
	{
		G_B3_1->___isPlayerOnWall_14 = (bool)G_B3_0;
		// isPlayerInAir = IsOnGround == false;
		bool L_8;
		L_8 = NinjaController_get_IsOnGround_mE8ED6AD636D52A7C1AC8F275F58BFE5CA49D3027(__this, NULL);
		__this->___isPlayerInAir_11 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::SimResetForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_SimResetForce_m4DDCA6430E61B2C0CF8639632FF9EBBC1E161889 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// currentForce = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentForce_10 = L_0;
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::SimAddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, const RuntimeMethod* method) 
{
	{
		// currentForce += force;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___currentForce_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_force;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_1, NULL);
		__this->___currentForce_10 = L_2;
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::ComputeVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_ComputeVelocity_mFE552B8A12A562B049611E565910552CB488ED8F (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, float ___0_dt, const RuntimeMethod* method) 
{
	{
		// currentVelocity += (currentForce / EntityMass) * dt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___currentVelocity_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___currentForce_10;
		float L_2;
		L_2 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_1, L_2, NULL);
		float L_4 = ___0_dt;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_5, NULL);
		__this->___currentVelocity_9 = L_6;
		// if (isPlayerInAir) {
		bool L_7 = __this->___isPlayerInAir_11;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		// currentVelocity.x = Mathf.Clamp(currentVelocity.x, -PhysicsParams.inAirMaxVelHorizontal, PhysicsParams.inAirMaxVelHorizontal);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___currentVelocity_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___currentVelocity_9);
		float L_10 = L_9->___x_0;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_11;
		L_11 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_12 = L_11->___inAirMaxVelHorizontal_7;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_13;
		L_13 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_14 = L_13->___inAirMaxVelHorizontal_7;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, ((-L_12)), L_14, NULL);
		L_8->___x_0 = L_15;
		goto IL_0096;
	}

IL_0064:
	{
		// currentVelocity.x = Mathf.Clamp(currentVelocity.x, -PhysicsParams.onGroundMaxVelHorizontal, PhysicsParams.onGroundMaxVelHorizontal);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___currentVelocity_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___currentVelocity_9);
		float L_18 = L_17->___x_0;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_19;
		L_19 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_20 = L_19->___onGroundMaxVelHorizontal_10;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_21;
		L_21 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_22 = L_21->___onGroundMaxVelHorizontal_10;
		float L_23;
		L_23 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_18, ((-L_20)), L_22, NULL);
		L_16->___x_0 = L_23;
	}

IL_0096:
	{
		// RBody.velocity = currentVelocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24;
		L_24 = NinjaController_get_RBody_m79F8AD472C3FCFBDE1FC560FEF18E2DA5F43CACB_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = __this->___currentVelocity_9;
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_24, L_25, NULL);
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_ProcessInput_m887FE2A3496CD2957DD91974C6033B4D74393F8B (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool isKeyDownJump = Input.GetButton("Jump");
		bool L_0;
		L_0 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		V_0 = L_0;
		// float inputAxisX = Input.GetAxisRaw("Horizontal");
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		// bool isKeyDownLeft = inputAxisX < -0.5f;
		float L_2 = L_1;
		V_1 = (bool)((((float)L_2) < ((float)(-0.5f)))? 1 : 0);
		// bool isKeyDownRight = inputAxisX > 0.5f;
		V_2 = (bool)((((float)L_2) > ((float)(0.5f)))? 1 : 0);
		// if (isPlayerInAir == false) {
		bool L_3 = __this->___isPlayerInAir_11;
		if (L_3)
		{
			goto IL_007d;
		}
	}
	{
		// if (isKeyDownJump == false) {
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		// keyJumpRetrigger = true;
		__this->___keyJumpRetrigger_12 = (bool)1;
	}

IL_0038:
	{
		// if (isKeyDownJump == true && keyJumpRetrigger == true) {
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0202;
		}
	}
	{
		bool L_6 = __this->___keyJumpRetrigger_12;
		if (!L_6)
		{
			goto IL_0202;
		}
	}
	{
		// keyJumpPressed = true;
		__this->___keyJumpPressed_13 = (bool)1;
		// keyJumpRetrigger = false;
		__this->___keyJumpRetrigger_12 = (bool)0;
		// currentVelocity = new Vector2(currentVelocity.x, PhysicsParams.jumpUpVel);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___currentVelocity_9);
		float L_8 = L_7->___x_0;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_9;
		L_9 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_10 = L_9->___jumpUpVel_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		__this->___currentVelocity_9 = L_11;
		goto IL_0202;
	}

IL_007d:
	{
		// } else if (isPlayerOnWall == true) {
		bool L_12 = __this->___isPlayerOnWall_14;
		if (!L_12)
		{
			goto IL_0202;
		}
	}
	{
		// if (isKeyDownJump == false) {
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_0092;
		}
	}
	{
		// keyJumpRetrigger = true;
		__this->___keyJumpRetrigger_12 = (bool)1;
	}

IL_0092:
	{
		// if (currentVelocity.y < 0) {//apply friction when moving downwards
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___currentVelocity_9);
		float L_15 = L_14->___y_1;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		// SimAddForce(new Vector2(0, PhysicsParams.wallFriction) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_16;
		L_16 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_17 = L_16->___wallFriction_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), (0.0f), L_17, /*hidden argument*/NULL);
		float L_19;
		L_19 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, L_19, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_20, NULL);
	}

IL_00ca:
	{
		// if (currentVelocity.y < PhysicsParams.wallFrictionStrongVelThreshold) {//apply even more friction when moving downwards fast
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___currentVelocity_9);
		float L_22 = L_21->___y_1;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_23;
		L_23 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_24 = L_23->___wallFrictionStrongVelThreshold_16;
		if ((!(((float)L_22) < ((float)L_24))))
		{
			goto IL_0108;
		}
	}
	{
		// SimAddForce(new Vector2(0, PhysicsParams.wallFrictionStrong) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_25;
		L_25 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_26 = L_25->___wallFrictionStrong_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), (0.0f), L_26, /*hidden argument*/NULL);
		float L_28;
		L_28 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_27, L_28, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_29, NULL);
	}

IL_0108:
	{
		// if (isKeyDownJump == true && keyJumpRetrigger == true) {
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_0202;
		}
	}
	{
		bool L_31 = __this->___keyJumpRetrigger_12;
		if (!L_31)
		{
			goto IL_0202;
		}
	}
	{
		// keyJumpPressed = true;
		__this->___keyJumpPressed_13 = (bool)1;
		// keyJumpRetrigger = false;
		__this->___keyJumpRetrigger_12 = (bool)0;
		// if (IsOnWallLeft == true) {
		bool L_32;
		L_32 = NinjaController_get_IsOnWallLeft_mDC2BE2CEE084103FD5F789D52609F509DD125D3B(__this, NULL);
		if (!L_32)
		{
			goto IL_0196;
		}
	}
	{
		// if (currentVelocity.y <= 0) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___currentVelocity_9);
		float L_34 = L_33->___y_1;
		if ((!(((float)L_34) <= ((float)(0.0f)))))
		{
			goto IL_0167;
		}
	}
	{
		// currentVelocity = new Vector2(PhysicsParams.jumpWallVelHorizontal, PhysicsParams.jumpWallVelVertical);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_35;
		L_35 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_36 = L_35->___jumpWallVelHorizontal_6;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_37;
		L_37 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_38 = L_37->___jumpWallVelVertical_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), L_36, L_38, /*hidden argument*/NULL);
		__this->___currentVelocity_9 = L_39;
		goto IL_0202;
	}

IL_0167:
	{
		// currentVelocity = new Vector2(PhysicsParams.jumpWallVelHorizontal, currentVelocity.y + PhysicsParams.jumpWallVelVertical);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_40;
		L_40 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_41 = L_40->___jumpWallVelHorizontal_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___currentVelocity_9);
		float L_43 = L_42->___y_1;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_44;
		L_44 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_45 = L_44->___jumpWallVelVertical_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_46), L_41, ((float)il2cpp_codegen_add(L_43, L_45)), /*hidden argument*/NULL);
		__this->___currentVelocity_9 = L_46;
		goto IL_0202;
	}

IL_0196:
	{
		// } else if (IsOnWallRight == true) {
		bool L_47;
		L_47 = NinjaController_get_IsOnWallRight_m0258DF8265788AF2F3A834A97A6222CDB5FEAE93(__this, NULL);
		if (!L_47)
		{
			goto IL_0202;
		}
	}
	{
		// if (currentVelocity.y <= 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48 = (&__this->___currentVelocity_9);
		float L_49 = L_48->___y_1;
		if ((!(((float)L_49) <= ((float)(0.0f)))))
		{
			goto IL_01d4;
		}
	}
	{
		// currentVelocity = new Vector2(-PhysicsParams.jumpWallVelHorizontal, PhysicsParams.jumpWallVelVertical);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_50;
		L_50 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_51 = L_50->___jumpWallVelHorizontal_6;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_52;
		L_52 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_53 = L_52->___jumpWallVelVertical_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_54), ((-L_51)), L_53, /*hidden argument*/NULL);
		__this->___currentVelocity_9 = L_54;
		goto IL_0202;
	}

IL_01d4:
	{
		// currentVelocity = new Vector2(-PhysicsParams.jumpWallVelHorizontal, currentVelocity.y + PhysicsParams.jumpWallVelVertical);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_55;
		L_55 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_56 = L_55->___jumpWallVelHorizontal_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___currentVelocity_9);
		float L_58 = L_57->___y_1;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_59;
		L_59 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_60 = L_59->___jumpWallVelVertical_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), ((-L_56)), ((float)il2cpp_codegen_add(L_58, L_60)), /*hidden argument*/NULL);
		__this->___currentVelocity_9 = L_61;
	}

IL_0202:
	{
		// if (isKeyDownJump == false) {
		bool L_62 = V_0;
		if (L_62)
		{
			goto IL_020c;
		}
	}
	{
		// keyJumpPressed = false;
		__this->___keyJumpPressed_13 = (bool)0;
	}

IL_020c:
	{
		// if (keyJumpPressed == true) {
		bool L_63 = __this->___keyJumpPressed_13;
		if (!L_63)
		{
			goto IL_023a;
		}
	}
	{
		// SimAddForce(new Vector2(0, PhysicsParams.jumpUpForce) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_64;
		L_64 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_65 = L_64->___jumpUpForce_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), (0.0f), L_65, /*hidden argument*/NULL);
		float L_67;
		L_67 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_66, L_67, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_68, NULL);
	}

IL_023a:
	{
		// if (keyJumpPressed == true && currentVelocity.y <= 0) {
		bool L_69 = __this->___keyJumpPressed_13;
		if (!L_69)
		{
			goto IL_025b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_70 = (&__this->___currentVelocity_9);
		float L_71 = L_70->___y_1;
		if ((!(((float)L_71) <= ((float)(0.0f)))))
		{
			goto IL_025b;
		}
	}
	{
		// keyJumpPressed = false;
		__this->___keyJumpPressed_13 = (bool)0;
	}

IL_025b:
	{
		// if (keyJumpPressed == false && isPlayerInAir == true && currentVelocity.y > 0) {
		bool L_72 = __this->___keyJumpPressed_13;
		if (L_72)
		{
			goto IL_02a3;
		}
	}
	{
		bool L_73 = __this->___isPlayerInAir_11;
		if (!L_73)
		{
			goto IL_02a3;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_74 = (&__this->___currentVelocity_9);
		float L_75 = L_74->___y_1;
		if ((!(((float)L_75) > ((float)(0.0f)))))
		{
			goto IL_02a3;
		}
	}
	{
		// SimAddForce(new Vector2(0, PhysicsParams.jumpGravity) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_76;
		L_76 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_77 = L_76->___jumpGravity_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_78), (0.0f), L_77, /*hidden argument*/NULL);
		float L_79;
		L_79 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_78, L_79, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_80, NULL);
	}

IL_02a3:
	{
		// if (isPlayerInAir == true) {
		bool L_81 = __this->___isPlayerInAir_11;
		if (!L_81)
		{
			goto IL_03a5;
		}
	}
	{
		// if (isKeyDownLeft == true && currentVelocity.x <= 0)
		bool L_82 = V_1;
		if (!L_82)
		{
			goto IL_02ef;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_83 = (&__this->___currentVelocity_9);
		float L_84 = L_83->___x_0;
		if ((!(((float)L_84) <= ((float)(0.0f)))))
		{
			goto IL_02ef;
		}
	}
	{
		// SimAddForce(new Vector2(-PhysicsParams.inAirMoveHorizontalForce, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_85;
		L_85 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_86 = L_85->___inAirMoveHorizontalForce_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_87), ((-L_86)), (0.0f), /*hidden argument*/NULL);
		float L_88;
		L_88 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89;
		L_89 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_87, L_88, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_89, NULL);
		goto IL_03a5;
	}

IL_02ef:
	{
		// else if (isKeyDownRight == true && currentVelocity.x >= 0)
		bool L_90 = V_2;
		if (!L_90)
		{
			goto IL_032c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = (&__this->___currentVelocity_9);
		float L_92 = L_91->___x_0;
		if ((!(((float)L_92) >= ((float)(0.0f)))))
		{
			goto IL_032c;
		}
	}
	{
		// SimAddForce(new Vector2(PhysicsParams.inAirMoveHorizontalForce, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_93;
		L_93 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_94 = L_93->___inAirMoveHorizontalForce_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_95), L_94, (0.0f), /*hidden argument*/NULL);
		float L_96;
		L_96 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97;
		L_97 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_95, L_96, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_97, NULL);
		goto IL_03a5;
	}

IL_032c:
	{
		// else if (isKeyDownLeft == true && currentVelocity.x >= 0)
		bool L_98 = V_1;
		if (!L_98)
		{
			goto IL_036a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_99 = (&__this->___currentVelocity_9);
		float L_100 = L_99->___x_0;
		if ((!(((float)L_100) >= ((float)(0.0f)))))
		{
			goto IL_036a;
		}
	}
	{
		// SimAddForce(new Vector2(-PhysicsParams.inAirMoveHorizontalForceReverse, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_101;
		L_101 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_102 = L_101->___inAirMoveHorizontalForceReverse_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_103), ((-L_102)), (0.0f), /*hidden argument*/NULL);
		float L_104;
		L_104 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		L_105 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_103, L_104, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_105, NULL);
		goto IL_03a5;
	}

IL_036a:
	{
		// else if (isKeyDownRight == true && currentVelocity.x <= 0)
		bool L_106 = V_2;
		if (!L_106)
		{
			goto IL_03a5;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_107 = (&__this->___currentVelocity_9);
		float L_108 = L_107->___x_0;
		if ((!(((float)L_108) <= ((float)(0.0f)))))
		{
			goto IL_03a5;
		}
	}
	{
		// SimAddForce(new Vector2(PhysicsParams.inAirMoveHorizontalForceReverse, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_109;
		L_109 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_110 = L_109->___inAirMoveHorizontalForceReverse_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_111), L_110, (0.0f), /*hidden argument*/NULL);
		float L_112;
		L_112 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		L_113 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_111, L_112, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_113, NULL);
	}

IL_03a5:
	{
		// if (isPlayerInAir == false) {
		bool L_114 = __this->___isPlayerInAir_11;
		if (L_114)
		{
			goto IL_05fd;
		}
	}
	{
		// if (isKeyDownLeft == true && currentVelocity.x <= 0)
		bool L_115 = V_1;
		if (!L_115)
		{
			goto IL_03f1;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_116 = (&__this->___currentVelocity_9);
		float L_117 = L_116->___x_0;
		if ((!(((float)L_117) <= ((float)(0.0f)))))
		{
			goto IL_03f1;
		}
	}
	{
		// SimAddForce(new Vector2(-PhysicsParams.onGroundMoveHorizontalForce, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_118;
		L_118 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_119 = L_118->___onGroundMoveHorizontalForce_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_120), ((-L_119)), (0.0f), /*hidden argument*/NULL);
		float L_121;
		L_121 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_122;
		L_122 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_120, L_121, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_122, NULL);
		goto IL_052e;
	}

IL_03f1:
	{
		// else if (isKeyDownRight == true && currentVelocity.x >= 0)
		bool L_123 = V_2;
		if (!L_123)
		{
			goto IL_0431;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_124 = (&__this->___currentVelocity_9);
		float L_125 = L_124->___x_0;
		if ((!(((float)L_125) >= ((float)(0.0f)))))
		{
			goto IL_0431;
		}
	}
	{
		// SimAddForce(new Vector2(PhysicsParams.onGroundMoveHorizontalForce, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_126;
		L_126 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_127 = L_126->___onGroundMoveHorizontalForce_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_128;
		memset((&L_128), 0, sizeof(L_128));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_128), L_127, (0.0f), /*hidden argument*/NULL);
		float L_129;
		L_129 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130;
		L_130 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_128, L_129, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_130, NULL);
		goto IL_052e;
	}

IL_0431:
	{
		// else if (isKeyDownLeft == true && currentVelocity.x >= 0)
		bool L_131 = V_1;
		if (!L_131)
		{
			goto IL_0472;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_132 = (&__this->___currentVelocity_9);
		float L_133 = L_132->___x_0;
		if ((!(((float)L_133) >= ((float)(0.0f)))))
		{
			goto IL_0472;
		}
	}
	{
		// SimAddForce(new Vector2(-PhysicsParams.onGroundMoveHorizontalForceReverse, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_134;
		L_134 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_135 = L_134->___onGroundMoveHorizontalForceReverse_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_136;
		memset((&L_136), 0, sizeof(L_136));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_136), ((-L_135)), (0.0f), /*hidden argument*/NULL);
		float L_137;
		L_137 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		L_138 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_136, L_137, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_138, NULL);
		goto IL_052e;
	}

IL_0472:
	{
		// else if (isKeyDownRight == true && currentVelocity.x <= 0)
		bool L_139 = V_2;
		if (!L_139)
		{
			goto IL_04af;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_140 = (&__this->___currentVelocity_9);
		float L_141 = L_140->___x_0;
		if ((!(((float)L_141) <= ((float)(0.0f)))))
		{
			goto IL_04af;
		}
	}
	{
		// SimAddForce(new Vector2(PhysicsParams.onGroundMoveHorizontalForceReverse, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_142;
		L_142 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_143 = L_142->___onGroundMoveHorizontalForceReverse_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_144;
		memset((&L_144), 0, sizeof(L_144));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_144), L_143, (0.0f), /*hidden argument*/NULL);
		float L_145;
		L_145 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_146;
		L_146 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_144, L_145, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_146, NULL);
		goto IL_052e;
	}

IL_04af:
	{
		// else if (isKeyDownLeft != true && isKeyDownRight != true && currentVelocity.x > 0)
		bool L_147 = V_1;
		if (L_147)
		{
			goto IL_04f0;
		}
	}
	{
		bool L_148 = V_2;
		if (L_148)
		{
			goto IL_04f0;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_149 = (&__this->___currentVelocity_9);
		float L_150 = L_149->___x_0;
		if ((!(((float)L_150) > ((float)(0.0f)))))
		{
			goto IL_04f0;
		}
	}
	{
		// SimAddForce(new Vector2(-PhysicsParams.groundFriction, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_151;
		L_151 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_152 = L_151->___groundFriction_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153;
		memset((&L_153), 0, sizeof(L_153));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_153), ((-L_152)), (0.0f), /*hidden argument*/NULL);
		float L_154;
		L_154 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_155;
		L_155 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_153, L_154, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_155, NULL);
		goto IL_052e;
	}

IL_04f0:
	{
		// else if (isKeyDownLeft != true && isKeyDownRight != true && currentVelocity.x < 0)
		bool L_156 = V_1;
		if (L_156)
		{
			goto IL_052e;
		}
	}
	{
		bool L_157 = V_2;
		if (L_157)
		{
			goto IL_052e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_158 = (&__this->___currentVelocity_9);
		float L_159 = L_158->___x_0;
		if ((!(((float)L_159) < ((float)(0.0f)))))
		{
			goto IL_052e;
		}
	}
	{
		// SimAddForce(new Vector2(PhysicsParams.groundFriction, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_160;
		L_160 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_161 = L_160->___groundFriction_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_162;
		memset((&L_162), 0, sizeof(L_162));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_162), L_161, (0.0f), /*hidden argument*/NULL);
		float L_163;
		L_163 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_164;
		L_164 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_162, L_163, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_164, NULL);
	}

IL_052e:
	{
		// if (isKeyDownLeft != true && isKeyDownRight != true && currentVelocity.x > 0 && currentVelocity.x < PhysicsParams.groundFrictionEpsilon) {
		bool L_165 = V_1;
		if (L_165)
		{
			goto IL_0595;
		}
	}
	{
		bool L_166 = V_2;
		if (L_166)
		{
			goto IL_0595;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_167 = (&__this->___currentVelocity_9);
		float L_168 = L_167->___x_0;
		if ((!(((float)L_168) > ((float)(0.0f)))))
		{
			goto IL_0595;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_169 = (&__this->___currentVelocity_9);
		float L_170 = L_169->___x_0;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_171;
		L_171 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_172 = L_171->___groundFrictionEpsilon_14;
		if ((!(((float)L_170) < ((float)L_172))))
		{
			goto IL_0595;
		}
	}
	{
		// SimAddForce(new Vector2(PhysicsParams.groundFriction, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_173;
		L_173 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_174 = L_173->___groundFriction_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_175;
		memset((&L_175), 0, sizeof(L_175));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_175), L_174, (0.0f), /*hidden argument*/NULL);
		float L_176;
		L_176 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_177;
		L_177 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_175, L_176, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_177, NULL);
		// currentVelocity.x = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_178 = (&__this->___currentVelocity_9);
		L_178->___x_0 = (0.0f);
		return;
	}

IL_0595:
	{
		// } else if (isKeyDownLeft != true && isKeyDownRight != true && currentVelocity.x < 0 && currentVelocity.x > -PhysicsParams.groundFrictionEpsilon) {
		bool L_179 = V_1;
		if (L_179)
		{
			goto IL_05fd;
		}
	}
	{
		bool L_180 = V_2;
		if (L_180)
		{
			goto IL_05fd;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_181 = (&__this->___currentVelocity_9);
		float L_182 = L_181->___x_0;
		if ((!(((float)L_182) < ((float)(0.0f)))))
		{
			goto IL_05fd;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_183 = (&__this->___currentVelocity_9);
		float L_184 = L_183->___x_0;
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_185;
		L_185 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_186 = L_185->___groundFrictionEpsilon_14;
		if ((!(((float)L_184) > ((float)((-L_186))))))
		{
			goto IL_05fd;
		}
	}
	{
		// SimAddForce(new Vector2(-PhysicsParams.groundFriction, 0) * EntityMass);
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_187;
		L_187 = NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline(__this, NULL);
		float L_188 = L_187->___groundFriction_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_189), ((-L_188)), (0.0f), /*hidden argument*/NULL);
		float L_190;
		L_190 = NinjaController_get_EntityMass_m93B6D19B6F895D0DEC1C04B8D602E52A3F50E287(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_191;
		L_191 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_189, L_190, NULL);
		NinjaController_SimAddForce_m4BA5495A5AFD5D4B5EAE3052C24525720720E48A(__this, L_191, NULL);
		// currentVelocity.x = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_192 = (&__this->___currentVelocity_9);
		L_192->___x_0 = (0.0f);
	}

IL_05fd:
	{
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::ResetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_ResetVelocity_mAA2AC0F56D2AE786DFF7FDC12969E1BE7681D180 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// currentVelocity = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentVelocity_9 = L_0;
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_OnCollisionStay2D_m22441A18737B6EB6BF5625E728C08FFF0D0C8729 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* V_0 = NULL;
	int32_t V_1 = 0;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// foreach (ContactPoint2D contactPoint in collision.contacts) {
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_1;
		L_1 = Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_016b;
	}

IL_000e:
	{
		// foreach (ContactPoint2D contactPoint in collision.contacts) {
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (GetIsVectorClose(new Vector2(0, 1), contactPoint.normal)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_2), NULL);
		bool L_8;
		L_8 = NinjaController_GetIsVectorClose_m103290BDAD61E427EC263730590A7A954DB8D458(__this, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		// timeRealLastGroundCollision = Time.realtimeSinceStartup;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___timeRealLastGroundCollision_6 = L_9;
		// currentVelocity.y = Mathf.Clamp(currentVelocity.y, 0, Mathf.Abs(currentVelocity.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___currentVelocity_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___currentVelocity_9);
		float L_12 = L_11->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___currentVelocity_9);
		float L_14 = L_13->___y_1;
		float L_15;
		L_15 = fabsf(L_14);
		float L_16;
		L_16 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, (0.0f), L_15, NULL);
		L_10->___y_1 = L_16;
	}

IL_006f:
	{
		// if (GetIsVectorClose(new Vector2(1, 0), contactPoint.normal)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_2), NULL);
		bool L_19;
		L_19 = NinjaController_GetIsVectorClose_m103290BDAD61E427EC263730590A7A954DB8D458(__this, L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		// timeRealLastWallLeftCollision = Time.realtimeSinceStartup;
		float L_20;
		L_20 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___timeRealLastWallLeftCollision_7 = L_20;
		// currentVelocity.x = Mathf.Clamp(currentVelocity.x, 0, Mathf.Abs(currentVelocity.x));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___currentVelocity_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___currentVelocity_9);
		float L_23 = L_22->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___currentVelocity_9);
		float L_25 = L_24->___x_0;
		float L_26;
		L_26 = fabsf(L_25);
		float L_27;
		L_27 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_23, (0.0f), L_26, NULL);
		L_21->___x_0 = L_27;
	}

IL_00c8:
	{
		// if (GetIsVectorClose(new Vector2(-1, 0), contactPoint.normal)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_2), NULL);
		bool L_30;
		L_30 = NinjaController_GetIsVectorClose_m103290BDAD61E427EC263730590A7A954DB8D458(__this, L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0122;
		}
	}
	{
		// timeRealLastWallRightCollision = Time.realtimeSinceStartup;
		float L_31;
		L_31 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___timeRealLastWallRightCollision_8 = L_31;
		// currentVelocity.x = Mathf.Clamp(currentVelocity.x, -Mathf.Abs(currentVelocity.x), 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___currentVelocity_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___currentVelocity_9);
		float L_34 = L_33->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___currentVelocity_9);
		float L_36 = L_35->___x_0;
		float L_37;
		L_37 = fabsf(L_36);
		float L_38;
		L_38 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_34, ((-L_37)), (0.0f), NULL);
		L_32->___x_0 = L_38;
	}

IL_0122:
	{
		// if(GetIsVectorClose(Vector2.down, contactPoint.normal)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21((&V_2), NULL);
		bool L_41;
		L_41 = NinjaController_GetIsVectorClose_m103290BDAD61E427EC263730590A7A954DB8D458(__this, L_39, L_40, NULL);
		if (!L_41)
		{
			goto IL_0167;
		}
	}
	{
		// currentVelocity.y = Mathf.Clamp(currentVelocity.y, -Mathf.Abs(currentVelocity.y), 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___currentVelocity_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___currentVelocity_9);
		float L_44 = L_43->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->___currentVelocity_9);
		float L_46 = L_45->___y_1;
		float L_47;
		L_47 = fabsf(L_46);
		float L_48;
		L_48 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_44, ((-L_47)), (0.0f), NULL);
		L_42->___y_1 = L_48;
	}

IL_0167:
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_016b:
	{
		// foreach (ContactPoint2D contactPoint in collision.contacts) {
		int32_t L_50 = V_1;
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean NinjaController.NinjaController::GetIsVectorClose(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NinjaController_GetIsVectorClose_m103290BDAD61E427EC263730590A7A954DB8D458 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vectorA, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_vectorB, const RuntimeMethod* method) 
{
	{
		// return(Mathf.Approximately(0, Vector2.Distance(vectorA, vectorB)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vectorA;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_vectorB;
		float L_2;
		L_2 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((0.0f), L_2, NULL);
		return L_3;
	}
}
// System.Void NinjaController.NinjaController::OnLifeChanged(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_OnLifeChanged_mA1138B95C5E8C126EABE783BFF177759B2D7D56D (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, int32_t ___0_life, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_contactVector, const RuntimeMethod* method) 
{
	{
		// currentVelocity = contactVector.normalized * forceEnemyCollision;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&___1_contactVector), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_0, (15.0f), NULL);
		__this->___currentVelocity_9 = L_1;
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::ResetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController_ResetPlayer_m6CA2BAD4CD78B5350CE91020EC1E41E823B7AB01 (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// currentVelocity = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentVelocity_9 = L_0;
		// }
		return;
	}
}
// System.Void NinjaController.NinjaController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NinjaController__ctor_m0A3519CECF88BA5FBD3995244C9C7D566A50E46E (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 currentVelocity = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentVelocity_9 = L_0;
		// private Vector2 currentForce = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentForce_10 = L_1;
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
// System.Void NinjaController.PhysicsParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsParams__ctor_m1150A9386A46938D7558F25E75B196F920D78982 (PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* __this, const RuntimeMethod* method) 
{
	{
		// public float playerMass = 12.5f;
		__this->___playerMass_0 = (12.5f);
		// public float gameGravity = -19.5f;
		__this->___gameGravity_1 = (-19.5f);
		// public float jumpUpForce = 0.25f;
		__this->___jumpUpForce_2 = (0.25f);
		// public float jumpUpVel = 18.75f;
		__this->___jumpUpVel_3 = (18.75f);
		// public float jumpGravity = -22.5f;
		__this->___jumpGravity_4 = (-22.5f);
		// public float jumpWallVelVertical = 12;
		__this->___jumpWallVelVertical_5 = (12.0f);
		// public float jumpWallVelHorizontal = 7.5f;
		__this->___jumpWallVelHorizontal_6 = (7.5f);
		// public float inAirMaxVelHorizontal = 27.5f;
		__this->___inAirMaxVelHorizontal_7 = (27.5f);
		// public float inAirMoveHorizontalForce = 12.5f;
		__this->___inAirMoveHorizontalForce_8 = (12.5f);
		// public float inAirMoveHorizontalForceReverse = 28.75f;
		__this->___inAirMoveHorizontalForceReverse_9 = (28.75f);
		// public float onGroundMaxVelHorizontal = 25;
		__this->___onGroundMaxVelHorizontal_10 = (25.0f);
		// public float onGroundMoveHorizontalForce = 20;
		__this->___onGroundMoveHorizontalForce_11 = (20.0f);
		// public float onGroundMoveHorizontalForceReverse = 45;
		__this->___onGroundMoveHorizontalForceReverse_12 = (45.0f);
		// public float groundFriction = 35;
		__this->___groundFriction_13 = (35.0f);
		// public float groundFrictionEpsilon = 0.75f;
		__this->___groundFrictionEpsilon_14 = (0.75f);
		// public float wallFriction = 11.25f;
		__this->___wallFriction_15 = (11.25f);
		// public float wallFrictionStrongVelThreshold = -10;
		__this->___wallFrictionStrongVelThreshold_16 = (-10.0f);
		// public float wallFrictionStrong = 22.5f;
		__this->___wallFrictionStrong_17 = (22.5f);
		// public int version = 1;
		__this->___version_18 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void NinjaController.PhysicsParamsContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsParamsContainer__ctor_mBB25E1DAA558213A46C544061B47276F3F2D3660 (PhysicsParamsContainer_t1171A75EE0F646D9B8A3CCCFC510CBB76F3AE82A* __this, const RuntimeMethod* method) 
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
// System.Void Cainos.LucidEditor.AssetsOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetsOnlyAttribute__ctor_m04C49DE825D31773B99CE7129B9FA825B5B2E75E (AssetsOnlyAttribute_tF5F746B4696AB7E4D487AAE7A335830D704AF387* __this, const RuntimeMethod* method) 
{
	{
		// public AssetsOnlyAttribute()
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
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
// System.Void Cainos.LucidEditor.BlockquoteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockquoteAttribute__ctor_m69CC6EB721B468B1C0B18E9F9C0CB14DA9D881F4 (BlockquoteAttribute_t321BD5E8E9680A0098BE392B2D3D66671B9F8CF0* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// public BlockquoteAttribute(string text)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___0_text;
		__this->___text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.BoxGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGroupAttribute__ctor_m2664FF0928E2F413F6CDBE097DE12F00B50D6488 (BoxGroupAttribute_tEFA615925511A98EFD501E05AA3D7D2BDA9FAA70* __this, String_t* ___0_groupName, const RuntimeMethod* method) 
{
	{
		// public BoxGroupAttribute(string groupName) : base(groupName) { }
		String_t* L_0 = ___0_groupName;
		PropertyGroupAttribute__ctor_m720E3F5F9EC44E4DFE41F620E065B89C89837095(__this, L_0, NULL);
		// public BoxGroupAttribute(string groupName) : base(groupName) { }
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
// System.Void Cainos.LucidEditor.ButtonAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_mDB0B5CA7A4317B43A1B5F8266FA0A2063AC0DB40 (ButtonAttribute_tFCF245656C2761768BBE09FCCBCF6B60750A43BE* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonAttribute() { }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public ButtonAttribute() { }
		return;
	}
}
// System.Void Cainos.LucidEditor.ButtonAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m6DF411ADD6F585DC87008E252E5B020094775504 (ButtonAttribute_tFCF245656C2761768BBE09FCCBCF6B60750A43BE* __this, String_t* ___0_label, const RuntimeMethod* method) 
{
	{
		// public ButtonAttribute(string label)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.label = label;
		String_t* L_0 = ___0_label;
		__this->___label_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___label_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.ButtonAttribute::.ctor(Cainos.LucidEditor.InspectorButtonSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_mDB052D42A2EA7FFE792113A535E76E905FD9B60F (ButtonAttribute_tFCF245656C2761768BBE09FCCBCF6B60750A43BE* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// public ButtonAttribute(InspectorButtonSize size)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.size = size;
		int32_t L_0 = ___0_size;
		__this->___size_1 = L_0;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.ButtonAttribute::.ctor(System.String,Cainos.LucidEditor.InspectorButtonSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m1DC9427EDEB63362294151B61E99D441D027CE7F (ButtonAttribute_tFCF245656C2761768BBE09FCCBCF6B60750A43BE* __this, String_t* ___0_label, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		// public ButtonAttribute(string label, InspectorButtonSize size)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.label = label;
		String_t* L_0 = ___0_label;
		__this->___label_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___label_0), (void*)L_0);
		// this.size = size;
		int32_t L_1 = ___1_size;
		__this->___size_1 = L_1;
		// }
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
// System.Void Cainos.LucidEditor.DisableIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableIfAttribute__ctor_m0A8C377AAAFAB2D23CBAC392C96D6E6E1B60582F (DisableIfAttribute_tFF49816FDEFD32456822D76C29118983AC0FC051* __this, String_t* ___0_condition, const RuntimeMethod* method) 
{
	{
		// public DisableIfAttribute(string condition)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.DisableInEditModeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInEditModeAttribute__ctor_m5F69F89688C363E1494588638BD6FA23300CC02E (DisableInEditModeAttribute_t26E882F407EC81B7EF26EC2A69DC66309EAB4E6A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Cainos.LucidEditor.DisableInPlayModeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInPlayModeAttribute__ctor_m327FDE93F6FCC8260A9F53F24568020E338D6B0B (DisableInPlayModeAttribute_tD1C8B93FDE93A7BDC37FCBF5840FF30195894EF7* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Cainos.LucidEditor.DisableLucidEditorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableLucidEditorAttribute__ctor_m402D169625EC0B7A6362A13AE2AA1EA8B5DB042F (DisableLucidEditorAttribute_t7BDACF7188D2713AC3A0216E851C37503960E97E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Cainos.LucidEditor.EnableIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableIfAttribute__ctor_mED81F3745AEE1484C5B11D3D78A891575344429C (EnableIfAttribute_t75415C5D824038652A22EC8CB793F9A8DEB849DD* __this, String_t* ___0_condition, const RuntimeMethod* method) 
{
	{
		// public EnableIfAttribute(string condition)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.FoldoutGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoldoutGroupAttribute__ctor_mA57AFA1C7D367753932851727D518AA582904372 (FoldoutGroupAttribute_t561E61B39EA834DFD4FA85DBA6801DDE248DD910* __this, String_t* ___0_groupName, const RuntimeMethod* method) 
{
	{
		// public FoldoutGroupAttribute(string groupName) : base(groupName) { }
		String_t* L_0 = ___0_groupName;
		PropertyGroupAttribute__ctor_m720E3F5F9EC44E4DFE41F620E065B89C89837095(__this, L_0, NULL);
		// public FoldoutGroupAttribute(string groupName) : base(groupName) { }
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
// System.Void Cainos.LucidEditor.GroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupAttribute__ctor_m4876EA75D62FBF9BEE29D6DA5E3D519CCB2D4C2E (GroupAttribute_t4ABDDA4B2C83300C37A72286F506BFB9A94D0A1F* __this, String_t* ___0_groupName, const RuntimeMethod* method) 
{
	{
		// public GroupAttribute(string groupName) : base(groupName) { }
		String_t* L_0 = ___0_groupName;
		PropertyGroupAttribute__ctor_m720E3F5F9EC44E4DFE41F620E065B89C89837095(__this, L_0, NULL);
		// public GroupAttribute(string groupName) : base(groupName) { }
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
// System.Void Cainos.LucidEditor.GUIColorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIColorAttribute__ctor_mC6D2C6DF169C514E5131008C782105C765B8DBE3 (GUIColorAttribute_tD3EA72B4D19D38F773D45F4D870C4E536D9BE19F* __this, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorText;
		__this->___color_0 = ((int32_t)15);
		// public GUIColorAttribute() { }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public GUIColorAttribute() { }
		return;
	}
}
// System.Void Cainos.LucidEditor.GUIColorAttribute::.ctor(Cainos.LucidEditor.InspectorColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIColorAttribute__ctor_mC05A464844D3ED5C671FA8430C815127F288E204 (GUIColorAttribute_tD3EA72B4D19D38F773D45F4D870C4E536D9BE19F* __this, int32_t ___0_color, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorText;
		__this->___color_0 = ((int32_t)15);
		// public GUIColorAttribute(InspectorColor color)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.color = color;
		int32_t L_0 = ___0_color;
		__this->___color_0 = L_0;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.GUIColorAttribute::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIColorAttribute__ctor_m01CBF49307F4B20437E6798187B662058D551F7B (GUIColorAttribute_tD3EA72B4D19D38F773D45F4D870C4E536D9BE19F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorText;
		__this->___color_0 = ((int32_t)15);
		// public GUIColorAttribute(float r, float g, float b)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// useCustomColor = true;
		__this->___useCustomColor_1 = (bool)1;
		// customColor = new Color(r, g, b);
		float L_0 = ___0_r;
		float L_1 = ___1_g;
		float L_2 = ___2_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___customColor_2 = L_3;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.GUIColorAttribute::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIColorAttribute__ctor_m00295E0E8A8D15ABFED80D37FF9C71ACDCA21D87 (GUIColorAttribute_tD3EA72B4D19D38F773D45F4D870C4E536D9BE19F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorText;
		__this->___color_0 = ((int32_t)15);
		// public GUIColorAttribute(float r, float g, float b, float a)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// useCustomColor = true;
		__this->___useCustomColor_1 = (bool)1;
		// customColor = new Color(r, g, b, a);
		float L_0 = ___0_r;
		float L_1 = ___1_g;
		float L_2 = ___2_b;
		float L_3 = ___3_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->___customColor_2 = L_4;
		// }
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
// System.Void Cainos.LucidEditor.HelpBoxAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpBoxAttribute__ctor_mEE230DF0B3C76C13DFC681FD5B7C0DCC206BB25E (HelpBoxAttribute_tF4BBF0A7C9D813BDCCDAE7D3F50596BDFA1E0114* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public HelpBoxAttribute(string message)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.message = message;
		String_t* L_0 = ___0_message;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
		// this.type = HelpBoxMessageType.Info;
		__this->___type_1 = 1;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.HelpBoxAttribute::.ctor(System.String,Cainos.LucidEditor.HelpBoxMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpBoxAttribute__ctor_m8DE799DA3043BA2B7E0876C31EE0803B5620E0F9 (HelpBoxAttribute_tF4BBF0A7C9D813BDCCDAE7D3F50596BDFA1E0114* __this, String_t* ___0_message, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// public HelpBoxAttribute(string message, HelpBoxMessageType type)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.message = message;
		String_t* L_0 = ___0_message;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
		// this.type = type;
		int32_t L_1 = ___1_type;
		__this->___type_1 = L_1;
		// }
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
// System.Void Cainos.LucidEditor.HelpBoxIfAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpBoxIfAttribute__ctor_m942808A814F7C54DAB31D00B518A5D75D1FC5731 (HelpBoxIfAttribute_tC0BE26CC2A6FABDFD075D9FE2593AF62DDCED0BC* __this, String_t* ___0_condition, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// public HelpBoxIfAttribute(string condition, string message)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// this.message = message;
		String_t* L_1 = ___1_message;
		__this->___message_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_1), (void*)L_1);
		// this.type = HelpBoxMessageType.Info;
		__this->___type_2 = 1;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.HelpBoxIfAttribute::.ctor(System.String,System.String,Cainos.LucidEditor.HelpBoxMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpBoxIfAttribute__ctor_m008DBDADFDBC02AF17F48180E6AD73E4D751D952 (HelpBoxIfAttribute_tC0BE26CC2A6FABDFD075D9FE2593AF62DDCED0BC* __this, String_t* ___0_condition, String_t* ___1_message, int32_t ___2_type, const RuntimeMethod* method) 
{
	{
		// public HelpBoxIfAttribute(string condition, string message, HelpBoxMessageType type)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// this.message = message;
		String_t* L_1 = ___1_message;
		__this->___message_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_1), (void*)L_1);
		// this.type = type;
		int32_t L_2 = ___2_type;
		__this->___type_2 = L_2;
		// }
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
// System.Void Cainos.LucidEditor.HideIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfAttribute__ctor_mBF63EDAA8ED3AABA7308418B46A9EEB062EFBC9F (HideIfAttribute_tA899F880C37E80221FB801DD796A9668E8A90890* __this, String_t* ___0_condition, const RuntimeMethod* method) 
{
	{
		// public HideIfAttribute(string condition)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.HideLabelAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideLabelAttribute__ctor_m49A2165911654F7060D633E4AE46752C4DAB2F1A (HideLabelAttribute_t1774FCDAF3FB939C80683FC7500416B8FE51D828* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Cainos.LucidEditor.HideMonoScriptAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideMonoScriptAttribute__ctor_m7224ABC03B499750FEA22F88052F4F6457F0576A (HideMonoScriptAttribute_t088F4C18769C7D28234E6AF6642AF6D4BA0DD2FB* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Cainos.LucidEditor.HorizontalGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalGroupAttribute__ctor_m888B2C4E7471C6713161BBC715F4C0BDA6727E97 (HorizontalGroupAttribute_t4557B115CD51D74BB0B2EC2B6F699C443DED6EB8* __this, String_t* ___0_groupName, const RuntimeMethod* method) 
{
	{
		// public HorizontalGroupAttribute(string groupName) : base(groupName) { }
		String_t* L_0 = ___0_groupName;
		PropertyGroupAttribute__ctor_m720E3F5F9EC44E4DFE41F620E065B89C89837095(__this, L_0, NULL);
		// public HorizontalGroupAttribute(string groupName) : base(groupName) { }
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
// System.Void Cainos.LucidEditor.HorizontalLineAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalLineAttribute__ctor_m1C60F8A689ED3314868874CC8721A15A5754AD75 (HorizontalLineAttribute_t43B6425C428A74A304E5D8F40AE69C5D4F847BCF* __this, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorLine;
		__this->___color_0 = ((int32_t)18);
		// public HorizontalLineAttribute() { }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public HorizontalLineAttribute() { }
		return;
	}
}
// System.Void Cainos.LucidEditor.HorizontalLineAttribute::.ctor(Cainos.LucidEditor.InspectorColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalLineAttribute__ctor_m915C5A774CEE9E9FFC11001D36FA110AFE34B2BF (HorizontalLineAttribute_t43B6425C428A74A304E5D8F40AE69C5D4F847BCF* __this, int32_t ___0_color, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorLine;
		__this->___color_0 = ((int32_t)18);
		// public HorizontalLineAttribute(InspectorColor color)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.color = color;
		int32_t L_0 = ___0_color;
		__this->___color_0 = L_0;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.HorizontalLineAttribute::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalLineAttribute__ctor_m9B36AFA266AC121F98B4C55A39C486FE82404B0F (HorizontalLineAttribute_t43B6425C428A74A304E5D8F40AE69C5D4F847BCF* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorLine;
		__this->___color_0 = ((int32_t)18);
		// public HorizontalLineAttribute(float r, float g, float b)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// useCustomColor = true;
		__this->___useCustomColor_1 = (bool)1;
		// customColor = new Color(r, g, b);
		float L_0 = ___0_r;
		float L_1 = ___1_g;
		float L_2 = ___2_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___customColor_2 = L_3;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.HorizontalLineAttribute::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalLineAttribute__ctor_m5F6539C7AD2E65E0BDDDA7431937736A3FA2E501 (HorizontalLineAttribute_t43B6425C428A74A304E5D8F40AE69C5D4F847BCF* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		// public readonly InspectorColor color = InspectorColor.EditorLine;
		__this->___color_0 = ((int32_t)18);
		// public HorizontalLineAttribute(float r, float g, float b, float a)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// useCustomColor = true;
		__this->___useCustomColor_1 = (bool)1;
		// customColor = new Color(r, g, b, a);
		float L_0 = ___0_r;
		float L_1 = ___1_g;
		float L_2 = ___2_b;
		float L_3 = ___3_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->___customColor_2 = L_4;
		// }
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
// System.Void Cainos.LucidEditor.IndentAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentAttribute__ctor_m1D03B00FA087575956A45B89C0F729FEB695C308 (IndentAttribute_tB25EB10C1E1BCA0AFFE3DED1815DEDF0B012291D* __this, const RuntimeMethod* method) 
{
	{
		// public IndentAttribute()
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.indent = 1;
		__this->___indent_0 = 1;
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.IndentAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentAttribute__ctor_m4559267B28D5767428F0BA5469C9C74C9B54AD66 (IndentAttribute_tB25EB10C1E1BCA0AFFE3DED1815DEDF0B012291D* __this, int32_t ___0_indent, const RuntimeMethod* method) 
{
	{
		// public IndentAttribute(int indent)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.indent = indent;
		int32_t L_0 = ___0_indent;
		__this->___indent_0 = L_0;
		// }
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
// System.Void Cainos.LucidEditor.LabelTextAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelTextAttribute__ctor_m0140EECCEB4AB5750365E39F3BC6DB1DE425CE72 (LabelTextAttribute_tFEC1FBCBBA6BA362A94F4F239A78F3E54289E5FE* __this, String_t* ___0_label, const RuntimeMethod* method) 
{
	{
		// public LabelTextAttribute(string label)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.label = label;
		String_t* L_0 = ___0_label;
		__this->___label_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___label_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.LabelWidthAttribute::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelWidthAttribute__ctor_m327CC85F2C709FBEC2E7C9E4AC92E8D40990C698 (LabelWidthAttribute_t5226EDF187DD0AC82710C2FBC67356D2E7B1037C* __this, float ___0_width, const RuntimeMethod* method) 
{
	{
		// public LabelWidthAttribute(float width)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.width = width;
		float L_0 = ___0_width;
		__this->___width_0 = L_0;
		// }
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
// System.Void Cainos.LucidEditor.OnValueChangedAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedAttribute__ctor_m3A365C2F69019116475DFA27A9916F838216CEEB (OnValueChangedAttribute_t3E475F2A972AC2799C03E2BB26A364A1B6B580FC* __this, String_t* ___0_methodName, const RuntimeMethod* method) 
{
	{
		// public OnValueChangedAttribute(string methodName)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.methodName = methodName;
		String_t* L_0 = ___0_methodName;
		__this->___methodName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodName_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.PropertyOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyOrderAttribute__ctor_m34CD88E00C4B1937DA000509EB4F8907C6EE518C (PropertyOrderAttribute_t7247B1F6821BC7AF7C0500061C25201EFC536C2B* __this, int32_t ___0_propertyOrder, const RuntimeMethod* method) 
{
	{
		// public PropertyOrderAttribute(int propertyOrder)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.propertyOrder = propertyOrder;
		int32_t L_0 = ___0_propertyOrder;
		__this->___propertyOrder_0 = L_0;
		// }
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
// System.Void Cainos.LucidEditor.ReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyAttribute__ctor_m6B783E50D4E538A938EAD420B9C6FC65FBE42459 (ReadOnlyAttribute_tB227C8C099BCA02D4AC918F6457898B41B0C10B9* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Cainos.LucidEditor.RequiredAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredAttribute__ctor_mB82CCA7D9B2D8A1CA816D514269E6A546A292E38 (RequiredAttribute_tFCC2EF3341029BD6081E4718D2F2BB6AB0040E65* __this, const RuntimeMethod* method) 
{
	{
		// public RequiredAttribute() { }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public RequiredAttribute() { }
		return;
	}
}
// System.Void Cainos.LucidEditor.RequiredAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredAttribute__ctor_mAAD50BF4A8682CE9BD9617FFEB3EB6C51E61AA34 (RequiredAttribute_tFCC2EF3341029BD6081E4718D2F2BB6AB0040E65* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public RequiredAttribute(string message)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.message = message;
		String_t* L_0 = ___0_message;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.SectionHeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SectionHeaderAttribute__ctor_m20129870FE550FB13B6A27E1AEBED0573695B6D3 (SectionHeaderAttribute_t8E188106D58463DC237DD696045CE87C93047783* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	{
		// public SectionHeaderAttribute(string title)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.title = title;
		String_t* L_0 = ___0_title;
		__this->___title_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.ShowIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute__ctor_m39EA18A4531C8247B40DE954F6F8497C56B58EAE (ShowIfAttribute_t8A0E99425DC0E9D618062031C6A1E1696D45F94D* __this, String_t* ___0_condition, const RuntimeMethod* method) 
{
	{
		// public ShowIfAttribute(string condition)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.ShowInInspectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInInspectorAttribute__ctor_m74F738DF8DEFEDC7CBA068518DF9D92322434D33 (ShowInInspectorAttribute_tC23E0B6A0D54FDC9B4D16254E9CF7D2F77530782* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Cainos.LucidEditor.TabGroupAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabGroupAttribute__ctor_m8C8B9937978D978736D7CC76A5F26483E59AC742 (TabGroupAttribute_t160F7F31CF49A334AE43C5C0F9DB9F6A77B3125D* __this, String_t* ___0_groupName, String_t* ___1_tabName, const RuntimeMethod* method) 
{
	{
		// public TabGroupAttribute(string groupName, string tabName) : base(groupName)
		String_t* L_0 = ___0_groupName;
		PropertyGroupAttribute__ctor_m720E3F5F9EC44E4DFE41F620E065B89C89837095(__this, L_0, NULL);
		// this.tabName = tabName;
		String_t* L_1 = ___1_tabName;
		__this->___tabName_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tabName_3), (void*)L_1);
		// }
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
// System.Void Cainos.LucidEditor.TitleHeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleHeaderAttribute__ctor_m9019D3A7BF699252125B64DBD535552A23993F8F (TitleHeaderAttribute_t334C708DD7BCC79F595283EB54F6F888AB5F1772* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	{
		// public TitleHeaderAttribute(string title)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.title = title;
		String_t* L_0 = ___0_title;
		__this->___title_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_0), (void*)L_0);
		// }
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
// System.Void Cainos.LucidEditor.ValidateInputAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateInputAttribute__ctor_m40A344ACE3DD9FE7109B4A632EFBDC837A916F14 (ValidateInputAttribute_t45F3ABE08CAA0BCC3A93502F9E543CC60B72FAC7* __this, String_t* ___0_condition, const RuntimeMethod* method) 
{
	{
		// public readonly HelpBoxMessageType type = HelpBoxMessageType.Error;
		__this->___type_2 = 3;
		// public ValidateInputAttribute(string condition)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.ValidateInputAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateInputAttribute__ctor_m5DA19F4EF8E3F0DD29BA33D5676023F1252CE159 (ValidateInputAttribute_t45F3ABE08CAA0BCC3A93502F9E543CC60B72FAC7* __this, String_t* ___0_condition, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// public readonly HelpBoxMessageType type = HelpBoxMessageType.Error;
		__this->___type_2 = 3;
		// public ValidateInputAttribute(string condition, string message)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// this.message = message;
		String_t* L_1 = ___1_message;
		__this->___message_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Cainos.LucidEditor.ValidateInputAttribute::.ctor(System.String,System.String,Cainos.LucidEditor.HelpBoxMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateInputAttribute__ctor_m0EFE57FE986C486059854A47C363D5C36C1F06FA (ValidateInputAttribute_t45F3ABE08CAA0BCC3A93502F9E543CC60B72FAC7* __this, String_t* ___0_condition, String_t* ___1_message, int32_t ___2_type, const RuntimeMethod* method) 
{
	{
		// public readonly HelpBoxMessageType type = HelpBoxMessageType.Error;
		__this->___type_2 = 3;
		// public ValidateInputAttribute(string condition, string message, HelpBoxMessageType type)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// this.message = message;
		String_t* L_1 = ___1_message;
		__this->___message_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_1), (void*)L_1);
		// this.type = type;
		int32_t L_2 = ___2_type;
		__this->___type_2 = L_2;
		// }
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
// System.Void Cainos.LucidEditor.PropertyGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute__ctor_m720E3F5F9EC44E4DFE41F620E065B89C89837095 (PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95* __this, String_t* ___0_groupPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4A64C7AA98342D76E2AC5F8C36FC5ECDDA49DD78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_0_m8EF5220F525E9FB5DB001CDF874690F2860FF148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95* G_B2_2 = NULL;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	PropertyGroupAttribute_tECB21A7331EABB2DEE9A9564880D34A078707C95* G_B1_2 = NULL;
	{
		// public PropertyGroupAttribute(string groupPath)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.path = groupPath;
		String_t* L_0 = ___0_groupPath;
		__this->___path_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_0), (void*)L_0);
		// name = path.Split('/').Last();
		String_t* L_1 = __this->___path_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_1, ((int32_t)47), 0, NULL);
		String_t* L_3;
		L_3 = Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D((RuntimeObject*)L_2, Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var);
		__this->___name_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_3);
		// groupDepth = path.Count(x => x == '/');
		String_t* L_4 = __this->___path_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_5 = ((U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		G_B1_2 = __this;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			G_B2_2 = __this;
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var);
		U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F* L_7 = ((U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*)il2cpp_codegen_object_new(Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F_il2cpp_TypeInfo_var);
		Func_2__ctor_m86D272566839A59489924C367E316D2E516EC1F2(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_0_m8EF5220F525E9FB5DB001CDF874690F2860FF148_RuntimeMethod_var), NULL);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_9 = L_8;
		((U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_004c:
	{
		int32_t L_10;
		L_10 = Enumerable_Count_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4A64C7AA98342D76E2AC5F8C36FC5ECDDA49DD78(G_B2_1, G_B2_0, Enumerable_Count_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4A64C7AA98342D76E2AC5F8C36FC5ECDDA49DD78_RuntimeMethod_var);
		G_B2_2->___groupDepth_2 = L_10;
		// }
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
// System.Void Cainos.LucidEditor.PropertyGroupAttribute/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m521E7FEC73C6360F3C72646412F56D1BB8D17ED5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F* L_0 = (U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F*)il2cpp_codegen_object_new(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAE7DB111DB463B5581B9265ED42AB99EBB18758D(L_0, NULL);
		((U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Cainos.LucidEditor.PropertyGroupAttribute/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE7DB111DB463B5581B9265ED42AB99EBB18758D (U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Cainos.LucidEditor.PropertyGroupAttribute/<>c::<.ctor>b__3_0(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__3_0_m8EF5220F525E9FB5DB001CDF874690F2860FF148 (U3CU3Ec_tF2F1A2AF50EA64EC3C923C39207220381BF6D56F* __this, Il2CppChar ___0_x, const RuntimeMethod* method) 
{
	{
		// groupDepth = path.Count(x => x == '/');
		Il2CppChar L_0 = ___0_x;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)47)))? 1 : 0);
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
// System.Void Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::Push()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingPlatform_Push_m8D7D50AA63A2A9A7BA25B0532F569FE2B72F911C (BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6747F4F338B10D3A415CA51956A4C83C1791FE1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m60598916F3157C85AB5F2E7192E5B838DD82D8A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m016EA90C4579158CA1606EDC1B15DA13F4494B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1EB22FD0342D3BBEB512736B1738F417CD152A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEA1BAAC8DD08A01FBB410E93C82E0D280A2ADB7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach ( Rigidbody2D rb2d in onPlatformRigidbodies)
		List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* L_0 = __this->___onPlatformRigidbodies_16;
		Enumerator_t314BE22DBEB7DA3400B99850357A4C3AC94814F6 L_1;
		L_1 = List_1_GetEnumerator_mEA1BAAC8DD08A01FBB410E93C82E0D280A2ADB7A(L_0, List_1_GetEnumerator_mEA1BAAC8DD08A01FBB410E93C82E0D280A2ADB7A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6747F4F338B10D3A415CA51956A4C83C1791FE1D((&V_0), Enumerator_Dispose_m6747F4F338B10D3A415CA51956A4C83C1791FE1D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_000e_1:
			{
				// foreach ( Rigidbody2D rb2d in onPlatformRigidbodies)
				Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
				L_2 = Enumerator_get_Current_m016EA90C4579158CA1606EDC1B15DA13F4494B57_inline((&V_0), Enumerator_get_Current_m016EA90C4579158CA1606EDC1B15DA13F4494B57_RuntimeMethod_var);
				// rb2d.velocity += pushSpeed * Vector2.up;
				Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = L_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
				L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
				float L_5 = __this->___pushSpeed_7;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
				L_6 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
				L_7 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(L_5, L_6, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
				L_8 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_7, NULL);
				Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_3, L_8, NULL);
			}

IL_0035_1:
			{
				// foreach ( Rigidbody2D rb2d in onPlatformRigidbodies)
				bool L_9;
				L_9 = Enumerator_MoveNext_m60598916F3157C85AB5F2E7192E5B838DD82D8A0((&V_0), Enumerator_MoveNext_m60598916F3157C85AB5F2E7192E5B838DD82D8A0_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// onPlatformRigidbodies.Clear();
		List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* L_10 = __this->___onPlatformRigidbodies_16;
		List_1_Clear_m1EB22FD0342D3BBEB512736B1738F417CD152A9C_inline(L_10, List_1_Clear_m1EB22FD0342D3BBEB512736B1738F417CD152A9C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingPlatform_Start_m07799142A8B8593C9585ED17B3B699724CCAB4EE (BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m18046D64FD3FA546A46227B43826992EE5D5F434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformYPosDown = platform.transform.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___platform_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___y_3;
		__this->___platformYPosDown_8 = L_3;
		// platformYPosUp = 0.0f;
		__this->___platformYPosUp_9 = (0.0f);
		// onPlatformRigidbodies = new List<Rigidbody2D>();
		List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* L_4 = (List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76*)il2cpp_codegen_object_new(List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76_il2cpp_TypeInfo_var);
		List_1__ctor_m18046D64FD3FA546A46227B43826992EE5D5F434(L_4, List_1__ctor_m18046D64FD3FA546A46227B43826992EE5D5F434_RuntimeMethod_var);
		__this->___onPlatformRigidbodies_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlatformRigidbodies_16), (void*)L_4);
		// platformPrevPos = platform.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___platform_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___platformPrevPos_13 = L_7;
		// secondOrderDynamics.Reset(platformYPosDown);
		SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* L_8 = (&__this->___secondOrderDynamics_15);
		float L_9 = __this->___platformYPosDown_8;
		SecondOrderDynamics_Reset_m24838F469F2C0D0D85BA2B7F7985F2E8008964DB(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingPlatform_FixedUpdate_m84AF4AF76E9C7202D775DD658B251CE4C08C8545 (BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636* __this, const RuntimeMethod* method) 
{
	{
		// platformVel = (platform.transform.position - platformPrevPos) / Time.fixedDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___platform_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___platformPrevPos_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		__this->___platformVel_14 = L_7;
		// platformPrevPos = platform.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___platform_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		__this->___platformPrevPos_13 = L_10;
		// waitTimer += Time.fixedDeltaTime;
		float L_11 = __this->___waitTimer_11;
		float L_12;
		L_12 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->___waitTimer_11 = ((float)il2cpp_codegen_add(L_11, L_12));
		// if ( waitTimer > waitTime )
		float L_13 = __this->___waitTimer_11;
		float L_14 = __this->___waitTime_5;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_00dc;
		}
	}
	{
		// if (curState == State.Down)
		int32_t L_15 = __this->___curState_12;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		// waitTimer = 0.0f;
		__this->___waitTimer_11 = (0.0f);
		// curState = State.Up;
		__this->___curState_12 = 0;
		// platformYPos = platformYPosUp;
		float L_16 = __this->___platformYPosUp_9;
		__this->___platformYPos_10 = L_16;
		// Push();
		BoundingPlatform_Push_m8D7D50AA63A2A9A7BA25B0532F569FE2B72F911C(__this, NULL);
		goto IL_00dc;
	}

IL_0095:
	{
		// if (platformYPos > platformYPosDown)
		float L_17 = __this->___platformYPos_10;
		float L_18 = __this->___platformYPosDown_8;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_00be;
		}
	}
	{
		// platformYPos -= retrieveSpeed * Time.fixedDeltaTime;
		float L_19 = __this->___platformYPos_10;
		float L_20 = __this->___retrieveSpeed_6;
		float L_21;
		L_21 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->___platformYPos_10 = ((float)il2cpp_codegen_subtract(L_19, ((float)il2cpp_codegen_multiply(L_20, L_21))));
		goto IL_00dc;
	}

IL_00be:
	{
		// waitTimer = 0.0f;
		__this->___waitTimer_11 = (0.0f);
		// platformYPos = platformYPosDown;
		float L_22 = __this->___platformYPosDown_8;
		__this->___platformYPos_10 = L_22;
		// curState = State.Down;
		__this->___curState_12 = 1;
	}

IL_00dc:
	{
		// platform.transform.localPosition = Vector3.up * secondOrderDynamics.Update(platformYPos, Time.fixedDeltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___platform_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* L_26 = (&__this->___secondOrderDynamics_15);
		float L_27 = __this->___platformYPos_10;
		float L_28;
		L_28 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_29;
		L_29 = SecondOrderDynamics_Update_m5767F8ACAA35F03D1BD3D9BD962F183732C7C4C7(L_26, L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_29, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_24, L_30, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingPlatform_OnTriggerEnter2D_mB7BE555528515F15ADC1AEB321BE18978EE15CF4 (BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A9D055E5BA54A5D31EECDD694AAF0536F9D2609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.attachedRigidbody && collision.attachedRigidbody.bodyType == RigidbodyType2D.Dynamic)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4;
		L_4 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_3, NULL);
		int32_t L_5;
		L_5 = Rigidbody2D_get_bodyType_m20709275F3D8215592B2B89736AA8DDD2BF44ED1(L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		// if (onPlatformRigidbodies.Contains(collision.attachedRigidbody)) return;
		List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* L_6 = __this->___onPlatformRigidbodies_16;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8;
		L_8 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_7, NULL);
		bool L_9;
		L_9 = List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4(L_6, L_8, List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		// if (onPlatformRigidbodies.Contains(collision.attachedRigidbody)) return;
		return;
	}

IL_002e:
	{
		// onPlatformRigidbodies.Add(collision.attachedRigidbody);
		List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* L_10 = __this->___onPlatformRigidbodies_16;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12;
		L_12 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_11, NULL);
		List_1_Add_m6A9D055E5BA54A5D31EECDD694AAF0536F9D2609_inline(L_10, L_12, List_1_Add_m6A9D055E5BA54A5D31EECDD694AAF0536F9D2609_RuntimeMethod_var);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingPlatform_OnTriggerExit2D_mB64F3C46FF933FC67E615BA12C41F0F06E009AF5 (BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9FA145FA647E8F48B5A154D5821B704AE2DA1AEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.attachedRigidbody && collision.attachedRigidbody.bodyType == RigidbodyType2D.Dynamic)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4;
		L_4 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_3, NULL);
		int32_t L_5;
		L_5 = Rigidbody2D_get_bodyType_m20709275F3D8215592B2B89736AA8DDD2BF44ED1(L_4, NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		// if (onPlatformRigidbodies.Contains(collision.attachedRigidbody) == false) return;
		List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* L_6 = __this->___onPlatformRigidbodies_16;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8;
		L_8 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_7, NULL);
		bool L_9;
		L_9 = List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4(L_6, L_8, List_1_Contains_m7F112AE764D691DAD7D0102F4F012CDD62BF8BD4_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_002e;
		}
	}
	{
		// if (onPlatformRigidbodies.Contains(collision.attachedRigidbody) == false) return;
		return;
	}

IL_002e:
	{
		// onPlatformRigidbodies.Remove(collision.attachedRigidbody);
		List_1_tCD5F926D25FC8BFAF39E4BE6F879C1FA11501C76* L_10 = __this->___onPlatformRigidbodies_16;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12;
		L_12 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_11, NULL);
		bool L_13;
		L_13 = List_1_Remove_m9FA145FA647E8F48B5A154D5821B704AE2DA1AEB(L_10, L_12, List_1_Remove_m9FA145FA647E8F48B5A154D5821B704AE2DA1AEB_RuntimeMethod_var);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.BoundingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingPlatform__ctor_m2A4D90BDFFD96DF11E61FA164FCDAA9F2AE855EB (BoundingPlatform_tAC3D4CE971D3EFEC4FD9E267D69B61A4F61C0636* __this, const RuntimeMethod* method) 
{
	{
		// public float waitTime = 1.0f;
		__this->___waitTime_5 = (1.0f);
		// public float retrieveSpeed = 1.0f;
		__this->___retrieveSpeed_6 = (1.0f);
		// public float pushSpeed = 10.0f;
		__this->___pushSpeed_7 = (10.0f);
		// private State curState = State.Down;
		__this->___curState_12 = 1;
		// private SecondOrderDynamics secondOrderDynamics = new SecondOrderDynamics(4.0f, 0.5f, -0.3f);
		SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C L_0;
		memset((&L_0), 0, sizeof(L_0));
		SecondOrderDynamics__ctor_m8D1030258F61AB9EBB39D9F139BEEA876C90EB88((&L_0), (4.0f), (0.5f), (-0.300000012f), /*hidden argument*/NULL);
		__this->___secondOrderDynamics_15 = L_0;
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
// System.Boolean Cainos.PixelArtPlatformer_VillageProps.Chest::get_IsOpened()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Chest_get_IsOpened_mC93F0EF37F6657FE0D9FE80A4CCB76A4940EC8BB (Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55* __this, const RuntimeMethod* method) 
{
	{
		// get { return isOpened; }
		bool L_0 = __this->___isOpened_5;
		return L_0;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Chest::set_IsOpened(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_set_IsOpened_m70AE3A7F953BD6D32DA75FA097FECFCC8EEA52FC (Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D00521C9083F7DED1A85AECC652F6C9C9C80BA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isOpened = value;
		bool L_0 = ___0_value;
		__this->___isOpened_5 = L_0;
		// animator.SetBool("IsOpened", isOpened);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_4;
		bool L_2 = __this->___isOpened_5;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral5D00521C9083F7DED1A85AECC652F6C9C9C80BA0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Chest::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_Open_m9B207E877FA62C9713E0FA9C7373465411553142 (Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55* __this, const RuntimeMethod* method) 
{
	{
		// IsOpened = true;
		Chest_set_IsOpened_m70AE3A7F953BD6D32DA75FA097FECFCC8EEA52FC(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Chest::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_Close_m9986A58C82085D3F0328B2CF5BC383D8764FC466 (Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55* __this, const RuntimeMethod* method) 
{
	{
		// IsOpened = false;
		Chest_set_IsOpened_m70AE3A7F953BD6D32DA75FA097FECFCC8EEA52FC(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Chest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest__ctor_m8EC74F562CBF321E3B4E4D8341A6FCC3D2AC74F3 (Chest_tEEB08D06D5CF63F362BDAD8767232A497D270E55* __this, const RuntimeMethod* method) 
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
// System.Single Cainos.PixelArtPlatformer_VillageProps.Elevator::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Elevator_get_Length_m00371FB4612EB3BE937EEFEBE520CF348A8C44A7 (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// get { return length; }
		float L_0 = __this->___length_11;
		return L_0;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::set_Length(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_set_Length_m20E92A1C4602FE4AB8B3977E790A30A447A4BE5F (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value < 0) value = 0.0f;
		float L_0 = ___0_value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// if (value < 0) value = 0.0f;
		___0_value = (0.0f);
	}

IL_000f:
	{
		// this.length = value;
		float L_1 = ___0_value;
		__this->___length_11 = L_1;
		// platform.transform.localPosition = new Vector3(0.0f, -value, 0.0f);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___platform_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		float L_4 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), ((-L_4)), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_5, NULL);
		// chainL.size = new Vector2(0.09375f, value - 8 * 0.03125f );
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___chainL_9;
		float L_7 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), (0.09375f), ((float)il2cpp_codegen_subtract(L_7, (0.25f))), /*hidden argument*/NULL);
		SpriteRenderer_set_size_mDC603B73F10D51A8FBD6D2592CD85719A3043A1B(L_6, L_8, NULL);
		// chainR.size = new Vector2(0.09375f, value - 8 * 0.03125f );
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___chainR_10;
		float L_10 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (0.09375f), ((float)il2cpp_codegen_subtract(L_10, (0.25f))), /*hidden argument*/NULL);
		SpriteRenderer_set_size_mDC603B73F10D51A8FBD6D2592CD85719A3043A1B(L_9, L_11, NULL);
		// }
		return;
	}
}
// Cainos.PixelArtPlatformer_VillageProps.Elevator/State Cainos.PixelArtPlatformer_VillageProps.Elevator::get_CurState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Elevator_get_CurState_mC201E5E5075D6685CA674869357B187D2206298B (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// get { return curState; }
		int32_t L_0 = __this->___curState_12;
		return L_0;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::set_CurState(Cainos.PixelArtPlatformer_VillageProps.Elevator/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_set_CurState_mD7095464AD99799586D231D1F2F5B13413DBCFF8 (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// curState = value;
		int32_t L_0 = ___0_value;
		__this->___curState_12 = L_0;
		// }
		return;
	}
}
// System.Boolean Cainos.PixelArtPlatformer_VillageProps.Elevator::get_IsWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Elevator_get_IsWaiting_m0C46CDADDEC21102BD3E476B55DFB2F0D1890FA3 (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// get { return isWaiting; }
		bool L_0 = __this->___isWaiting_13;
		return L_0;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::set_IsWaiting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_set_IsWaiting_m4E4721A65AD9C4F8F4568497FC426E1614BF02F9 (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (isWaiting == value) return;
		bool L_0 = __this->___isWaiting_13;
		bool L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (isWaiting == value) return;
		return;
	}

IL_000a:
	{
		// isWaiting = value;
		bool L_2 = ___0_value;
		__this->___isWaiting_13 = L_2;
		// waitTimer = 0.0f;
		__this->___waitTimer_14 = (0.0f);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_Start_m310AAB46FED889FD2DB53F6542EDB0793F1E6CBD (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* G_B2_0 = NULL;
	Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* G_B3_1 = NULL;
	{
		// curState = startState;
		int32_t L_0 = __this->___startState_7;
		__this->___curState_12 = L_0;
		// Length = curState == State.Up ? lengthRange.y : lengthRange.x;
		int32_t L_1 = __this->___curState_12;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0022;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___lengthRange_4);
		float L_3 = L_2->___x_0;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_0022:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___lengthRange_4);
		float L_5 = L_4->___y_1;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		Elevator_set_Length_m20E92A1C4602FE4AB8B3977E790A30A447A4BE5F(G_B3_1, G_B3_0, NULL);
		// targetLength = Length;
		float L_6;
		L_6 = Elevator_get_Length_m00371FB4612EB3BE937EEFEBE520CF348A8C44A7_inline(__this, NULL);
		__this->___targetLength_16 = L_6;
		// secondOrderDynamics.Reset(targetLength);
		SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* L_7 = (&__this->___secondOrderDynamics_17);
		float L_8 = __this->___targetLength_16;
		SecondOrderDynamics_Reset_m24838F469F2C0D0D85BA2B7F7985F2E8008964DB(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_Update_m65031E10E22BCBE18981CD56B3549C47404A6591 (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// if (IsWaiting)
		bool L_0;
		L_0 = Elevator_get_IsWaiting_m0C46CDADDEC21102BD3E476B55DFB2F0D1890FA3_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// waitTimer += Time.deltaTime;
		float L_1 = __this->___waitTimer_14;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___waitTimer_14 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (waitTimer > waitTime) IsWaiting = false;
		float L_3 = __this->___waitTimer_14;
		float L_4 = __this->___waitTime_5;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_002f;
		}
	}
	{
		// if (waitTimer > waitTime) IsWaiting = false;
		Elevator_set_IsWaiting_m4E4721A65AD9C4F8F4568497FC426E1614BF02F9(__this, (bool)0, NULL);
	}

IL_002f:
	{
		// curSpeed = 0.0f;
		__this->___curSpeed_15 = (0.0f);
		goto IL_00aa;
	}

IL_003c:
	{
		// if (curState == State.Up)
		int32_t L_5 = __this->___curState_12;
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		// curSpeed = -moveSpeed;
		float L_6 = __this->___moveSpeed_6;
		__this->___curSpeed_15 = ((-L_6));
		// if (targetLength < lengthRange.x)
		float L_7 = __this->___targetLength_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___lengthRange_4);
		float L_9 = L_8->___x_0;
		if ((!(((float)L_7) < ((float)L_9))))
		{
			goto IL_00aa;
		}
	}
	{
		// curState = State.Down;
		__this->___curState_12 = 1;
		// IsWaiting = true;
		Elevator_set_IsWaiting_m4E4721A65AD9C4F8F4568497FC426E1614BF02F9(__this, (bool)1, NULL);
		goto IL_00aa;
	}

IL_0074:
	{
		// else if (curState == State.Down)
		int32_t L_10 = __this->___curState_12;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		// curSpeed = moveSpeed;
		float L_11 = __this->___moveSpeed_6;
		__this->___curSpeed_15 = L_11;
		// if (targetLength > lengthRange.y)
		float L_12 = __this->___targetLength_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___lengthRange_4);
		float L_14 = L_13->___y_1;
		if ((!(((float)L_12) > ((float)L_14))))
		{
			goto IL_00aa;
		}
	}
	{
		// curState = State.Up;
		__this->___curState_12 = 0;
		// IsWaiting = true;
		Elevator_set_IsWaiting_m4E4721A65AD9C4F8F4568497FC426E1614BF02F9(__this, (bool)1, NULL);
	}

IL_00aa:
	{
		// targetLength += curSpeed * Time.deltaTime;
		float L_15 = __this->___targetLength_16;
		float L_16 = __this->___curSpeed_15;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___targetLength_16 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, L_17))));
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_FixedUpdate_m3FE65700B5B6209ECF26754C87B54ADF61C5067F (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// Length = secondOrderDynamics.Update(targetLength, Time.fixedDeltaTime);
		SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* L_0 = (&__this->___secondOrderDynamics_17);
		float L_1 = __this->___targetLength_16;
		float L_2;
		L_2 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		float L_3;
		L_3 = SecondOrderDynamics_Update_m5767F8ACAA35F03D1BD3D9BD962F183732C7C4C7(L_0, L_1, L_2, NULL);
		Elevator_set_Length_m20E92A1C4602FE4AB8B3977E790A30A447A4BE5F(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.Elevator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator__ctor_mDAAD21BEC6C1D063D973D8DAD29AB0E5406BBC97 (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// [FoldoutGroup("Params")] public Vector2 lengthRange = new Vector2(2, 5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (2.0f), (5.0f), /*hidden argument*/NULL);
		__this->___lengthRange_4 = L_0;
		// [FoldoutGroup("Params")] public float waitTime = 1.0f;
		__this->___waitTime_5 = (1.0f);
		// [FoldoutGroup("Params")] public float moveSpeed = 3.0f;
		__this->___moveSpeed_6 = (3.0f);
		// private SecondOrderDynamics secondOrderDynamics = new SecondOrderDynamics(4.0f, 0.3f, -0.3f);
		SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C L_1;
		memset((&L_1), 0, sizeof(L_1));
		SecondOrderDynamics__ctor_m8D1030258F61AB9EBB39D9F139BEEA876C90EB88((&L_1), (4.0f), (0.300000012f), (-0.300000012f), /*hidden argument*/NULL);
		__this->___secondOrderDynamics_17 = L_1;
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
// System.Void Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_Start_mDA3869E0FBA933C1E19E1D0728212EA8D5DAE415 (MovingPlatform_t3A4D92615851A1E3E83ABAABB5B9890CE556CA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPlatformObjects = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___onPlatformObjects_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlatformObjects_5), (void*)L_0);
		// prevPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___prevPos_6 = L_2;
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_FixedUpdate_m43FE6F0E340545FEDE6AB23490C00578821D63AE (MovingPlatform_t3A4D92615851A1E3E83ABAABB5B9890CE556CA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// velocity = (transform.position - prevPos) / Time.fixedDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___prevPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		__this->___velocity_7 = L_6;
		// prevPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		__this->___prevPos_6 = L_8;
		// foreach (Transform t in onPlatformObjects)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_9 = __this->___onPlatformObjects_5;
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_10;
		L_10 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_9, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_0), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_004a_1:
			{
				// foreach (Transform t in onPlatformObjects)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_0), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				// t.Translate(velocity * Time.fixedDeltaTime);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___velocity_7;
				float L_13;
				L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
				L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, L_13, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_14, NULL);
				Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_11, L_15, NULL);
			}

IL_006b_1:
			{
				// foreach (Transform t in onPlatformObjects)
				bool L_16;
				L_16 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_0), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_004a_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_OnTriggerEnter2D_m957C9C7BCE427CA7340D451E5DADE4C70805C9C5 (MovingPlatform_t3A4D92615851A1E3E83ABAABB5B9890CE556CA13* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.attachedRigidbody && collision.attachedRigidbody.bodyType == RigidbodyType2D.Dynamic)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4;
		L_4 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_3, NULL);
		int32_t L_5;
		L_5 = Rigidbody2D_get_bodyType_m20709275F3D8215592B2B89736AA8DDD2BF44ED1(L_4, NULL);
		if (L_5)
		{
			goto IL_0073;
		}
	}
	{
		// if (onPlatformObjects.Contains(collision.transform)) return;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_6 = __this->___onPlatformObjects_5;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_collision;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		bool L_9;
		L_9 = List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795(L_6, L_8, List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		// if (onPlatformObjects.Contains(collision.transform)) return;
		return;
	}

IL_002e:
	{
		// onPlatformObjects.Add(collision.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___onPlatformObjects_5;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = ___0_collision;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_10, L_12, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// if (collision.attachedRigidbody) collision.attachedRigidbody.velocity -= velocity * velocityInheritPercent;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14;
		L_14 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		// if (collision.attachedRigidbody) collision.attachedRigidbody.velocity -= velocity * velocityInheritPercent;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_17;
		L_17 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_16, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___velocity_7;
		float L_21 = __this->___velocityInheritPercent_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_20, L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_19, L_22, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_18, L_23, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_OnTriggerExit2D_m2D38114E8F56E3B5F2B51D26CC834CBE9B91E1BC (MovingPlatform_t3A4D92615851A1E3E83ABAABB5B9890CE556CA13* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.attachedRigidbody && collision.attachedRigidbody.bodyType == RigidbodyType2D.Dynamic)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4;
		L_4 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_3, NULL);
		int32_t L_5;
		L_5 = Rigidbody2D_get_bodyType_m20709275F3D8215592B2B89736AA8DDD2BF44ED1(L_4, NULL);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		// if (onPlatformObjects.Contains(collision.transform) == false) return;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_6 = __this->___onPlatformObjects_5;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_collision;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		bool L_9;
		L_9 = List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795(L_6, L_8, List_1_Contains_m2ED407EE04C433B314B858BDB193D055A0D33795_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_002e;
		}
	}
	{
		// if (onPlatformObjects.Contains(collision.transform) == false) return;
		return;
	}

IL_002e:
	{
		// onPlatformObjects.Remove(collision.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___onPlatformObjects_5;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = ___0_collision;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		bool L_13;
		L_13 = List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995(L_10, L_12, List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995_RuntimeMethod_var);
		// if (collision.attachedRigidbody) collision.attachedRigidbody.velocity += velocity * velocityInheritPercent;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15;
		L_15 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0074;
		}
	}
	{
		// if (collision.attachedRigidbody) collision.attachedRigidbody.velocity += velocity * velocityInheritPercent;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_17 = ___0_collision;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18;
		L_18 = Collider2D_get_attachedRigidbody_m76D718444A94C258228DD98102DCF81C91CF9654(L_17, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19 = L_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___velocity_7;
		float L_22 = __this->___velocityInheritPercent_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_21, L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_20, L_23, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_19, L_24, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Cainos.PixelArtPlatformer_VillageProps.MovingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform__ctor_m2983262C0F945DB0417917C6478B386CF1CFF96B (MovingPlatform_t3A4D92615851A1E3E83ABAABB5B9890CE556CA13* __this, const RuntimeMethod* method) 
{
	{
		// public float velocityInheritPercent = 0.8f;
		__this->___velocityInheritPercent_4 = (0.800000012f);
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
// System.Single Cainos.Common.SecondOrderDynamics::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Frequency_m52BC30092AE5C3278D4EF714BBA86D138A0B188E (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) 
{
	{
		// get { return f; }
		float L_0 = __this->___f_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float SecondOrderDynamics_get_Frequency_m52BC30092AE5C3278D4EF714BBA86D138A0B188E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	float _returnValue;
	_returnValue = SecondOrderDynamics_get_Frequency_m52BC30092AE5C3278D4EF714BBA86D138A0B188E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cainos.Common.SecondOrderDynamics::set_Frequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_set_Frequency_m1308F2A2C9703FE0DF410B239D3B3D5611C8C195 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value <= 0.01f) value = 0.01f;
		float L_0 = ___0_value;
		if ((!(((float)L_0) <= ((float)(0.00999999978f)))))
		{
			goto IL_000f;
		}
	}
	{
		// if (value <= 0.01f) value = 0.01f;
		___0_value = (0.00999999978f);
	}

IL_000f:
	{
		// f = value;
		float L_1 = ___0_value;
		__this->___f_8 = L_1;
		// UpdateInnerParams();
		SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_set_Frequency_m1308F2A2C9703FE0DF410B239D3B3D5611C8C195_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_set_Frequency_m1308F2A2C9703FE0DF410B239D3B3D5611C8C195(_thisAdjusted, ___0_value, method);
}
// System.Single Cainos.Common.SecondOrderDynamics::get_Damping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Damping_mEEE53E20E3ED005609F659AE720F4A15083A9EC4 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) 
{
	{
		// get { return d; }
		float L_0 = __this->___d_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float SecondOrderDynamics_get_Damping_mEEE53E20E3ED005609F659AE720F4A15083A9EC4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	float _returnValue;
	_returnValue = SecondOrderDynamics_get_Damping_mEEE53E20E3ED005609F659AE720F4A15083A9EC4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cainos.Common.SecondOrderDynamics::set_Damping(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_set_Damping_m6005AC7C0FBB11968993BADEAEA4C061ADCA5139 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value <= 0.01f) value = 0.01f;
		float L_0 = ___0_value;
		if ((!(((float)L_0) <= ((float)(0.00999999978f)))))
		{
			goto IL_000f;
		}
	}
	{
		// if (value <= 0.01f) value = 0.01f;
		___0_value = (0.00999999978f);
	}

IL_000f:
	{
		// d = value;
		float L_1 = ___0_value;
		__this->___d_9 = L_1;
		// UpdateInnerParams();
		SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_set_Damping_m6005AC7C0FBB11968993BADEAEA4C061ADCA5139_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_set_Damping_m6005AC7C0FBB11968993BADEAEA4C061ADCA5139(_thisAdjusted, ___0_value, method);
}
// System.Single Cainos.Common.SecondOrderDynamics::get_Response()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Response_mEAA69379E6CA54BC1FCB3D194FF86331A2CA46FC (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) 
{
	{
		// get { return r; }
		float L_0 = __this->___r_10;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float SecondOrderDynamics_get_Response_mEAA69379E6CA54BC1FCB3D194FF86331A2CA46FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	float _returnValue;
	_returnValue = SecondOrderDynamics_get_Response_mEAA69379E6CA54BC1FCB3D194FF86331A2CA46FC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cainos.Common.SecondOrderDynamics::set_Response(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_set_Response_m97EA3BC1BE9D28B071A45D2A94F30DE7D74B3878 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// r = value;
		float L_0 = ___0_value;
		__this->___r_10 = L_0;
		// UpdateInnerParams();
		SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_set_Response_m97EA3BC1BE9D28B071A45D2A94F30DE7D74B3878_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_set_Response_m97EA3BC1BE9D28B071A45D2A94F30DE7D74B3878(_thisAdjusted, ___0_value, method);
}
// System.Void Cainos.Common.SecondOrderDynamics::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics__ctor_m8D1030258F61AB9EBB39D9F139BEEA876C90EB88 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_frequency, float ___1_damping, float ___2_response, const RuntimeMethod* method) 
{
	{
		// this.f = 1.0f;
		__this->___f_8 = (1.0f);
		// this.d = 0.0f;
		__this->___d_9 = (0.0f);
		// this.r = 0.0f;
		__this->___r_10 = (0.0f);
		// xp = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___xp_0 = L_0;
		// y = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___y_1 = L_1;
		// xd = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___xd_6 = L_2;
		// yd = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___yd_2 = L_3;
		// k1 = 0.0f;
		__this->___k1_3 = (0.0f);
		// k2 = 0.0f;
		__this->___k2_4 = (0.0f);
		// k3 = 0.0f;
		__this->___k3_5 = (0.0f);
		// k2_stable = 0.0f;
		__this->___k2_stable_7 = (0.0f);
		// Reset(frequency, damping, response, Vector3.zero);
		float L_4 = ___0_frequency;
		float L_5 = ___1_damping;
		float L_6 = ___2_response;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82(__this, L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics__ctor_m8D1030258F61AB9EBB39D9F139BEEA876C90EB88_AdjustorThunk (RuntimeObject* __this, float ___0_frequency, float ___1_damping, float ___2_response, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics__ctor_m8D1030258F61AB9EBB39D9F139BEEA876C90EB88(_thisAdjusted, ___0_frequency, ___1_damping, ___2_response, method);
}
// System.Void Cainos.Common.SecondOrderDynamics::Reset(System.Single,System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_frequency, float ___1_damping, float ___2_response, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_x0, const RuntimeMethod* method) 
{
	{
		// f = frequency;
		float L_0 = ___0_frequency;
		__this->___f_8 = L_0;
		// d = damping;
		float L_1 = ___1_damping;
		__this->___d_9 = L_1;
		// r = response;
		float L_2 = ___2_response;
		__this->___r_10 = L_2;
		// xp = x0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3_x0;
		__this->___xp_0 = L_3;
		// y = x0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___3_x0;
		__this->___y_1 = L_4;
		// xd = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___xd_6 = L_5;
		// yd = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___yd_2 = L_6;
		// UpdateInnerParams();
		SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82_AdjustorThunk (RuntimeObject* __this, float ___0_frequency, float ___1_damping, float ___2_response, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_x0, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82(_thisAdjusted, ___0_frequency, ___1_damping, ___2_response, ___3_x0, method);
}
// System.Void Cainos.Common.SecondOrderDynamics::Reset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_mA2FFDB1B3C572A48E24B8DE9E2146464EF12FCC6 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x0, const RuntimeMethod* method) 
{
	{
		// Reset(f, d, r, x0);
		float L_0 = __this->___f_8;
		float L_1 = __this->___d_9;
		float L_2 = __this->___r_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_x0;
		SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82(__this, L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_Reset_mA2FFDB1B3C572A48E24B8DE9E2146464EF12FCC6_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x0, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_Reset_mA2FFDB1B3C572A48E24B8DE9E2146464EF12FCC6(_thisAdjusted, ___0_x0, method);
}
// System.Void Cainos.Common.SecondOrderDynamics::Reset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_m31066B6B4A89F529B043FD25C2309AA7436685F6 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x0, const RuntimeMethod* method) 
{
	{
		// Reset(f, d, r, x0);
		float L_0 = __this->___f_8;
		float L_1 = __this->___d_9;
		float L_2 = __this->___r_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_x0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82(__this, L_0, L_1, L_2, L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_Reset_m31066B6B4A89F529B043FD25C2309AA7436685F6_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x0, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_Reset_m31066B6B4A89F529B043FD25C2309AA7436685F6(_thisAdjusted, ___0_x0, method);
}
// System.Void Cainos.Common.SecondOrderDynamics::Reset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_Reset_m24838F469F2C0D0D85BA2B7F7985F2E8008964DB (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_x0, const RuntimeMethod* method) 
{
	{
		// Reset(f, d, r, Vector3.one * x0);
		float L_0 = __this->___f_8;
		float L_1 = __this->___d_9;
		float L_2 = __this->___r_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_4 = ___0_x0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		SecondOrderDynamics_Reset_m6A7085AE7DC95F6FA772AFC8429D3FDE15DFCB82(__this, L_0, L_1, L_2, L_5, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_Reset_m24838F469F2C0D0D85BA2B7F7985F2E8008964DB_AdjustorThunk (RuntimeObject* __this, float ___0_x0, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_Reset_m24838F469F2C0D0D85BA2B7F7985F2E8008964DB(_thisAdjusted, ___0_x0, method);
}
// UnityEngine.Vector3 Cainos.Common.SecondOrderDynamics::Update(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SecondOrderDynamics_Update_mF58B4FE8E26B18EC816EEBC38DA4E1D86E815DDE (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x, float ___1_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (t < Mathf.Epsilon) return y;
		float L_0 = ___1_t;
		float L_1 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		// if (t < Mathf.Epsilon) return y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___y_1;
		return L_2;
	}

IL_000f:
	{
		// xd = (x - xp) / t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___xp_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		float L_6 = ___1_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_5, L_6, NULL);
		__this->___xd_6 = L_7;
		// xp = x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_x;
		__this->___xp_0 = L_8;
		// k2_stable = Mathf.Max(k2, 1.1f * (t * t * 0.25f + t * k1 * 0.5f));
		float L_9 = __this->___k2_4;
		float L_10 = ___1_t;
		float L_11 = ___1_t;
		float L_12 = ___1_t;
		float L_13 = __this->___k1_3;
		float L_14;
		L_14 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_9, ((float)il2cpp_codegen_multiply((1.10000002f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, L_11)), (0.25f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_13)), (0.5f))))))), NULL);
		__this->___k2_stable_7 = L_14;
		// y += t * yd;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___y_1;
		float L_16 = ___1_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___yd_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_18, NULL);
		__this->___y_1 = L_19;
		// yd += t * (x + k3 * xd - y - k1 * yd) / k2_stable;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___yd_2;
		float L_21 = ___1_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___0_x;
		float L_23 = __this->___k3_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___xd_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_27, NULL);
		float L_29 = __this->___k1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___yd_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_28, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_21, L_32, NULL);
		float L_34 = __this->___k2_stable_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_35, NULL);
		__this->___yd_2 = L_36;
		// return y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___y_1;
		return L_37;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SecondOrderDynamics_Update_mF58B4FE8E26B18EC816EEBC38DA4E1D86E815DDE_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x, float ___1_t, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = SecondOrderDynamics_Update_mF58B4FE8E26B18EC816EEBC38DA4E1D86E815DDE(_thisAdjusted, ___0_x, ___1_t, method);
	return _returnValue;
}
// UnityEngine.Vector2 Cainos.Common.SecondOrderDynamics::Update(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SecondOrderDynamics_Update_mC2AA56F48C4A2912A44EB4A305BAA1B4543BC359 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, float ___1_t, const RuntimeMethod* method) 
{
	{
		// return Update(new Vector3(x.x,x.y,0.0f), t);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_x;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		float L_5 = ___1_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = SecondOrderDynamics_Update_mF58B4FE8E26B18EC816EEBC38DA4E1D86E815DDE(__this, L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SecondOrderDynamics_Update_mC2AA56F48C4A2912A44EB4A305BAA1B4543BC359_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, float ___1_t, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = SecondOrderDynamics_Update_mC2AA56F48C4A2912A44EB4A305BAA1B4543BC359(_thisAdjusted, ___0_x, ___1_t, method);
	return _returnValue;
}
// System.Single Cainos.Common.SecondOrderDynamics::Update(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SecondOrderDynamics_Update_m5767F8ACAA35F03D1BD3D9BD962F183732C7C4C7 (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, float ___0_x, float ___1_t, const RuntimeMethod* method) 
{
	{
		// return Update(Vector3.one * x, t).x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_1 = ___0_x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		float L_3 = ___1_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = SecondOrderDynamics_Update_mF58B4FE8E26B18EC816EEBC38DA4E1D86E815DDE(__this, L_2, L_3, NULL);
		float L_5 = L_4.___x_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C  float SecondOrderDynamics_Update_m5767F8ACAA35F03D1BD3D9BD962F183732C7C4C7_AdjustorThunk (RuntimeObject* __this, float ___0_x, float ___1_t, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	float _returnValue;
	_returnValue = SecondOrderDynamics_Update_m5767F8ACAA35F03D1BD3D9BD962F183732C7C4C7(_thisAdjusted, ___0_x, ___1_t, method);
	return _returnValue;
}
// System.Void Cainos.Common.SecondOrderDynamics::UpdateInnerParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) 
{
	{
		// k1 = d / (Mathf.PI * f);
		float L_0 = __this->___d_9;
		float L_1 = __this->___f_8;
		__this->___k1_3 = ((float)(L_0/((float)il2cpp_codegen_multiply((3.14159274f), L_1))));
		// k2 = 1.0f / ((2.0f * Mathf.PI * f) * (2.0f * Mathf.PI * f));
		float L_2 = __this->___f_8;
		float L_3 = __this->___f_8;
		__this->___k2_4 = ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.28318548f), L_2)), ((float)il2cpp_codegen_multiply((6.28318548f), L_3))))));
		// k3 = r * d / (2.0f * Mathf.PI * f);
		float L_4 = __this->___r_10;
		float L_5 = __this->___d_9;
		float L_6 = __this->___f_8;
		__this->___k3_5 = ((float)(((float)il2cpp_codegen_multiply(L_4, L_5))/((float)il2cpp_codegen_multiply((6.28318548f), L_6))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C*>(__this + _offset);
	SecondOrderDynamics_UpdateInnerParams_mEC73EDEBED5EEF9BF0480BDF1D9EAE41BB4AA75B(_thisAdjusted, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___2_maxDelta;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___1_target;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___0_current;
		float L_7 = ___1_target;
		float L_8 = ___0_current;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___2_maxDelta;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___0_value;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___2_value;
		float L_4 = ___0_a;
		float L_5 = ___1_b;
		float L_6 = ___0_a;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_planeNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_planeNormal;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_planeNormal;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_planeNormal;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_vector;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_planeNormal;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___0_vector;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_planeNormal;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) 
{
	{
		// return m_Offset;
		float L_0 = __this->___m_Offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* NinjaController_get_RBody_m79F8AD472C3FCFBDE1FC560FEF18E2DA5F43CACB_inline (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// private Rigidbody2D RBody { get; set; }
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___U3CRBodyU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* NinjaController_get_PhysicsParams_m502B2B3018BAE072A5F7E92EBD2ECFDC920FB21A_inline (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, const RuntimeMethod* method) 
{
	{
		// get { return physicsParams; }
		PhysicsParams_t30E5D17916B1097F93A0422988296818C04E003F* L_0 = __this->___physicsParams_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NinjaController_set_RBody_m6751EE665BEF573C56B2FE9C637D52CBA3613D2C_inline (NinjaController_t5FC6CFAC359BC7AF66D1872AD752B318B49B430E* __this, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_value, const RuntimeMethod* method) 
{
	{
		// private Rigidbody2D RBody { get; set; }
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___0_value;
		__this->___U3CRBodyU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRBodyU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___0_d, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_a, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___0_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___0_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Elevator_get_Length_m00371FB4612EB3BE937EEFEBE520CF348A8C44A7_inline (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// get { return length; }
		float L_0 = __this->___length_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Elevator_get_IsWaiting_m0C46CDADDEC21102BD3E476B55DFB2F0D1890FA3_inline (Elevator_tF495BBF092487C049844D02E58B7A6B26184A8FF* __this, const RuntimeMethod* method) 
{
	{
		// get { return isWaiting; }
		bool L_0 = __this->___isWaiting_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Frequency_m52BC30092AE5C3278D4EF714BBA86D138A0B188E_inline (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) 
{
	{
		// get { return f; }
		float L_0 = __this->___f_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Damping_mEEE53E20E3ED005609F659AE720F4A15083A9EC4_inline (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) 
{
	{
		// get { return d; }
		float L_0 = __this->___d_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SecondOrderDynamics_get_Response_mEAA69379E6CA54BC1FCB3D194FF86331A2CA46FC_inline (SecondOrderDynamics_t5C97BC845949ED4B0D22DB0D8703FB00CD45D80C* __this, const RuntimeMethod* method) 
{
	{
		// get { return r; }
		float L_0 = __this->___r_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
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
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
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
