#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x160 - 0x0)
// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_ACC56C1C4E2B3B86E3E607A67414A2BD
struct UUI_MicroPhoneSetting_C_OnMouseButtonDownEvent_ACC56C1C4E2B3B86E3E607A67414A2BD_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_C836F08C459FCBEBAA4B2E9ECF100EDB
struct UUI_MicroPhoneSetting_C_OnMouseButtonDownEvent_C836F08C459FCBEBAA4B2E9ECF100EDB_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_DE7B70464E9CEF68D34BCABA5428BB6A
struct UUI_MicroPhoneSetting_C_OnStateChangedEvent_DE7B70464E9CEF68D34BCABA5428BB6A_Params
{
public:
	TArray<class UCheckBox*>                     ChildChangedArray;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CheckedChildIndex;                                 // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_0AA4018E4F3334D025F8AD87FBC592E1
struct UUI_MicroPhoneSetting_C_OnStateChangedEvent_0AA4018E4F3334D025F8AD87FBC592E1_Params
{
public:
	TArray<class UCheckBox*>                     ChildChangedArray;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CheckedChildIndex;                                 // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.GetModuleName
struct UUI_MicroPhoneSetting_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.PreConstruct
struct UUI_MicroPhoneSetting_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.ExecuteUbergraph_UI_MicroPhoneSetting
struct UUI_MicroPhoneSetting_C_ExecuteUbergraph_UI_MicroPhoneSetting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


