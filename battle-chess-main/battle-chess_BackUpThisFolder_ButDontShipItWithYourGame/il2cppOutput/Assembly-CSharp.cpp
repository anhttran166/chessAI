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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>
struct Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F;
// System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>
struct Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2;
// System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>
struct Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>
struct Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.ICollection`1<Chess.ChessPieceProfile>
struct ICollection_1_t48594A0E5FBEC8DA8D396BB3F18AF86CC8DCD80A;
// System.Collections.Generic.ICollection`1<Chess.ChessPieceType>
struct ICollection_1_tFF524A903F97263C9D1E3589AD910AA32CAA1AA3;
// System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>
struct IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Chess.ChessPieceType,Chess.ChessPieceProfile>>
struct IEnumerator_1_tE45F03AEC98BC8B840973081C267C9954C5AF1DA;
// System.Collections.Generic.IEqualityComparer`1<Chess.ChessPieceType>
struct IEqualityComparer_1_tBDF3919AC186CB40FD72F40BDE008FB39D5ED3D9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.Dictionary`2/KeyCollection<Chess.ChessPieceType,Chess.ChessPieceProfile>
struct KeyCollection_t17429187E7F9B2F832E540245BD412414DA851E2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,ChessPieceScript>
struct KeyCollection_t924565E80655AE78156062E62404F65C2CD31913;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Chess.ChessPosition>
struct KeyCollection_tC517622E3F1E1CDFB121232FBF9CB819E72B3EBB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MinimaxNode>
struct KeyCollection_t518048E9B2B55194D285F493F26509A0BF62F3AD;
// System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>
struct List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0;
// System.Collections.Generic.List`1<Chess.ChessPosition>
struct List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<Chess.ChessPieceType,Chess.ChessPieceProfile>
struct ValueCollection_t56B95227533B77B727CBBC667AACA8EE8F5D6699;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,ChessPieceScript>
struct ValueCollection_tE3386A5EDDD0B11EE6D55EDB18D566958D7DA6B7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Chess.ChessPosition>
struct ValueCollection_t2E4E403EC20BAE5AF79B7A7D224111DF11C16126;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,MinimaxNode>
struct ValueCollection_t887D67D86BE6F17F7644A61E845DC58557E0C41D;
// System.Collections.Generic.Dictionary`2/Entry<Chess.ChessPieceType,Chess.ChessPieceProfile>[]
struct EntryU5BU5D_t1E87F7131211A11BC2F564B7FCE61023B457938A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,ChessPieceScript>[]
struct EntryU5BU5D_t3C1DEE3FF914A0FFB2329AAF4AF356F93ADD3900;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Chess.ChessPosition>[]
struct EntryU5BU5D_tFB6CD98639037BDE41B2DA79BF0A5A7140CA5647;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,MinimaxNode>[]
struct EntryU5BU5D_t4EA3B59317A6AC59389963AD0D0A0F53F150B87C;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Chess.ChessBoardSnapshot[]
struct ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC;
// Chess.ChessPieceMove[]
struct ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05;
// Chess.ChessPieceProfile[]
struct ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F;
// Chess.ChessPieceType[]
struct ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75;
// Chess.ChessPosition[]
struct ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// System.UInt64[,]
struct UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE;
// AIManager
struct AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Chess.ChessBoardSnapshot
struct ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C;
// Chess.ChessCoordinate
struct ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126;
// Chess.ChessPieceMove
struct ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925;
// Chess.ChessPieceProfile
struct ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889;
// ChessPieceProfileDictionary
struct ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B;
// ChessPieceScript
struct ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209;
// Chess.ChessPosition
struct ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF;
// Chess.ChessSettings
struct ChessSettings_t369FB449F09DC3658FBB85C4E55C3C29B82953D2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MaterialPainter
struct MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MinimaxNode
struct MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveTester
struct MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050;
// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// SquareColliderScript
struct SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F;
// System.String
struct String_t;
// TemporarySpinningScript
struct TemporarySpinningScript_t009E56591E81FF703549CB36DF2418FEE809EE25;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// AIManager/<IterativeDeepeningSearch>d__27
struct U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934;
// AIManager/<Minimax>d__29
struct U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D;
// AIManager/<MinimaxAB>d__28
struct U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChessPieceType_tB00FDC8FA8C673606D685B8ED571E06F17FF0A8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChessPlayerType_tAFBD67264B5FF9211D5529EAC0291E412B68A285_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t6E701EEF37B9BE6D74C944D8A0061CA404942A48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3465BD767D4E454CBB358FC82FAA72EFDC682554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FD7D0A697D1B140CFAC93D860DD80A65010E2B63F24F9F508DDB88085A75201A_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013C9E48C098B2270A6728589B8ACD570A034ACE;
IL2CPP_EXTERN_C String_t* _stringLiteral137AFFCEC14A22799FB4B46E41FDA017F66B4AD7;
IL2CPP_EXTERN_C String_t* _stringLiteral1390CB7C4438135EB22A1A417322368DDA2433E9;
IL2CPP_EXTERN_C String_t* _stringLiteral15F76D536EFE265D478DF6A565EDD67EAE469708;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral390FB68957FC7D3E84C7C9E1DA9F2A026E0CA642;
IL2CPP_EXTERN_C String_t* _stringLiteral4CBA8A525F1361A478D370BCC586BBE6308D0FCE;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D4228442ED9499D25EC8035EF26F8692089A93A;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3D4C16A5BC2083B3596292DB2816B7C7A4CB19;
IL2CPP_EXTERN_C String_t* _stringLiteral89F8C841369A80918151426EF544C2136EF44855;
IL2CPP_EXTERN_C String_t* _stringLiteral8A2FA863469FFABDFA3CFEBCC8950B9A9BC6CF24;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC;
IL2CPP_EXTERN_C String_t* _stringLiteral9D57A51C6BFAACBC506AB97587D7F7CCA01AE663;
IL2CPP_EXTERN_C String_t* _stringLiteral9F630A5B39B158E1796605CBF2C4C0477896CBDF;
IL2CPP_EXTERN_C String_t* _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB57593ADCB953AA5745AAD4EF71ED2C4BB651676;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C02D89D47BDE3E6023172092EBF899E71F97CA;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDC14F62AADCF443AC6B0BBBFCE9148E0614959DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4;
IL2CPP_EXTERN_C String_t* _stringLiteralFE58E30BE31566407C74AF8D67788E55F94B4CDE;
IL2CPP_EXTERN_C const RuntimeMethod* AIManager_U3CIterativeDeepeningSearchU3Eb__27_0_m90D3BDE851911451F3880FF3FE1217FF7179B5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_mB2E071C61EE0926027131986DB7A3697A20706F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F_mF97DC537AC7A05696CD64170222B940AC48E91B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5B8A2648EC5978A181BC6866A4263C599498A1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7CD025E05BCE5F4403952B69D9CC0DB9AF9E795A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mE28F857AF869BEF19A1050F0C172474220CA3E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC8B668158DB0ACDCD7A721B4E9C18DE7A8407B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m32421167DF82FF71984E25CC59DE4DD1EDDD3339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mA73EC0DF3912C325ADE9D7B31711F3A86F676D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD231935E425027848966CC3F0556B3ED05C024C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA1D71F706194C614B42CCEA78EC1D882137B7F01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA4659BBBD51B28AC5CABEB58549898999B86087D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mACFED39B373539773A722B74793EE5D3018D25D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m704632DB6361CF0AF012F3CA711342BB52796FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mDD4F39481172C78295B92273E1D4B54A0B93F051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m039B01C799A5FA9D018547413DE1965D39C89E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m499FFC783C6538054C077428356226CA5CEAADB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF1D658E2BD16C304162F52E692D4508787FD7283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m083DE3A1E7C5F9DCECEB4645F93A7FD6ACADDDDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m305925914F4F5CC03D763DADC392A2B1E979115E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3203FA7F809857BB7688D2F3FCDDE426835D0F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8A1A86A7210474FBF83BA7A807A6D7267F450809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_mDE5FD6C451D7AC2C9273238656B9FCB39D97E45B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209_m7E032E1CA4625B288A3DAAD3CA20E33D7C852629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_m4310A95FD223B89A91D732D03E8B6BCFA62618C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1DF7246041AF9480DB2AD3CE198A3DECA4110DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC1E404CB999E38F575FB7C41CD3A87F1D165B483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m7782FAD113BAA193D23545293D658FD3B6478241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m888B5443049E3154543F50E84D5FC9ABE8444E45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m508C77EA47B4AE1368B4FFC403BA18019006F9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBAFCA7D910F419737E1DAEFC1625C1A70C3CD2DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1140D18210A65C7DB5CCC15BACB47E732B35CBF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE728EBB797EC4E5186663AE654C97BD95ADA6FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C_m8CBB6C09765F982DADE2CAEE29FD48E7767E3306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIterativeDeepeningSearchU3Ed__27_System_Collections_IEnumerator_Reset_m35EF71FF609A729A33531E41A50FDCCC23518C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMinimaxABU3Ed__28_System_Collections_IEnumerator_Reset_m20836B8D041DE67DD74B48E8BE41FB0D817C6BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMinimaxU3Ed__29_System_Collections_IEnumerator_Reset_m070E1DC3E3B23117A74A8914887C39966BB6BE7B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC;
struct ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05;
struct ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F;
struct ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75;
struct ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE;

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

// System.Collections.Generic.Dictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>
struct Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E87F7131211A11BC2F564B7FCE61023B457938A* ____entries_1;
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
	KeyCollection_t17429187E7F9B2F832E540245BD412414DA851E2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t56B95227533B77B727CBBC667AACA8EE8F5D6699* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>
struct Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3C1DEE3FF914A0FFB2329AAF4AF356F93ADD3900* ____entries_1;
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
	KeyCollection_t924565E80655AE78156062E62404F65C2CD31913* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE3386A5EDDD0B11EE6D55EDB18D566958D7DA6B7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>
struct Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFB6CD98639037BDE41B2DA79BF0A5A7140CA5647* ____entries_1;
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
	KeyCollection_tC517622E3F1E1CDFB121232FBF9CB819E72B3EBB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2E4E403EC20BAE5AF79B7A7D224111DF11C16126* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>
struct Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4EA3B59317A6AC59389963AD0D0A0F53F150B87C* ____entries_1;
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
	KeyCollection_t518048E9B2B55194D285F493F26509A0BF62F3AD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t887D67D86BE6F17F7644A61E845DC58557E0C41D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>
struct List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Chess.ChessPosition>
struct List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Chess.ChessBoardSnapshotExtention
struct ChessBoardSnapshotExtention_t8A169A07A18257E649DC7D40C0C64F463E6BBA98  : public RuntimeObject
{
};

// Chess.ChessCoordinate
struct ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126  : public RuntimeObject
{
	// System.Int32 Chess.ChessCoordinate::x
	int32_t ___x_0;
	// System.Int32 Chess.ChessCoordinate::y
	int32_t ___y_1;
};

// Chess.ChessCoordinateExtension
struct ChessCoordinateExtension_tAD8D58FBFE98BB8BA50EB027304FD30699E06A93  : public RuntimeObject
{
};

// Chess.ChessPieceMove
struct ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925  : public RuntimeObject
{
	// Chess.ChessCoordinate Chess.ChessPieceMove::move
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___move_0;
	// System.Int32 Chess.ChessPieceMove::repeatTimes
	int32_t ___repeatTimes_1;
	// Chess.ChessPieceMovePattern Chess.ChessPieceMove::pattern
	int32_t ___pattern_2;
	// Chess.ChessPieceSpecialRule Chess.ChessPieceMove::specialRule
	int32_t ___specialRule_3;
};

// ChessPieceProfileDictionary
struct ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile> ChessPieceProfileDictionary::wrappedDictionary
	RuntimeObject* ___wrappedDictionary_0;
};

// Chess.ChessPieceTypeExtension
struct ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB  : public RuntimeObject
{
};

// Chess.ChessPlayerTypeExtension
struct ChessPlayerTypeExtension_t41DC860C2E2D401874963327B1711C3E9E52C6CD  : public RuntimeObject
{
};

// Chess.ChessPosition
struct ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF  : public RuntimeObject
{
	// Chess.ChessPieceType Chess.ChessPosition::type
	int32_t ___type_0;
	// Chess.ChessCoordinate Chess.ChessPosition::coord
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___coord_1;
	// System.Boolean Chess.ChessPosition::hasMoved
	bool ___hasMoved_2;
};

// Chess.ChessSettings
struct ChessSettings_t369FB449F09DC3658FBB85C4E55C3C29B82953D2  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// MinimaxNode
struct MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59  : public RuntimeObject
{
	// System.UInt64 MinimaxNode::hash
	uint64_t ___hash_0;
	// System.Int32 MinimaxNode::depth
	int32_t ___depth_1;
	// MinimaxNodeFlag MinimaxNode::flag
	int32_t ___flag_2;
	// System.Int32 MinimaxNode::eval
	int32_t ___eval_3;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
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

// ZobristHash
struct ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0  : public RuntimeObject
{
};

// AIManager/<IterativeDeepeningSearch>d__27
struct U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934  : public RuntimeObject
{
	// System.Int32 AIManager/<IterativeDeepeningSearch>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AIManager/<IterativeDeepeningSearch>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Chess.ChessBoardSnapshot AIManager/<IterativeDeepeningSearch>d__27::boardPosition
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___boardPosition_2;
	// AIManager AIManager/<IterativeDeepeningSearch>d__27::<>4__this
	AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* ___U3CU3E4__this_3;
	// System.Single AIManager/<IterativeDeepeningSearch>d__27::<startTime>5__1
	float ___U3CstartTimeU3E5__1_4;
	// System.Boolean AIManager/<IterativeDeepeningSearch>d__27::<isOutTime>5__2
	bool ___U3CisOutTimeU3E5__2_5;
	// System.Int32 AIManager/<IterativeDeepeningSearch>d__27::<depth>5__3
	int32_t ___U3CdepthU3E5__3_6;
};

// AIManager/<Minimax>d__29
struct U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D  : public RuntimeObject
{
	// System.Int32 AIManager/<Minimax>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AIManager/<Minimax>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Chess.ChessBoardSnapshot AIManager/<Minimax>d__29::boardPosition
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___boardPosition_2;
	// System.Int32 AIManager/<Minimax>d__29::depth
	int32_t ___depth_3;
	// AIManager AIManager/<Minimax>d__29::<>4__this
	AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* ___U3CU3E4__this_4;
	// Chess.ChessBoardSnapshot[] AIManager/<Minimax>d__29::<nextBoardPositions>5__1
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* ___U3CnextBoardPositionsU3E5__1_5;
	// System.Int32 AIManager/<Minimax>d__29::<i>5__2
	int32_t ___U3CiU3E5__2_6;
	// Chess.ChessBoardSnapshot AIManager/<Minimax>d__29::<board>5__3
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___U3CboardU3E5__3_7;
	// System.Int32 AIManager/<Minimax>d__29::<score>5__4
	int32_t ___U3CscoreU3E5__4_8;
};

// AIManager/<MinimaxAB>d__28
struct U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC  : public RuntimeObject
{
	// System.Int32 AIManager/<MinimaxAB>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AIManager/<MinimaxAB>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Chess.ChessBoardSnapshot AIManager/<MinimaxAB>d__28::boardPosition
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___boardPosition_2;
	// System.Int32 AIManager/<MinimaxAB>d__28::depth
	int32_t ___depth_3;
	// AIManager AIManager/<MinimaxAB>d__28::<>4__this
	AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* ___U3CU3E4__this_4;
	// Chess.ChessBoardSnapshot[] AIManager/<MinimaxAB>d__28::<nextBoardPositions>5__1
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* ___U3CnextBoardPositionsU3E5__1_5;
	// System.Int32 AIManager/<MinimaxAB>d__28::<i>5__2
	int32_t ___U3CiU3E5__2_6;
	// System.Int32 AIManager/<MinimaxAB>d__28::<score>5__3
	int32_t ___U3CscoreU3E5__3_7;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,ChessPieceScript>
struct KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,Chess.ChessPosition>
struct KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26
struct __StaticArrayInitTypeSizeU3D26_t93ED974D0C8838EEBA8350BD7AA86628156CAB70 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D26_t93ED974D0C8838EEBA8350BD7AA86628156CAB70__padding[26];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ChessPieceScript>
struct Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Chess.ChessPosition>
struct Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// Chess.ChessPieceType
struct ChessPieceType_tB00FDC8FA8C673606D685B8ED571E06F17FF0A8C 
{
	// System.Int32 Chess.ChessPieceType::value__
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Chess.ChessBoardSnapshot
struct ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Chess.ChessPieceType[] Chess.ChessBoardSnapshot::board
	ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* ___board_4;
	// System.Boolean[] Chess.ChessBoardSnapshot::hasMoved
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___hasMoved_5;
};

// Chess.ChessPieceProfile
struct ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Chess.ChessPieceType Chess.ChessPieceProfile::type
	int32_t ___type_4;
	// System.Int32 Chess.ChessPieceProfile::score
	int32_t ___score_5;
	// Chess.ChessPieceMove[] Chess.ChessPieceProfile::possibleMoves
	ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* ___possibleMoves_6;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
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

// AIManager
struct AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AIManager::gear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gear_5;
	// Chess.ChessPlayerType AIManager::playerType
	int32_t ___playerType_6;
	// System.Single AIManager::maxTime
	float ___maxTime_7;
	// System.Int32 AIManager::minDepth
	int32_t ___minDepth_8;
	// System.Int32 AIManager::maxDepth
	int32_t ___maxDepth_9;
	// System.Int32 AIManager::levelUpEvery
	int32_t ___levelUpEvery_10;
	// System.Int32 AIManager::growth
	int32_t ___growth_11;
	// Chess.ChessBoardSnapshot[] AIManager::outcomes
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* ___outcomes_12;
	// System.Boolean AIManager::isRunningItDeep
	bool ___isRunningItDeep_13;
	// System.Boolean AIManager::hasRunItDeep
	bool ___hasRunItDeep_14;
	// System.Boolean AIManager::isRunningMinimax
	bool ___isRunningMinimax_15;
	// System.Boolean AIManager::hasRunMinimax
	bool ___hasRunMinimax_16;
	// System.Int32 AIManager::iterativeDepth
	int32_t ___iterativeDepth_17;
	// System.Int32 AIManager::lastScore
	int32_t ___lastScore_18;
	// System.Int32 AIManager::lastIteration
	int32_t ___lastIteration_19;
	// System.Int32 AIManager::totalIterations
	int32_t ___totalIterations_20;
	// System.Int32 AIManager::highestScore
	int32_t ___highestScore_21;
	// System.Int32 AIManager::highestScoreIndex
	int32_t ___highestScoreIndex_22;
	// Chess.ChessBoardSnapshot AIManager::minimaxResult
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___minimaxResult_23;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode> AIManager::tTable
	Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* ___tTable_24;
};

// ChessPieceScript
struct ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ChessPieceScript::meshGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshGO_4;
	// Chess.ChessPosition ChessPieceScript::position
	ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___position_5;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Chess.ChessSettings GameManager::settings
	ChessSettings_t369FB449F09DC3658FBB85C4E55C3C29B82953D2* ___settings_5;
	// Chess.ChessPieceProfile[] GameManager::profiles
	ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F* ___profiles_6;
	// ChessPieceProfileDictionary GameManager::profilesDict
	ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* ___profilesDict_7;
	// UnityEngine.Transform GameManager::chessPiecesParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___chessPiecesParent_8;
	// UnityEngine.GameObject[] GameManager::pieceMeshes
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___pieceMeshes_9;
	// UnityEngine.Material[] GameManager::pieceMat
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___pieceMat_10;
	// UnityEngine.GameObject GameManager::piecePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___piecePrefab_11;
	// UnityEngine.GameObject GameManager::squareColPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___squareColPrefab_12;
	// UnityEngine.Transform GameManager::squareColliderParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___squareColliderParent_13;
	// Chess.ChessBoardSnapshot GameManager::defaultBoard
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___defaultBoard_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript> GameManager::piecesDict
	Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* ___piecesDict_15;
	// System.Collections.Generic.List`1<Chess.ChessBoardSnapshot> GameManager::snapshots
	List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* ___snapshots_16;
};

// MaterialPainter
struct MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material MaterialPainter::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_4;
	// UnityEngine.MeshRenderer[] MaterialPainter::rends
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* ___rends_5;
};

// MoveTester
struct MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MoveTester::pressToRunMove
	bool ___pressToRunMove_4;
	// Chess.ChessCoordinate MoveTester::from
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___from_5;
	// Chess.ChessCoordinate MoveTester::to
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___to_6;
	// System.Boolean MoveTester::hasSelected
	bool ___hasSelected_7;
	// SquareColliderScript MoveTester::lastSquare
	SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* ___lastSquare_8;
	// SquareColliderScript MoveTester::selectedSquare
	SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* ___selectedSquare_9;
};

// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SquareColliderScript
struct SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer SquareColliderScript::rend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___rend_4;
	// UnityEngine.Color SquareColliderScript::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_5;
};

// TemporarySpinningScript
struct TemporarySpinningScript_t009E56591E81FF703549CB36DF2418FEE809EE25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TemporarySpinningScript::speed
	float ___speed_4;
	// System.Int32 TemporarySpinningScript::step
	int32_t ___step_5;
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>

// System.Collections.Generic.Dictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>

// System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>

// System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>

// System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>

// System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>

// System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>

// System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>
struct List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>

// System.Collections.Generic.List`1<Chess.ChessPosition>
struct List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Chess.ChessPosition>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>

// Chess.ChessBoardSnapshotExtention

// Chess.ChessBoardSnapshotExtention

// Chess.ChessCoordinate

// Chess.ChessCoordinate

// Chess.ChessCoordinateExtension

// Chess.ChessCoordinateExtension

// Chess.ChessPieceMove

// Chess.ChessPieceMove

// ChessPieceProfileDictionary

// ChessPieceProfileDictionary

// Chess.ChessPieceTypeExtension
struct ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_StaticFields
{
	// System.Char[] Chess.ChessPieceTypeExtension::iconArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___iconArray_0;
};

// Chess.ChessPieceTypeExtension

// Chess.ChessPlayerTypeExtension

// Chess.ChessPlayerTypeExtension

// Chess.ChessPosition

// Chess.ChessPosition

// Chess.ChessSettings

// Chess.ChessSettings

// MinimaxNode

// MinimaxNode

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// ZobristHash
struct ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields
{
	// System.Random ZobristHash::rand
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand_0;
	// System.UInt64[,] ZobristHash::hashtable
	UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE* ___hashtable_1;
};

// ZobristHash

// AIManager/<IterativeDeepeningSearch>d__27

// AIManager/<IterativeDeepeningSearch>d__27

// AIManager/<Minimax>d__29

// AIManager/<Minimax>d__29

// AIManager/<MinimaxAB>d__28

// AIManager/<MinimaxAB>d__28

// System.Collections.Generic.KeyValuePair`2<System.Int32,ChessPieceScript>

// System.Collections.Generic.KeyValuePair`2<System.Int32,ChessPieceScript>

// System.Collections.Generic.KeyValuePair`2<System.Int32,Chess.ChessPosition>

// System.Collections.Generic.KeyValuePair`2<System.Int32,Chess.ChessPosition>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt64

// System.UInt64

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

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ChessPieceScript>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ChessPieceScript>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Chess.ChessPosition>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Chess.ChessPosition>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=26 <PrivateImplementationDetails>::FD7D0A697D1B140CFAC93D860DD80A65010E2B63F24F9F508DDB88085A75201A
	__StaticArrayInitTypeSizeU3D26_t93ED974D0C8838EEBA8350BD7AA86628156CAB70 ___FD7D0A697D1B140CFAC93D860DD80A65010E2B63F24F9F508DDB88085A75201A_0;
};

// <PrivateImplementationDetails>

// Chess.ChessPieceType

// Chess.ChessPieceType

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// Chess.ChessBoardSnapshot

// Chess.ChessBoardSnapshot

// Chess.ChessPieceProfile

// Chess.ChessPieceProfile

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

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

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// AIManager
struct AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields
{
	// AIManager AIManager::_instance
	AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* ____instance_4;
};

// AIManager

// ChessPieceScript

// ChessPieceScript

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::_instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ____instance_4;
};

// GameManager

// MaterialPainter

// MaterialPainter

// MoveTester

// MoveTester

// NewBehaviourScript

// NewBehaviourScript

// SquareColliderScript

// SquareColliderScript

// TemporarySpinningScript

// TemporarySpinningScript

// Unity.Template.VR.XRPlatformControllerSetup

// Unity.Template.VR.XRPlatformControllerSetup
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Chess.ChessBoardSnapshot[]
struct ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC  : public RuntimeArray
{
	ALIGN_FIELD (8) ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* m_Items[1];

	inline ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Chess.ChessPieceMove[]
struct ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05  : public RuntimeArray
{
	ALIGN_FIELD (8) ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* m_Items[1];

	inline ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* value)
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
// Chess.ChessPosition[]
struct ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46  : public RuntimeArray
{
	ALIGN_FIELD (8) ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* m_Items[1];

	inline ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Chess.ChessPieceType[]
struct ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75  : public RuntimeArray
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
// Chess.ChessPieceProfile[]
struct ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F  : public RuntimeArray
{
	ALIGN_FIELD (8) ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* m_Items[1];

