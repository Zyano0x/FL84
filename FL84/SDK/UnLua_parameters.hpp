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

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaInterface.GetModuleName
struct IUnLuaInterface_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UnLua.UnLuaManager.OnLatentActionCompleted
struct UUnLuaManager_OnLatentActionCompleted_Params
{
public:
	int32                                        LinkID;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UnLua.UnLuaManager.OnActorDestroyed
struct UUnLuaManager_OnActorDestroyed_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UnLua.UnLuaManager.InputVectorAxis
struct UUnLuaManager_InputVectorAxis_Params
{
public:
	struct FVector                               AxisValue;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaManager.InputTouch
struct UUnLuaManager_InputTouch_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A50[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UnLua.UnLuaManager.InputGesture
struct UUnLuaManager_InputGesture_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UnLua.UnLuaManager.InputAxis
struct UUnLuaManager_InputAxis_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UnLua.UnLuaManager.InputAction
struct UUnLuaManager_InputAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions
struct AUnLuaPerformanceTestProxy_UpdatePositions_Params
{
public:
	TArray<struct FVector>                       NewPositions;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
struct AUnLuaPerformanceTestProxy_UpdateMeshName_Params
{
public:
	class FString                                NewName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
struct AUnLuaPerformanceTestProxy_UpdateMeshID_Params
{
public:
	int32                                        NewID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices
struct AUnLuaPerformanceTestProxy_UpdateIndices_Params
{
public:
	TArray<int32>                                NewIndices;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.Simulate
struct AUnLuaPerformanceTestProxy_Simulate_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.Raycast
struct AUnLuaPerformanceTestProxy_Raycast_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A57[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
struct AUnLuaPerformanceTestProxy_GetPredictedPositions_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.GetPositions
struct AUnLuaPerformanceTestProxy_GetPositions_Params
{
public:
	TArray<struct FVector>                       OutPositions;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.GetMeshName
struct AUnLuaPerformanceTestProxy_GetMeshName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
struct AUnLuaPerformanceTestProxy_GetMeshInfo_Params
{
public:
	int32                                        OutMeshID;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutMeshName;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutCOM;                                            // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                OutIndices;                                        // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       OutPositions;                                      // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       OutPredictedPositions;                             // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.GetMeshID
struct AUnLuaPerformanceTestProxy_GetMeshID_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.GetIndices
struct AUnLuaPerformanceTestProxy_GetIndices_Params
{
public:
	TArray<int32>                                OutIndices;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UnLua.UnLuaPerformanceTestProxy.GetCOM
struct AUnLuaPerformanceTestProxy_GetCOM_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


