#pragma once

/**
 * Name: FL84
 * Version: 15.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UnLua.UnLuaInterface.GetModuleName
	 */
	struct UUnLuaInterface_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.TriggerAnimNotify
	 */
	struct UUnLuaManager_TriggerAnimNotify_Params
	{	};

	/**
	 * Function UnLua.UnLuaManager.OnLatentActionCompleted
	 */
	struct UUnLuaManager_OnLatentActionCompleted_Params
	{
	public:
		int32_t                                                    LinkID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.OnActorDestroyed
	 */
	struct UUnLuaManager_OnActorDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputVectorAxis
	 */
	struct UUnLuaManager_InputVectorAxis_Params
	{
	public:
		struct FVector                                             AxisValue;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputTouch
	 */
	struct UUnLuaManager_InputTouch_Params
	{
	public:
		ETouchIndex                                                FingerIndex;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6JAS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputGesture
	 */
	struct UUnLuaManager_InputGesture_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputAxis
	 */
	struct UUnLuaManager_InputAxis_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputAction
	 */
	struct UUnLuaManager_InputAction_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions
	 */
	struct AUnLuaPerformanceTestProxy_UpdatePositions_Params
	{
	public:
		TArray<struct FVector>                                     NewPositions;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
	 */
	struct AUnLuaPerformanceTestProxy_UpdateMeshName_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
	 */
	struct AUnLuaPerformanceTestProxy_UpdateMeshID_Params
	{
	public:
		int32_t                                                    NewID;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices
	 */
	struct AUnLuaPerformanceTestProxy_UpdateIndices_Params
	{
	public:
		TArray<int32_t>                                            NewIndices;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.Simulate
	 */
	struct AUnLuaPerformanceTestProxy_Simulate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.Raycast
	 */
	struct AUnLuaPerformanceTestProxy_Raycast_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.NOP
	 */
	struct AUnLuaPerformanceTestProxy_NOP_Params
	{	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
	 */
	struct AUnLuaPerformanceTestProxy_GetPredictedPositions_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.GetPositions
	 */
	struct AUnLuaPerformanceTestProxy_GetPositions_Params
	{
	public:
		TArray<struct FVector>                                     OutPositions;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.GetMeshName
	 */
	struct AUnLuaPerformanceTestProxy_GetMeshName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
	 */
	struct AUnLuaPerformanceTestProxy_GetMeshInfo_Params
	{
	public:
		int32_t                                                    OutMeshID;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S26N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutMeshName;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutCOM;                                                  // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KGK1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            OutIndices;                                              // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     OutPositions;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     OutPredictedPositions;                                   // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.GetMeshID
	 */
	struct AUnLuaPerformanceTestProxy_GetMeshID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.GetIndices
	 */
	struct AUnLuaPerformanceTestProxy_GetIndices_Params
	{
	public:
		TArray<int32_t>                                            OutIndices;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaPerformanceTestProxy.GetCOM
	 */
	struct AUnLuaPerformanceTestProxy_GetCOM_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