	inline ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* m_Items[1];

	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[,]
struct UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
	inline uint64_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint64_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint64_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9614D897FE4C4AF2808D8BA89535FF6060823355_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m27326E93948245682BBADE7D8BCE3E74DBA4D4A4_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AIManager>()
inline AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* GameObject_GetComponent_TisAIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_mDE5FD6C451D7AC2C9273238656B9FCB39D97E45B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>::.ctor()
inline void List_1__ctor_m508C77EA47B4AE1368B4FFC403BA18019006F9B2 (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition> Chess.ChessBoardSnapshotExtention::ToDictionary(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* ChessBoardSnapshotExtention_ToDictionary_m0C09DE939D2C54729991C1E9F178DE19F6F08E22 (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>::GetEnumerator()
inline Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606 Dictionary_2_GetEnumerator_mA73EC0DF3912C325ADE9D7B31711F3A86F676D1A (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606 (*) (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Chess.ChessPosition>::Dispose()
inline void Enumerator_Dispose_mF1D658E2BD16C304162F52E692D4508787FD7283 (Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Chess.ChessPosition>::get_Current()
inline KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C Enumerator_get_Current_m8A1A86A7210474FBF83BA7A807A6D7267F450809_inline (Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C (*) (Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Chess.ChessPosition>::get_Value()
inline ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* KeyValuePair_2_get_Value_m1DF7246041AF9480DB2AD3CE198A3DECA4110DE5_inline (KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C* __this, const RuntimeMethod* method)
{
	return ((  ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* (*) (KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Boolean Chess.ChessPieceTypeExtension::IsDifferentTeamAs(Chess.ChessPieceType,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsDifferentTeamAs_mB4147A9DF32EA62134C2C9BA09423A35456F90EA (int32_t ___0_pieceType, int32_t ___1_playerType, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// Chess.ChessCoordinate Chess.ChessCoordinate::op_Addition(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinate_op_Addition_m37EA1F44A344C0E8ECA6F2EA9E30A9EBF0B3FBD6 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) ;
// System.Boolean GameManager::IsValidSpecialRule(Chess.ChessPieceSpecialRule,Chess.ChessPosition,Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_IsValidSpecialRule_mDC00529ABD4024A8C9489B8EDE55D2856378219D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___0_specialRule, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___1_position, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___2_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___3_to, const RuntimeMethod* method) ;
// System.Int32 Chess.ChessCoordinateExtension::ToArrayCoord(Chess.ChessCoordinate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_chessCoord, int32_t ___1_boardSize, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83 (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>::get_Item(TKey)
inline ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* Dictionary_2_get_Item_m704632DB6361CF0AF012F3CA711342BB52796FC1 (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* (*) (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.Boolean Chess.ChessPieceTypeExtension::IsSameTeamAs(Chess.ChessPieceType,Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsSameTeamAs_m5C6E05C22364354C245ECBA7348C9048FA49A669 (int32_t ___0_type1, int32_t ___1_type2, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsPawn(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsPawn_mEA9EB9F0736C8D13EAC2A0EF58FCEA3F9F14D009 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Char Chess.ChessPieceTypeExtension::ToIcon(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ChessPieceTypeExtension_ToIcon_mC90BA76146F424440AECF5324D8E536C6C3F156F (int32_t ___0_type, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void Chess.ChessPosition::.ctor(Chess.ChessPieceType,Chess.ChessCoordinate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772 (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* __this, int32_t ___0_type, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_coord, bool ___2_hasMoved, const RuntimeMethod* method) ;
// Chess.ChessBoardSnapshot GameManager::AdjustBoard(Chess.ChessBoardSnapshot,System.String,Chess.ChessPosition[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_AdjustBoard_m9A8A6AFB23CE7A16835CB09F7CAE5297DEFE456F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, String_t* ___1_newName, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ___2_changed, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>::Add(T)
inline void List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_inline (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0*, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean Chess.ChessCoordinateExtension::IsWithinRange(Chess.ChessCoordinate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinateExtension_IsWithinRange_mC39C1A4553847600E893606980070ADC4A451168 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_chessCoord, int32_t ___1_boardSize, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Chess.ChessPosition>::MoveNext()
inline bool Enumerator_MoveNext_m305925914F4F5CC03D763DADC392A2B1E979115E (Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>::ToArray()
inline ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* List_1_ToArray_m888B5443049E3154543F50E84D5FC9ABE8444E45 (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* __this, const RuntimeMethod* method)
{
	return ((  ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* (*) (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void MinimaxNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimaxNode__ctor_m93EAA4EB15E4F49AFD33566F68AD61436D28F5C3 (MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* __this, const RuntimeMethod* method) ;
// System.UInt64 ZobristHash::ToZobristHash(Chess.ChessPieceType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ZobristHash_ToZobristHash_mAB48FB9229AA1F46B209FF4D70C1B59B63CF8DE2 (ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* ___0_board, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC8B668158DB0ACDCD7A721B4E9C18DE7A8407B50 (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28*, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m9614D897FE4C4AF2808D8BA89535FF6060823355_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>::get_Item(TKey)
inline MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* Dictionary_2_get_Item_mDD4F39481172C78295B92273E1D4B54A0B93F051 (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* (*) (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28*, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_m27326E93948245682BBADE7D8BCE3E74DBA4D4A4_gshared)(__this, ___0_key, method);
}
// System.Boolean Chess.ChessBoardSnapshotExtention::IsEndGame(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessBoardSnapshotExtention_IsEndGame_m78153E0FFBC3A9BFB704B18A8104DA7D277540A2 (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) ;
// System.Int32 GameManager::CalculateScore(Chess.ChessBoardSnapshot,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_CalculateScore_m343377682A8998263218557066762C66FE433BF1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, int32_t ___1_playerType, const RuntimeMethod* method) ;
// Chess.ChessBoardSnapshot[] AIManager::FindPossibleMoves(Chess.ChessBoardSnapshot,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, int32_t ___1_playerType, const RuntimeMethod* method) ;
// System.Int32 AIManager::AlphaBeta(Chess.ChessBoardSnapshot,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AIManager_AlphaBeta_m3B027403D356A0539587F0DD219E490DAA192858 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, int32_t ___2_alpha, int32_t ___3_beta, bool ___4_maximizingPlayer, const RuntimeMethod* method) ;
// Chess.ChessPlayerType Chess.ChessPlayerTypeExtension::ToOpposite(Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPlayerTypeExtension_ToOpposite_m5EB6544B961A2B1BDBF61D2DF08C3B5596525A1A (int32_t ___0_playerType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m039B01C799A5FA9D018547413DE1965D39C89E76 (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* __this, uint64_t ___0_key, MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28*, uint64_t, MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59*, const RuntimeMethod*))Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5B8A2648EC5978A181BC6866A4263C599498A1D8 (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* __this, uint64_t ___0_key, MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28*, uint64_t, MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59*, const RuntimeMethod*))Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void AIManager/<IterativeDeepeningSearch>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIterativeDeepeningSearchU3Ed__27__ctor_m0AA6A1C8D33218D6350BC4C49B6BF3EC1F984FEC (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void AIManager/<MinimaxAB>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxABU3Ed__28__ctor_mA410743E7EBE4D033A3D5731C1FFC220EF86D9FB (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void AIManager/<Minimax>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxU3Ed__29__ctor_m932D2BED3D6ED9C06C63396EE4F6E45F1FE3684B (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 AIManager::Max(Chess.ChessBoardSnapshot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AIManager_Max_m6BA69290CF2A97AF298366412D32D8410FF66863 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, const RuntimeMethod* method) ;
// System.Int32 AIManager::Min(Chess.ChessBoardSnapshot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AIManager_Min_mDE56EDF6421728289F104AA1116FBB5E933A0DBA (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, const RuntimeMethod* method) ;
// Chess.ChessBoardSnapshot GameManager::get_LatestSnapshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_get_LatestSnapshot_m273D36B370E57580224E9702E0309825C1A40465 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AIManager::IterativeDeepeningSearch(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIManager_IterativeDeepeningSearch_m195A353F4688A374F20D059FA501C8A944AAD717 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Chess.ChessPosition>()
inline ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_inline (const RuntimeMethod* method)
{
	return ((  ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// Chess.ChessBoardSnapshot GameManager::GenNextSnapshot(Chess.ChessBoardSnapshot,Chess.ChessPosition[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_GenNextSnapshot_m48264D28F6612CA4EF970EBE1D15A72A5A29D8CF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ___1_changed, const RuntimeMethod* method) ;
// System.Void GameManager::LoadFromSnapshot(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LoadFromSnapshot_m9A4106A57AA48A922303BF98B2C430660004A95B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void AIManager::GeneratePossibleMoves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_GeneratePossibleMoves_m12C64131CAB7C4C844C002D4B16BD04EC05A1DCD (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) ;
// System.Void AIManager::PostGenerateMinimax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_PostGenerateMinimax_m5D8C90B4052B4E3DDC270A6D23FA869C4BC0C2E0 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MinimaxNode>::.ctor()
inline void Dictionary_2__ctor_mA1D71F706194C614B42CCEA78EC1D882137B7F01 (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28*, const RuntimeMethod*))Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator AIManager::MinimaxAB(Chess.ChessBoardSnapshot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIManager_MinimaxAB_m493EDE9D60BABC9BEBF5CEF7868F499CBC4B1189 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::.ctor()
inline void Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343 (Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void ChessPieceScript::set_Type(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_Type_mF371B90E98E6DEA6C2BD3337F41DD7F628C499C1 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ChessPieceScript::set_Coord(Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_Coord_mD41C755147CF27FE28E8E208AC8B6F25BE27EE08 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_value, const RuntimeMethod* method) ;
// System.Void ChessPieceScript::set_HasMoved(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_HasMoved_m8A4AD17057F1AE460E8BC9F0EFE9EF8AFF6D53BB (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void ChessPieceScript::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_UpdateMesh_mA2FE6D1037472A1F42F6726BA1A2DC6FFB3EED26 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// System.Void ChessPieceScript::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_UpdatePosition_m6B83AF20D3E789EE45A9CCE7088EC068C4B6AB3B (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Chess.ChessCoordinate ChessPieceScript::get_Coord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessPieceScript_get_Coord_mA11C90F80362F4054EB4429DC18BC5AE601914C6 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Int32 ChessPieceScript::FindMeshType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPieceScript_FindMeshType_mC3C8AAFCB5F199132B93BAF57ECB34F29277ADB3 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 ChessPieceScript::FindColorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPieceScript_FindColorType_m2A2CCDB04EC9291AD048B621D31FC0F5E13EC17E (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// T UnityEngine.GameObject::GetComponent<MaterialPainter>()
inline MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* GameObject_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_m4310A95FD223B89A91D732D03E8B6BCFA62618C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<MaterialPainter>()
inline MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* Component_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_mB2E071C61EE0926027131986DB7A3697A20706F4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void MaterialPainter::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPainter_UpdateMaterial_m3709A69BAA5CF4854B71876BAEFD2C9B25304613 (MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* __this, const RuntimeMethod* method) ;
// Chess.ChessPieceType ChessPieceScript::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsKnight(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsKnight_mFD725CA0B1CE9CBFD6B60DB88E3CEFAF2CC2D173 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsBishop(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsBishop_m8C40FB6308B49949365AFCFC2BA9DCB2DA7F0AB7 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsRook(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsRook_m049219149A1B098B446C870C520FC03462E9A0F9 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsQueen(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsQueen_mFEC8BB32853187DC7BD1C5F60AA03972D5A38AAA (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsKing(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsKing_m5C908B38B0C6EADE2C8402123ED3E06CFF26DDFB (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsWhite(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsBlack(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E (int32_t ___0_type, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>::get_Count()
inline int32_t List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_inline (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Chess.ChessBoardSnapshot>::get_Item(System.Int32)
inline ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* List_1_get_Item_mE728EBB797EC4E5186663AE654C97BD95ADA6FB4 (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* (*) (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void ChessPieceProfileDictionary::Init(Chess.ChessPieceProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfileDictionary_Init_m869F7FD08575F4A274633F00EE11BB431289967E (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F* ___0_profiles, const RuntimeMethod* method) ;
// System.Void GameManager::SpawnSquareColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnSquareColliders_m6317F892E8DA4ECDFEC3870DC56A35470E8F981F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Chess.ChessPosition> Chess.ChessBoardSnapshotExtention::ToList(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* ChessBoardSnapshotExtention_ToList_m19EDBDB7079A585B9160C624878EAD4316FF40EA (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Chess.ChessPosition>::get_Count()
inline int32_t List_1_get_Count_mBAFCA7D910F419737E1DAEFC1625C1A70C3CD2DD_inline (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>::GetEnumerator()
inline Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF Dictionary_2_GetEnumerator_m32421167DF82FF71984E25CC59DE4DD1EDDD3339 (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF (*) (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ChessPieceScript>::Dispose()
inline void Enumerator_Dispose_m499FFC783C6538054C077428356226CA5CEAADB8 (Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ChessPieceScript>::get_Current()
inline KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24 Enumerator_get_Current_m3203FA7F809857BB7688D2F3FCDDE426835D0F94_inline (Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24 (*) (Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,ChessPieceScript>::get_Value()
inline ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* KeyValuePair_2_get_Value_mC1E404CB999E38F575FB7C41CD3A87F1D165B483_inline (KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24* __this, const RuntimeMethod* method)
{
	return ((  ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* (*) (KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,ChessPieceScript>::MoveNext()
inline bool Enumerator_MoveNext_m083DE3A1E7C5F9DCECEB4645F93A7FD6ACADDDDD (Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>::Clear()
inline void Dictionary_2_Clear_mE28F857AF869BEF19A1050F0C172474220CA3E7B (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<ChessPieceScript>()
inline ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* GameObject_GetComponent_TisChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209_m7E032E1CA4625B288A3DAAD3CA20E33D7C852629 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Chess.ChessPosition>::get_Item(System.Int32)
inline ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* List_1_get_Item_m1140D18210A65C7DB5CCC15BACB47E732B35CBF9 (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* (*) (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void ChessPieceScript::set_Position(Chess.ChessPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_Position_m2BD43058B58C03E2B7A44FD17E46723C879B705B (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821 (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* __this, int32_t ___0_key, ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*, int32_t, ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// T UnityEngine.Object::Instantiate<Chess.ChessBoardSnapshot>(T)
inline ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* Object_Instantiate_TisChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C_m8CBB6C09765F982DADE2CAEE29FD48E7767E3306 (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_original, const RuntimeMethod* method)
{
	return ((  ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* (*) (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean GameManager::Move(Chess.ChessCoordinate,Chess.ChessCoordinate,Chess.ChessPosition[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_Move_m289E9F3699984DB298F92FFD3BC6AD9BB416AD3F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_to, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** ___2_resultPositions, const RuntimeMethod* method) ;
// Chess.ChessBoardSnapshot GameManager::GenNextSnapshot(Chess.ChessPosition[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_GenNextSnapshot_m1F122AB7C2747255A2564CA437BBF6965B038751 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ___0_changed, const RuntimeMethod* method) ;
// AIManager AIManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* AIManager_get_Instance_mF1EBAD09FF597621E25C627490D008D323696407 (const RuntimeMethod* method) ;
// System.Void AIManager::MakeMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_MakeMove_mFF32ABD8EC2F4819EBAF9A567AE6A2D4702FC3E9 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>::get_Item(TKey)
inline ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* (*) (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// Chess.ChessPosition ChessPieceScript::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ChessPieceScript_get_Position_mA399E19A24730B1EDD1ECEBB4ED2B2D5B40712E0 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// System.Boolean GameManager::IsValidMove(Chess.ChessPosition,Chess.ChessCoordinate,Chess.ChessCoordinate,Chess.ChessPieceSpecialRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_IsValidMove_m175922F0BFD2C0AEA5446B852EFE838A3A2B7389 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___0_position, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___2_to, int32_t* ___3_specialRule, const RuntimeMethod* method) ;
// System.Boolean GameManager::AdditionalMove(Chess.ChessPieceSpecialRule,Chess.ChessPosition,Chess.ChessPosition[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_AdditionalMove_mA9404CA4896EFB1F0E5297ECE9A729C0A8CB104D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___0_specialRule, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___1_position, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** ___2_resultPositions, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>::Remove(TKey)
inline bool Dictionary_2_Remove_mD231935E425027848966CC3F0556B3ED05C024C7 (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<Chess.ChessPosition>::.ctor()
inline void List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45 (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Chess.ChessPosition>::Add(T)
inline void List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_inline (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* __this, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265*, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<Chess.ChessPosition>::ToArray()
inline ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* List_1_ToArray_m7782FAD113BAA193D23545293D658FD3B6478241 (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* __this, const RuntimeMethod* method)
{
	return ((  ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* (*) (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Chess.ChessCoordinate::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessCoordinate::op_Equality(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinate_op_Equality_mE86068C537D98D032FACFD6889821E3EBFDA71AA (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) ;
// System.Boolean ChessPieceScript::get_HasMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceScript_get_HasMoved_mC9C63FE2AA498EA2350E8146182D3F372923F7AC (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsValid(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsEmpty(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean Chess.ChessPieceTypeExtension::IsSameTeamAs(Chess.ChessPieceType,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsSameTeamAs_m43455AAA49ED1B648EC49639296E68410A049849 (int32_t ___0_pieceType, int32_t ___1_playerType, const RuntimeMethod* method) ;
// System.Void ChessPieceProfileDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfileDictionary__ctor_m6918B81D8F6350DC41E661ECBDF7B5D88D209738 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,ChessPieceScript>::.ctor()
inline void Dictionary_2__ctor_mACFED39B373539773A722B74793EE5D3018D25D5 (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void MoveTester::RunMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTester_RunMove_mB0E041BB98020DA287D2E463352666B81C7DEAD1 (MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050* __this, const RuntimeMethod* method) ;
// System.Void MoveTester::CheckMouseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTester_CheckMouseClick_m194A4068D3CA2311ABC80A9B3BB34CAF16330669 (MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, const RuntimeMethod* method) ;
// System.Void SquareColliderScript::SetVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareColliderScript_SetVisibility_m69AE2FBBE9A29B7BB5BA75B800DB57FF42758268 (SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* __this, bool ___0_b, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<SquareColliderScript>()
inline SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* Component_GetComponent_TisSquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F_mF97DC537AC7A05696CD64170222B940AC48E91B6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SquareColliderScript::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareColliderScript_SetColor_m1984C9CFECE849C4DAA0452B4ADA10178B0B35F0 (SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_col, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Boolean GameManager::Move(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_Move_m658395B542AFB4318367FD7C4C0962F8AB8DFF0A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_to, const RuntimeMethod* method) ;
// Chess.ChessCoordinate Chess.ChessCoordinate::op_Subtraction(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinate_op_Subtraction_mA9D89E2BE51D1FEABA04985204487EAEF83D2159 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.UInt64 ZobristHash::GetRandomHash(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ZobristHash_GetRandomHash_mA35309E53EE4FCCAE38FC591F8E46161389C4317 (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_rand, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>::.ctor()
inline void Dictionary_2__ctor_mA4659BBBD51B28AC5CABEB58549898999B86087D (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Chess.ChessPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPosition__ctor_mC43970DDAE85152C156921B45F6CC9C2537B5349 (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* __this, const RuntimeMethod* method) ;
// Chess.ChessCoordinate Chess.ChessCoordinateExtension::ToChessCoord(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinateExtension_ToChessCoord_m043286DD15690872AAE42FEBE2FE057C353695B3 (int32_t ___0_arrayPos, int32_t ___1_boardSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7CD025E05BCE5F4403952B69D9CC0DB9AF9E795A (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* __this, int32_t ___0_key, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B*, int32_t, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean Chess.ChessCoordinate::Equals(Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinate_Equals_m022884CDC4B74595C1959B2898014469BF6CB56B (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Char Chess.ChessPieceTypeExtension::ToChessPieceIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ChessPieceTypeExtension_ToChessPieceIcon_mE37BB1036D167FB7570AD84501E868CEEA446FDC (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_mDEAA416D3A6676A79851DDF6B62D676E53372A87 (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m68CAC9D7524B9FA1DFCA3F99BA694CD73147209B (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_mD2E080DE77BCDB61B6D2EC8AD996FAE611B97F3C (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
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
// AIManager AIManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* AIManager_get_Instance_mF1EBAD09FF597621E25C627490D008D323696407 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_mDE5FD6C451D7AC2C9273238656B9FCB39D97E45B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F76D536EFE265D478DF6A565EDD67EAE469708);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* V_1 = NULL;
	{
		// if (_instance == null)
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_0 = ((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// _instance = GameObject.FindGameObjectWithTag("AIManager").GetComponent<AIManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral15F76D536EFE265D478DF6A565EDD67EAE469708, NULL);
		NullCheck(L_3);
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_4;
		L_4 = GameObject_GetComponent_TisAIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_mDE5FD6C451D7AC2C9273238656B9FCB39D97E45B(L_3, GameObject_GetComponent_TisAIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_mDE5FD6C451D7AC2C9273238656B9FCB39D97E45B_RuntimeMethod_var);
		((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4), (void*)L_4);
	}

IL_0024:
	{
		// return _instance;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_5 = ((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4;
		V_1 = L_5;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_6 = V_1;
		return L_6;
	}
}
// System.Void AIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_Awake_mB35D4A77F2E143EF887D7E7CA242470DE0FEAE20 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_instance == null)
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_0 = ((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// _instance = this;
		((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		goto IL_0033;
	}

IL_0018:
	{
		// else if (_instance != this)
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_3 = ((AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_StaticFields*)il2cpp_codegen_static_fields_for(AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, __this, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void AIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_Start_mC8B5BAE278EB10323C415FA81C7955C2D167EB4E (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	{
		// growth = 0;
		__this->___growth_11 = 0;
		// }
		return;
	}
}
// Chess.ChessBoardSnapshot[] AIManager::FindPossibleMoves(Chess.ChessBoardSnapshot,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, int32_t ___1_playerType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mA73EC0DF3912C325ADE9D7B31711F3A86F676D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m704632DB6361CF0AF012F3CA711342BB52796FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF1D658E2BD16C304162F52E692D4508787FD7283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m305925914F4F5CC03D763DADC392A2B1E979115E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8A1A86A7210474FBF83BA7A807A6D7267F450809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1DF7246041AF9480DB2AD3CE198A3DECA4110DE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m888B5443049E3154543F50E84D5FC9ABE8444E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m508C77EA47B4AE1368B4FFC403BA18019006F9B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* V_0 = NULL;
	Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* V_1 = NULL;
	Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* V_4 = NULL;
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_5 = NULL;
	ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_9 = NULL;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	Il2CppChar V_25 = 0x0;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* V_30 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B51_0 = 0;
	int32_t G_B53_0 = 0;
	{
		// List<ChessBoardSnapshot> ret = new List<ChessBoardSnapshot>();
		List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_0 = (List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0*)il2cpp_codegen_object_new(List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m508C77EA47B4AE1368B4FFC403BA18019006F9B2(L_0, List_1__ctor_m508C77EA47B4AE1368B4FFC403BA18019006F9B2_RuntimeMethod_var);
		V_0 = L_0;
		// Dictionary<int, ChessPosition> boardDict = boardSnapshot.ToDictionary();
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1 = ___0_boardSnapshot;
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_2;
		L_2 = ChessBoardSnapshotExtention_ToDictionary_m0C09DE939D2C54729991C1E9F178DE19F6F08E22(L_1, NULL);
		V_1 = L_2;
		// foreach(KeyValuePair<int, ChessPosition> kvp in boardDict)
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_3 = V_1;
		NullCheck(L_3);
		Enumerator_t557F748D3F52FFBF366937D5D064DC5FC0761606 L_4;
		L_4 = Dictionary_2_GetEnumerator_mA73EC0DF3912C325ADE9D7B31711F3A86F676D1A(L_3, Dictionary_2_GetEnumerator_mA73EC0DF3912C325ADE9D7B31711F3A86F676D1A_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_038a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF1D658E2BD16C304162F52E692D4508787FD7283((&V_2), Enumerator_Dispose_mF1D658E2BD16C304162F52E692D4508787FD7283_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_037c_1;
			}

IL_001b_1:
			{
				// foreach(KeyValuePair<int, ChessPosition> kvp in boardDict)
				KeyValuePair_2_t0FB192E23308057E1C302104E091781FBEFBAE3C L_5;
				L_5 = Enumerator_get_Current_m8A1A86A7210474FBF83BA7A807A6D7267F450809_inline((&V_2), Enumerator_get_Current_m8A1A86A7210474FBF83BA7A807A6D7267F450809_RuntimeMethod_var);
				V_3 = L_5;
				// ChessPosition position = kvp.Value;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_6;
				L_6 = KeyValuePair_2_get_Value_m1DF7246041AF9480DB2AD3CE198A3DECA4110DE5_inline((&V_3), KeyValuePair_2_get_Value_m1DF7246041AF9480DB2AD3CE198A3DECA4110DE5_RuntimeMethod_var);
				V_4 = L_6;
				// if(position.type.IsDifferentTeamAs(playerType))
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_7 = V_4;
				NullCheck(L_7);
				int32_t L_8 = L_7->___type_0;
				int32_t L_9 = ___1_playerType;
				il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = ChessPieceTypeExtension_IsDifferentTeamAs_mB4147A9DF32EA62134C2C9BA09423A35456F90EA(L_8, L_9, NULL);
				V_7 = L_10;
				bool L_11 = V_7;
				if (!L_11)
				{
					goto IL_0045_1;
				}
			}
			{
				// continue;
				goto IL_037c_1;
			}

IL_0045_1:
			{
				// ChessCoordinate from = position.coord;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_12 = V_4;
				NullCheck(L_12);
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_13 = L_12->___coord_1;
				V_5 = L_13;
				// ChessPieceMove[] possibleMoves = GameManager.Instance.profilesDict[position.type].possibleMoves;
				GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14;
				L_14 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
				NullCheck(L_14);
				ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* L_15 = L_14->___profilesDict_7;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_16 = V_4;
				NullCheck(L_16);
				int32_t L_17 = L_16->___type_0;
				NullCheck(L_15);
				ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_18;
				L_18 = VirtualFuncInvoker1< ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889*, int32_t >::Invoke(10 /* Chess.ChessPieceProfile ChessPieceProfileDictionary::get_Item(Chess.ChessPieceType) */, L_15, L_17);
				NullCheck(L_18);
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_19 = L_18->___possibleMoves_6;
				V_6 = L_19;
				// for (int j = 0; j < possibleMoves.Length; j++)
				V_8 = 0;
				goto IL_036a_1;
			}

IL_0073_1:
			{
				// ChessCoordinate to = from + possibleMoves[j].move;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_20 = V_5;
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_21 = V_6;
				int32_t L_22 = V_8;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				NullCheck(L_24);
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_25 = L_24->___move_0;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_26;
				L_26 = ChessCoordinate_op_Addition_m37EA1F44A344C0E8ECA6F2EA9E30A9EBF0B3FBD6(L_20, L_25, NULL);
				V_9 = L_26;
				// int k = 1;
				V_10 = 1;
				goto IL_032c_1;
			}

IL_008f_1:
			{
				// if (GameManager.Instance.IsValidSpecialRule(possibleMoves[j].specialRule, position, from, to))
				GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_27;
				L_27 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_28 = V_6;
				int32_t L_29 = V_8;
				NullCheck(L_28);
				int32_t L_30 = L_29;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
				NullCheck(L_31);
				int32_t L_32 = L_31->___specialRule_3;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_33 = V_4;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_34 = V_5;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_35 = V_9;
				NullCheck(L_27);
				bool L_36;
				L_36 = GameManager_IsValidSpecialRule_mDC00529ABD4024A8C9489B8EDE55D2856378219D(L_27, L_32, L_33, L_34, L_35, NULL);
				V_11 = L_36;
				bool L_37 = V_11;
				if (!L_37)
				{
					goto IL_0312_1;
				}
			}
			{
				// if (possibleMoves[j].repeatTimes < 0 || k == possibleMoves[j].repeatTimes)
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_38 = V_6;
				int32_t L_39 = V_8;
				NullCheck(L_38);
				int32_t L_40 = L_39;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
				NullCheck(L_41);
				int32_t L_42 = L_41->___repeatTimes_1;
				if ((((int32_t)L_42) < ((int32_t)0)))
				{
					goto IL_00d1_1;
				}
			}
			{
				int32_t L_43 = V_10;
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_44 = V_6;
				int32_t L_45 = V_8;
				NullCheck(L_44);
				int32_t L_46 = L_45;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
				NullCheck(L_47);
				int32_t L_48 = L_47->___repeatTimes_1;
				G_B10_0 = ((((int32_t)L_43) == ((int32_t)L_48))? 1 : 0);
				goto IL_00d2_1;
			}

IL_00d1_1:
			{
				G_B10_0 = 1;
			}

IL_00d2_1:
			{
				V_12 = (bool)G_B10_0;
				bool L_49 = V_12;
				if (!L_49)
				{
					goto IL_02f9_1;
				}
			}
			{
				// bool isLastMove = false;
				V_13 = (bool)0;
				// if (possibleMoves[j].pattern == ChessPieceMovePattern.Normal)
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_50 = V_6;
				int32_t L_51 = V_8;
				NullCheck(L_50);
				int32_t L_52 = L_51;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
				NullCheck(L_53);
				int32_t L_54 = L_53->___pattern_2;
				V_14 = (bool)((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
				bool L_55 = V_14;
				if (!L_55)
				{
					goto IL_013c_1;
				}
			}
			{
				// if (boardDict.ContainsKey(to.ToArrayCoord()))
				Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_56 = V_1;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_57 = V_9;
				int32_t L_58;
				L_58 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_57, 8, NULL);
				NullCheck(L_56);
				bool L_59;
				L_59 = Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83(L_56, L_58, Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83_RuntimeMethod_var);
				V_15 = L_59;
				bool L_60 = V_15;
				if (!L_60)
				{
					goto IL_0136_1;
				}
			}
			{
				// if (boardDict[to.ToArrayCoord()].type.IsSameTeamAs(position.type))
				Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_61 = V_1;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_62 = V_9;
				int32_t L_63;
				L_63 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_62, 8, NULL);
				NullCheck(L_61);
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_64;
				L_64 = Dictionary_2_get_Item_m704632DB6361CF0AF012F3CA711342BB52796FC1(L_61, L_63, Dictionary_2_get_Item_m704632DB6361CF0AF012F3CA711342BB52796FC1_RuntimeMethod_var);
				NullCheck(L_64);
				int32_t L_65 = L_64->___type_0;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_66 = V_4;
				NullCheck(L_66);
				int32_t L_67 = L_66->___type_0;
				il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
				bool L_68;
				L_68 = ChessPieceTypeExtension_IsSameTeamAs_m5C6E05C22364354C245ECBA7348C9048FA49A669(L_65, L_67, NULL);
				V_16 = L_68;
				bool L_69 = V_16;
				if (!L_69)
				{
					goto IL_0132_1;
				}
			}
			{
				// break;
				goto IL_0363_1;
			}

IL_0132_1:
			{
				// isLastMove = true;
				V_13 = (bool)1;
			}

IL_0136_1:
			{
				goto IL_01c7_1;
			}

IL_013c_1:
			{
				// else if (possibleMoves[j].pattern == ChessPieceMovePattern.MoveOnly)
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_70 = V_6;
				int32_t L_71 = V_8;
				NullCheck(L_70);
				int32_t L_72 = L_71;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				NullCheck(L_73);
				int32_t L_74 = L_73->___pattern_2;
				V_17 = (bool)((((int32_t)L_74) == ((int32_t)1))? 1 : 0);
				bool L_75 = V_17;
				if (!L_75)
				{
					goto IL_016c_1;
				}
			}
			{
				// if (boardDict.ContainsKey(to.ToArrayCoord()))
				Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_76 = V_1;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_77 = V_9;
				int32_t L_78;
				L_78 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_77, 8, NULL);
				NullCheck(L_76);
				bool L_79;
				L_79 = Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83(L_76, L_78, Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83_RuntimeMethod_var);
				V_18 = L_79;
				bool L_80 = V_18;
				if (!L_80)
				{
					goto IL_0169_1;
				}
			}
			{
				// break;
				goto IL_0363_1;
			}

IL_0169_1:
			{
				goto IL_01c7_1;
			}

IL_016c_1:
			{
				// else if (possibleMoves[j].pattern == ChessPieceMovePattern.CaptureOnly)
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_81 = V_6;
				int32_t L_82 = V_8;
				NullCheck(L_81);
				int32_t L_83 = L_82;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
				NullCheck(L_84);
				int32_t L_85 = L_84->___pattern_2;
				V_19 = (bool)((((int32_t)L_85) == ((int32_t)2))? 1 : 0);
				bool L_86 = V_19;
				if (!L_86)
				{
					goto IL_01c7_1;
				}
			}
			{
				// if (!boardDict.ContainsKey(to.ToArrayCoord()))
				Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_87 = V_1;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_88 = V_9;
				int32_t L_89;
				L_89 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_88, 8, NULL);
				NullCheck(L_87);
				bool L_90;
				L_90 = Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83(L_87, L_89, Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83_RuntimeMethod_var);
				V_20 = (bool)((((int32_t)L_90) == ((int32_t)0))? 1 : 0);
				bool L_91 = V_20;
				if (!L_91)
				{
					goto IL_019c_1;
				}
			}
			{
				// break;
				goto IL_0363_1;
			}

IL_019c_1:
			{
				// if (boardDict[to.ToArrayCoord()].type.IsSameTeamAs(position.type))
				Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_92 = V_1;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_93 = V_9;
				int32_t L_94;
				L_94 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_93, 8, NULL);
				NullCheck(L_92);
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_95;
				L_95 = Dictionary_2_get_Item_m704632DB6361CF0AF012F3CA711342BB52796FC1(L_92, L_94, Dictionary_2_get_Item_m704632DB6361CF0AF012F3CA711342BB52796FC1_RuntimeMethod_var);
				NullCheck(L_95);
				int32_t L_96 = L_95->___type_0;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_97 = V_4;
				NullCheck(L_97);
				int32_t L_98 = L_97->___type_0;
				il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
				bool L_99;
				L_99 = ChessPieceTypeExtension_IsSameTeamAs_m5C6E05C22364354C245ECBA7348C9048FA49A669(L_96, L_98, NULL);
				V_21 = L_99;
				bool L_100 = V_21;
				if (!L_100)
				{
					goto IL_01c6_1;
				}
			}
			{
				// break;
				goto IL_0363_1;
			}

IL_01c6_1:
			{
			}

IL_01c7_1:
			{
				// if (position.type.IsPawn())
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_101 = V_4;
				NullCheck(L_101);
				int32_t L_102 = L_101->___type_0;
				il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
				bool L_103;
				L_103 = ChessPieceTypeExtension_IsPawn_mEA9EB9F0736C8D13EAC2A0EF58FCEA3F9F14D009(L_102, NULL);
				V_22 = L_103;
				bool L_104 = V_22;
				if (!L_104)
				{
					goto IL_0236_1;
				}
			}
			{
				// if
				// (
				//     position.type == ChessPieceType.WhitePawn &&
				//     position.coord.y == 0
				// )
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_105 = V_4;
				NullCheck(L_105);
				int32_t L_106 = L_105->___type_0;
				if ((!(((uint32_t)L_106) == ((uint32_t)1))))
				{
					goto IL_01f5_1;
				}
			}
			{
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_107 = V_4;
				NullCheck(L_107);
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_108 = L_107->___coord_1;
				NullCheck(L_108);
				int32_t L_109 = L_108->___y_1;
				G_B31_0 = ((((int32_t)L_109) == ((int32_t)0))? 1 : 0);
				goto IL_01f6_1;
			}

IL_01f5_1:
			{
				G_B31_0 = 0;
			}

IL_01f6_1:
			{
				V_23 = (bool)G_B31_0;
				bool L_110 = V_23;
				if (!L_110)
				{
					goto IL_0208_1;
				}
			}
			{
				// position.type = ChessPieceType.WhiteQueen;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_111 = V_4;
				NullCheck(L_111);
				L_111->___type_0 = 5;
				goto IL_0235_1;
			}

IL_0208_1:
			{
				// else if
				// (
				//     position.type == ChessPieceType.BlackPawn &&
				//     position.coord.y == 7
				// )
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_112 = V_4;
				NullCheck(L_112);
				int32_t L_113 = L_112->___type_0;
				if ((!(((uint32_t)L_113) == ((uint32_t)7))))
				{
					goto IL_0223_1;
				}
			}
			{
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_114 = V_4;
				NullCheck(L_114);
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_115 = L_114->___coord_1;
				NullCheck(L_115);
				int32_t L_116 = L_115->___y_1;
				G_B36_0 = ((((int32_t)L_116) == ((int32_t)7))? 1 : 0);
				goto IL_0224_1;
			}

IL_0223_1:
			{
				G_B36_0 = 0;
			}

IL_0224_1:
			{
				V_24 = (bool)G_B36_0;
				bool L_117 = V_24;
				if (!L_117)
				{
					goto IL_0235_1;
				}
			}
			{
				// position.type = ChessPieceType.BlackQueen;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_118 = V_4;
				NullCheck(L_118);
				L_118->___type_0 = ((int32_t)11);
			}

IL_0235_1:
			{
			}

IL_0236_1:
			{
				// ret.Add(GameManager.Instance.AdjustBoard
				// (
				//     boardSnapshot,
				//     position.type.ToIcon() + " " + from.x + "," + from.y + "-->" + to.x + "," + to.y,
				//     new ChessPosition(ChessPieceType.None, from, true),
				//     new ChessPosition(position.type, to, true)
				// ));
				List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_119 = V_0;
				GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_120;
				L_120 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
				ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_121 = ___0_boardSnapshot;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_122 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_123 = L_122;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_124 = V_4;
				NullCheck(L_124);
				int32_t L_125 = L_124->___type_0;
				il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
				Il2CppChar L_126;
				L_126 = ChessPieceTypeExtension_ToIcon_mC90BA76146F424440AECF5324D8E536C6C3F156F(L_125, NULL);
				V_25 = L_126;
				String_t* L_127;
				L_127 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_25), NULL);
				NullCheck(L_123);
				ArrayElementTypeCheck (L_123, L_127);
				(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_127);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_128 = L_123;
				NullCheck(L_128);
				ArrayElementTypeCheck (L_128, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				(L_128)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = L_128;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_130 = V_5;
				NullCheck(L_130);
				int32_t* L_131 = (&L_130->___x_0);
				String_t* L_132;
				L_132 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_131, NULL);
				NullCheck(L_129);
				ArrayElementTypeCheck (L_129, L_132);
				(L_129)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_132);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_133 = L_129;
				NullCheck(L_133);
				ArrayElementTypeCheck (L_133, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
				(L_133)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_134 = L_133;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_135 = V_5;
				NullCheck(L_135);
				int32_t* L_136 = (&L_135->___y_1);
				String_t* L_137;
				L_137 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_136, NULL);
				NullCheck(L_134);
				ArrayElementTypeCheck (L_134, L_137);
				(L_134)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_137);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_138 = L_134;
				NullCheck(L_138);
				ArrayElementTypeCheck (L_138, _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA);
				(L_138)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_139 = L_138;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_140 = V_9;
				NullCheck(L_140);
				int32_t* L_141 = (&L_140->___x_0);
				String_t* L_142;
				L_142 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_141, NULL);
				NullCheck(L_139);
				ArrayElementTypeCheck (L_139, L_142);
				(L_139)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_142);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_143 = L_139;
				NullCheck(L_143);
				ArrayElementTypeCheck (L_143, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
				(L_143)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_144 = L_143;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_145 = V_9;
				NullCheck(L_145);
				int32_t* L_146 = (&L_145->___y_1);
				String_t* L_147;
				L_147 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_146, NULL);
				NullCheck(L_144);
				ArrayElementTypeCheck (L_144, L_147);
				(L_144)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_147);
				String_t* L_148;
				L_148 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_144, NULL);
				ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_149 = (ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46*)(ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46*)SZArrayNew(ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46_il2cpp_TypeInfo_var, (uint32_t)2);
				ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_150 = L_149;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_151 = V_5;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_152 = (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)il2cpp_codegen_object_new(ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
				NullCheck(L_152);
				ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772(L_152, 0, L_151, (bool)1, NULL);
				NullCheck(L_150);
				ArrayElementTypeCheck (L_150, L_152);
				(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)L_152);
				ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_153 = L_150;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_154 = V_4;
				NullCheck(L_154);
				int32_t L_155 = L_154->___type_0;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_156 = V_9;
				ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_157 = (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)il2cpp_codegen_object_new(ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
				NullCheck(L_157);
				ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772(L_157, L_155, L_156, (bool)1, NULL);
				NullCheck(L_153);
				ArrayElementTypeCheck (L_153, L_157);
				(L_153)->SetAt(static_cast<il2cpp_array_size_t>(1), (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)L_157);
				NullCheck(L_120);
				ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_158;
				L_158 = GameManager_AdjustBoard_m9A8A6AFB23CE7A16835CB09F7CAE5297DEFE456F(L_120, L_121, L_148, L_153, NULL);
				NullCheck(L_119);
				List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_inline(L_119, L_158, List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_RuntimeMethod_var);
				// if (isLastMove)
				bool L_159 = V_13;
				V_26 = L_159;
				bool L_160 = V_26;
				if (!L_160)
				{
					goto IL_02f6_1;
				}
			}
			{
				// break;
				goto IL_0363_1;
			}

IL_02f6_1:
			{
				goto IL_0311_1;
			}

IL_02f9_1:
			{
				// if (boardDict.ContainsKey(to.ToArrayCoord()))
				Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_161 = V_1;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_162 = V_9;
				int32_t L_163;
				L_163 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_162, 8, NULL);
				NullCheck(L_161);
				bool L_164;
				L_164 = Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83(L_161, L_163, Dictionary_2_ContainsKey_m43C9315CC4DDD7FEB0F54E649FA78CD997536D83_RuntimeMethod_var);
				V_27 = L_164;
				bool L_165 = V_27;
				if (!L_165)
				{
					goto IL_0310_1;
				}
			}
			{
				// break;
				goto IL_0363_1;
			}

IL_0310_1:
			{
			}

IL_0311_1:
			{
			}

IL_0312_1:
			{
				// to += possibleMoves[j].move;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_166 = V_9;
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_167 = V_6;
				int32_t L_168 = V_8;
				NullCheck(L_167);
				int32_t L_169 = L_168;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
				NullCheck(L_170);
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_171 = L_170->___move_0;
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_172;
				L_172 = ChessCoordinate_op_Addition_m37EA1F44A344C0E8ECA6F2EA9E30A9EBF0B3FBD6(L_166, L_171, NULL);
				V_9 = L_172;
				// k++;
				int32_t L_173 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_173, 1));
			}

IL_032c_1:
			{
				// while
				// (
				//     to.IsWithinRange() &&
				//     (possibleMoves[j].repeatTimes < 0 || k <= possibleMoves[j].repeatTimes)
				// )
				ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_174 = V_9;
				bool L_175;
				L_175 = ChessCoordinateExtension_IsWithinRange_mC39C1A4553847600E893606980070ADC4A451168(L_174, 8, NULL);
				if (!L_175)
				{
					goto IL_0359_1;
				}
			}
			{
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_176 = V_6;
				int32_t L_177 = V_8;
				NullCheck(L_176);
				int32_t L_178 = L_177;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
				NullCheck(L_179);
				int32_t L_180 = L_179->___repeatTimes_1;
				if ((((int32_t)L_180) < ((int32_t)0)))
				{
					goto IL_0356_1;
				}
			}
			{
				int32_t L_181 = V_10;
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_182 = V_6;
				int32_t L_183 = V_8;
				NullCheck(L_182);
				int32_t L_184 = L_183;
				ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
				NullCheck(L_185);
				int32_t L_186 = L_185->___repeatTimes_1;
				G_B51_0 = ((((int32_t)((((int32_t)L_181) > ((int32_t)L_186))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0357_1;
			}

IL_0356_1:
			{
				G_B51_0 = 1;
			}

IL_0357_1:
			{
				G_B53_0 = G_B51_0;
				goto IL_035a_1;
			}

IL_0359_1:
			{
				G_B53_0 = 0;
			}

IL_035a_1:
			{
				V_28 = (bool)G_B53_0;
				bool L_187 = V_28;
				if (L_187)
				{
					goto IL_008f_1;
				}
			}

IL_0363_1:
			{
				// for (int j = 0; j < possibleMoves.Length; j++)
				int32_t L_188 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_188, 1));
			}

IL_036a_1:
			{
				// for (int j = 0; j < possibleMoves.Length; j++)
				int32_t L_189 = V_8;
				ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_190 = V_6;
				NullCheck(L_190);
				V_29 = (bool)((((int32_t)L_189) < ((int32_t)((int32_t)(((RuntimeArray*)L_190)->max_length))))? 1 : 0);
				bool L_191 = V_29;
				if (L_191)
				{
					goto IL_0073_1;
				}
			}
			{
			}

IL_037c_1:
			{
				// foreach(KeyValuePair<int, ChessPosition> kvp in boardDict)
				bool L_192;
				L_192 = Enumerator_MoveNext_m305925914F4F5CC03D763DADC392A2B1E979115E((&V_2), Enumerator_MoveNext_m305925914F4F5CC03D763DADC392A2B1E979115E_RuntimeMethod_var);
				if (L_192)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0399;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0399:
	{
		// return ret.ToArray();
		List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_193 = V_0;
		NullCheck(L_193);
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_194;
		L_194 = List_1_ToArray_m888B5443049E3154543F50E84D5FC9ABE8444E45(L_193, List_1_ToArray_m888B5443049E3154543F50E84D5FC9ABE8444E45_RuntimeMethod_var);
		V_30 = L_194;
		goto IL_03a3;
	}

IL_03a3:
	{
		// }
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_195 = V_30;
		return L_195;
	}
}
// System.Int32 AIManager::AlphaBeta(Chess.ChessBoardSnapshot,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AIManager_AlphaBeta_m3B027403D356A0539587F0DD219E490DAA192858 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, int32_t ___2_alpha, int32_t ___3_beta, bool ___4_maximizingPlayer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5B8A2648EC5978A181BC6866A4263C599498A1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC8B668158DB0ACDCD7A721B4E9C18DE7A8407B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDD4F39481172C78295B92273E1D4B54A0B93F051_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m039B01C799A5FA9D018547413DE1965D39C89E76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* V_2 = NULL;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	int32_t G_B18_0 = 0;
	{
		// int origAlpha = alpha;
		int32_t L_0 = ___2_alpha;
		V_0 = L_0;
		// int origBeta = beta;
		int32_t L_1 = ___3_beta;
		V_1 = L_1;
		// MinimaxNode node = new MinimaxNode();
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_2 = (MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59*)il2cpp_codegen_object_new(MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MinimaxNode__ctor_m93EAA4EB15E4F49AFD33566F68AD61436D28F5C3(L_2, NULL);
		V_2 = L_2;
		// ulong hash = boardPosition.board.ToZobristHash();
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_3 = ___0_boardPosition;
		NullCheck(L_3);
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_4 = L_3->___board_4;
		il2cpp_codegen_runtime_class_init_inline(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = ZobristHash_ToZobristHash_mAB48FB9229AA1F46B209FF4D70C1B59B63CF8DE2(L_4, NULL);
		V_3 = L_5;
		// if (tTable.ContainsKey(hash))
		Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* L_6 = __this->___tTable_24;
		uint64_t L_7 = V_3;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_mC8B668158DB0ACDCD7A721B4E9C18DE7A8407B50(L_6, L_7, Dictionary_2_ContainsKey_mC8B668158DB0ACDCD7A721B4E9C18DE7A8407B50_RuntimeMethod_var);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_00d1;
		}
	}
	{
		// node = tTable[hash];
		Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* L_10 = __this->___tTable_24;
		uint64_t L_11 = V_3;
		NullCheck(L_10);
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_12;
		L_12 = Dictionary_2_get_Item_mDD4F39481172C78295B92273E1D4B54A0B93F051(L_10, L_11, Dictionary_2_get_Item_mDD4F39481172C78295B92273E1D4B54A0B93F051_RuntimeMethod_var);
		V_2 = L_12;
		// if(node.depth >= depth)
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___depth_1;
		int32_t L_15 = ___1_depth;
		V_6 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00d0;
		}
	}
	{
		// switch(node.flag)
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___flag_2;
		V_8 = L_18;
		int32_t L_19 = V_8;
		V_7 = L_19;
		int32_t L_20 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (-1))))
		{
			case 0:
			{
				goto IL_0081;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_009a;
			}
		}
	}
	{
		goto IL_00b4;
	}

IL_0074:
	{
		// return node.eval;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = L_21->___eval_3;
		V_9 = L_22;
		goto IL_027d;
	}

IL_0081:
	{
		// if (node.eval > alpha)
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = L_23->___eval_3;
		int32_t L_25 = ___2_alpha;
		V_10 = (bool)((((int32_t)L_24) > ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_10;
		if (!L_26)
		{
			goto IL_0098;
		}
	}
	{
		// alpha = node.eval;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = L_27->___eval_3;
		___2_alpha = L_28;
	}

IL_0098:
	{
		// break;
		goto IL_00b4;
	}

IL_009a:
	{
		// if (node.eval < beta)
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = L_29->___eval_3;
		int32_t L_31 = ___3_beta;
		V_11 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_00b2;
		}
	}
	{
		// beta = node.eval;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34 = L_33->___eval_3;
		___3_beta = L_34;
	}

IL_00b2:
	{
		// break;
		goto IL_00b4;
	}

IL_00b4:
	{
		// if (beta <= alpha)
		int32_t L_35 = ___3_beta;
		int32_t L_36 = ___2_alpha;
		V_12 = (bool)((((int32_t)((((int32_t)L_35) > ((int32_t)L_36))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_00cf;
		}
	}
	{
		// return node.eval;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39 = L_38->___eval_3;
		V_9 = L_39;
		goto IL_027d;
	}

IL_00cf:
	{
	}

IL_00d0:
	{
	}

IL_00d1:
	{
		// if (depth <= 0 || boardPosition.IsEndGame())
		int32_t L_40 = ___1_depth;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}
	{
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_41 = ___0_boardPosition;
		bool L_42;
		L_42 = ChessBoardSnapshotExtention_IsEndGame_m78153E0FFBC3A9BFB704B18A8104DA7D277540A2(L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		goto IL_00de;
	}

IL_00dd:
	{
		G_B18_0 = 1;
	}

IL_00de:
	{
		V_13 = (bool)G_B18_0;
		bool L_43 = V_13;
		if (!L_43)
		{
			goto IL_00fd;
		}
	}
	{
		// return GameManager.Instance.CalculateScore(boardPosition, playerType);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_44;
		L_44 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_45 = ___0_boardPosition;
		int32_t L_46 = __this->___playerType_6;
		NullCheck(L_44);
		int32_t L_47;
		L_47 = GameManager_CalculateScore_m343377682A8998263218557066762C66FE433BF1(L_44, L_45, L_46, NULL);
		V_9 = L_47;
		goto IL_027d;
	}

IL_00fd:
	{
		// int val = 0;
		V_4 = 0;
		// if (maximizingPlayer)
		bool L_48 = ___4_maximizingPlayer;
		V_14 = L_48;
		bool L_49 = V_14;
		if (!L_49)
		{
			goto IL_0180;
		}
	}
	{
		// val = int.MinValue;
		V_4 = ((int32_t)-2147483648LL);
		// ChessBoardSnapshot[] nextBoardPositions = FindPossibleMoves(boardPosition, playerType);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_50 = ___0_boardPosition;
		int32_t L_51 = __this->___playerType_6;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_52;
		L_52 = AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE(__this, L_50, L_51, NULL);
		V_15 = L_52;
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		V_16 = 0;
		goto IL_016f;
	}

IL_0124:
	{
		// int newValue = AlphaBeta(nextBoardPositions[i], depth - 1, alpha, beta, false);
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_53 = V_15;
		int32_t L_54 = V_16;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		int32_t L_57 = ___1_depth;
		int32_t L_58 = ___2_alpha;
		int32_t L_59 = ___3_beta;
		int32_t L_60;
		L_60 = AIManager_AlphaBeta_m3B027403D356A0539587F0DD219E490DAA192858(__this, L_56, ((int32_t)il2cpp_codegen_subtract(L_57, 1)), L_58, L_59, (bool)0, NULL);
		V_17 = L_60;
		// if (newValue > val)
		int32_t L_61 = V_17;
		int32_t L_62 = V_4;
		V_18 = (bool)((((int32_t)L_61) > ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_18;
		if (!L_63)
		{
			goto IL_0149;
		}
	}
	{
		// val = newValue;
		int32_t L_64 = V_17;
		V_4 = L_64;
	}

IL_0149:
	{
		// if (val > alpha)
		int32_t L_65 = V_4;
		int32_t L_66 = ___2_alpha;
		V_19 = (bool)((((int32_t)L_65) > ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_19;
		if (!L_67)
		{
			goto IL_0158;
		}
	}
	{
		// alpha = val;
		int32_t L_68 = V_4;
		___2_alpha = L_68;
	}

IL_0158:
	{
		// if (beta <= alpha)
		int32_t L_69 = ___3_beta;
		int32_t L_70 = ___2_alpha;
		V_20 = (bool)((((int32_t)((((int32_t)L_69) > ((int32_t)L_70))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_71 = V_20;
		if (!L_71)
		{
			goto IL_0168;
		}
	}
	{
		// break;
		goto IL_017d;
	}

IL_0168:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_72 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_016f:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_73 = V_16;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_74 = V_15;
		NullCheck(L_74);
		V_21 = (bool)((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))))? 1 : 0);
		bool L_75 = V_21;
		if (L_75)
		{
			goto IL_0124;
		}
	}

IL_017d:
	{
		goto IL_01fc;
	}

IL_0180:
	{
		// val = int.MaxValue;
		V_4 = ((int32_t)2147483647LL);
		// ChessBoardSnapshot[] nextBoardPositions = FindPossibleMoves(boardPosition, playerType.ToOpposite());
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_76 = ___0_boardPosition;
		int32_t L_77 = __this->___playerType_6;
		int32_t L_78;
		L_78 = ChessPlayerTypeExtension_ToOpposite_m5EB6544B961A2B1BDBF61D2DF08C3B5596525A1A(L_77, NULL);
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_79;
		L_79 = AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE(__this, L_76, L_78, NULL);
		V_22 = L_79;
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		V_23 = 0;
		goto IL_01ed;
	}

IL_01a1:
	{
		// int newValue = AlphaBeta(nextBoardPositions[i], depth - 1, alpha, beta, true);
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_80 = V_22;
		int32_t L_81 = V_23;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = ___1_depth;
		int32_t L_85 = ___2_alpha;
		int32_t L_86 = ___3_beta;
		int32_t L_87;
		L_87 = AIManager_AlphaBeta_m3B027403D356A0539587F0DD219E490DAA192858(__this, L_83, ((int32_t)il2cpp_codegen_subtract(L_84, 1)), L_85, L_86, (bool)1, NULL);
		V_24 = L_87;
		// if (newValue < val)
		int32_t L_88 = V_24;
		int32_t L_89 = V_4;
		V_25 = (bool)((((int32_t)L_88) < ((int32_t)L_89))? 1 : 0);
		bool L_90 = V_25;
		if (!L_90)
		{
			goto IL_01c6;
		}
	}
	{
		// val = newValue;
		int32_t L_91 = V_24;
		V_4 = L_91;
	}

IL_01c6:
	{
		// if (val < beta)
		int32_t L_92 = V_4;
		int32_t L_93 = ___3_beta;
		V_26 = (bool)((((int32_t)L_92) < ((int32_t)L_93))? 1 : 0);
		bool L_94 = V_26;
		if (!L_94)
		{
			goto IL_01d6;
		}
	}
	{
		// beta = val;
		int32_t L_95 = V_4;
		___3_beta = L_95;
	}

IL_01d6:
	{
		// if (beta <= alpha)
		int32_t L_96 = ___3_beta;
		int32_t L_97 = ___2_alpha;
		V_27 = (bool)((((int32_t)((((int32_t)L_96) > ((int32_t)L_97))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_98 = V_27;
		if (!L_98)
		{
			goto IL_01e6;
		}
	}
	{
		// break;
		goto IL_01fb;
	}

IL_01e6:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_99 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_01ed:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_100 = V_23;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_101 = V_22;
		NullCheck(L_101);
		V_28 = (bool)((((int32_t)L_100) < ((int32_t)((int32_t)(((RuntimeArray*)L_101)->max_length))))? 1 : 0);
		bool L_102 = V_28;
		if (L_102)
		{
			goto IL_01a1;
		}
	}

IL_01fb:
	{
	}

IL_01fc:
	{
		// node.hash = hash;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_103 = V_2;
		uint64_t L_104 = V_3;
		NullCheck(L_103);
		L_103->___hash_0 = L_104;
		// node.eval = val;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_105 = V_2;
		int32_t L_106 = V_4;
		NullCheck(L_105);
		L_105->___eval_3 = L_106;
		// if(val <= origAlpha)
		int32_t L_107 = V_4;
		int32_t L_108 = V_0;
		V_29 = (bool)((((int32_t)((((int32_t)L_107) > ((int32_t)L_108))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_109 = V_29;
		if (!L_109)
		{
			goto IL_0222;
		}
	}
	{
		// node.flag = MinimaxNodeFlag.UpperBound;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_110 = V_2;
		NullCheck(L_110);
		L_110->___flag_2 = 1;
		goto IL_0240;
	}

IL_0222:
	{
		// else if(val >= origBeta)
		int32_t L_111 = V_4;
		int32_t L_112 = V_1;
		V_30 = (bool)((((int32_t)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_113 = V_30;
		if (!L_113)
		{
			goto IL_0239;
		}
	}
	{
		// node.flag = MinimaxNodeFlag.LowerBound;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_114 = V_2;
		NullCheck(L_114);
		L_114->___flag_2 = (-1);
		goto IL_0240;
	}

IL_0239:
	{
		// node.flag = MinimaxNodeFlag.Exact;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_115 = V_2;
		NullCheck(L_115);
		L_115->___flag_2 = 0;
	}

IL_0240:
	{
		// node.depth = depth;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_116 = V_2;
		int32_t L_117 = ___1_depth;
		NullCheck(L_116);
		L_116->___depth_1 = L_117;
		// if(tTable.ContainsKey(hash))
		Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* L_118 = __this->___tTable_24;
		uint64_t L_119 = V_3;
		NullCheck(L_118);
		bool L_120;
		L_120 = Dictionary_2_ContainsKey_mC8B668158DB0ACDCD7A721B4E9C18DE7A8407B50(L_118, L_119, Dictionary_2_ContainsKey_mC8B668158DB0ACDCD7A721B4E9C18DE7A8407B50_RuntimeMethod_var);
		V_31 = L_120;
		bool L_121 = V_31;
		if (!L_121)
		{
			goto IL_0269;
		}
	}
	{
		// tTable[hash] = node;
		Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* L_122 = __this->___tTable_24;
		uint64_t L_123 = V_3;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_124 = V_2;
		NullCheck(L_122);
		Dictionary_2_set_Item_m039B01C799A5FA9D018547413DE1965D39C89E76(L_122, L_123, L_124, Dictionary_2_set_Item_m039B01C799A5FA9D018547413DE1965D39C89E76_RuntimeMethod_var);
		goto IL_0277;
	}

IL_0269:
	{
		// tTable.Add(hash, node);
		Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* L_125 = __this->___tTable_24;
		uint64_t L_126 = V_3;
		MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* L_127 = V_2;
		NullCheck(L_125);
		Dictionary_2_Add_m5B8A2648EC5978A181BC6866A4263C599498A1D8(L_125, L_126, L_127, Dictionary_2_Add_m5B8A2648EC5978A181BC6866A4263C599498A1D8_RuntimeMethod_var);
	}

IL_0277:
	{
		// return val;
		int32_t L_128 = V_4;
		V_9 = L_128;
		goto IL_027d;
	}

IL_027d:
	{
		// }
		int32_t L_129 = V_9;
		return L_129;
	}
}
// System.Collections.IEnumerator AIManager::IterativeDeepeningSearch(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIManager_IterativeDeepeningSearch_m195A353F4688A374F20D059FA501C8A944AAD717 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* L_0 = (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934*)il2cpp_codegen_object_new(U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIterativeDeepeningSearchU3Ed__27__ctor_m0AA6A1C8D33218D6350BC4C49B6BF3EC1F984FEC(L_0, 0, NULL);
		U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* L_2 = L_1;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_3 = ___0_boardPosition;
		NullCheck(L_2);
		L_2->___boardPosition_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___boardPosition_2), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator AIManager::MinimaxAB(Chess.ChessBoardSnapshot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIManager_MinimaxAB_m493EDE9D60BABC9BEBF5CEF7868F499CBC4B1189 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* L_0 = (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC*)il2cpp_codegen_object_new(U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMinimaxABU3Ed__28__ctor_mA410743E7EBE4D033A3D5731C1FFC220EF86D9FB(L_0, 0, NULL);
		U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* L_2 = L_1;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_3 = ___0_boardPosition;
		NullCheck(L_2);
		L_2->___boardPosition_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___boardPosition_2), (void*)L_3);
		U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* L_4 = L_2;
		int32_t L_5 = ___1_depth;
		NullCheck(L_4);
		L_4->___depth_3 = L_5;
		return L_4;
	}
}
// System.Collections.IEnumerator AIManager::Minimax(Chess.ChessBoardSnapshot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIManager_Minimax_mBCE91ABCCC90B8ECF153B8AB781496FDF8F331C3 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* L_0 = (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D*)il2cpp_codegen_object_new(U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMinimaxU3Ed__29__ctor_m932D2BED3D6ED9C06C63396EE4F6E45F1FE3684B(L_0, 0, NULL);
		U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* L_2 = L_1;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_3 = ___0_boardPosition;
		NullCheck(L_2);
		L_2->___boardPosition_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___boardPosition_2), (void*)L_3);
		U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* L_4 = L_2;
		int32_t L_5 = ___1_depth;
		NullCheck(L_4);
		L_4->___depth_3 = L_5;
		return L_4;
	}
}
// System.Int32 AIManager::Min(Chess.ChessBoardSnapshot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AIManager_Min_mDE56EDF6421728289F104AA1116FBB5E933A0DBA (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		// if (depth <= 0 || boardPosition.IsEndGame())
		int32_t L_0 = ___1_depth;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1 = ___0_boardPosition;
		bool L_2;
		L_2 = ChessBoardSnapshotExtention_IsEndGame_m78153E0FFBC3A9BFB704B18A8104DA7D277540A2(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return GameManager.Instance.CalculateScore(boardPosition, playerType);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4;
		L_4 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_5 = ___0_boardPosition;
		int32_t L_6 = __this->___playerType_6;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = GameManager_CalculateScore_m343377682A8998263218557066762C66FE433BF1(L_4, L_5, L_6, NULL);
		V_3 = L_7;
		goto IL_007f;
	}

IL_0027:
	{
		// int lowestScore = int.MaxValue;
		V_0 = ((int32_t)2147483647LL);
		// ChessBoardSnapshot[] nextBoardPositions = FindPossibleMoves(boardPosition, playerType.ToOpposite());
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_8 = ___0_boardPosition;
		int32_t L_9 = __this->___playerType_6;
		int32_t L_10;
		L_10 = ChessPlayerTypeExtension_ToOpposite_m5EB6544B961A2B1BDBF61D2DF08C3B5596525A1A(L_9, NULL);
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_11;
		L_11 = AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE(__this, L_8, L_10, NULL);
		V_1 = L_11;
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		V_4 = 0;
		goto IL_006e;
	}

IL_0045:
	{
		// ChessBoardSnapshot board = nextBoardPositions[i];
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		// int score = Max(board, depth - 1);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_16 = V_5;
		int32_t L_17 = ___1_depth;
		int32_t L_18;
		L_18 = AIManager_Max_m6BA69290CF2A97AF298366412D32D8410FF66863(__this, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), NULL);
		V_6 = L_18;
		// if (score < lowestScore)
		int32_t L_19 = V_6;
		int32_t L_20 = V_0;
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		// lowestScore = score;
		int32_t L_22 = V_6;
		V_0 = L_22;
	}

IL_0067:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_24 = V_4;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_25 = V_1;
		NullCheck(L_25);
		V_8 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_0045;
		}
	}
	{
		// return lowestScore;
		int32_t L_27 = V_0;
		V_3 = L_27;
		goto IL_007f;
	}

IL_007f:
	{
		// }
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Int32 AIManager::Max(Chess.ChessBoardSnapshot,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AIManager_Max_m6BA69290CF2A97AF298366412D32D8410FF66863 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardPosition, int32_t ___1_depth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		// if (depth <= 0 || boardPosition.IsEndGame())
		int32_t L_0 = ___1_depth;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1 = ___0_boardPosition;
		bool L_2;
		L_2 = ChessBoardSnapshotExtention_IsEndGame_m78153E0FFBC3A9BFB704B18A8104DA7D277540A2(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return GameManager.Instance.CalculateScore(boardPosition, playerType);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4;
		L_4 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_5 = ___0_boardPosition;
		int32_t L_6 = __this->___playerType_6;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = GameManager_CalculateScore_m343377682A8998263218557066762C66FE433BF1(L_4, L_5, L_6, NULL);
		V_3 = L_7;
		goto IL_007a;
	}

IL_0027:
	{
		// int highestScore = int.MinValue;
		V_0 = ((int32_t)-2147483648LL);
		// ChessBoardSnapshot[] nextBoardPositions = FindPossibleMoves(boardPosition, playerType);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_8 = ___0_boardPosition;
		int32_t L_9 = __this->___playerType_6;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_10;
		L_10 = AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE(__this, L_8, L_9, NULL);
		V_1 = L_10;
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		V_4 = 0;
		goto IL_0069;
	}

IL_0040:
	{
		// ChessBoardSnapshot board = nextBoardPositions[i];
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_11 = V_1;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		// int score = Min(board, depth - 1);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_15 = V_5;
		int32_t L_16 = ___1_depth;
		int32_t L_17;
		L_17 = AIManager_Min_mDE56EDF6421728289F104AA1116FBB5E933A0DBA(__this, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		V_6 = L_17;
		// if (score > highestScore)
		int32_t L_18 = V_6;
		int32_t L_19 = V_0;
		V_7 = (bool)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0062;
		}
	}
	{
		// highestScore = score;
		int32_t L_21 = V_6;
		V_0 = L_21;
	}

IL_0062:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_23 = V_4;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_24 = V_1;
		NullCheck(L_24);
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0040;
		}
	}
	{
		// return highestScore;
		int32_t L_26 = V_0;
		V_3 = L_26;
		goto IL_007a;
	}

IL_007a:
	{
		// }
		int32_t L_27 = V_3;
		return L_27;
	}
}
// System.Void AIManager::GeneratePossibleMoves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_GeneratePossibleMoves_m12C64131CAB7C4C844C002D4B16BD04EC05A1DCD (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPlayerType_tAFBD67264B5FF9211D5529EAC0291E412B68A285_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1390CB7C4438135EB22A1A417322368DDA2433E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral390FB68957FC7D3E84C7C9E1DA9F2A026E0CA642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CBA8A525F1361A478D370BCC586BBE6308D0FCE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// outcomes = FindPossibleMoves(GameManager.Instance.LatestSnapshot, playerType);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1;
		L_1 = GameManager_get_LatestSnapshot_m273D36B370E57580224E9702E0309825C1A40465(L_0, NULL);
		int32_t L_2 = __this->___playerType_6;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_3;
		L_3 = AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE(__this, L_1, L_2, NULL);
		__this->___outcomes_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outcomes_12), (void*)L_3);
		// Debug.Log("Generated possible moves for " + playerType + " Player (" + outcomes.Length + " outcomes)");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral4CBA8A525F1361A478D370BCC586BBE6308D0FCE);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4CBA8A525F1361A478D370BCC586BBE6308D0FCE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&__this->___playerType_6);
		Il2CppFakeBox<int32_t> L_8(ChessPlayerType_tAFBD67264B5FF9211D5529EAC0291E412B68A285_il2cpp_TypeInfo_var, L_7);
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral390FB68957FC7D3E84C7C9E1DA9F2A026E0CA642);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral390FB68957FC7D3E84C7C9E1DA9F2A026E0CA642);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_12 = __this->___outcomes_12;
		NullCheck(L_12);
		V_0 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral1390CB7C4438135EB22A1A417322368DDA2433E9);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1390CB7C4438135EB22A1A417322368DDA2433E9);
		String_t* L_15;
		L_15 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// }
		return;
	}
}
// System.Void AIManager::MakeMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_MakeMove_mFF32ABD8EC2F4819EBAF9A567AE6A2D4702FC3E9 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// growth++;
		int32_t L_0 = __this->___growth_11;
		__this->___growth_11 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (growth % levelUpEvery == 0)
		int32_t L_1 = __this->___growth_11;
		int32_t L_2 = __this->___levelUpEvery_10;
		V_0 = (bool)((((int32_t)((int32_t)(L_1%L_2))) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// minDepth++;
		int32_t L_4 = __this->___minDepth_8;
		__this->___minDepth_8 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0031:
	{
		// StartCoroutine(IterativeDeepeningSearch(GameManager.Instance.LatestSnapshot));
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_5);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_6;
		L_6 = GameManager_get_LatestSnapshot_m273D36B370E57580224E9702E0309825C1A40465(L_5, NULL);
		RuntimeObject* L_7;
		L_7 = AIManager_IterativeDeepeningSearch_m195A353F4688A374F20D059FA501C8A944AAD717(__this, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// hasRunItDeep = true;
		__this->___hasRunItDeep_14 = (bool)1;
		// isRunningItDeep = true;
		__this->___isRunningItDeep_13 = (bool)1;
		// }
		return;
	}
}
// System.Void AIManager::PostGenerateMinimax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_PostGenerateMinimax_m5D8C90B4052B4E3DDC270A6D23FA869C4BC0C2E0 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.Instance.GenNextSnapshot(minimaxResult);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1 = __this->___minimaxResult_23;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_2;
		L_2 = Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_inline(Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_RuntimeMethod_var);
		NullCheck(L_0);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_3;
		L_3 = GameManager_GenNextSnapshot_m48264D28F6612CA4EF970EBE1D15A72A5A29D8CF(L_0, L_1, L_2, NULL);
		// GameManager.Instance.LoadFromSnapshot(GameManager.Instance.LatestSnapshot);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4;
		L_4 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_5);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_6;
		L_6 = GameManager_get_LatestSnapshot_m273D36B370E57580224E9702E0309825C1A40465(L_5, NULL);
		NullCheck(L_4);
		GameManager_LoadFromSnapshot_m9A4106A57AA48A922303BF98B2C430660004A95B(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void AIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_Update_mB1AFA51198B88909EA404436DE81A147353F9D57 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// GeneratePossibleMoves();
		AIManager_GeneratePossibleMoves_m12C64131CAB7C4C844C002D4B16BD04EC05A1DCD(__this, NULL);
	}

IL_0015:
	{
		// if(hasRunItDeep)
		bool L_2 = __this->___hasRunItDeep_14;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// if(!isRunningItDeep)
		bool L_4 = __this->___isRunningItDeep_13;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// PostGenerateMinimax();
		AIManager_PostGenerateMinimax_m5D8C90B4052B4E3DDC270A6D23FA869C4BC0C2E0(__this, NULL);
		// hasRunItDeep = false;
		__this->___hasRunItDeep_14 = (bool)0;
	}

IL_003d:
	{
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void AIManager::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager_OnGUI_m1077C72CCC0A1A4F8BF52DB5DA6ACAA9EE3CF192 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	{
		// gear.SetActive(isRunningItDeep);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gear_5;
		bool L_1 = __this->___isRunningItDeep_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIManager__ctor_mF8099AF2CA1A0BDFECE99DDC35CBBEFE76702336 (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA1D71F706194C614B42CCEA78EC1D882137B7F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float maxTime = 20.0f;
		__this->___maxTime_7 = (20.0f);
		// public int minDepth = 2;
		__this->___minDepth_8 = 2;
		// public int maxDepth = 40;
		__this->___maxDepth_9 = ((int32_t)40);
		// public int levelUpEvery = 10;
		__this->___levelUpEvery_10 = ((int32_t)10);
		// public int growth = 0;
		__this->___growth_11 = 0;
		// public bool isRunningItDeep = false;
		__this->___isRunningItDeep_13 = (bool)0;
		// public bool hasRunItDeep = false;
		__this->___hasRunItDeep_14 = (bool)0;
		// public bool isRunningMinimax = false;
		__this->___isRunningMinimax_15 = (bool)0;
		// public bool hasRunMinimax = false;
		__this->___hasRunMinimax_16 = (bool)0;
		// public int highestScore = int.MinValue;
		__this->___highestScore_21 = ((int32_t)-2147483648LL);
		// public int highestScoreIndex = -1;
		__this->___highestScoreIndex_22 = (-1);
		// public Dictionary<ulong, MinimaxNode> tTable = new Dictionary<ulong, MinimaxNode>();
		Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28* L_0 = (Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28*)il2cpp_codegen_object_new(Dictionary_2_tC0DBFDCBB91C4DBB90A2CE71ECC8A577AF199E28_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA1D71F706194C614B42CCEA78EC1D882137B7F01(L_0, Dictionary_2__ctor_mA1D71F706194C614B42CCEA78EC1D882137B7F01_RuntimeMethod_var);
		__this->___tTable_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tTable_24), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean AIManager::<IterativeDeepeningSearch>b__27_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AIManager_U3CIterativeDeepeningSearchU3Eb__27_0_m90D3BDE851911451F3880FF3FE1217FF7179B5DB (AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => isRunningMinimax == false);
		bool L_0 = __this->___isRunningMinimax_15;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
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
// System.Void AIManager/<IterativeDeepeningSearch>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIterativeDeepeningSearchU3Ed__27__ctor_m0AA6A1C8D33218D6350BC4C49B6BF3EC1F984FEC (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AIManager/<IterativeDeepeningSearch>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIterativeDeepeningSearchU3Ed__27_System_IDisposable_Dispose_m7CE12A387B9BBB86F957719EF209781DFCC221BF (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AIManager/<IterativeDeepeningSearch>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIterativeDeepeningSearchU3Ed__27_MoveNext_mFCD3DB3EC5A8851806C74DB453D86A40CD982853 (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AIManager_U3CIterativeDeepeningSearchU3Eb__27_0_m90D3BDE851911451F3880FF3FE1217FF7179B5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
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
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00bf;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isRunningItDeep = true;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		L_3->___isRunningItDeep_13 = (bool)1;
		// float startTime = Time.unscaledTime;
		float L_4;
		L_4 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		__this->___U3CstartTimeU3E5__1_4 = L_4;
		// bool isOutTime = false;
		__this->___U3CisOutTimeU3E5__2_5 = (bool)0;
		// for (int depth = 1; (depth <= minDepth || depth <= maxDepth && !isOutTime); depth++)
		__this->___U3CdepthU3E5__3_6 = 1;
		goto IL_0105;
	}

IL_004d:
	{
		// StartCoroutine(MinimaxAB(boardPosition, depth));
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_5 = __this->___U3CU3E4__this_3;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_6 = __this->___U3CU3E4__this_3;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_7 = __this->___boardPosition_2;
		int32_t L_8 = __this->___U3CdepthU3E5__3_6;
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = AIManager_MinimaxAB_m493EDE9D60BABC9BEBF5CEF7868F499CBC4B1189(L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_5, L_9, NULL);
		// hasRunMinimax = true;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_11 = __this->___U3CU3E4__this_3;
		NullCheck(L_11);
		L_11->___hasRunMinimax_16 = (bool)1;
		// isRunningMinimax = true;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_12 = __this->___U3CU3E4__this_3;
		NullCheck(L_12);
		L_12->___isRunningMinimax_15 = (bool)1;
		// iterativeDepth = depth;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_13 = __this->___U3CU3E4__this_3;
		int32_t L_14 = __this->___U3CdepthU3E5__3_6;
		NullCheck(L_13);
		L_13->___iterativeDepth_17 = L_14;
		// yield return new WaitUntil(() => isRunningMinimax == false);
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_15 = __this->___U3CU3E4__this_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_16 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_16, L_15, (intptr_t)((void*)AIManager_U3CIterativeDeepeningSearchU3Eb__27_0_m90D3BDE851911451F3880FF3FE1217FF7179B5DB_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_17 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_17, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bf:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// hasRunMinimax = false;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_18 = __this->___U3CU3E4__this_3;
		NullCheck(L_18);
		L_18->___hasRunMinimax_16 = (bool)0;
		// isOutTime = Time.unscaledTime - startTime >= maxTime;
		float L_19;
		L_19 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_20 = __this->___U3CstartTimeU3E5__1_4;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_21 = __this->___U3CU3E4__this_3;
		NullCheck(L_21);
		float L_22 = L_21->___maxTime_7;
		__this->___U3CisOutTimeU3E5__2_5 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_19, L_20))) >= ((float)L_22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// for (int depth = 1; (depth <= minDepth || depth <= maxDepth && !isOutTime); depth++)
		int32_t L_23 = __this->___U3CdepthU3E5__3_6;
		V_1 = L_23;
		int32_t L_24 = V_1;
		__this->___U3CdepthU3E5__3_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0105:
	{
		// for (int depth = 1; (depth <= minDepth || depth <= maxDepth && !isOutTime); depth++)
		int32_t L_25 = __this->___U3CdepthU3E5__3_6;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_26 = __this->___U3CU3E4__this_3;
		NullCheck(L_26);
		int32_t L_27 = L_26->___minDepth_8;
		if ((((int32_t)L_25) <= ((int32_t)L_27)))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_28 = __this->___U3CdepthU3E5__3_6;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_29 = __this->___U3CU3E4__this_3;
		NullCheck(L_29);
		int32_t L_30 = L_29->___maxDepth_9;
		if ((((int32_t)L_28) > ((int32_t)L_30)))
		{
			goto IL_0136;
		}
	}
	{
		bool L_31 = __this->___U3CisOutTimeU3E5__2_5;
		G_B14_0 = ((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		goto IL_0137;
	}

IL_0136:
	{
		G_B14_0 = 0;
	}

IL_0137:
	{
		G_B16_0 = G_B14_0;
		goto IL_013a;
	}

IL_0139:
	{
		G_B16_0 = 1;
	}

IL_013a:
	{
		V_2 = (bool)G_B16_0;
		bool L_32 = V_2;
		if (L_32)
		{
			goto IL_004d;
		}
	}
	{
		// isRunningItDeep = false;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_33 = __this->___U3CU3E4__this_3;
		NullCheck(L_33);
		L_33->___isRunningItDeep_13 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object AIManager/<IterativeDeepeningSearch>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIterativeDeepeningSearchU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEE71FE40CFA437BE844AE7199F018663E4BA4F21 (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AIManager/<IterativeDeepeningSearch>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIterativeDeepeningSearchU3Ed__27_System_Collections_IEnumerator_Reset_m35EF71FF609A729A33531E41A50FDCCC23518C7E (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIterativeDeepeningSearchU3Ed__27_System_Collections_IEnumerator_Reset_m35EF71FF609A729A33531E41A50FDCCC23518C7E_RuntimeMethod_var)));
	}
}
// System.Object AIManager/<IterativeDeepeningSearch>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIterativeDeepeningSearchU3Ed__27_System_Collections_IEnumerator_get_Current_mD92DED78EE4970D8F02BE01DC2676B7A2E410687 (U3CIterativeDeepeningSearchU3Ed__27_t23EA942E83357CA50EC244C51FD9228589C1D934* __this, const RuntimeMethod* method) 
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
// System.Void AIManager/<MinimaxAB>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxABU3Ed__28__ctor_mA410743E7EBE4D033A3D5731C1FFC220EF86D9FB (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AIManager/<MinimaxAB>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxABU3Ed__28_System_IDisposable_Dispose_mD0F40D8F40D90589CD30076BD1D879BDD6FCBCED (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AIManager/<MinimaxAB>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMinimaxABU3Ed__28_MoveNext_m84E8B7165649FA4F88B42A6B3A91FD3604B9A71E (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
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
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0146;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isRunningMinimax = true;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_3 = __this->___U3CU3E4__this_4;
		NullCheck(L_3);
		L_3->___isRunningMinimax_15 = (bool)1;
		// highestScore = int.MinValue;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_4 = __this->___U3CU3E4__this_4;
		NullCheck(L_4);
		L_4->___highestScore_21 = ((int32_t)-2147483648LL);
		// highestScoreIndex = -1;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_5 = __this->___U3CU3E4__this_4;
		NullCheck(L_5);
		L_5->___highestScoreIndex_22 = (-1);
		// ChessBoardSnapshot[] nextBoardPositions = FindPossibleMoves(boardPosition, playerType);
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_6 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_7 = __this->___boardPosition_2;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_8 = __this->___U3CU3E4__this_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___playerType_6;
		NullCheck(L_6);
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_10;
		L_10 = AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE(L_6, L_7, L_9, NULL);
		__this->___U3CnextBoardPositionsU3E5__1_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnextBoardPositionsU3E5__1_5), (void*)L_10);
		// totalIterations = nextBoardPositions.Length;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_11 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_12 = __this->___U3CnextBoardPositionsU3E5__1_5;
		NullCheck(L_12);
		NullCheck(L_11);
		L_11->___totalIterations_20 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		__this->___U3CiU3E5__2_6 = 0;
		goto IL_015e;
	}

IL_008c:
	{
		// int score = AlphaBeta(nextBoardPositions[i], depth, int.MinValue, int.MaxValue, false);
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_13 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_14 = __this->___U3CnextBoardPositionsU3E5__1_5;
		int32_t L_15 = __this->___U3CiU3E5__2_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = __this->___depth_3;
		NullCheck(L_13);
		int32_t L_19;
		L_19 = AIManager_AlphaBeta_m3B027403D356A0539587F0DD219E490DAA192858(L_13, L_17, L_18, ((int32_t)-2147483648LL), ((int32_t)2147483647LL), (bool)0, NULL);
		__this->___U3CscoreU3E5__3_7 = L_19;
		// if (score > highestScore)
		int32_t L_20 = __this->___U3CscoreU3E5__3_7;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_21 = __this->___U3CU3E4__this_4;
		NullCheck(L_21);
		int32_t L_22 = L_21->___highestScore_21;
		V_1 = (bool)((((int32_t)L_20) > ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_00f7;
		}
	}
	{
		// highestScore = score;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_24 = __this->___U3CU3E4__this_4;
		int32_t L_25 = __this->___U3CscoreU3E5__3_7;
		NullCheck(L_24);
		L_24->___highestScore_21 = L_25;
		// highestScoreIndex = i;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_26 = __this->___U3CU3E4__this_4;
		int32_t L_27 = __this->___U3CiU3E5__2_6;
		NullCheck(L_26);
		L_26->___highestScoreIndex_22 = L_27;
	}

IL_00f7:
	{
		// lastScore = score;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_28 = __this->___U3CU3E4__this_4;
		int32_t L_29 = __this->___U3CscoreU3E5__3_7;
		NullCheck(L_28);
		L_28->___lastScore_18 = L_29;
		// lastIteration = i;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_30 = __this->___U3CU3E4__this_4;
		int32_t L_31 = __this->___U3CiU3E5__2_6;
		NullCheck(L_30);
		L_30->___lastIteration_19 = L_31;
		// minimaxResult = nextBoardPositions[highestScoreIndex];
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_32 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_33 = __this->___U3CnextBoardPositionsU3E5__1_5;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_34 = __this->___U3CU3E4__this_4;
		NullCheck(L_34);
		int32_t L_35 = L_34->___highestScoreIndex_22;
		NullCheck(L_33);
		int32_t L_36 = L_35;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_32);
		L_32->___minimaxResult_23 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___minimaxResult_23), (void*)L_37);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0146:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_38 = __this->___U3CiU3E5__2_6;
		V_2 = L_38;
		int32_t L_39 = V_2;
		__this->___U3CiU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_015e:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_40 = __this->___U3CiU3E5__2_6;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_41 = __this->___U3CnextBoardPositionsU3E5__1_5;
		NullCheck(L_41);
		V_3 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))? 1 : 0);
		bool L_42 = V_3;
		if (L_42)
		{
			goto IL_008c;
		}
	}
	{
		// isRunningMinimax = false;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_43 = __this->___U3CU3E4__this_4;
		NullCheck(L_43);
		L_43->___isRunningMinimax_15 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object AIManager/<MinimaxAB>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMinimaxABU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m91CA55007A45D161CFE11CA192114AE455A88934 (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AIManager/<MinimaxAB>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxABU3Ed__28_System_Collections_IEnumerator_Reset_m20836B8D041DE67DD74B48E8BE41FB0D817C6BC4 (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMinimaxABU3Ed__28_System_Collections_IEnumerator_Reset_m20836B8D041DE67DD74B48E8BE41FB0D817C6BC4_RuntimeMethod_var)));
	}
}
// System.Object AIManager/<MinimaxAB>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMinimaxABU3Ed__28_System_Collections_IEnumerator_get_Current_m604C3A1094FA20C5382CA915E4D98E0794B15FBC (U3CMinimaxABU3Ed__28_t800A9C10B5D53D91E798EC0FE5169BF028394CBC* __this, const RuntimeMethod* method) 
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
// System.Void AIManager/<Minimax>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxU3Ed__29__ctor_m932D2BED3D6ED9C06C63396EE4F6E45F1FE3684B (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AIManager/<Minimax>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxU3Ed__29_System_IDisposable_Dispose_mA4E49BAC72ED5FA7243BF36B0E4B3A29DB6869BE (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AIManager/<Minimax>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMinimaxU3Ed__29_MoveNext_m76685FFA298060B9FCF73AC688CB3AA5BB2EA0DE (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
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
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0147;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isRunningMinimax = true;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_3 = __this->___U3CU3E4__this_4;
		NullCheck(L_3);
		L_3->___isRunningMinimax_15 = (bool)1;
		// highestScore = int.MinValue;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_4 = __this->___U3CU3E4__this_4;
		NullCheck(L_4);
		L_4->___highestScore_21 = ((int32_t)-2147483648LL);
		// highestScoreIndex = -1;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_5 = __this->___U3CU3E4__this_4;
		NullCheck(L_5);
		L_5->___highestScoreIndex_22 = (-1);
		// ChessBoardSnapshot[] nextBoardPositions = FindPossibleMoves(boardPosition, playerType);
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_6 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_7 = __this->___boardPosition_2;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_8 = __this->___U3CU3E4__this_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___playerType_6;
		NullCheck(L_6);
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_10;
		L_10 = AIManager_FindPossibleMoves_m281E98E4DA59FC34B4028B0B791698876CAF5BAE(L_6, L_7, L_9, NULL);
		__this->___U3CnextBoardPositionsU3E5__1_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnextBoardPositionsU3E5__1_5), (void*)L_10);
		// totalIterations = nextBoardPositions.Length;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_11 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_12 = __this->___U3CnextBoardPositionsU3E5__1_5;
		NullCheck(L_12);
		NullCheck(L_11);
		L_11->___totalIterations_20 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		__this->___U3CiU3E5__2_6 = 0;
		goto IL_0166;
	}

IL_008c:
	{
		// ChessBoardSnapshot board = nextBoardPositions[i];
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_13 = __this->___U3CnextBoardPositionsU3E5__1_5;
		int32_t L_14 = __this->___U3CiU3E5__2_6;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		__this->___U3CboardU3E5__3_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CboardU3E5__3_7), (void*)L_16);
		// int score = Min(board, depth);
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_17 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_18 = __this->___U3CboardU3E5__3_7;
		int32_t L_19 = __this->___depth_3;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = AIManager_Min_mDE56EDF6421728289F104AA1116FBB5E933A0DBA(L_17, L_18, L_19, NULL);
		__this->___U3CscoreU3E5__4_8 = L_20;
		// if (score > highestScore)
		int32_t L_21 = __this->___U3CscoreU3E5__4_8;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_22 = __this->___U3CU3E4__this_4;
		NullCheck(L_22);
		int32_t L_23 = L_22->___highestScore_21;
		V_1 = (bool)((((int32_t)L_21) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_00f8;
		}
	}
	{
		// highestScore = score;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_25 = __this->___U3CU3E4__this_4;
		int32_t L_26 = __this->___U3CscoreU3E5__4_8;
		NullCheck(L_25);
		L_25->___highestScore_21 = L_26;
		// highestScoreIndex = i;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_27 = __this->___U3CU3E4__this_4;
		int32_t L_28 = __this->___U3CiU3E5__2_6;
		NullCheck(L_27);
		L_27->___highestScoreIndex_22 = L_28;
	}

IL_00f8:
	{
		// lastScore = score;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_29 = __this->___U3CU3E4__this_4;
		int32_t L_30 = __this->___U3CscoreU3E5__4_8;
		NullCheck(L_29);
		L_29->___lastScore_18 = L_30;
		// lastIteration = i;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_31 = __this->___U3CU3E4__this_4;
		int32_t L_32 = __this->___U3CiU3E5__2_6;
		NullCheck(L_31);
		L_31->___lastIteration_19 = L_32;
		// minimaxResult = nextBoardPositions[highestScoreIndex];
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_33 = __this->___U3CU3E4__this_4;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_34 = __this->___U3CnextBoardPositionsU3E5__1_5;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_35 = __this->___U3CU3E4__this_4;
		NullCheck(L_35);
		int32_t L_36 = L_35->___highestScoreIndex_22;
		NullCheck(L_34);
		int32_t L_37 = L_36;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_33);
		L_33->___minimaxResult_23 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___minimaxResult_23), (void*)L_38);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0147:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CboardU3E5__3_7 = (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CboardU3E5__3_7), (void*)(ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C*)NULL);
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_39 = __this->___U3CiU3E5__2_6;
		V_2 = L_39;
		int32_t L_40 = V_2;
		__this->___U3CiU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0166:
	{
		// for (int i = 0; i < nextBoardPositions.Length; i++)
		int32_t L_41 = __this->___U3CiU3E5__2_6;
		ChessBoardSnapshotU5BU5D_t53770431F8E161A588EBF7A3C0DEF27CDEDD7FBC* L_42 = __this->___U3CnextBoardPositionsU3E5__1_5;
		NullCheck(L_42);
		V_3 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))? 1 : 0);
		bool L_43 = V_3;
		if (L_43)
		{
			goto IL_008c;
		}
	}
	{
		// isRunningMinimax = false;
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_44 = __this->___U3CU3E4__this_4;
		NullCheck(L_44);
		L_44->___isRunningMinimax_15 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object AIManager/<Minimax>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMinimaxU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m16CAA966FC74B4FBD9898296C98E80D795371432 (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AIManager/<Minimax>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinimaxU3Ed__29_System_Collections_IEnumerator_Reset_m070E1DC3E3B23117A74A8914887C39966BB6BE7B (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMinimaxU3Ed__29_System_Collections_IEnumerator_Reset_m070E1DC3E3B23117A74A8914887C39966BB6BE7B_RuntimeMethod_var)));
	}
}
// System.Object AIManager/<Minimax>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMinimaxU3Ed__29_System_Collections_IEnumerator_get_Current_mF36EC14D8C265634008D14E1AB71DC84EA28A8EE (U3CMinimaxU3Ed__29_t5D7E04C680CA6E1C9DF5954ED192EE11F01DF03D* __this, const RuntimeMethod* method) 
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
// System.Void ChessPieceProfileDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfileDictionary__ctor_m6918B81D8F6350DC41E661ECBDF7B5D88D209738 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ChessPieceProfileDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// wrappedDictionary = new Dictionary<ChessPieceType, ChessPieceProfile>();
		Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F* L_0 = (Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F*)il2cpp_codegen_object_new(Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343(L_0, Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343_RuntimeMethod_var);
		__this->___wrappedDictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wrappedDictionary_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void ChessPieceProfileDictionary::Init(Chess.ChessPieceProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfileDictionary_Init_m869F7FD08575F4A274633F00EE11BB431289967E (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F* ___0_profiles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// wrappedDictionary = new Dictionary<ChessPieceType, ChessPieceProfile>();
		Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F* L_0 = (Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F*)il2cpp_codegen_object_new(Dictionary_2_tF6A86FACEB19B8F1F8D7198087E05EE732AC9F8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343(L_0, Dictionary_2__ctor_mF5FAB2862AB8F7C6A8D374889DFB51F3A14C8343_RuntimeMethod_var);
		__this->___wrappedDictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wrappedDictionary_0), (void*)L_0);
		// for (int i = 0; i < profiles.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		// Add(profiles[i].type, profiles[i]);
		ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F* L_1 = ___0_profiles;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		int32_t L_5 = L_4->___type_4;
		ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F* L_6 = ___0_profiles;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		VirtualActionInvoker2< int32_t, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* >::Invoke(4 /* System.Void ChessPieceProfileDictionary::Add(Chess.ChessPieceType,Chess.ChessPieceProfile) */, __this, L_5, L_9);
		// for (int i = 0; i < profiles.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < profiles.Length; i++)
		int32_t L_11 = V_0;
		ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F* L_12 = ___0_profiles;
		NullCheck(L_12);
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChessPieceProfileDictionary::Add(Chess.ChessPieceType,Chess.ChessPieceProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfileDictionary_Add_m4C8944089D525D7E47AF598372D9076677A66B5C (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, int32_t ___0_key, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrappedDictionary.Add(key, value);
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		int32_t L_1 = ___0_key;
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_2 = ___1_value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::Add(TKey,TValue) */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Boolean ChessPieceProfileDictionary::ContainsKey(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceProfileDictionary_ContainsKey_m77C5C06295E9D1F8B677D13518FDD86CF0514F62 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return wrappedDictionary.ContainsKey(key);
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::ContainsKey(TKey) */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<Chess.ChessPieceType> ChessPieceProfileDictionary::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChessPieceProfileDictionary_get_Keys_m9B2EE3F124615B9AF9375EFFB92CAC1C2CECD3FF (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return wrappedDictionary.Keys;
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::get_Keys() */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ChessPieceProfileDictionary::Remove(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceProfileDictionary_Remove_mEB4F51F2732158BC3B8349D3EC145DF981D3EF42 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return wrappedDictionary.Remove(key);
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::Remove(TKey) */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean ChessPieceProfileDictionary::TryGetValue(Chess.ChessPieceType,Chess.ChessPieceProfile&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceProfileDictionary_TryGetValue_mEE08CB3C3E61288DCC6CB1BA30265DA765AFED85 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, int32_t ___0_key, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889** ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return wrappedDictionary.TryGetValue(key, out value);
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		int32_t L_1 = ___0_key;
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889** L_2 = ___1_value;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, int32_t, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::TryGetValue(TKey,TValue&) */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Collections.Generic.ICollection`1<Chess.ChessPieceProfile> ChessPieceProfileDictionary::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChessPieceProfileDictionary_get_Values_m3E3930CEBA58E21458BD4CF8EBFABDFFF6494DC5 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return wrappedDictionary.Values;
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::get_Values() */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// Chess.ChessPieceProfile ChessPieceProfileDictionary::get_Item(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* ChessPieceProfileDictionary_get_Item_m562BF27550F1DC833F9358069A373C6EFA749996 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* V_0 = NULL;
	{
		// return wrappedDictionary[key];
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_2;
		L_2 = InterfaceFuncInvoker1< ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::get_Item(TKey) */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_3 = V_0;
		return L_3;
	}
}
// System.Void ChessPieceProfileDictionary::set_Item(Chess.ChessPieceType,Chess.ChessPieceProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfileDictionary_set_Item_m632837472893B4C1692023A412962578AF1D0648 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, int32_t ___0_key, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrappedDictionary[key] = value;
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		int32_t L_1 = ___0_key;
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_2 = ___1_value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<Chess.ChessPieceType,Chess.ChessPieceProfile>::set_Item(TKey,TValue) */, IDictionary_2_t164966539E316696FFE6637C6D3C0F9B16C6A5C7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void ChessPieceProfileDictionary::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfileDictionary_Clear_m2E4431FB85F51C2F400AD865AA148CE27C098475 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6E701EEF37B9BE6D74C944D8A0061CA404942A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wrappedDictionary.Clear();
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Chess.ChessPieceType,Chess.ChessPieceProfile>>::Clear() */, ICollection_1_t6E701EEF37B9BE6D74C944D8A0061CA404942A48_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Int32 ChessPieceProfileDictionary::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPieceProfileDictionary_get_Count_mD84266587C38D9EFECD6B6E056C254936AD0105F (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6E701EEF37B9BE6D74C944D8A0061CA404942A48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return wrappedDictionary.Count;
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<Chess.ChessPieceType,Chess.ChessPieceProfile>>::get_Count() */, ICollection_1_t6E701EEF37B9BE6D74C944D8A0061CA404942A48_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Chess.ChessPieceType,Chess.ChessPieceProfile>> ChessPieceProfileDictionary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChessPieceProfileDictionary_GetEnumerator_m4C0E19FE89F03A249499B02EBDFAAF55399378B8 (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3465BD767D4E454CBB358FC82FAA72EFDC682554_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return wrappedDictionary.GetEnumerator();
		RuntimeObject* L_0 = __this->___wrappedDictionary_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Chess.ChessPieceType,Chess.ChessPieceProfile>>::GetEnumerator() */, IEnumerable_1_t3465BD767D4E454CBB358FC82FAA72EFDC682554_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
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
// Chess.ChessPosition ChessPieceScript::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ChessPieceScript_get_Position_mA399E19A24730B1EDD1ECEBB4ED2B2D5B40712E0 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* V_0 = NULL;
	{
		// get { return position; }
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = __this->___position_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return position; }
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_1 = V_0;
		return L_1;
	}
}
// System.Void ChessPieceScript::set_Position(Chess.ChessPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_Position_m2BD43058B58C03E2B7A44FD17E46723C879B705B (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___0_value, const RuntimeMethod* method) 
{
	{
		// Type = value.type;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = ___0_value;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_0;
		ChessPieceScript_set_Type_mF371B90E98E6DEA6C2BD3337F41DD7F628C499C1(__this, L_1, NULL);
		// Coord = value.coord;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_2 = ___0_value;
		NullCheck(L_2);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_3 = L_2->___coord_1;
		ChessPieceScript_set_Coord_mD41C755147CF27FE28E8E208AC8B6F25BE27EE08(__this, L_3, NULL);
		// HasMoved = value.hasMoved;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_4 = ___0_value;
		NullCheck(L_4);
		bool L_5 = L_4->___hasMoved_2;
		ChessPieceScript_set_HasMoved_m8A4AD17057F1AE460E8BC9F0EFE9EF8AFF6D53BB(__this, L_5, NULL);
		// }
		return;
	}
}
// Chess.ChessPieceType ChessPieceScript::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return position.type; }
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = __this->___position_5;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_0;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return position.type; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void ChessPieceScript::set_Type(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_Type_mF371B90E98E6DEA6C2BD3337F41DD7F628C499C1 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceType_tB00FDC8FA8C673606D685B8ED571E06F17FF0A8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position.type = value;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = __this->___position_5;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___type_0 = L_1;
		// gameObject.name = position.type.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_3 = __this->___position_5;
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___type_0);
		Il2CppFakeBox<int32_t> L_5(ChessPieceType_tB00FDC8FA8C673606D685B8ED571E06F17FF0A8C_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		NullCheck(L_2);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_2, L_6, NULL);
		// UpdateMesh();
		ChessPieceScript_UpdateMesh_mA2FE6D1037472A1F42F6726BA1A2DC6FFB3EED26(__this, NULL);
		// }
		return;
	}
}
// Chess.ChessCoordinate ChessPieceScript::get_Coord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessPieceScript_get_Coord_mA11C90F80362F4054EB4429DC18BC5AE601914C6 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_0 = NULL;
	{
		// get { return position.coord; }
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = __this->___position_5;
		NullCheck(L_0);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = L_0->___coord_1;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return position.coord; }
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_2 = V_0;
		return L_2;
	}
}
// System.Void ChessPieceScript::set_Coord(Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_Coord_mD41C755147CF27FE28E8E208AC8B6F25BE27EE08 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_value, const RuntimeMethod* method) 
{
	{
		// position.coord = value;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = __this->___position_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___coord_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___coord_1), (void*)L_1);
		// UpdatePosition();
		ChessPieceScript_UpdatePosition_m6B83AF20D3E789EE45A9CCE7088EC068C4B6AB3B(__this, NULL);
		// }
		return;
	}
}
// System.Boolean ChessPieceScript::get_HasMoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceScript_get_HasMoved_mC9C63FE2AA498EA2350E8146182D3F372923F7AC (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return position.hasMoved; }
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = __this->___position_5;
		NullCheck(L_0);
		bool L_1 = L_0->___hasMoved_2;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return position.hasMoved; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void ChessPieceScript::set_HasMoved(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_set_HasMoved_m8A4AD17057F1AE460E8BC9F0EFE9EF8AFF6D53BB (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// position.hasMoved = value;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = __this->___position_5;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___hasMoved_2 = L_1;
		// }
		return;
	}
}
// System.Void ChessPieceScript::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_UpdatePosition_m6B83AF20D3E789EE45A9CCE7088EC068C4B6AB3B (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = new Vector3(Coord.x * 2.0f, 0.0f, -Coord.y * 2.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1;
		L_1 = ChessPieceScript_get_Coord_mA11C90F80362F4054EB4429DC18BC5AE601914C6(__this, NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_3;
		L_3 = ChessPieceScript_get_Coord_mA11C90F80362F4054EB4429DC18BC5AE601914C6(__this, NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)il2cpp_codegen_multiply(((float)L_2), (2.0f))), (0.0f), ((float)il2cpp_codegen_multiply(((float)((-L_4))), (2.0f))), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ChessPieceScript::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript_UpdateMesh_mA2FE6D1037472A1F42F6726BA1A2DC6FFB3EED26 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_mB2E071C61EE0926027131986DB7A3697A20706F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_m4310A95FD223B89A91D732D03E8B6BCFA62618C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89F8C841369A80918151426EF544C2136EF44855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F630A5B39B158E1796605CBF2C4C0477896CBDF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (meshGO != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___meshGO_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(meshGO);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___meshGO_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001d:
	{
		// int meshType = FindMeshType();
		int32_t L_4;
		L_4 = ChessPieceScript_FindMeshType_mC3C8AAFCB5F199132B93BAF57ECB34F29277ADB3(__this, NULL);
		V_0 = L_4;
		// if(meshType < 0)
		int32_t L_5 = V_0;
		V_4 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError("Invalid ChessPieceType for meshType");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral89F8C841369A80918151426EF544C2136EF44855, NULL);
		// return;
		goto IL_00c1;
	}

IL_003f:
	{
		// int colorType = FindColorType();
		int32_t L_7;
		L_7 = ChessPieceScript_FindColorType_m2A2CCDB04EC9291AD048B621D31FC0F5E13EC17E(__this, NULL);
		V_1 = L_7;
		// if(colorType < 0)
		int32_t L_8 = V_1;
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogError("Invalid ChessPieceType for colorType");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9F630A5B39B158E1796605CBF2C4C0477896CBDF, NULL);
		// return;
		goto IL_00c1;
	}

IL_005e:
	{
		// meshGO = Instantiate
		// (
		//     GameManager.Instance.pieceMeshes[meshType],
		//     Vector3.zero,
		//     Quaternion.Euler(0.0f, 180.0f * colorType, 0.0f), // Rotate the mesh if it's black
		//     this.transform
		// );
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10;
		L_10 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_10);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = L_10->___pieceMeshes_9;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		int32_t L_16 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply((180.0f), ((float)L_16))), (0.0f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_14, L_15, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		__this->___meshGO_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshGO_4), (void*)L_19);
		// MaterialPainter meshMatPainter = meshGO.GetComponent<MaterialPainter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___meshGO_4;
		NullCheck(L_20);
		MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* L_21;
		L_21 = GameObject_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_m4310A95FD223B89A91D732D03E8B6BCFA62618C4(L_20, GameObject_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_m4310A95FD223B89A91D732D03E8B6BCFA62618C4_RuntimeMethod_var);
		V_2 = L_21;
		// meshMatPainter.mat = GameManager.Instance.pieceMat[colorType];
		MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* L_22 = V_2;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23;
		L_23 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_23);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_24 = L_23->___pieceMat_10;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_22);
		L_22->___mat_4 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___mat_4), (void*)L_27);
		// meshMatPainter.GetComponent<MaterialPainter>().UpdateMaterial();
		MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* L_28 = V_2;
		NullCheck(L_28);
		MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* L_29;
		L_29 = Component_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_mB2E071C61EE0926027131986DB7A3697A20706F4(L_28, Component_GetComponent_TisMaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362_mB2E071C61EE0926027131986DB7A3697A20706F4_RuntimeMethod_var);
		NullCheck(L_29);
		MaterialPainter_UpdateMaterial_m3709A69BAA5CF4854B71876BAEFD2C9B25304613(L_29, NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Int32 ChessPieceScript::FindMeshType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPieceScript_FindMeshType_mC3C8AAFCB5F199132B93BAF57ECB34F29277ADB3 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (Type.IsPawn())   return 0;
		int32_t L_0;
		L_0 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ChessPieceTypeExtension_IsPawn_mEA9EB9F0736C8D13EAC2A0EF58FCEA3F9F14D009(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (Type.IsPawn())   return 0;
		V_1 = 0;
		goto IL_007d;
	}

IL_0014:
	{
		// if (Type.IsKnight()) return 1;
		int32_t L_3;
		L_3 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ChessPieceTypeExtension_IsKnight_mFD725CA0B1CE9CBFD6B60DB88E3CEFAF2CC2D173(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// if (Type.IsKnight()) return 1;
		V_1 = 1;
		goto IL_007d;
	}

IL_0027:
	{
		// if (Type.IsBishop()) return 2;
		int32_t L_6;
		L_6 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ChessPieceTypeExtension_IsBishop_m8C40FB6308B49949365AFCFC2BA9DCB2DA7F0AB7(L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// if (Type.IsBishop()) return 2;
		V_1 = 2;
		goto IL_007d;
	}

IL_003a:
	{
		// if (Type.IsRook())   return 3;
		int32_t L_9;
		L_9 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = ChessPieceTypeExtension_IsRook_m049219149A1B098B446C870C520FC03462E9A0F9(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		// if (Type.IsRook())   return 3;
		V_1 = 3;
		goto IL_007d;
	}

IL_004f:
	{
		// if (Type.IsQueen())  return 4;
		int32_t L_12;
		L_12 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = ChessPieceTypeExtension_IsQueen_mFEC8BB32853187DC7BD1C5F60AA03972D5A38AAA(L_12, NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		// if (Type.IsQueen())  return 4;
		V_1 = 4;
		goto IL_007d;
	}

IL_0064:
	{
		// if (Type.IsKing())   return 5;
		int32_t L_15;
		L_15 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = ChessPieceTypeExtension_IsKing_m5C908B38B0C6EADE2C8402123ED3E06CFF26DDFB(L_15, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		// if (Type.IsKing())   return 5;
		V_1 = 5;
		goto IL_007d;
	}

IL_0079:
	{
		// return -1;
		V_1 = (-1);
		goto IL_007d;
	}

IL_007d:
	{
		// }
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Int32 ChessPieceScript::FindColorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPieceScript_FindColorType_m2A2CCDB04EC9291AD048B621D31FC0F5E13EC17E (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (Type.IsWhite()) return 0;
		int32_t L_0;
		L_0 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (Type.IsWhite()) return 0;
		V_1 = 0;
		goto IL_002b;
	}

IL_0014:
	{
		// if (Type.IsBlack()) return 1;
		int32_t L_3;
		L_3 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// if (Type.IsBlack()) return 1;
		V_1 = 1;
		goto IL_002b;
	}

IL_0027:
	{
		// return -1;
		V_1 = (-1);
		goto IL_002b;
	}

IL_002b:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void ChessPieceScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceScript__ctor_m843A1884F362E5F582837C854E077BEC93DA9470 (ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* __this, const RuntimeMethod* method) 
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		// if (_instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// _instance = GameObject.FindGameObjectWithTag("GameController").GetComponent<GameManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4, NULL);
		NullCheck(L_3);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4;
		L_4 = GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6(L_3, GameObject_GetComponent_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m4F2EAFB3E0C0416DA99DFB2E267D2984B15B9DF6_RuntimeMethod_var);
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4), (void*)L_4);
	}

IL_0024:
	{
		// return _instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4;
		V_1 = L_5;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		return L_6;
	}
}
// Chess.ChessBoardSnapshot GameManager::get_LatestSnapshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_get_LatestSnapshot_m273D36B370E57580224E9702E0309825C1A40465 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE728EBB797EC4E5186663AE654C97BD95ADA6FB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_1 = NULL;
	{
		// if (snapshots.Count <= 0) return null;
		List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_0 = __this->___snapshots_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_inline(L_0, List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (snapshots.Count <= 0) return null;
		V_1 = (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C*)NULL;
		goto IL_0035;
	}

IL_001a:
	{
		// return snapshots[snapshots.Count - 1];
		List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_3 = __this->___snapshots_16;
		List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_4 = __this->___snapshots_16;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_inline(L_4, List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_RuntimeMethod_var);
		NullCheck(L_3);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_6;
		L_6 = List_1_get_Item_mE728EBB797EC4E5186663AE654C97BD95ADA6FB4(L_3, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_mE728EBB797EC4E5186663AE654C97BD95ADA6FB4_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_7 = V_1;
		return L_7;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral013C9E48C098B2270A6728589B8ACD570A034ACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC14F62AADCF443AC6B0BBBFCE9148E0614959DF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// _instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		goto IL_0033;
	}

IL_0018:
	{
		// else if (_instance != this)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, __this, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_0033:
	{
		// chessPiecesParent = (new GameObject()).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_7, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		__this->___chessPiecesParent_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chessPiecesParent_8), (void*)L_8);
		// chessPiecesParent.gameObject.name = "Chess Pieces";
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___chessPiecesParent_8;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, _stringLiteral013C9E48C098B2270A6728589B8ACD570A034ACE, NULL);
		// chessPiecesParent.SetParent(this.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___chessPiecesParent_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_11, L_12, NULL);
		// squareColliderParent = (new GameObject()).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_13, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		__this->___squareColliderParent_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___squareColliderParent_13), (void*)L_14);
		// squareColliderParent.gameObject.name = "Square Colliders";
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___squareColliderParent_13;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_16, _stringLiteralDC14F62AADCF443AC6B0BBBFCE9148E0614959DF, NULL);
		// squareColliderParent.SetParent(this.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___squareColliderParent_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_17, L_18, NULL);
		// profilesDict.Init(profiles);
		ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* L_19 = __this->___profilesDict_7;
		ChessPieceProfileU5BU5D_t6A0E95D320538AB34DF05D44543A156E29D6CC6F* L_20 = __this->___profiles_6;
		NullCheck(L_19);
		ChessPieceProfileDictionary_Init_m869F7FD08575F4A274633F00EE11BB431289967E(L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpawnSquareColliders();
		GameManager_SpawnSquareColliders_m6317F892E8DA4ECDFEC3870DC56A35470E8F981F(__this, NULL);
		// GenNextSnapshot(defaultBoard);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_0 = __this->___defaultBoard_14;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_1;
		L_1 = Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_inline(Array_Empty_TisChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_m22E0F76581B071112B419A9A954708D23BD25AE7_RuntimeMethod_var);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_2;
		L_2 = GameManager_GenNextSnapshot_m48264D28F6612CA4EF970EBE1D15A72A5A29D8CF(__this, L_0, L_1, NULL);
		// LoadFromSnapshot(LatestSnapshot);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_3;
		L_3 = GameManager_get_LatestSnapshot_m273D36B370E57580224E9702E0309825C1A40465(__this, NULL);
		GameManager_LoadFromSnapshot_m9A4106A57AA48A922303BF98B2C430660004A95B(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::SpawnSquareColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnSquareColliders_m6317F892E8DA4ECDFEC3870DC56A35470E8F981F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	bool V_4 = false;
	{
		// for(int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		V_0 = 0;
		goto IL_0099;
	}

IL_0008:
	{
		// float x = (i % ChessSettings.boardSize);
		int32_t L_0 = V_0;
		V_1 = ((float)((int32_t)(L_0%8)));
		// float y = Mathf.FloorToInt(i / ChessSettings.boardSize);
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((int32_t)(L_1/8))), NULL);
		V_2 = ((float)L_2);
		// GameObject newSC = Instantiate
		// (
		//     squareColPrefab, new Vector3(x * 2.0f, 0.0f, y * -2.0f), Quaternion.identity, squareColliderParent
		// );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___squareColPrefab_12;
		float L_4 = V_1;
		float L_5 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)il2cpp_codegen_multiply(L_4, (2.0f))), (0.0f), ((float)il2cpp_codegen_multiply(L_5, (-2.0f))), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___squareColliderParent_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_3, L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_3 = L_9;
		// newSC.name = squareColPrefab.name + " (" + x + "," + y + ")";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___squareColPrefab_12;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17;
		L_17 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_21, NULL);
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, L_22, NULL);
		// for(int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0099:
	{
		// for(int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		int32_t L_24 = V_0;
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::LoadFromSnapshot(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LoadFromSnapshot_m9A4106A57AA48A922303BF98B2C430660004A95B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mE28F857AF869BEF19A1050F0C172474220CA3E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m32421167DF82FF71984E25CC59DE4DD1EDDD3339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m499FFC783C6538054C077428356226CA5CEAADB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m083DE3A1E7C5F9DCECEB4645F93A7FD6ACADDDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3203FA7F809857BB7688D2F3FCDDE426835D0F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209_m7E032E1CA4625B288A3DAAD3CA20E33D7C852629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC1E404CB999E38F575FB7C41CD3A87F1D165B483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBAFCA7D910F419737E1DAEFC1625C1A70C3CD2DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1140D18210A65C7DB5CCC15BACB47E732B35CBF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* V_5 = NULL;
	bool V_6 = false;
	{
		// List<ChessPosition> boardDict = boardSnapshot.ToList();
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_0 = ___0_boardSnapshot;
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_1;
		L_1 = ChessBoardSnapshotExtention_ToList_m19EDBDB7079A585B9160C624878EAD4316FF40EA(L_0, NULL);
		V_0 = L_1;
		// if (boardDict.Count <= 0)
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mBAFCA7D910F419737E1DAEFC1625C1A70C3CD2DD_inline(L_2, List_1_get_Count_mBAFCA7D910F419737E1DAEFC1625C1A70C3CD2DD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		goto IL_00cc;
	}

IL_001d:
	{
		// foreach (KeyValuePair<int, ChessPieceScript> kvp in piecesDict)
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_5 = __this->___piecesDict_15;
		NullCheck(L_5);
		Enumerator_t85900E42258C025EA3CFFEC80411D372121D08DF L_6;
		L_6 = Dictionary_2_GetEnumerator_m32421167DF82FF71984E25CC59DE4DD1EDDD3339(L_5, Dictionary_2_GetEnumerator_m32421167DF82FF71984E25CC59DE4DD1EDDD3339_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m499FFC783C6538054C077428356226CA5CEAADB8((&V_2), Enumerator_Dispose_m499FFC783C6538054C077428356226CA5CEAADB8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_002c_1:
			{
				// foreach (KeyValuePair<int, ChessPieceScript> kvp in piecesDict)
				KeyValuePair_2_tB96422318C3BDECDD9F937630E0182A3AC3F5B24 L_7;
				L_7 = Enumerator_get_Current_m3203FA7F809857BB7688D2F3FCDDE426835D0F94_inline((&V_2), Enumerator_get_Current_m3203FA7F809857BB7688D2F3FCDDE426835D0F94_RuntimeMethod_var);
				V_3 = L_7;
				// Destroy(kvp.Value.gameObject);
				ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_8;
				L_8 = KeyValuePair_2_get_Value_mC1E404CB999E38F575FB7C41CD3A87F1D165B483_inline((&V_3), KeyValuePair_2_get_Value_mC1E404CB999E38F575FB7C41CD3A87F1D165B483_RuntimeMethod_var);
				NullCheck(L_8);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
			}

IL_0046_1:
			{
				// foreach (KeyValuePair<int, ChessPieceScript> kvp in piecesDict)
				bool L_10;
				L_10 = Enumerator_MoveNext_m083DE3A1E7C5F9DCECEB4645F93A7FD6ACADDDDD((&V_2), Enumerator_MoveNext_m083DE3A1E7C5F9DCECEB4645F93A7FD6ACADDDDD_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0060;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		// piecesDict.Clear();
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_11 = __this->___piecesDict_15;
		NullCheck(L_11);
		Dictionary_2_Clear_mE28F857AF869BEF19A1050F0C172474220CA3E7B(L_11, Dictionary_2_Clear_mE28F857AF869BEF19A1050F0C172474220CA3E7B_RuntimeMethod_var);
		// for (int i = 0; i < boardDict.Count; i++)
		V_4 = 0;
		goto IL_00bc;
	}

IL_0071:
	{
		// ChessPieceScript newPiece = Instantiate(piecePrefab, chessPiecesParent)
		//                                 .GetComponent<ChessPieceScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___piecePrefab_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___chessPiecesParent_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_14);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_15;
		L_15 = GameObject_GetComponent_TisChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209_m7E032E1CA4625B288A3DAAD3CA20E33D7C852629(L_14, GameObject_GetComponent_TisChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209_m7E032E1CA4625B288A3DAAD3CA20E33D7C852629_RuntimeMethod_var);
		V_5 = L_15;
		// newPiece.Position = boardDict[i];
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_16 = V_5;
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_19;
		L_19 = List_1_get_Item_m1140D18210A65C7DB5CCC15BACB47E732B35CBF9(L_17, L_18, List_1_get_Item_m1140D18210A65C7DB5CCC15BACB47E732B35CBF9_RuntimeMethod_var);
		NullCheck(L_16);
		ChessPieceScript_set_Position_m2BD43058B58C03E2B7A44FD17E46723C879B705B(L_16, L_19, NULL);
		// piecesDict.Add(newPiece.Coord.ToArrayCoord(), newPiece);
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_20 = __this->___piecesDict_15;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_21 = V_5;
		NullCheck(L_21);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_22;
		L_22 = ChessPieceScript_get_Coord_mA11C90F80362F4054EB4429DC18BC5AE601914C6(L_21, NULL);
		int32_t L_23;
		L_23 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_22, 8, NULL);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_24 = V_5;
		NullCheck(L_20);
		Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821(L_20, L_23, L_24, Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821_RuntimeMethod_var);
		// for (int i = 0; i < boardDict.Count; i++)
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00bc:
	{
		// for (int i = 0; i < boardDict.Count; i++)
		int32_t L_26 = V_4;
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mBAFCA7D910F419737E1DAEFC1625C1A70C3CD2DD_inline(L_27, List_1_get_Count_mBAFCA7D910F419737E1DAEFC1625C1A70C3CD2DD_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_0071;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// Chess.ChessBoardSnapshot GameManager::AdjustBoard(Chess.ChessBoardSnapshot,System.String,Chess.ChessPosition[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_AdjustBoard_m9A8A6AFB23CE7A16835CB09F7CAE5297DEFE456F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, String_t* ___1_newName, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ___2_changed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C_m8CBB6C09765F982DADE2CAEE29FD48E7767E3306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_4 = NULL;
	{
		// ChessBoardSnapshot newBoard = ScriptableObject.Instantiate<ChessBoardSnapshot>(boardSnapshot);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_0 = ___0_boardSnapshot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1;
		L_1 = Object_Instantiate_TisChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C_m8CBB6C09765F982DADE2CAEE29FD48E7767E3306(L_0, Object_Instantiate_TisChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C_m8CBB6C09765F982DADE2CAEE29FD48E7767E3306_RuntimeMethod_var);
		V_0 = L_1;
		// newBoard.name = newName;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_2 = V_0;
		String_t* L_3 = ___1_newName;
		NullCheck(L_2);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_2, L_3, NULL);
		// for(int i = 0; i < changed.Length; i++)
		V_1 = 0;
		goto IL_0042;
	}

IL_0014:
	{
		// int aCoord = changed[i].coord.ToArrayCoord();
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_4 = ___2_changed;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_8 = L_7->___coord_1;
		int32_t L_9;
		L_9 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_8, 8, NULL);
		V_2 = L_9;
		// newBoard.board[aCoord] = changed[i].type;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_10 = V_0;
		NullCheck(L_10);
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_11 = L_10->___board_4;
		int32_t L_12 = V_2;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_13 = ___2_changed;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->___type_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_17);
		// newBoard.hasMoved[aCoord] = true;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_18 = V_0;
		NullCheck(L_18);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = L_18->___hasMoved_5;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (bool)1);
		// for(int i = 0; i < changed.Length; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0042:
	{
		// for(int i = 0; i < changed.Length; i++)
		int32_t L_22 = V_1;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_23 = ___2_changed;
		NullCheck(L_23);
		V_3 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_0014;
		}
	}
	{
		// return newBoard;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_25 = V_0;
		V_4 = L_25;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_26 = V_4;
		return L_26;
	}
}
// Chess.ChessBoardSnapshot GameManager::GenNextSnapshot(Chess.ChessBoardSnapshot,Chess.ChessPosition[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_GenNextSnapshot_m48264D28F6612CA4EF970EBE1D15A72A5A29D8CF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ___1_changed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB57593ADCB953AA5745AAD4EF71ED2C4BB651676);
		s_Il2CppMethodInitialized = true;
	}
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_0 = NULL;
	int32_t V_1 = 0;
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_2 = NULL;
	{
		// ChessBoardSnapshot newBoard = AdjustBoard(boardSnapshot, "Board #" + snapshots.Count.ToString("0000"), changed);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_0 = ___0_boardSnapshot;
		List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_1 = __this->___snapshots_16;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_inline(L_1, List_1_get_Count_m1C9F2BEF9FCE43D1A9C1184A7ECBAEC7B90D5FEE_RuntimeMethod_var);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_1), _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB57593ADCB953AA5745AAD4EF71ED2C4BB651676, L_3, NULL);
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_5 = ___1_changed;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_6;
		L_6 = GameManager_AdjustBoard_m9A8A6AFB23CE7A16835CB09F7CAE5297DEFE456F(__this, L_0, L_4, L_5, NULL);
		V_0 = L_6;
		// snapshots.Add(newBoard);
		List_1_t5F6AD6C15A4DC3F54F098F44ABD88FD3206C9DE0* L_7 = __this->___snapshots_16;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_inline(L_7, L_8, List_1_Add_mFBCB784DFC7A4EC97309E8D3091F0C6EE44436CA_RuntimeMethod_var);
		// return newBoard;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_9 = V_0;
		V_2 = L_9;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_10 = V_2;
		return L_10;
	}
}
// Chess.ChessBoardSnapshot GameManager::GenNextSnapshot(Chess.ChessPosition[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* GameManager_GenNextSnapshot_m1F122AB7C2747255A2564CA437BBF6965B038751 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* ___0_changed, const RuntimeMethod* method) 
{
	ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* V_0 = NULL;
	{
		// return GenNextSnapshot(LatestSnapshot, changed);
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_0;
		L_0 = GameManager_get_LatestSnapshot_m273D36B370E57580224E9702E0309825C1A40465(__this, NULL);
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_1 = ___0_changed;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_2;
		L_2 = GameManager_GenNextSnapshot_m48264D28F6612CA4EF970EBE1D15A72A5A29D8CF(__this, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean GameManager::Move(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_Move_m658395B542AFB4318367FD7C4C0962F8AB8DFF0A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_to, const RuntimeMethod* method) 
{
	ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(Move(from, to, out resultPositions))
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_from;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = ___1_to;
		bool L_2;
		L_2 = GameManager_Move_m289E9F3699984DB298F92FFD3BC6AD9BB416AD3F(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// GenNextSnapshot(resultPositions);
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_4 = V_0;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_5;
		L_5 = GameManager_GenNextSnapshot_m1F122AB7C2747255A2564CA437BBF6965B038751(__this, L_4, NULL);
		// AIManager.Instance.MakeMove();
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_6;
		L_6 = AIManager_get_Instance_mF1EBAD09FF597621E25C627490D008D323696407(NULL);
		NullCheck(L_6);
		AIManager_MakeMove_mFF32ABD8EC2F4819EBAF9A567AE6A2D4702FC3E9(L_6, NULL);
		// return true;
		V_2 = (bool)1;
		goto IL_002b;
	}

IL_0027:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean GameManager::Move(Chess.ChessCoordinate,Chess.ChessCoordinate,Chess.ChessPosition[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_Move_m289E9F3699984DB298F92FFD3BC6AD9BB416AD3F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_to, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** ___2_resultPositions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceType_tB00FDC8FA8C673606D685B8ED571E06F17FF0A8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD231935E425027848966CC3F0556B3ED05C024C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m7782FAD113BAA193D23545293D658FD3B6478241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137AFFCEC14A22799FB4B46E41FDA017F66B4AD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D4228442ED9499D25EC8035EF26F8692089A93A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E3D4C16A5BC2083B3596292DB2816B7C7A4CB19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A2FA863469FFABDFA3CFEBCC8950B9A9BC6CF24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C02D89D47BDE3E6023172092EBF899E71F97CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE58E30BE31566407C74AF8D67788E55F94B4CDE);
		s_Il2CppMethodInitialized = true;
	}
	ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* V_0 = NULL;
	int32_t V_1 = 0;
	ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* V_2 = NULL;
	List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// resultPositions = null;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** L_0 = ___2_resultPositions;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (!from.IsWithinRange())
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = ___0_from;
		bool L_2;
		L_2 = ChessCoordinateExtension_IsWithinRange_mC39C1A4553847600E893606980070ADC4A451168(L_1, 8, NULL);
		V_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		// Debug.LogWarning("Failed to execute Move.\nReason: (" + from.x + ", " + from.y + ") is not within RANGE.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_7 = ___0_from;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___x_0);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_12 = ___0_from;
		NullCheck(L_12);
		int32_t* L_13 = (&L_12->___y_1);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralC8C02D89D47BDE3E6023172092EBF899E71F97CA);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC8C02D89D47BDE3E6023172092EBF899E71F97CA);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_16, NULL);
		// return false;
		V_5 = (bool)0;
		goto IL_03ed;
	}

IL_0062:
	{
		// if (!to.IsWithinRange())
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_17 = ___1_to;
		bool L_18;
		L_18 = ChessCoordinateExtension_IsWithinRange_mC39C1A4553847600E893606980070ADC4A451168(L_17, 8, NULL);
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00c0;
		}
	}
	{
		// Debug.LogWarning("Failed to execute Move.\nReason: (" + to.x + ", " + to.y + ") is not within RANGE.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_23 = ___1_to;
		NullCheck(L_23);
		int32_t* L_24 = (&L_23->___x_0);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_28 = ___1_to;
		NullCheck(L_28);
		int32_t* L_29 = (&L_28->___y_1);
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_27;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralC8C02D89D47BDE3E6023172092EBF899E71F97CA);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC8C02D89D47BDE3E6023172092EBF899E71F97CA);
		String_t* L_32;
		L_32 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_32, NULL);
		// return false;
		V_5 = (bool)0;
		goto IL_03ed;
	}

IL_00c0:
	{
		// if (!piecesDict.ContainsKey(from.ToArrayCoord()))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_33 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_34 = ___0_from;
		int32_t L_35;
		L_35 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_34, 8, NULL);
		NullCheck(L_33);
		bool L_36;
		L_36 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_33, L_35, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_0129;
		}
	}
	{
		// Debug.LogWarning("Failed to execute Move.\nReason: (" + from.x + ", " + from.y + ") is EMPTY.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC02460EF1D8CB367828EC59A29667CCFB63FE547);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_41 = ___0_from;
		NullCheck(L_41);
		int32_t* L_42 = (&L_41->___x_0);
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_42, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_40;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_46 = ___0_from;
		NullCheck(L_46);
		int32_t* L_47 = (&L_46->___y_1);
		String_t* L_48;
		L_48 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_47, NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_45;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral137AFFCEC14A22799FB4B46E41FDA017F66B4AD7);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral137AFFCEC14A22799FB4B46E41FDA017F66B4AD7);
		String_t* L_50;
		L_50 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_50, NULL);
		// return false;
		V_5 = (bool)0;
		goto IL_03ed;
	}

IL_0129:
	{
		// ChessPieceScript selectedPiece = piecesDict[from.ToArrayCoord()];
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_51 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_52 = ___0_from;
		int32_t L_53;
		L_53 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_52, 8, NULL);
		NullCheck(L_51);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_54;
		L_54 = Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF(L_51, L_53, Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		V_0 = L_54;
		// ChessPieceSpecialRule specialRule = ChessPieceSpecialRule.None;
		V_1 = 0;
		// if
		// (
		//     !IsValidMove(selectedPiece.Position, from, to, out specialRule) ||
		//     !AdditionalMove(specialRule, selectedPiece.Position, out castlingPositions)
		// )
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_55 = V_0;
		NullCheck(L_55);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_56;
		L_56 = ChessPieceScript_get_Position_mA399E19A24730B1EDD1ECEBB4ED2B2D5B40712E0(L_55, NULL);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_57 = ___0_from;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_58 = ___1_to;
		bool L_59;
		L_59 = GameManager_IsValidMove_m175922F0BFD2C0AEA5446B852EFE838A3A2B7389(__this, L_56, L_57, L_58, (&V_1), NULL);
		if (!L_59)
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_60 = V_1;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_61 = V_0;
		NullCheck(L_61);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_62;
		L_62 = ChessPieceScript_get_Position_mA399E19A24730B1EDD1ECEBB4ED2B2D5B40712E0(L_61, NULL);
		bool L_63;
		L_63 = GameManager_AdditionalMove_mA9404CA4896EFB1F0E5297ECE9A729C0A8CB104D(__this, L_60, L_62, (&V_2), NULL);
		G_B9_0 = ((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B9_0 = 1;
	}

IL_0165:
	{
		V_8 = (bool)G_B9_0;
		bool L_64 = V_8;
		if (!L_64)
		{
			goto IL_020b;
		}
	}
	{
		// Debug.LogWarning("Failed to execute Move.\nReason: " + selectedPiece.Type + " (" + from.x + ", " + from.y + ") --> (" + to.x + ", " + to.y + ") is INVALID.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteral7D4228442ED9499D25EC8035EF26F8692089A93A);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7D4228442ED9499D25EC8035EF26F8692089A93A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_68 = V_0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_68, NULL);
		V_9 = L_69;
		Il2CppFakeBox<int32_t> L_70(ChessPieceType_tB00FDC8FA8C673606D685B8ED571E06F17FF0A8C_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_71;
		L_71 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_70), NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_71);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_71);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_67;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_72;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_74 = ___0_from;
		NullCheck(L_74);
		int32_t* L_75 = (&L_74->___x_0);
		String_t* L_76;
		L_76 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_75, NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = L_73;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_77;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_79 = ___0_from;
		NullCheck(L_79);
		int32_t* L_80 = (&L_79->___y_1);
		String_t* L_81;
		L_81 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_80, NULL);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_81);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_78;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, _stringLiteral8A2FA863469FFABDFA3CFEBCC8950B9A9BC6CF24);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8A2FA863469FFABDFA3CFEBCC8950B9A9BC6CF24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_84 = ___1_to;
		NullCheck(L_84);
		int32_t* L_85 = (&L_84->___x_0);
		String_t* L_86;
		L_86 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_85, NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_86);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_86);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_83;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_87;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_89 = ___1_to;
		NullCheck(L_89);
		int32_t* L_90 = (&L_89->___y_1);
		String_t* L_91;
		L_91 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_90, NULL);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_91);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = L_88;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteralFE58E30BE31566407C74AF8D67788E55F94B4CDE);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralFE58E30BE31566407C74AF8D67788E55F94B4CDE);
		String_t* L_93;
		L_93 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_92, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_93, NULL);
		// return false;
		V_5 = (bool)0;
		goto IL_03ed;
	}

IL_020b:
	{
		// selectedPiece.Coord = to;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_94 = V_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_95 = ___1_to;
		NullCheck(L_94);
		ChessPieceScript_set_Coord_mD41C755147CF27FE28E8E208AC8B6F25BE27EE08(L_94, L_95, NULL);
		// selectedPiece.HasMoved = true;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_96 = V_0;
		NullCheck(L_96);
		ChessPieceScript_set_HasMoved_m8A4AD17057F1AE460E8BC9F0EFE9EF8AFF6D53BB(L_96, (bool)1, NULL);
		// if (selectedPiece.Type.IsPawn())
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_97, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_99;
		L_99 = ChessPieceTypeExtension_IsPawn_mEA9EB9F0736C8D13EAC2A0EF58FCEA3F9F14D009(L_98, NULL);
		V_10 = L_99;
		bool L_100 = V_10;
		if (!L_100)
		{
			goto IL_0285;
		}
	}
	{
		// if
		// (
		//     selectedPiece.Type == ChessPieceType.WhitePawn &&
		//     selectedPiece.Coord.y == 0
		// )
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_101, NULL);
		if ((!(((uint32_t)L_102) == ((uint32_t)1))))
		{
			goto IL_0246;
		}
	}
	{
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_103 = V_0;
		NullCheck(L_103);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_104;
		L_104 = ChessPieceScript_get_Coord_mA11C90F80362F4054EB4429DC18BC5AE601914C6(L_103, NULL);
		NullCheck(L_104);
		int32_t L_105 = L_104->___y_1;
		G_B15_0 = ((((int32_t)L_105) == ((int32_t)0))? 1 : 0);
		goto IL_0247;
	}

IL_0246:
	{
		G_B15_0 = 0;
	}

IL_0247:
	{
		V_11 = (bool)G_B15_0;
		bool L_106 = V_11;
		if (!L_106)
		{
			goto IL_0259;
		}
	}
	{
		// selectedPiece.Type = ChessPieceType.WhiteQueen;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_107 = V_0;
		NullCheck(L_107);
		ChessPieceScript_set_Type_mF371B90E98E6DEA6C2BD3337F41DD7F628C499C1(L_107, 5, NULL);
		goto IL_0284;
	}

IL_0259:
	{
		// else if
		// (
		//     selectedPiece.Type == ChessPieceType.BlackPawn &&
		//     selectedPiece.Coord.y == 7
		// )
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_108 = V_0;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_108, NULL);
		if ((!(((uint32_t)L_109) == ((uint32_t)7))))
		{
			goto IL_0272;
		}
	}
	{
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_110 = V_0;
		NullCheck(L_110);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_111;
		L_111 = ChessPieceScript_get_Coord_mA11C90F80362F4054EB4429DC18BC5AE601914C6(L_110, NULL);
		NullCheck(L_111);
		int32_t L_112 = L_111->___y_1;
		G_B20_0 = ((((int32_t)L_112) == ((int32_t)7))? 1 : 0);
		goto IL_0273;
	}

IL_0272:
	{
		G_B20_0 = 0;
	}

IL_0273:
	{
		V_12 = (bool)G_B20_0;
		bool L_113 = V_12;
		if (!L_113)
		{
			goto IL_0284;
		}
	}
	{
		// selectedPiece.Type = ChessPieceType.BlackQueen;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_114 = V_0;
		NullCheck(L_114);
		ChessPieceScript_set_Type_mF371B90E98E6DEA6C2BD3337F41DD7F628C499C1(L_114, ((int32_t)11), NULL);
	}

IL_0284:
	{
	}

IL_0285:
	{
		// if (piecesDict.ContainsKey(to.ToArrayCoord()))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_115 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_116 = ___1_to;
		int32_t L_117;
		L_117 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_116, 8, NULL);
		NullCheck(L_115);
		bool L_118;
		L_118 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_115, L_117, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_13 = L_118;
		bool L_119 = V_13;
		if (!L_119)
		{
			goto IL_02ba;
		}
	}
	{
		// Destroy(piecesDict[to.ToArrayCoord()].gameObject);
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_120 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_121 = ___1_to;
		int32_t L_122;
		L_122 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_121, 8, NULL);
		NullCheck(L_120);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_123;
		L_123 = Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF(L_120, L_122, Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		NullCheck(L_123);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124;
		L_124 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_123, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_124, NULL);
	}

IL_02ba:
	{
		// piecesDict.Remove(from.ToArrayCoord());
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_125 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_126 = ___0_from;
		int32_t L_127;
		L_127 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_126, 8, NULL);
		NullCheck(L_125);
		bool L_128;
		L_128 = Dictionary_2_Remove_mD231935E425027848966CC3F0556B3ED05C024C7(L_125, L_127, Dictionary_2_Remove_mD231935E425027848966CC3F0556B3ED05C024C7_RuntimeMethod_var);
		// piecesDict.Remove(to.ToArrayCoord());
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_129 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_130 = ___1_to;
		int32_t L_131;
		L_131 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_130, 8, NULL);
		NullCheck(L_129);
		bool L_132;
		L_132 = Dictionary_2_Remove_mD231935E425027848966CC3F0556B3ED05C024C7(L_129, L_131, Dictionary_2_Remove_mD231935E425027848966CC3F0556B3ED05C024C7_RuntimeMethod_var);
		// piecesDict.Add(to.ToArrayCoord(), selectedPiece);
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_133 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_134 = ___1_to;
		int32_t L_135;
		L_135 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_134, 8, NULL);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_136 = V_0;
		NullCheck(L_133);
		Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821(L_133, L_135, L_136, Dictionary_2_Add_mFA15A6CA77D6620FF8AB41B14AF052554B7CA821_RuntimeMethod_var);
		// List<ChessPosition> resultPositionsList = new List<ChessPosition>()
		// {
		//     new ChessPosition(ChessPieceType.None, from),
		//     new ChessPosition(selectedPiece.Type, to)
		// };
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_137 = (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265*)il2cpp_codegen_object_new(List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265_il2cpp_TypeInfo_var);
		NullCheck(L_137);
		List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45(L_137, List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45_RuntimeMethod_var);
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_138 = L_137;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_139 = ___0_from;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_140 = (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)il2cpp_codegen_object_new(ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		NullCheck(L_140);
		ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772(L_140, 0, L_139, (bool)0, NULL);
		NullCheck(L_138);
		List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_inline(L_138, L_140, List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_RuntimeMethod_var);
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_141 = L_138;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_142 = V_0;
		NullCheck(L_142);
		int32_t L_143;
		L_143 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_142, NULL);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_144 = ___1_to;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_145 = (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)il2cpp_codegen_object_new(ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		NullCheck(L_145);
		ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772(L_145, L_143, L_144, (bool)0, NULL);
		NullCheck(L_141);
		List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_inline(L_141, L_145, List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_RuntimeMethod_var);
		V_3 = L_141;
		// if (castlingPositions != null)
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_146 = V_2;
		V_14 = (bool)((!(((RuntimeObject*)(ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46*)L_146) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_147 = V_14;
		if (!L_147)
		{
			goto IL_034c;
		}
	}
	{
		// for (int i = 0; i < castlingPositions.Length; i++)
		V_15 = 0;
		goto IL_033e;
	}

IL_032d:
	{
		// resultPositionsList.Add(castlingPositions[i]);
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_148 = V_3;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_149 = V_2;
		int32_t L_150 = V_15;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_148);
		List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_inline(L_148, L_152, List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_RuntimeMethod_var);
		// for (int i = 0; i < castlingPositions.Length; i++)
		int32_t L_153 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_033e:
	{
		// for (int i = 0; i < castlingPositions.Length; i++)
		int32_t L_154 = V_15;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_155 = V_2;
		NullCheck(L_155);
		V_16 = (bool)((((int32_t)L_154) < ((int32_t)((int32_t)(((RuntimeArray*)L_155)->max_length))))? 1 : 0);
		bool L_156 = V_16;
		if (L_156)
		{
			goto IL_032d;
		}
	}
	{
	}

IL_034c:
	{
		// resultPositions = resultPositionsList.ToArray();
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** L_157 = ___2_resultPositions;
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_158 = V_3;
		NullCheck(L_158);
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46* L_159;
		L_159 = List_1_ToArray_m7782FAD113BAA193D23545293D658FD3B6478241(L_158, List_1_ToArray_m7782FAD113BAA193D23545293D658FD3B6478241_RuntimeMethod_var);
		*((RuntimeObject**)L_157) = (RuntimeObject*)L_159;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_157, (void*)(RuntimeObject*)L_159);
		// Debug.Log("Succeeded to execute Move.\n" + selectedPiece.Type + " (" + from.x + ", " + from.y + ") --> (" + to.x + ", " + to.y + ").");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_160 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_161 = L_160;
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, _stringLiteral7E3D4C16A5BC2083B3596292DB2816B7C7A4CB19);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7E3D4C16A5BC2083B3596292DB2816B7C7A4CB19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_162 = L_161;
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_163 = V_0;
		NullCheck(L_163);
		int32_t L_164;
		L_164 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_163, NULL);
		V_9 = L_164;
		Il2CppFakeBox<int32_t> L_165(ChessPieceType_tB00FDC8FA8C673606D685B8ED571E06F17FF0A8C_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_166;
		L_166 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_165), NULL);
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, L_166);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_166);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_167 = L_162;
		NullCheck(L_167);
		ArrayElementTypeCheck (L_167, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_168 = L_167;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_169 = ___0_from;
		NullCheck(L_169);
		int32_t* L_170 = (&L_169->___x_0);
		String_t* L_171;
		L_171 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_170, NULL);
		NullCheck(L_168);
		ArrayElementTypeCheck (L_168, L_171);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_171);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_172 = L_168;
		NullCheck(L_172);
		ArrayElementTypeCheck (L_172, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_173 = L_172;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_174 = ___0_from;
		NullCheck(L_174);
		int32_t* L_175 = (&L_174->___y_1);
		String_t* L_176;
		L_176 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_175, NULL);
		NullCheck(L_173);
		ArrayElementTypeCheck (L_173, L_176);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_176);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_177 = L_173;
		NullCheck(L_177);
		ArrayElementTypeCheck (L_177, _stringLiteral8A2FA863469FFABDFA3CFEBCC8950B9A9BC6CF24);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8A2FA863469FFABDFA3CFEBCC8950B9A9BC6CF24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_178 = L_177;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_179 = ___1_to;
		NullCheck(L_179);
		int32_t* L_180 = (&L_179->___x_0);
		String_t* L_181;
		L_181 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_180, NULL);
		NullCheck(L_178);
		ArrayElementTypeCheck (L_178, L_181);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_181);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_182 = L_178;
		NullCheck(L_182);
		ArrayElementTypeCheck (L_182, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_183 = L_182;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_184 = ___1_to;
		NullCheck(L_184);
		int32_t* L_185 = (&L_184->___y_1);
		String_t* L_186;
		L_186 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_185, NULL);
		NullCheck(L_183);
		ArrayElementTypeCheck (L_183, L_186);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_186);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_187 = L_183;
		NullCheck(L_187);
		ArrayElementTypeCheck (L_187, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_188;
		L_188 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_187, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_188, NULL);
		// return true;
		V_5 = (bool)1;
		goto IL_03ed;
	}

IL_03ed:
	{
		// }
		bool L_189 = V_5;
		return L_189;
	}
}
// System.Boolean GameManager::AdditionalMove(Chess.ChessPieceSpecialRule,Chess.ChessPosition,Chess.ChessPosition[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_AdditionalMove_mA9404CA4896EFB1F0E5297ECE9A729C0A8CB104D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___0_specialRule, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___1_position, ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** ___2_resultPositions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_3 = NULL;
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		// resultPositions = null;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** L_0 = ___2_resultPositions;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (specialRule == ChessPieceSpecialRule.CastlingLeft || specialRule == ChessPieceSpecialRule.CastlingRight)
		int32_t L_1 = ___0_specialRule;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = ___0_specialRule;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0085;
		}
	}
	{
		// int xFromCoord = position.coord.x;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_4 = ___1_position;
		NullCheck(L_4);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_5 = L_4->___coord_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___x_0;
		V_1 = L_6;
		// int xToCoord = position.coord.x;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_7 = ___1_position;
		NullCheck(L_7);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_8 = L_7->___coord_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___x_0;
		V_2 = L_9;
		// if (specialRule == ChessPieceSpecialRule.CastlingLeft)
		int32_t L_10 = ___0_specialRule;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		// xFromCoord = 0;
		V_1 = 0;
		// xToCoord -= 1;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0052;
	}

IL_0040:
	{
		// else if (specialRule == ChessPieceSpecialRule.CastlingRight)
		int32_t L_13 = ___0_specialRule;
		V_6 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		// xFromCoord = ChessSettings.boardSize - 1;
		V_1 = 7;
		// xToCoord += 1;
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0052:
	{
		// ChessCoordinate rookFromCoord = new ChessCoordinate(xFromCoord, position.coord.y);
		int32_t L_16 = V_1;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_17 = ___1_position;
		NullCheck(L_17);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_18 = L_17->___coord_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_20 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_20, L_16, L_19, NULL);
		V_3 = L_20;
		// ChessCoordinate rookToCoord = new ChessCoordinate(xToCoord, position.coord.y);
		int32_t L_21 = V_2;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_22 = ___1_position;
		NullCheck(L_22);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_23 = L_22->___coord_1;
		NullCheck(L_23);
		int32_t L_24 = L_23->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_25 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_25, L_21, L_24, NULL);
		V_4 = L_25;
		// return Move(rookFromCoord, rookToCoord, out resultPositions);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_26 = V_3;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_27 = V_4;
		ChessPositionU5BU5D_t3A1993DD8EB9A697586EFE5F4C4516C083128B46** L_28 = ___2_resultPositions;
		bool L_29;
		L_29 = GameManager_Move_m289E9F3699984DB298F92FFD3BC6AD9BB416AD3F(__this, L_26, L_27, L_28, NULL);
		V_7 = L_29;
		goto IL_008a;
	}

IL_0085:
	{
		// return true;
		V_7 = (bool)1;
		goto IL_008a;
	}

IL_008a:
	{
		// }
		bool L_30 = V_7;
		return L_30;
	}
}
// System.Boolean GameManager::IsValidMove(Chess.ChessPosition,Chess.ChessCoordinate,Chess.ChessCoordinate,Chess.ChessPieceSpecialRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_IsValidMove_m175922F0BFD2C0AEA5446B852EFE838A3A2B7389 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___0_position, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___2_to, int32_t* ___3_specialRule, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* V_0 = NULL;
	int32_t V_1 = 0;
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t G_B30_0 = 0;
	int32_t G_B32_0 = 0;
	{
		// specialRule = ChessPieceSpecialRule.None;
		int32_t* L_0 = ___3_specialRule;
		*((int32_t*)L_0) = (int32_t)0;
		// ChessPieceMove[] possibleMoves = profilesDict[position.type].possibleMoves;
		ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* L_1 = __this->___profilesDict_7;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_2 = ___0_position;
		NullCheck(L_2);
		int32_t L_3 = L_2->___type_0;
		NullCheck(L_1);
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_4;
		L_4 = VirtualFuncInvoker1< ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889*, int32_t >::Invoke(10 /* Chess.ChessPieceProfile ChessPieceProfileDictionary::get_Item(Chess.ChessPieceType) */, L_1, L_3);
		NullCheck(L_4);
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_5 = L_4->___possibleMoves_6;
		V_0 = L_5;
		// for (int i = 0; i < possibleMoves.Length; i++)
		V_1 = 0;
		goto IL_01d5;
	}

IL_0023:
	{
		// specialRule = possibleMoves[i].specialRule;
		int32_t* L_6 = ___3_specialRule;
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = L_10->___specialRule_3;
		*((int32_t*)L_6) = (int32_t)L_11;
		// if (!IsValidSpecialRule(possibleMoves[i].specialRule, position, from, to))
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16 = L_15->___specialRule_3;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_17 = ___0_position;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_18 = ___1_from;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_19 = ___2_to;
		bool L_20;
		L_20 = GameManager_IsValidSpecialRule_mDC00529ABD4024A8C9489B8EDE55D2856378219D(__this, L_16, L_17, L_18, L_19, NULL);
		V_4 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_004e;
		}
	}
	{
		// continue;
		goto IL_01d1;
	}

IL_004e:
	{
		// ChessCoordinate temp = from + possibleMoves[i].move;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_22 = ___1_from;
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_27 = L_26->___move_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_28;
		L_28 = ChessCoordinate_op_Addition_m37EA1F44A344C0E8ECA6F2EA9E30A9EBF0B3FBD6(L_22, L_27, NULL);
		V_2 = L_28;
		// int j = 0;
		V_3 = 0;
		goto IL_01a2;
	}

IL_0064:
	{
		// if (temp == to)
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_29 = V_2;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_30 = ___2_to;
		bool L_31;
		L_31 = ChessCoordinate_op_Equality_mE86068C537D98D032FACFD6889821E3EBFDA71AA(L_29, L_30, NULL);
		V_5 = L_31;
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_0172;
		}
	}
	{
		// if (possibleMoves[i].pattern == ChessPieceMovePattern.Normal)
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		int32_t L_37 = L_36->___pattern_2;
		V_6 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_00d7;
		}
	}
	{
		// if (piecesDict.ContainsKey(temp.ToArrayCoord()))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_39 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_40 = V_2;
		int32_t L_41;
		L_41 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_40, 8, NULL);
		NullCheck(L_39);
		bool L_42;
		L_42 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_39, L_41, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_7 = L_42;
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_00cf;
		}
	}
	{
		// if (piecesDict[temp.ToArrayCoord()].Type.IsSameTeamAs(position.type))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_44 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_45 = V_2;
		int32_t L_46;
		L_46 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_45, 8, NULL);
		NullCheck(L_44);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_47;
		L_47 = Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF(L_44, L_46, Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_47, NULL);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_49 = ___0_position;
		NullCheck(L_49);
		int32_t L_50 = L_49->___type_0;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = ChessPieceTypeExtension_IsSameTeamAs_m5C6E05C22364354C245ECBA7348C9048FA49A669(L_48, L_50, NULL);
		V_8 = L_51;
		bool L_52 = V_8;
		if (!L_52)
		{
			goto IL_00ce;
		}
	}
	{
		// break;
		goto IL_01d0;
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		// return true;
		V_9 = (bool)1;
		goto IL_01e9;
	}

IL_00d7:
	{
		// else if (possibleMoves[i].pattern == ChessPieceMovePattern.MoveOnly)
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_53 = V_0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		int32_t L_57 = L_56->___pattern_2;
		V_10 = (bool)((((int32_t)L_57) == ((int32_t)1))? 1 : 0);
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_010e;
		}
	}
	{
		// if (piecesDict.ContainsKey(temp.ToArrayCoord()))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_59 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_60 = V_2;
		int32_t L_61;
		L_61 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_60, 8, NULL);
		NullCheck(L_59);
		bool L_62;
		L_62 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_59, L_61, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_11 = L_62;
		bool L_63 = V_11;
		if (!L_63)
		{
			goto IL_0106;
		}
	}
	{
		// break;
		goto IL_01d0;
	}

IL_0106:
	{
		// return true;
		V_9 = (bool)1;
		goto IL_01e9;
	}

IL_010e:
	{
		// else if (possibleMoves[i].pattern == ChessPieceMovePattern.CaptureOnly)
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_64 = V_0;
		int32_t L_65 = V_1;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		int32_t L_68 = L_67->___pattern_2;
		V_12 = (bool)((((int32_t)L_68) == ((int32_t)2))? 1 : 0);
		bool L_69 = V_12;
		if (!L_69)
		{
			goto IL_016f;
		}
	}
	{
		// if (!piecesDict.ContainsKey(temp.ToArrayCoord()))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_70 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_71 = V_2;
		int32_t L_72;
		L_72 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_71, 8, NULL);
		NullCheck(L_70);
		bool L_73;
		L_73 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_70, L_72, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_13;
		if (!L_74)
		{
			goto IL_0140;
		}
	}
	{
		// break;
		goto IL_01d0;
	}

IL_0140:
	{
		// if (piecesDict[temp.ToArrayCoord()].Type.IsSameTeamAs(position.type))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_75 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_76 = V_2;
		int32_t L_77;
		L_77 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_76, 8, NULL);
		NullCheck(L_75);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_78;
		L_78 = Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF(L_75, L_77, Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		NullCheck(L_78);
		int32_t L_79;
		L_79 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_78, NULL);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_80 = ___0_position;
		NullCheck(L_80);
		int32_t L_81 = L_80->___type_0;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = ChessPieceTypeExtension_IsSameTeamAs_m5C6E05C22364354C245ECBA7348C9048FA49A669(L_79, L_81, NULL);
		V_14 = L_82;
		bool L_83 = V_14;
		if (!L_83)
		{
			goto IL_016a;
		}
	}
	{
		// break;
		goto IL_01d0;
	}

IL_016a:
	{
		// return true;
		V_9 = (bool)1;
		goto IL_01e9;
	}

IL_016f:
	{
		goto IL_018e;
	}

IL_0172:
	{
		// if (piecesDict.ContainsKey(temp.ToArrayCoord()))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_84 = __this->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_85 = V_2;
		int32_t L_86;
		L_86 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_85, 8, NULL);
		NullCheck(L_84);
		bool L_87;
		L_87 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_84, L_86, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_15 = L_87;
		bool L_88 = V_15;
		if (!L_88)
		{
			goto IL_018d;
		}
	}
	{
		// break;
		goto IL_01d0;
	}

IL_018d:
	{
	}

IL_018e:
	{
		// temp += possibleMoves[i].move;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_89 = V_2;
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_90 = V_0;
		int32_t L_91 = V_1;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_94 = L_93->___move_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_95;
		L_95 = ChessCoordinate_op_Addition_m37EA1F44A344C0E8ECA6F2EA9E30A9EBF0B3FBD6(L_89, L_94, NULL);
		V_2 = L_95;
		// j++;
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_01a2:
	{
		// while
		// (
		//     temp.IsWithinRange() &&
		//     (possibleMoves[i].repeatTimes < 0 || j < possibleMoves[i].repeatTimes)
		// )
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_97 = V_2;
		bool L_98;
		L_98 = ChessCoordinateExtension_IsWithinRange_mC39C1A4553847600E893606980070ADC4A451168(L_97, 8, NULL);
		if (!L_98)
		{
			goto IL_01c6;
		}
	}
	{
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_99 = V_0;
		int32_t L_100 = V_1;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		int32_t L_103 = L_102->___repeatTimes_1;
		if ((((int32_t)L_103) < ((int32_t)0)))
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_104 = V_3;
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_105 = V_0;
		int32_t L_106 = V_1;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		NullCheck(L_108);
		int32_t L_109 = L_108->___repeatTimes_1;
		G_B30_0 = ((((int32_t)L_104) < ((int32_t)L_109))? 1 : 0);
		goto IL_01c4;
	}

IL_01c3:
	{
		G_B30_0 = 1;
	}

IL_01c4:
	{
		G_B32_0 = G_B30_0;
		goto IL_01c7;
	}

IL_01c6:
	{
		G_B32_0 = 0;
	}

IL_01c7:
	{
		V_16 = (bool)G_B32_0;
		bool L_110 = V_16;
		if (L_110)
		{
			goto IL_0064;
		}
	}

IL_01d0:
	{
	}

IL_01d1:
	{
		// for (int i = 0; i < possibleMoves.Length; i++)
		int32_t L_111 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_01d5:
	{
		// for (int i = 0; i < possibleMoves.Length; i++)
		int32_t L_112 = V_1;
		ChessPieceMoveU5BU5D_t9AF7A5BEBEC4E6881B0AACEC70720251D03F7C05* L_113 = V_0;
		NullCheck(L_113);
		V_17 = (bool)((((int32_t)L_112) < ((int32_t)((int32_t)(((RuntimeArray*)L_113)->max_length))))? 1 : 0);
		bool L_114 = V_17;
		if (L_114)
		{
			goto IL_0023;
		}
	}
	{
		// return false;
		V_9 = (bool)0;
		goto IL_01e9;
	}

IL_01e9:
	{
		// }
		bool L_115 = V_9;
		return L_115;
	}
}
// System.Boolean GameManager::IsValidSpecialRule(Chess.ChessPieceSpecialRule,Chess.ChessPosition,Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_IsValidSpecialRule_mDC00529ABD4024A8C9489B8EDE55D2856378219D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___0_specialRule, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___1_position, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___2_from, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___3_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B9_0 = 0;
	{
		// if (specialRule == ChessPieceSpecialRule.None)
		int32_t L_0 = ___0_specialRule;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00fe;
	}

IL_0010:
	{
		// if (specialRule == ChessPieceSpecialRule.Pawn2Squares)
		int32_t L_2 = ___0_specialRule;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// if (position.hasMoved)
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_4 = ___1_position;
		NullCheck(L_4);
		bool L_5 = L_4->___hasMoved_2;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_002a:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00fe;
	}

IL_0031:
	{
		// if (specialRule == ChessPieceSpecialRule.CastlingLeft || specialRule == ChessPieceSpecialRule.CastlingRight)
		int32_t L_7 = ___0_specialRule;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_8 = ___0_specialRule;
		G_B9_0 = ((((int32_t)L_8) == ((int32_t)3))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B9_0 = 1;
	}

IL_003c:
	{
		V_4 = (bool)G_B9_0;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_00fa;
		}
	}
	{
		// if (position.hasMoved)
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_10 = ___1_position;
		NullCheck(L_10);
		bool L_11 = L_10->___hasMoved_2;
		V_7 = L_11;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_0059:
	{
		// int xCoord = position.coord.x;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_13 = ___1_position;
		NullCheck(L_13);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_14 = L_13->___coord_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___x_0;
		V_5 = L_15;
		// if (specialRule == ChessPieceSpecialRule.CastlingLeft)
		int32_t L_16 = ___0_specialRule;
		V_8 = (bool)((((int32_t)L_16) == ((int32_t)2))? 1 : 0);
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_0075;
		}
	}
	{
		// xCoord = 0;
		V_5 = 0;
		goto IL_0082;
	}

IL_0075:
	{
		// else if (specialRule == ChessPieceSpecialRule.CastlingRight)
		int32_t L_18 = ___0_specialRule;
		V_9 = (bool)((((int32_t)L_18) == ((int32_t)3))? 1 : 0);
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		// xCoord = ChessSettings.boardSize - 1;
		V_5 = 7;
	}

IL_0082:
	{
		// int rookCoord = new ChessCoordinate(xCoord, position.coord.y).ToArrayCoord();
		int32_t L_20 = V_5;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_21 = ___1_position;
		NullCheck(L_21);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_22 = L_21->___coord_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_24 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_24, L_20, L_23, NULL);
		int32_t L_25;
		L_25 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_24, 8, NULL);
		V_6 = L_25;
		// if (!piecesDict.ContainsKey(rookCoord))
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_26 = __this->___piecesDict_15;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		bool L_28;
		L_28 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_26, L_27, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00b6;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_00b6:
	{
		// if (!piecesDict[rookCoord].Type.IsRook())
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_30 = __this->___piecesDict_15;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_32;
		L_32 = Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF(L_30, L_31, Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = ChessPieceScript_get_Type_mADB58421470F252F4C620A0497EC134E14631BC2(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = ChessPieceTypeExtension_IsRook_m049219149A1B098B446C870C520FC03462E9A0F9(L_33, NULL);
		V_11 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00da;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_00da:
	{
		// if (piecesDict[rookCoord].HasMoved)
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_36 = __this->___piecesDict_15;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		ChessPieceScript_t9118D27A9075C9B6C4175E54393A5CD5C4086209* L_38;
		L_38 = Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF(L_36, L_37, Dictionary_2_get_Item_m3F974076C96DC42F02D50B4AEAF9F8807C583DFF_RuntimeMethod_var);
		NullCheck(L_38);
		bool L_39;
		L_39 = ChessPieceScript_get_HasMoved_mC9C63FE2AA498EA2350E8146182D3F372923F7AC(L_38, NULL);
		V_12 = L_39;
		bool L_40 = V_12;
		if (!L_40)
		{
			goto IL_00f6;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_00f6:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00fe;
	}

IL_00fa:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_00fe:
	{
		// }
		bool L_41 = V_1;
		return L_41;
	}
}
// System.Int32 GameManager::CalculateScore(Chess.ChessBoardSnapshot,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_CalculateScore_m343377682A8998263218557066762C66FE433BF1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, int32_t ___1_playerType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		// int ret = 0;
		V_0 = 0;
		// ChessPieceType[] board = boardSnapshot.board;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_0 = ___0_boardSnapshot;
		NullCheck(L_0);
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_1 = L_0->___board_4;
		V_1 = L_1;
		// for (int i = 0; i < board.Length; i++)
		V_2 = 0;
		goto IL_0089;
	}

IL_000e:
	{
		// if (!board[i].IsValid())
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (int32_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_5, NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0020;
		}
	}
	{
		// continue;
		goto IL_0085;
	}

IL_0020:
	{
		// if (board[i].IsEmpty())
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (int32_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_11, NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0030;
		}
	}
	{
		// continue;
		goto IL_0085;
	}

IL_0030:
	{
		// if (board[i].IsSameTeamAs(playerType))
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (int32_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = ___1_playerType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = ChessPieceTypeExtension_IsSameTeamAs_m43455AAA49ED1B648EC49639296E68410A049849(L_17, L_18, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_005b;
		}
	}
	{
		// ret += profilesDict[board[i]].score + 1;
		int32_t L_21 = V_0;
		ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* L_22 = __this->___profilesDict_7;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (int32_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_27;
		L_27 = VirtualFuncInvoker1< ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889*, int32_t >::Invoke(10 /* Chess.ChessPieceProfile ChessPieceProfileDictionary::get_Item(Chess.ChessPieceType) */, L_22, L_26);
		NullCheck(L_27);
		int32_t L_28 = L_27->___score_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_add(L_28, 1))));
		goto IL_0084;
	}

IL_005b:
	{
		// else if (board[i].IsDifferentTeamAs(playerType))
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (int32_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = ___1_playerType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = ChessPieceTypeExtension_IsDifferentTeamAs_mB4147A9DF32EA62134C2C9BA09423A35456F90EA(L_32, L_33, NULL);
		V_6 = L_34;
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_0084;
		}
	}
	{
		// ret -= profilesDict[board[i]].score + 1;
		int32_t L_36 = V_0;
		ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* L_37 = __this->___profilesDict_7;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_38 = V_1;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (int32_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_37);
		ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* L_42;
		L_42 = VirtualFuncInvoker1< ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889*, int32_t >::Invoke(10 /* Chess.ChessPieceProfile ChessPieceProfileDictionary::get_Item(Chess.ChessPieceType) */, L_37, L_41);
		NullCheck(L_42);
		int32_t L_43 = L_42->___score_5;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_36, ((int32_t)il2cpp_codegen_add(L_43, 1))));
	}

IL_0084:
	{
	}

IL_0085:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0089:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_45 = V_2;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_46 = V_1;
		NullCheck(L_46);
		V_7 = (bool)((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))? 1 : 0);
		bool L_47 = V_7;
		if (L_47)
		{
			goto IL_000e;
		}
	}
	{
		// return ret;
		int32_t L_48 = V_0;
		V_8 = L_48;
		goto IL_009d;
	}

IL_009d:
	{
		// }
		int32_t L_49 = V_8;
		return L_49;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mACFED39B373539773A722B74793EE5D3018D25D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public ChessPieceProfileDictionary profilesDict = new ChessPieceProfileDictionary();
		ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B* L_0 = (ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B*)il2cpp_codegen_object_new(ChessPieceProfileDictionary_tE1A085096F78BA82CCB8A4049E05BDDC3FBB6F1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ChessPieceProfileDictionary__ctor_m6918B81D8F6350DC41E661ECBDF7B5D88D209738(L_0, NULL);
		__this->___profilesDict_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profilesDict_7), (void*)L_0);
		// public Dictionary<int, ChessPieceScript> piecesDict = new Dictionary<int, ChessPieceScript>();
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_1 = (Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2*)il2cpp_codegen_object_new(Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mACFED39B373539773A722B74793EE5D3018D25D5(L_1, Dictionary_2__ctor_mACFED39B373539773A722B74793EE5D3018D25D5_RuntimeMethod_var);
		__this->___piecesDict_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___piecesDict_15), (void*)L_1);
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
// System.Void MaterialPainter::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPainter_UpdateMaterial_m3709A69BAA5CF4854B71876BAEFD2C9B25304613 (MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i = 0; i < rends.Length; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0005:
	{
		// rends[i].material = mat;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_0 = __this->___rends_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___mat_4;
		NullCheck(L_3);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_3, L_4, NULL);
		// for(int i = 0; i < rends.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001f:
	{
		// for(int i = 0; i < rends.Length; i++)
		int32_t L_6 = V_0;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_7 = __this->___rends_5;
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialPainter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPainter__ctor_mE24BAE669D8A2BDB8D70112BBB64768CF6F61531 (MaterialPainter_tBBF827495C0A0CE9AC3C7F6C4701ED8EFD553362* __this, const RuntimeMethod* method) 
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
// System.Void MinimaxNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimaxNode__ctor_m93EAA4EB15E4F49AFD33566F68AD61436D28F5C3 (MinimaxNode_t8004D2192FF44297FD01D4DCF6B1CC542D31CD59* __this, const RuntimeMethod* method) 
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
// System.Void SquareColliderScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareColliderScript_Awake_m3A65AB095C626B7F842D0078161C749A24D4D91D (SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___currentColor_5 = L_0;
		// currentColor.a = 0.0f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1 = (&__this->___currentColor_5);
		L_1->___a_3 = (0.0f);
		// rend = GetComponentInChildren<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF(__this, Component_GetComponentInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m3E1EBDB4D8FA53122CE69A52ED55EED8554249DF_RuntimeMethod_var);
		__this->___rend_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_4), (void*)L_2);
		// rend.color = currentColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___rend_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___currentColor_5;
		NullCheck(L_3);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SquareColliderScript::SetVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareColliderScript_SetVisibility_m69AE2FBBE9A29B7BB5BA75B800DB57FF42758268 (SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* __this, bool ___0_b, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(b)
		bool L_0 = ___0_b;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// currentColor.a = 1.0f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2 = (&__this->___currentColor_5);
		L_2->___a_3 = (1.0f);
		goto IL_002c;
	}

IL_001a:
	{
		// currentColor.a = 0.0f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___currentColor_5);
		L_3->___a_3 = (0.0f);
	}

IL_002c:
	{
		// rend.color = currentColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___rend_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___currentColor_5;
		NullCheck(L_4);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void SquareColliderScript::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareColliderScript_SetColor_m1984C9CFECE849C4DAA0452B4ADA10178B0B35F0 (SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_col, const RuntimeMethod* method) 
{
	{
		// currentColor.r = col.r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___currentColor_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_col;
		float L_2 = L_1.___r_0;
		L_0->___r_0 = L_2;
		// currentColor.g = col.g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___currentColor_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_col;
		float L_5 = L_4.___g_1;
		L_3->___g_1 = L_5;
		// currentColor.b = col.b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&__this->___currentColor_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_col;
		float L_8 = L_7.___b_2;
		L_6->___b_2 = L_8;
		// rend.color = currentColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___rend_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___currentColor_5;
		NullCheck(L_9);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void SquareColliderScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareColliderScript__ctor_m9BD35C44E66BAFA2B35358DF3E47DA7D32711A1C (SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* __this, const RuntimeMethod* method) 
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
// System.Void MoveTester::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTester_Start_m203AD17C5078BCE92D56E5D672EE60AC6EAE599C (MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050* __this, const RuntimeMethod* method) 
{
	{
		// pressToRunMove = false;
		__this->___pressToRunMove_4 = (bool)0;
		// }
		return;
	}
}
// System.Void MoveTester::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTester_Update_mF0EB741039682F0D65215B93386F0F8E54DA0AE6 (MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(pressToRunMove)
		bool L_0 = __this->___pressToRunMove_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// pressToRunMove = false;
		__this->___pressToRunMove_4 = (bool)0;
		// RunMove();
		MoveTester_RunMove_mB0E041BB98020DA287D2E463352666B81C7DEAD1(__this, NULL);
	}

IL_001b:
	{
		// CheckMouseClick();
		MoveTester_CheckMouseClick_m194A4068D3CA2311ABC80A9B3BB34CAF16330669(__this, NULL);
		// }
		return;
	}
}
// System.Void MoveTester::CheckMouseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTester_CheckMouseClick_m194A4068D3CA2311ABC80A9B3BB34CAF16330669 (MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F_mF97DC537AC7A05696CD64170222B940AC48E91B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D57A51C6BFAACBC506AB97587D7F7CCA01AE663);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	{
		// if(Physics.Raycast
		// (
		//     Camera.main.ScreenPointToRay(Input.mousePosition),
		//     out hit, 100.0f
		// ))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		bool L_3;
		L_3 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_2, (&V_0), (100.0f), NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_02a9;
		}
	}
	{
		// if(!hasSelected || lastSquare != selectedSquare)
		bool L_5 = __this->___hasSelected_7;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_6 = __this->___lastSquare_8;
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_7 = __this->___selectedSquare_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, L_7, NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0040;
	}

IL_003f:
	{
		G_B4_0 = 1;
	}

IL_0040:
	{
		V_2 = (bool)G_B4_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// if(lastSquare != null)
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_10 = __this->___lastSquare_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		// lastSquare.SetVisibility(false);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_13 = __this->___lastSquare_8;
		NullCheck(L_13);
		SquareColliderScript_SetVisibility_m69AE2FBBE9A29B7BB5BA75B800DB57FF42758268(L_13, (bool)0, NULL);
	}

IL_0062:
	{
	}

IL_0063:
	{
		// lastSquare = hit.collider.GetComponent<SquareColliderScript>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14;
		L_14 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_14);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_15;
		L_15 = Component_GetComponent_TisSquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F_mF97DC537AC7A05696CD64170222B940AC48E91B6(L_14, Component_GetComponent_TisSquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F_mF97DC537AC7A05696CD64170222B940AC48E91B6_RuntimeMethod_var);
		__this->___lastSquare_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSquare_8), (void*)L_15);
		// if(!hasSelected || lastSquare != selectedSquare)
		bool L_16 = __this->___hasSelected_7;
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_17 = __this->___lastSquare_8;
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_18 = __this->___selectedSquare_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, L_18, NULL);
		G_B11_0 = ((int32_t)(L_19));
		goto IL_0091;
	}

IL_0090:
	{
		G_B11_0 = 1;
	}

IL_0091:
	{
		V_4 = (bool)G_B11_0;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00b7;
		}
	}
	{
		// lastSquare.SetColor(Color.white);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_21 = __this->___lastSquare_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_21);
		SquareColliderScript_SetColor_m1984C9CFECE849C4DAA0452B4ADA10178B0B35F0(L_21, L_22, NULL);
		// lastSquare.SetVisibility(true);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_23 = __this->___lastSquare_8;
		NullCheck(L_23);
		SquareColliderScript_SetVisibility_m69AE2FBBE9A29B7BB5BA75B800DB57FF42758268(L_23, (bool)1, NULL);
	}

IL_00b7:
	{
		// if(AIManager.Instance.isRunningMinimax)
		AIManager_t28CE5617FD6B9DE97778E3CA57CAF2C7FD2BCBBD* L_24;
		L_24 = AIManager_get_Instance_mF1EBAD09FF597621E25C627490D008D323696407(NULL);
		NullCheck(L_24);
		bool L_25 = L_24->___isRunningMinimax_15;
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00cc;
		}
	}
	{
		// return;
		goto IL_02a9;
	}

IL_00cc:
	{
		// if(Input.GetMouseButtonUp(0))
		bool L_27;
		L_27 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		V_6 = L_27;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_02a8;
		}
	}
	{
		// if(hit.collider.gameObject.CompareTag("SquareCollider"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_29;
		L_29 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		bool L_31;
		L_31 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_30, _stringLiteral9D57A51C6BFAACBC506AB97587D7F7CCA01AE663, NULL);
		V_7 = L_31;
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_02a7;
		}
	}
	{
		// Vector3 pos = hit.collider.transform.position;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33;
		L_33 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		V_8 = L_35;
		// if(!hasSelected)
		bool L_36 = __this->___hasSelected_7;
		V_9 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_01b9;
		}
	}
	{
		// from.x = (int)(pos.x / 2.0f);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_38 = __this->___from_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_8;
		float L_40 = L_39.___x_2;
		NullCheck(L_38);
		L_38->___x_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_40/(2.0f))));
		// from.y = (int)(-pos.z / 2.0f);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_41 = __this->___from_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_8;
		float L_43 = L_42.___z_4;
		NullCheck(L_41);
		L_41->___y_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((-L_43))/(2.0f))));
		// if(GameManager.Instance.piecesDict.ContainsKey(from.ToArrayCoord()))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_44;
		L_44 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_44);
		Dictionary_2_t107D409F8075F333379D7A8F5C46F1ADF90B4CF2* L_45 = L_44->___piecesDict_15;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_46 = __this->___from_5;
		int32_t L_47;
		L_47 = ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5(L_46, 8, NULL);
		NullCheck(L_45);
		bool L_48;
		L_48 = Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F(L_45, L_47, Dictionary_2_ContainsKey_mFE978F4D1FC88640062645A4C37DBFD84FA0756F_RuntimeMethod_var);
		V_10 = L_48;
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_01b3;
		}
	}
	{
		// hasSelected = true;
		__this->___hasSelected_7 = (bool)1;
		// selectedSquare = hit.collider.GetComponent<SquareColliderScript>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_50;
		L_50 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_50);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_51;
		L_51 = Component_GetComponent_TisSquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F_mF97DC537AC7A05696CD64170222B940AC48E91B6(L_50, Component_GetComponent_TisSquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F_mF97DC537AC7A05696CD64170222B940AC48E91B6_RuntimeMethod_var);
		__this->___selectedSquare_9 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedSquare_9), (void*)L_51);
		// selectedSquare.SetColor(Color.green);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_52 = __this->___selectedSquare_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53;
		L_53 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_52);
		SquareColliderScript_SetColor_m1984C9CFECE849C4DAA0452B4ADA10178B0B35F0(L_52, L_53, NULL);
		// selectedSquare.SetVisibility(true);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_54 = __this->___selectedSquare_9;
		NullCheck(L_54);
		SquareColliderScript_SetVisibility_m69AE2FBBE9A29B7BB5BA75B800DB57FF42758268(L_54, (bool)1, NULL);
		// return;
		goto IL_02a9;
	}

IL_01b3:
	{
		goto IL_02a6;
	}

IL_01b9:
	{
		// to.x = (int)(pos.x / 2.0f);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_55 = __this->___to_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_8;
		float L_57 = L_56.___x_2;
		NullCheck(L_55);
		L_55->___x_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_57/(2.0f))));
		// to.y = (int)(-pos.z / 2.0f);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_58 = __this->___to_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_8;
		float L_60 = L_59.___z_4;
		NullCheck(L_58);
		L_58->___y_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((-L_60))/(2.0f))));
		// if(from == to)
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_61 = __this->___from_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_62 = __this->___to_6;
		bool L_63;
		L_63 = ChessCoordinate_op_Equality_mE86068C537D98D032FACFD6889821E3EBFDA71AA(L_61, L_62, NULL);
		V_11 = L_63;
		bool L_64 = V_11;
		if (!L_64)
		{
			goto IL_0245;
		}
	}
	{
		// hasSelected = false;
		__this->___hasSelected_7 = (bool)0;
		// if(selectedSquare != null && lastSquare != selectedSquare)
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_65 = __this->___selectedSquare_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_66)
		{
			goto IL_022d;
		}
	}
	{
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_67 = __this->___lastSquare_8;
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_68 = __this->___selectedSquare_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_67, L_68, NULL);
		G_B25_0 = ((int32_t)(L_69));
		goto IL_022e;
	}

IL_022d:
	{
		G_B25_0 = 0;
	}

IL_022e:
	{
		V_12 = (bool)G_B25_0;
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_0243;
		}
	}
	{
		// selectedSquare.SetVisibility(false);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_71 = __this->___selectedSquare_9;
		NullCheck(L_71);
		SquareColliderScript_SetVisibility_m69AE2FBBE9A29B7BB5BA75B800DB57FF42758268(L_71, (bool)0, NULL);
	}

IL_0243:
	{
		// return;
		goto IL_02a9;
	}

IL_0245:
	{
		// if(!GameManager.Instance.Move(from, to))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_72;
		L_72 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_73 = __this->___from_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_74 = __this->___to_6;
		NullCheck(L_72);
		bool L_75;
		L_75 = GameManager_Move_m658395B542AFB4318367FD7C4C0962F8AB8DFF0A(L_72, L_73, L_74, NULL);
		V_13 = (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_13;
		if (!L_76)
		{
			goto IL_0267;
		}
	}
	{
		// return;
		goto IL_02a9;
	}

IL_0267:
	{
		// hasSelected = false;
		__this->___hasSelected_7 = (bool)0;
		// if(selectedSquare != null && lastSquare != selectedSquare)
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_77 = __this->___selectedSquare_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_77, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_78)
		{
			goto IL_028f;
		}
	}
	{
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_79 = __this->___lastSquare_8;
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_80 = __this->___selectedSquare_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_81;
		L_81 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_79, L_80, NULL);
		G_B33_0 = ((int32_t)(L_81));
		goto IL_0290;
	}

IL_028f:
	{
		G_B33_0 = 0;
	}

IL_0290:
	{
		V_14 = (bool)G_B33_0;
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_02a5;
		}
	}
	{
		// selectedSquare.SetVisibility(false);
		SquareColliderScript_t99D6DB2B727C559A95DE4F8B9402849A870C703F* L_83 = __this->___selectedSquare_9;
		NullCheck(L_83);
		SquareColliderScript_SetVisibility_m69AE2FBBE9A29B7BB5BA75B800DB57FF42758268(L_83, (bool)0, NULL);
	}

IL_02a5:
	{
	}

IL_02a6:
	{
	}

IL_02a7:
	{
	}

IL_02a8:
	{
	}

IL_02a9:
	{
		// }
		return;
	}
}
// System.Void MoveTester::RunMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTester_RunMove_mB0E041BB98020DA287D2E463352666B81C7DEAD1 (MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_1 = NULL;
	{
		// if(GameManager.Instance.Move(from, to))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = __this->___from_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_2 = __this->___to_6;
		NullCheck(L_0);
		bool L_3;
		L_3 = GameManager_Move_m658395B542AFB4318367FD7C4C0962F8AB8DFF0A(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_008b;
		}
	}
	{
		// ChessCoordinate newTo = to - from;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_5 = __this->___to_6;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_6 = __this->___from_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_7;
		L_7 = ChessCoordinate_op_Subtraction_mA9D89E2BE51D1FEABA04985204487EAEF83D2159(L_5, L_6, NULL);
		V_1 = L_7;
		// from.x = to.x;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_8 = __this->___from_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = __this->___to_6;
		NullCheck(L_9);
		int32_t L_10 = L_9->___x_0;
		NullCheck(L_8);
		L_8->___x_0 = L_10;
		// from.y = to.y;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_11 = __this->___from_5;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_12 = __this->___to_6;
		NullCheck(L_12);
		int32_t L_13 = L_12->___y_1;
		NullCheck(L_11);
		L_11->___y_1 = L_13;
		// to.x += newTo.x;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_14 = __this->___to_6;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = L_17->___x_0;
		NullCheck(L_15);
		L_15->___x_0 = ((int32_t)il2cpp_codegen_add(L_16, L_18));
		// to.y += newTo.y;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_19 = __this->___to_6;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___y_1;
		NullCheck(L_20);
		L_20->___y_1 = ((int32_t)il2cpp_codegen_add(L_21, L_23));
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void MoveTester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTester__ctor_mC2E793E349E85BD862A48F28592DAAB683474DA5 (MoveTester_t17890D83A471E222B98A98DD08BE233FC19EC050* __this, const RuntimeMethod* method) 
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
// System.Void TemporarySpinningScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporarySpinningScript_Update_m63FBD89C82609BF59C6C1CA85A9B17988700D7FF (TemporarySpinningScript_t009E56591E81FF703549CB36DF2418FEE809EE25* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// float curAngle = transform.rotation.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_3 = L_2.___y_3;
		V_0 = L_3;
		// float toAngle = 90.0f * step;
		int32_t L_4 = __this->___step_5;
		V_1 = ((float)il2cpp_codegen_multiply((90.0f), ((float)L_4)));
		// if(Mathf.Abs(curAngle - toAngle) > 1.0f)
		float L_5 = V_0;
		float L_6 = V_1;
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract(L_5, L_6)));
		V_3 = (bool)((((float)L_7) > ((float)(1.0f)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(Vector3.up * Mathf.Lerp(curAngle, toAngle, Time.deltaTime * speed));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_11 = V_0;
		float L_12 = V_1;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_14 = __this->___speed_4;
		float L_15;
		L_15 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_11, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_16, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_17, NULL);
		goto IL_00b2;
	}

IL_006d:
	{
		// transform.rotation = Quaternion.Euler(Vector3.up * toAngle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_21, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_22, NULL);
		// if(step >= 4) step = 0;
		int32_t L_23 = __this->___step_5;
		V_4 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		// if(step >= 4) step = 0;
		__this->___step_5 = 0;
	}

IL_00a3:
	{
		// step++;
		int32_t L_25 = __this->___step_5;
		__this->___step_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void TemporarySpinningScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemporarySpinningScript__ctor_mD77996C52D18BEC512286975E2408601693D90C1 (TemporarySpinningScript_t009E56591E81FF703549CB36DF2418FEE809EE25* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5.0f;
		__this->___speed_4 = (5.0f);
		// private int step = 0;
		__this->___step_5 = 0;
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
// System.UInt64 ZobristHash::GetRandomHash(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ZobristHash_GetRandomHash_mA35309E53EE4FCCAE38FC591F8E46161389C4317 (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___0_rand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		// byte[] buf = new byte[8];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		// rand.NextBytes(buf);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ___0_rand;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(8 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_1, L_2);
		// UInt64 uint64_rand = BitConverter.ToUInt64(buf, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23(L_3, 0, NULL);
		V_1 = L_4;
		// return uint64_rand;
		uint64_t L_5 = V_1;
		V_2 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		uint64_t L_6 = V_2;
		return L_6;
	}
}
// System.Void ZobristHash::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZobristHash__cctor_m2BC791396A27846EEF1EE896F8B3241B72F1BECE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// rand = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields*)il2cpp_codegen_static_fields_for(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var))->___rand_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields*)il2cpp_codegen_static_fields_for(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var))->___rand_0), (void*)L_0);
		// hashtable = new UInt64[ChessSettings.boardSize * ChessSettings.boardSize, (int)ChessPieceTypeExtension.Total];
		il2cpp_array_size_t L_2[] = { (il2cpp_array_size_t)((int32_t)64), (il2cpp_array_size_t)((int32_t)12) };
		UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE* L_1 = (UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE*)GenArrayNew(UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE_il2cpp_TypeInfo_var, L_2);
		((ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields*)il2cpp_codegen_static_fields_for(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var))->___hashtable_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields*)il2cpp_codegen_static_fields_for(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var))->___hashtable_1), (void*)L_1);
		// for (int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		V_0 = 0;
		goto IL_004c;
	}

IL_001d:
	{
		// for (int j = 0; j < (int)ChessPieceTypeExtension.Total; j++)
		V_1 = 0;
		goto IL_003e;
	}

IL_0022:
	{
		// hashtable[i,j] = GetRandomHash(rand);
		UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE* L_3 = ((ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields*)il2cpp_codegen_static_fields_for(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var))->___hashtable_1;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_6 = ((ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields*)il2cpp_codegen_static_fields_for(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var))->___rand_0;
		uint64_t L_7;
		L_7 = ZobristHash_GetRandomHash_mA35309E53EE4FCCAE38FC591F8E46161389C4317(L_6, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(L_4, L_5, L_7);
		// for (int j = 0; j < (int)ChessPieceTypeExtension.Total; j++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003e:
	{
		// for (int j = 0; j < (int)ChessPieceTypeExtension.Total; j++)
		int32_t L_9 = V_1;
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// for (int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		// for (int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		int32_t L_12 = V_0;
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.UInt64 ZobristHash::ToZobristHash(Chess.ChessPieceType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ZobristHash_ToZobristHash_mAB48FB9229AA1F46B209FF4D70C1B59B63CF8DE2 (ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* ___0_board, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint64_t V_6 = 0;
	{
		// UInt64 h = 0;
		V_0 = ((int64_t)0);
		// for (int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		V_1 = 0;
		goto IL_0044;
	}

IL_0008:
	{
		// if (!board[i].IsValid())
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_0 = ___0_board;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (int32_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_3, NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// continue;
		goto IL_0040;
	}

IL_001a:
	{
		// if (board[i].IsEmpty())
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_6 = ___0_board;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_002a;
		}
	}
	{
		// continue;
		goto IL_0040;
	}

IL_002a:
	{
		// int j = (int)board[i] - 1;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_12 = ___0_board;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (int32_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		// h ^= hashtable[i, j];
		uint64_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var);
		UInt64U5BU2CU5D_tCA001C8FD4DE7898ABE0C2A53944180A381B3ABE* L_17 = ((ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_StaticFields*)il2cpp_codegen_static_fields_for(ZobristHash_t77E20DB6FED4BF0C2B99F6C0DE27B5F1A02BD5A0_il2cpp_TypeInfo_var))->___hashtable_1;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		uint64_t L_20;
		L_20 = (L_17)->GetAt(L_18, L_19);
		V_0 = ((int64_t)((int64_t)L_16^(int64_t)L_20));
	}

IL_0040:
	{
		// for (int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < ChessSettings.boardSize * ChessSettings.boardSize; i++)
		int32_t L_22 = V_1;
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0008;
		}
	}
	{
		// return h;
		uint64_t L_24 = V_0;
		V_6 = L_24;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		uint64_t L_25 = V_6;
		return L_25;
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	bool V_3 = false;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		V_0 = L_2;
		// foreach (var loader in loaders)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_001b_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
				L_8 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (loader.name.Equals("Oculus Loader"))
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				NullCheck(L_10);
				bool L_11;
				L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_006d_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_RightController_5;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_LeftController_4;
				NullCheck(L_14);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_15);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
			}

IL_006d_1:
			{
			}

IL_006e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
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
// System.Void Chess.ChessBoardSnapshot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessBoardSnapshot__ctor_m37B43A37667B85537B8005D48D5FD37BAD97C158 (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Collections.Generic.Dictionary`2<System.Int32,Chess.ChessPosition> Chess.ChessBoardSnapshotExtention::ToDictionary(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* ChessBoardSnapshotExtention_ToDictionary_m0C09DE939D2C54729991C1E9F178DE19F6F08E22 (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7CD025E05BCE5F4403952B69D9CC0DB9AF9E795A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA4659BBBD51B28AC5CABEB58549898999B86087D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* V_0 = NULL;
	ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* V_1 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_2 = NULL;
	bool V_3 = false;
	Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// Dictionary<int, ChessPosition> ret = new Dictionary<int, ChessPosition>();
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_0 = (Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B*)il2cpp_codegen_object_new(Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA4659BBBD51B28AC5CABEB58549898999B86087D(L_0, Dictionary_2__ctor_mA4659BBBD51B28AC5CABEB58549898999B86087D_RuntimeMethod_var);
		V_0 = L_0;
		// if (boardSnapshot == null)
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1 = ___0_boardSnapshot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return ret;
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_4 = V_0;
		V_4 = L_4;
		goto IL_00b5;
	}

IL_001a:
	{
		// ChessPieceType[] board = boardSnapshot.board;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_5 = ___0_boardSnapshot;
		NullCheck(L_5);
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_6 = L_5->___board_4;
		V_1 = L_6;
		// bool[] hasMoved = boardSnapshot.hasMoved;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_7 = ___0_boardSnapshot;
		NullCheck(L_7);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = L_7->___hasMoved_5;
		V_2 = L_8;
		// if (board.Length != ChessSettings.boardSize * ChessSettings.boardSize)
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_9 = V_1;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) == ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// return ret;
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_11 = V_0;
		V_4 = L_11;
		goto IL_00b5;
	}

IL_003d:
	{
		// for (int i = 0; i < board.Length; i++)
		V_6 = 0;
		goto IL_00a3;
	}

IL_0042:
	{
		// if (!board[i].IsValid()) continue;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_12 = V_1;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (int32_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_15, NULL);
		V_8 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		// if (!board[i].IsValid()) continue;
		goto IL_009d;
	}

IL_0057:
	{
		// if (board[i].IsEmpty()) continue;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_18 = V_1;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (int32_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_21, NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_0068;
		}
	}
	{
		// if (board[i].IsEmpty()) continue;
		goto IL_009d;
	}

IL_0068:
	{
		// ChessPosition newPos = new ChessPosition
		// {
		//     coord = i.ToChessCoord(),
		//     type = board[i],
		//     hasMoved = hasMoved[i]
		// };
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_24 = (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)il2cpp_codegen_object_new(ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ChessPosition__ctor_mC43970DDAE85152C156921B45F6CC9C2537B5349(L_24, NULL);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_25 = L_24;
		int32_t L_26 = V_6;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_27;
		L_27 = ChessCoordinateExtension_ToChessCoord_m043286DD15690872AAE42FEBE2FE057C353695B3(L_26, 8, NULL);
		NullCheck(L_25);
		L_25->___coord_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___coord_1), (void*)L_27);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_28 = L_25;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_29 = V_1;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (int32_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		L_28->___type_0 = L_32;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_33 = L_28;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_34 = V_2;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (uint8_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		L_33->___hasMoved_2 = (bool)L_37;
		V_7 = L_33;
		// ret.Add(i, newPos);
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_38 = V_0;
		int32_t L_39 = V_6;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_40 = V_7;
		NullCheck(L_38);
		Dictionary_2_Add_m7CD025E05BCE5F4403952B69D9CC0DB9AF9E795A(L_38, L_39, L_40, Dictionary_2_Add_m7CD025E05BCE5F4403952B69D9CC0DB9AF9E795A_RuntimeMethod_var);
	}

IL_009d:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_41 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00a3:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_42 = V_6;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_43 = V_1;
		NullCheck(L_43);
		V_10 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))? 1 : 0);
		bool L_44 = V_10;
		if (L_44)
		{
			goto IL_0042;
		}
	}
	{
		// return ret;
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_45 = V_0;
		V_4 = L_45;
		goto IL_00b5;
	}

IL_00b5:
	{
		// }
		Dictionary_2_t3408AAF32910D5DBB5528D16FD2BCDCABE5F3A1B* L_46 = V_4;
		return L_46;
	}
}
// System.Collections.Generic.List`1<Chess.ChessPosition> Chess.ChessBoardSnapshotExtention::ToList(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* ChessBoardSnapshotExtention_ToList_m19EDBDB7079A585B9160C624878EAD4316FF40EA (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* V_0 = NULL;
	ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* V_1 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_2 = NULL;
	bool V_3 = false;
	List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// List<ChessPosition> ret = new List<ChessPosition>();
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_0 = (List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265*)il2cpp_codegen_object_new(List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45(L_0, List_1__ctor_mDD9A6D8D066E94004AA9A3305F00CFECFA6C0A45_RuntimeMethod_var);
		V_0 = L_0;
		// if (boardSnapshot == null)
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_1 = ___0_boardSnapshot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return ret;
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_4 = V_0;
		V_4 = L_4;
		goto IL_00b3;
	}

IL_001a:
	{
		// ChessPieceType[] board = boardSnapshot.board;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_5 = ___0_boardSnapshot;
		NullCheck(L_5);
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_6 = L_5->___board_4;
		V_1 = L_6;
		// bool[] hasMoved = boardSnapshot.hasMoved;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_7 = ___0_boardSnapshot;
		NullCheck(L_7);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = L_7->___hasMoved_5;
		V_2 = L_8;
		// if (board.Length != ChessSettings.boardSize * ChessSettings.boardSize)
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_9 = V_1;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) == ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// return ret;
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_11 = V_0;
		V_4 = L_11;
		goto IL_00b3;
	}

IL_003d:
	{
		// for (int i = 0; i < board.Length; i++)
		V_6 = 0;
		goto IL_00a1;
	}

IL_0042:
	{
		// if (!board[i].IsValid()) continue;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_12 = V_1;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (int32_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_15, NULL);
		V_8 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		// if (!board[i].IsValid()) continue;
		goto IL_009b;
	}

IL_0057:
	{
		// if (board[i].IsEmpty()) continue;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_18 = V_1;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (int32_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_21, NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_0068;
		}
	}
	{
		// if (board[i].IsEmpty()) continue;
		goto IL_009b;
	}

IL_0068:
	{
		// ChessPosition newPos = new ChessPosition
		// {
		//     coord = i.ToChessCoord(),
		//     type = board[i],
		//     hasMoved = hasMoved[i]
		// };
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_24 = (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF*)il2cpp_codegen_object_new(ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ChessPosition__ctor_mC43970DDAE85152C156921B45F6CC9C2537B5349(L_24, NULL);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_25 = L_24;
		int32_t L_26 = V_6;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_27;
		L_27 = ChessCoordinateExtension_ToChessCoord_m043286DD15690872AAE42FEBE2FE057C353695B3(L_26, 8, NULL);
		NullCheck(L_25);
		L_25->___coord_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___coord_1), (void*)L_27);
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_28 = L_25;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_29 = V_1;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (int32_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		L_28->___type_0 = L_32;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_33 = L_28;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_34 = V_2;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (uint8_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		L_33->___hasMoved_2 = (bool)L_37;
		V_7 = L_33;
		// ret.Add(newPos);
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_38 = V_0;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_39 = V_7;
		NullCheck(L_38);
		List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_inline(L_38, L_39, List_1_Add_m6A0489ABF8818EB004F16E72528EF0B47C5AE4F4_RuntimeMethod_var);
	}

IL_009b:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_40 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00a1:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_41 = V_6;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_42 = V_1;
		NullCheck(L_42);
		V_10 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))? 1 : 0);
		bool L_43 = V_10;
		if (L_43)
		{
			goto IL_0042;
		}
	}
	{
		// return ret;
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_44 = V_0;
		V_4 = L_44;
		goto IL_00b3;
	}

IL_00b3:
	{
		// }
		List_1_t32CDE734FE4126445188EBDF04C6E5DD7DBF3265* L_45 = V_4;
		return L_45;
	}
}
// System.Int32 Chess.ChessBoardSnapshotExtention::ToHashCode(Chess.ChessPieceType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessBoardSnapshotExtention_ToHashCode_m0BB39A8B1CED5FD290D8DF6A0B318B3BB50E51C0 (ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* ___0_board, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// if(board.Length != ChessSettings.boardSize * ChessSettings.boardSize)
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_0 = ___0_board;
		NullCheck(L_0);
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_0035;
	}

IL_0013:
	{
		// int ret = 0;
		V_0 = 0;
		// for(int i = 0; i < board.Length; i++)
		V_3 = 0;
		goto IL_0025;
	}

IL_0019:
	{
		// ret ^= (int)board[i];
		int32_t L_2 = V_0;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_3 = ___0_board;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int32_t)(L_2^L_6));
		// for(int i = 0; i < board.Length; i++)
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		// for(int i = 0; i < board.Length; i++)
		int32_t L_8 = V_3;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_9 = ___0_board;
		NullCheck(L_9);
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0019;
		}
	}
	{
		// return ret;
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.Boolean Chess.ChessBoardSnapshotExtention::IsEndGame(Chess.ChessBoardSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessBoardSnapshotExtention_IsEndGame_m78153E0FFBC3A9BFB704B18A8104DA7D277540A2 (ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* ___0_boardSnapshot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// bool isOneKingAlive = false;
		V_0 = (bool)0;
		// ChessPieceType[] board = boardSnapshot.board;
		ChessBoardSnapshot_t3F5E3528127C49EEA5AD387DA8DBE8F411223D1C* L_0 = ___0_boardSnapshot;
		NullCheck(L_0);
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_1 = L_0->___board_4;
		V_1 = L_1;
		// for (int i = 0; i < board.Length; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_000e:
	{
		// if(board[i].IsKing())
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (int32_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ChessPieceTypeExtension_IsKing_m5C908B38B0C6EADE2C8402123ED3E06CFF26DDFB(L_5, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// if(!isOneKingAlive)
		bool L_8 = V_0;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		// isOneKingAlive = true;
		V_0 = (bool)1;
		goto IL_0032;
	}

IL_002c:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_0049;
	}

IL_0032:
	{
	}

IL_0033:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < board.Length; i++)
		int32_t L_11 = V_2;
		ChessPieceTypeU5BU5D_t3DBAB3AB04C9AE446F80EC3EBECAB96C524FDA75* L_12 = V_1;
		NullCheck(L_12);
		V_6 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_6;
		if (L_13)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		V_5 = (bool)1;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		bool L_14 = V_5;
		return L_14;
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
// System.Void Chess.ChessCoordinate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessCoordinate__ctor_m73C4FC5E72264134B84C987E207F44B3E75B2396 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, const RuntimeMethod* method) 
{
	{
		// public ChessCoordinate()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = 0;
		__this->___x_0 = 0;
		// this.y = 0;
		__this->___y_1 = 0;
		// }
		return;
	}
}
// System.Void Chess.ChessCoordinate::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// public ChessCoordinate(int x, int y)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
// System.Void Chess.ChessCoordinate::.ctor(Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessCoordinate__ctor_m62650C3EE2430A825CC1C7DF9C0B149EB3C1CAEF (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_other, const RuntimeMethod* method) 
{
	{
		// public ChessCoordinate(ChessCoordinate other)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = other.x;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_other;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		__this->___x_0 = L_1;
		// this.y = other.y;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3 = L_2->___y_1;
		__this->___y_1 = L_3;
		// }
		return;
	}
}
// System.Boolean Chess.ChessCoordinate::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinate_Equals_m803F2EB7404393F7E8E0DF1DEB4FB4D63A2825C8 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (o is ChessCoordinate)
		RuntimeObject* L_0 = ___0_o;
		V_0 = (bool)((!(((RuntimeObject*)(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)((ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)IsInstClass((RuntimeObject*)L_0, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return Equals((ChessCoordinate)o);
		RuntimeObject* L_2 = ___0_o;
		bool L_3;
		L_3 = ChessCoordinate_Equals_m022884CDC4B74595C1959B2898014469BF6CB56B(__this, ((ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)CastclassClass((RuntimeObject*)L_2, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_3;
		goto IL_0027;
	}

IL_001d:
	{
		// return base.Equals(o);
		RuntimeObject* L_4 = ___0_o;
		bool L_5;
		L_5 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_4, NULL);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Chess.ChessCoordinate::Equals(Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinate_Equals_m022884CDC4B74595C1959B2898014469BF6CB56B (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (object.Equals(c, null)) return false;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_c;
		bool L_1;
		L_1 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (object.Equals(c, null)) return false;
		V_1 = (bool)0;
		goto IL_0032;
	}

IL_0010:
	{
		// return this.x == c.x && this.y == c.y;
		int32_t L_3 = __this->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_4 = ___0_c;
		NullCheck(L_4);
		int32_t L_5 = L_4->___x_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_6 = __this->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_7 = ___0_c;
		NullCheck(L_7);
		int32_t L_8 = L_7->___y_1;
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean Chess.ChessCoordinate::op_Equality(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinate_op_Equality_mE86068C537D98D032FACFD6889821E3EBFDA71AA (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B9_0 = 0;
	{
		// if (object.ReferenceEquals(c1, c2))
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_c1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = ___1_c2;
		V_0 = (bool)((((RuntimeObject*)(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)L_0) == ((RuntimeObject*)(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_000e:
	{
		// if (object.Equals(c1, null)) return false;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_3 = ___0_c1;
		bool L_4;
		L_4 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		// if (object.Equals(c1, null)) return false;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_001d:
	{
		// if (object.Equals(c2, null)) return false;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_6 = ___1_c2;
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_6, NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		// if (object.Equals(c2, null)) return false;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_002c:
	{
		// return c1.x == c2.x && c1.y == c2.y;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = ___0_c1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_11 = ___1_c2;
		NullCheck(L_11);
		int32_t L_12 = L_11->___x_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_004a;
		}
	}
	{
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_13 = ___0_c1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_15 = ___1_c2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___y_1;
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B9_0 = 0;
	}

IL_004b:
	{
		V_1 = (bool)G_B9_0;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Boolean Chess.ChessCoordinate::op_Inequality(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinate_op_Inequality_m90149B38B4D9D2A6782E8E792017F959D14FE700 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B9_0 = 0;
	{
		// if (object.ReferenceEquals(c1, c2))
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_c1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = ___1_c2;
		V_0 = (bool)((((RuntimeObject*)(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)L_0) == ((RuntimeObject*)(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_000e:
	{
		// if (object.Equals(c1, null)) return true;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_3 = ___0_c1;
		bool L_4;
		L_4 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		// if (object.Equals(c1, null)) return true;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_001d:
	{
		// if (object.Equals(c2, null)) return true;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_6 = ___1_c2;
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_6, NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		// if (object.Equals(c2, null)) return true;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_002c:
	{
		// return c1.x != c2.x || c1.y != c2.y;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = ___0_c1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_11 = ___1_c2;
		NullCheck(L_11);
		int32_t L_12 = L_11->___x_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_004d;
		}
	}
	{
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_13 = ___0_c1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_15 = ___1_c2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___y_1;
		G_B9_0 = ((((int32_t)((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B9_0 = 1;
	}

IL_004e:
	{
		V_1 = (bool)G_B9_0;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Int32 Chess.ChessCoordinate::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessCoordinate_GetHashCode_m9C9FC0BD63D092B9F0A26C668C2BF5A4F70AA3AD (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 23 + x.GetHashCode();
		int32_t L_0 = V_0;
		int32_t* L_1 = (&__this->___x_0);
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		// hash = hash * 23 + y.GetHashCode();
		int32_t L_3 = V_0;
		int32_t* L_4 = (&__this->___y_1);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)23))), L_5));
		// return hash;
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// Chess.ChessCoordinate Chess.ChessCoordinate::op_Addition(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinate_op_Addition_m37EA1F44A344C0E8ECA6F2EA9E30A9EBF0B3FBD6 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_0 = NULL;
	{
		// return new ChessCoordinate(c1.x + c2.x, c1.y + c2.y);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_c1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_2 = ___1_c2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_4 = ___0_c1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_6 = ___1_c2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_8 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_8, ((int32_t)il2cpp_codegen_add(L_1, L_3)), ((int32_t)il2cpp_codegen_add(L_5, L_7)), NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = V_0;
		return L_9;
	}
}
// Chess.ChessCoordinate Chess.ChessCoordinate::op_Subtraction(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinate_op_Subtraction_mA9D89E2BE51D1FEABA04985204487EAEF83D2159 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_0 = NULL;
	{
		// return new ChessCoordinate(c1.x - c2.x, c1.y - c2.y);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_c1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_2 = ___1_c2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_4 = ___0_c1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_6 = ___1_c2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_8 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_8, ((int32_t)il2cpp_codegen_subtract(L_1, L_3)), ((int32_t)il2cpp_codegen_subtract(L_5, L_7)), NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = V_0;
		return L_9;
	}
}
// Chess.ChessCoordinate Chess.ChessCoordinate::op_Multiply(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinate_op_Multiply_m031E2545B5C30CE6FCAF394CFFBEFA1407131E1C (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_0 = NULL;
	{
		// return new ChessCoordinate(c1.x * c2.x, c1.y * c2.y);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_c1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_2 = ___1_c2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_4 = ___0_c1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_6 = ___1_c2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_8 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_8, ((int32_t)il2cpp_codegen_multiply(L_1, L_3)), ((int32_t)il2cpp_codegen_multiply(L_5, L_7)), NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = V_0;
		return L_9;
	}
}
// Chess.ChessCoordinate Chess.ChessCoordinate::op_Division(Chess.ChessCoordinate,Chess.ChessCoordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinate_op_Division_mB6C84E81030DFCDD3786E51A8300ABC1BEEC5CCD (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_c1, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_0 = NULL;
	{
		// return new ChessCoordinate(c1.x / c2.x, c1.y / c2.y);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_c1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_2 = ___1_c2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___x_0;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_4 = ___0_c1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_6 = ___1_c2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___y_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_8 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_8, ((int32_t)(L_1/L_3)), ((int32_t)(L_5/L_7)), NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = V_0;
		return L_9;
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
// Chess.ChessCoordinate Chess.ChessCoordinateExtension::ToChessCoord(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ChessCoordinateExtension_ToChessCoord_m043286DD15690872AAE42FEBE2FE057C353695B3 (int32_t ___0_arrayPos, int32_t ___1_boardSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* V_4 = NULL;
	{
		// int x = 0;
		V_0 = 0;
		// int y = 0;
		V_1 = 0;
		// int _arrayPos = arrayPos;
		int32_t L_0 = ___0_arrayPos;
		V_2 = L_0;
		goto IL_0013;
	}

IL_0009:
	{
		// _arrayPos -= 8;
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		// y++;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0013:
	{
		// while(_arrayPos >= boardSize)
		int32_t L_3 = V_2;
		int32_t L_4 = ___1_boardSize;
		V_3 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0009;
		}
	}
	{
		// x = _arrayPos;
		int32_t L_6 = V_2;
		V_0 = L_6;
		// return new ChessCoordinate(x, y);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_9 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_9, L_7, L_8, NULL);
		V_4 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_10 = V_4;
		return L_10;
	}
}
// System.Int32 Chess.ChessCoordinateExtension::ToArrayCoord(Chess.ChessCoordinate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessCoordinateExtension_ToArrayCoord_m98EEA20DDE331C538CEF8FAC57E0C8E4B090EAD5 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_chessCoord, int32_t ___1_boardSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return chessCoord.y * boardSize + chessCoord.x;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_chessCoord;
		NullCheck(L_0);
		int32_t L_1 = L_0->___y_1;
		int32_t L_2 = ___1_boardSize;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_3 = ___0_chessCoord;
		NullCheck(L_3);
		int32_t L_4 = L_3->___x_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_4));
		goto IL_0013;
	}

IL_0013:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Chess.ChessCoordinateExtension::IsWithinRange(Chess.ChessCoordinate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessCoordinateExtension_IsWithinRange_mC39C1A4553847600E893606980070ADC4A451168 (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___0_chessCoord, int32_t ___1_boardSize, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (chessCoord.x < 0) return false;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = ___0_chessCoord;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (chessCoord.x < 0) return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0012:
	{
		// if (chessCoord.x >= boardSize) return false;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_3 = ___0_chessCoord;
		NullCheck(L_3);
		int32_t L_4 = L_3->___x_0;
		int32_t L_5 = ___1_boardSize;
		V_2 = (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		// if (chessCoord.x >= boardSize) return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0026:
	{
		// if (chessCoord.y < 0) return false;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_7 = ___0_chessCoord;
		NullCheck(L_7);
		int32_t L_8 = L_7->___y_1;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// if (chessCoord.y < 0) return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0037:
	{
		// if (chessCoord.y >= boardSize) return false;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_10 = ___0_chessCoord;
		NullCheck(L_10);
		int32_t L_11 = L_10->___y_1;
		int32_t L_12 = ___1_boardSize;
		V_4 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// if (chessCoord.y >= boardSize) return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_004d:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_14 = V_1;
		return L_14;
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
// System.Void Chess.ChessPieceMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceMove__ctor_mB5E2EA13CAE5F71804552F2C17886A1732567BB6 (ChessPieceMove_t85E4F4D8B8911A3658D848629121AE0C04C37925* __this, const RuntimeMethod* method) 
{
	{
		// public int repeatTimes = 1;
		__this->___repeatTimes_1 = 1;
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
// System.Void Chess.ChessPieceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceProfile__ctor_mB23C4DAB962BF97D4056EA14495805AD79AB22A8 (ChessPieceProfile_tC732FD3969BAE798DA49EF3688E61AF5878B7889* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Char Chess.ChessPieceTypeExtension::ToIcon(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ChessPieceTypeExtension_ToIcon_mC90BA76146F424440AECF5324D8E536C6C3F156F (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		// return ToChessPieceIcon((int)type);
		int32_t L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = ChessPieceTypeExtension_ToChessPieceIcon_mE37BB1036D167FB7570AD84501E868CEEA446FDC(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Il2CppChar L_2 = V_0;
		return L_2;
	}
}
// System.Char Chess.ChessPieceTypeExtension::ToChessPieceIcon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ChessPieceTypeExtension_ToChessPieceIcon_mE37BB1036D167FB7570AD84501E868CEEA446FDC (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	int32_t G_B3_0 = 0;
	{
		// if (type >= 0 && type < iconArray.Length)
		int32_t L_0 = ___0_type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ((ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_StaticFields*)il2cpp_codegen_static_fields_for(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var))->___iconArray_0;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return iconArray[type];
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_StaticFields*)il2cpp_codegen_static_fields_for(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var))->___iconArray_0;
		int32_t L_5 = ___0_type;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0025;
	}

IL_0020:
	{
		// return ' ';
		V_1 = ((int32_t)32);
		goto IL_0025;
	}

IL_0025:
	{
		// }
		Il2CppChar L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsValid(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405 (int32_t ___0_type, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return type != ChessPieceType.Total;
		int32_t L_0 = ___0_type;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsEmpty(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA (int32_t ___0_type, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return type == ChessPieceType.None;
		int32_t L_0 = ___0_type;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsWhite(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8 (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1))) > ((uint32_t)5))))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0011;
	}

IL_000d:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0015;
	}

IL_0011:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_3 = V_2;
		return L_3;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsBlack(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 7))) > ((uint32_t)5))))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0011;
	}

IL_000d:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0015;
	}

IL_0011:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_3 = V_2;
		return L_3;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsSameTeamAs(Chess.ChessPieceType,Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsSameTeamAs_m5C6E05C22364354C245ECBA7348C9048FA49A669 (int32_t ___0_type1, int32_t ___1_type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (!type1.IsValid()) return false;
		int32_t L_0 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!type1.IsValid()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0012:
	{
		// if (!type2.IsValid()) return false;
		int32_t L_3 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// if (!type2.IsValid()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0023:
	{
		// if (type1.IsEmpty()) return false;
		int32_t L_6 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// if (type1.IsEmpty()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0031:
	{
		// if (type2.IsEmpty()) return false;
		int32_t L_9 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		// if (type2.IsEmpty()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0041:
	{
		// if (type1.IsWhite() && type2.IsWhite()) return true;
		int32_t L_12 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8(L_12, NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_14 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8(L_14, NULL);
		G_B11_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B11_0 = 0;
	}

IL_0052:
	{
		V_5 = (bool)G_B11_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_005c;
		}
	}
	{
		// if (type1.IsWhite() && type2.IsWhite()) return true;
		V_1 = (bool)1;
		goto IL_007b;
	}

IL_005c:
	{
		// if (type1.IsBlack() && type2.IsBlack()) return true;
		int32_t L_17 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E(L_17, NULL);
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_19 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E(L_19, NULL);
		G_B16_0 = ((int32_t)(L_20));
		goto IL_006d;
	}

IL_006c:
	{
		G_B16_0 = 0;
	}

IL_006d:
	{
		V_6 = (bool)G_B16_0;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		// if (type1.IsBlack() && type2.IsBlack()) return true;
		V_1 = (bool)1;
		goto IL_007b;
	}

IL_0077:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		bool L_22 = V_1;
		return L_22;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsSameTeamAs(Chess.ChessPieceType,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsSameTeamAs_m43455AAA49ED1B648EC49639296E68410A049849 (int32_t ___0_pieceType, int32_t ___1_playerType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if (!pieceType.IsValid()) return false;
		int32_t L_0 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!pieceType.IsValid()) return false;
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0012:
	{
		// if (pieceType.IsEmpty()) return false;
		int32_t L_3 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (pieceType.IsEmpty()) return false;
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0020:
	{
		// if (pieceType.IsWhite() && playerType == ChessPlayerType.White) return true;
		int32_t L_6 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8(L_6, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = ___1_playerType;
		G_B7_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B7_0 = 0;
	}

IL_002f:
	{
		V_3 = (bool)G_B7_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// if (pieceType.IsWhite() && playerType == ChessPlayerType.White) return true;
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0037:
	{
		// if (pieceType.IsBlack() && playerType == ChessPlayerType.Black) return true;
		int32_t L_10 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E(L_10, NULL);
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_12 = ___1_playerType;
		G_B12_0 = ((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B12_0 = 0;
	}

IL_0046:
	{
		V_4 = (bool)G_B12_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		// if (pieceType.IsBlack() && playerType == ChessPlayerType.Black) return true;
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0050:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsDifferentTeamAs(Chess.ChessPieceType,Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsDifferentTeamAs_mD90A9B870AC17428FC815679802987F50AAF2137 (int32_t ___0_type1, int32_t ___1_type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (!type1.IsValid()) return false;
		int32_t L_0 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!type1.IsValid()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0012:
	{
		// if (!type2.IsValid()) return false;
		int32_t L_3 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// if (!type2.IsValid()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0023:
	{
		// if (type1.IsEmpty()) return false;
		int32_t L_6 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// if (type1.IsEmpty()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0031:
	{
		// if (type2.IsEmpty()) return false;
		int32_t L_9 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		// if (type2.IsEmpty()) return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_0041:
	{
		// if (type1.IsWhite() && type2.IsBlack()) return true;
		int32_t L_12 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8(L_12, NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_14 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E(L_14, NULL);
		G_B11_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B11_0 = 0;
	}

IL_0052:
	{
		V_5 = (bool)G_B11_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_005c;
		}
	}
	{
		// if (type1.IsWhite() && type2.IsBlack()) return true;
		V_1 = (bool)1;
		goto IL_007b;
	}

IL_005c:
	{
		// if (type1.IsBlack() && type2.IsWhite()) return true;
		int32_t L_17 = ___0_type1;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E(L_17, NULL);
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_19 = ___1_type2;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8(L_19, NULL);
		G_B16_0 = ((int32_t)(L_20));
		goto IL_006d;
	}

IL_006c:
	{
		G_B16_0 = 0;
	}

IL_006d:
	{
		V_6 = (bool)G_B16_0;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		// if (type1.IsBlack() && type2.IsWhite()) return true;
		V_1 = (bool)1;
		goto IL_007b;
	}

IL_0077:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		bool L_22 = V_1;
		return L_22;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsDifferentTeamAs(Chess.ChessPieceType,Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsDifferentTeamAs_mB4147A9DF32EA62134C2C9BA09423A35456F90EA (int32_t ___0_pieceType, int32_t ___1_playerType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if (!pieceType.IsValid()) return false;
		int32_t L_0 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ChessPieceTypeExtension_IsValid_m69F3102AB3A766466FF170730D04E1343B302405(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!pieceType.IsValid()) return false;
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0012:
	{
		// if (pieceType.IsEmpty()) return false;
		int32_t L_3 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ChessPieceTypeExtension_IsEmpty_m8AD746EA7A9C4100724918F3239F71DB5D43C4DA(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (pieceType.IsEmpty()) return false;
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0020:
	{
		// if (pieceType.IsWhite() && playerType == ChessPlayerType.Black) return true;
		int32_t L_6 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ChessPieceTypeExtension_IsWhite_m95EB31C1F30396BF1111DB74EBD9FB50801636B8(L_6, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = ___1_playerType;
		G_B7_0 = ((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B7_0 = 0;
	}

IL_002f:
	{
		V_3 = (bool)G_B7_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// if (pieceType.IsWhite() && playerType == ChessPlayerType.Black) return true;
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0037:
	{
		// if (pieceType.IsBlack() && playerType == ChessPlayerType.White) return true;
		int32_t L_10 = ___0_pieceType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ChessPieceTypeExtension_IsBlack_mFCEEF93FB011A6AB4D3E817A4C3F72FD6C8FDB0E(L_10, NULL);
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_12 = ___1_playerType;
		G_B12_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B12_0 = 0;
	}

IL_0046:
	{
		V_4 = (bool)G_B12_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		// if (pieceType.IsBlack() && playerType == ChessPlayerType.White) return true;
		V_1 = (bool)1;
		goto IL_0054;
	}

IL_0050:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsPawn(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsPawn_mEA9EB9F0736C8D13EAC2A0EF58FCEA3F9F14D009 (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0015;
	}

IL_0011:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0019;
	}

IL_0015:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsKnight(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsKnight_mFD725CA0B1CE9CBFD6B60DB88E3CEFAF2CC2D173 (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0015;
	}

IL_0011:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0019;
	}

IL_0015:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsBishop(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsBishop_m8C40FB6308B49949365AFCFC2BA9DCB2DA7F0AB7 (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_001a;
	}

IL_0016:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsRook(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsRook_m049219149A1B098B446C870C520FC03462E9A0F9 (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_001a;
	}

IL_0016:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsQueen(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsQueen_mFEC8BB32853187DC7BD1C5F60AA03972D5A38AAA (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_001a;
	}

IL_0016:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean Chess.ChessPieceTypeExtension::IsKing(Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPieceTypeExtension_IsKing_m5C908B38B0C6EADE2C8402123ED3E06CFF26DDFB (int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)12))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_001a;
	}

IL_0016:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Void Chess.ChessPieceTypeExtension::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPieceTypeExtension__cctor_mD8C5EEBBC776ECA2C46D3A16AEAD4E4DF0273984 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FD7D0A697D1B140CFAC93D860DD80A65010E2B63F24F9F508DDB88085A75201A_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static char[] iconArray =
		// {
		//     ' ',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?',
		//     '?'
		// };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FD7D0A697D1B140CFAC93D860DD80A65010E2B63F24F9F508DDB88085A75201A_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_StaticFields*)il2cpp_codegen_static_fields_for(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var))->___iconArray_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_StaticFields*)il2cpp_codegen_static_fields_for(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var))->___iconArray_0), (void*)L_1);
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
// System.Boolean Chess.ChessPlayerTypeExtension::IsSameTeamAs(Chess.ChessPlayerType,Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPlayerTypeExtension_IsSameTeamAs_m5A24573D0004EEFD45A1E46B07056F3A2EC60F33 (int32_t ___0_playerType, int32_t ___1_pieceType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return pieceType.IsSameTeamAs(playerType);
		int32_t L_0 = ___1_pieceType;
		int32_t L_1 = ___0_playerType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ChessPieceTypeExtension_IsSameTeamAs_m43455AAA49ED1B648EC49639296E68410A049849(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Chess.ChessPlayerTypeExtension::IsDifferentTeamAs(Chess.ChessPlayerType,Chess.ChessPieceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChessPlayerTypeExtension_IsDifferentTeamAs_mC2EC2543433F2E52DB757EEDDD54B6F9C63A8F20 (int32_t ___0_playerType, int32_t ___1_pieceType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return pieceType.IsDifferentTeamAs(playerType);
		int32_t L_0 = ___1_pieceType;
		int32_t L_1 = ___0_playerType;
		il2cpp_codegen_runtime_class_init_inline(ChessPieceTypeExtension_tD04F4CC802F25AB0F93EBB1B6D42D8D32CB3FFAB_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ChessPieceTypeExtension_IsDifferentTeamAs_mB4147A9DF32EA62134C2C9BA09423A35456F90EA(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// Chess.ChessPlayerType Chess.ChessPlayerTypeExtension::ToOpposite(Chess.ChessPlayerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChessPlayerTypeExtension_ToOpposite_m5EB6544B961A2B1BDBF61D2DF08C3B5596525A1A (int32_t ___0_playerType, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (playerType == ChessPlayerType.White)
		int32_t L_0 = ___0_playerType;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return ChessPlayerType.Black;
		V_1 = 1;
		goto IL_001d;
	}

IL_000d:
	{
		// if (playerType == ChessPlayerType.Black)
		int32_t L_2 = ___0_playerType;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return ChessPlayerType.White;
		V_1 = 0;
		goto IL_001d;
	}

IL_0019:
	{
		// return playerType;
		int32_t L_4 = ___0_playerType;
		V_1 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
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
// System.Void Chess.ChessPosition::.ctor(Chess.ChessPieceType,Chess.ChessCoordinate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772 (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* __this, int32_t ___0_type, ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* ___1_coord, bool ___2_hasMoved, const RuntimeMethod* method) 
{
	{
		// public ChessPosition(ChessPieceType type, ChessCoordinate coord, bool hasMoved = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		int32_t L_0 = ___0_type;
		__this->___type_0 = L_0;
		// this.coord = coord;
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_1 = ___1_coord;
		__this->___coord_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coord_1), (void*)L_1);
		// this.hasMoved = hasMoved;
		bool L_2 = ___2_hasMoved;
		__this->___hasMoved_2 = L_2;
		// }
		return;
	}
}
// System.Void Chess.ChessPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPosition__ctor_mC43970DDAE85152C156921B45F6CC9C2537B5349 (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ChessPosition() : this(ChessPieceType.None, new ChessCoordinate(0, 0), false) { }
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_0 = (ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126*)il2cpp_codegen_object_new(ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ChessCoordinate__ctor_mF633C4101C4DE30526308F26B8D260D1538941C2(L_0, 0, 0, NULL);
		ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772(__this, 0, L_0, (bool)0, NULL);
		// public ChessPosition() : this(ChessPieceType.None, new ChessCoordinate(0, 0), false) { }
		return;
	}
}
// System.Void Chess.ChessPosition::.ctor(Chess.ChessPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessPosition__ctor_m36B6F38DFDC1CB15A6B31BDE9DCAB6D9F40D237B (ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* __this, ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* ___0_other, const RuntimeMethod* method) 
{
	{
		// public ChessPosition(ChessPosition other) : this(other.type, other.coord, other.hasMoved) { }
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_0 = ___0_other;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_0;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_2 = ___0_other;
		NullCheck(L_2);
		ChessCoordinate_tFB26C882FEBCECE592607F8CD4F8C5C427566126* L_3 = L_2->___coord_1;
		ChessPosition_t856CE284A836E5CA0597DA0D19DC3194504131BF* L_4 = ___0_other;
		NullCheck(L_4);
		bool L_5 = L_4->___hasMoved_2;
		ChessPosition__ctor_m781D4A5A5593B618B455EBA8BD3705AF5CA51772(__this, L_1, L_3, L_5, NULL);
		// public ChessPosition(ChessPosition other) : this(other.type, other.coord, other.hasMoved) { }
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
// System.Void Chess.ChessSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChessSettings__ctor_m348CD1F42C4FFBA84119BB80858536D4A9D0C411 (ChessSettings_t369FB449F09DC3658FBB85C4E55C3C29B82953D2* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
