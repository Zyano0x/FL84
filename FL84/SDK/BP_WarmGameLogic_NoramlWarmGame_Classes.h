#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C
	 * Size -> 0x0128 (FullSize[0x0360] - InheritedSize[0x0238])
	 */
	class ABP_WarmGameLogic_NoramlWarmGame_C : public ABP_WarmGameLogicBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<int32_t, struct FVector2D>                            _;                                                       // 0x0290(0x0050) Edit, BlueprintVisible
		class UDataTable*                                          BattleTimelineConfig;                                    // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, struct FVector2D>                            ID_;                                                     // 0x02E8(0x0050) Edit, BlueprintVisible
		int32_t                                                    AirlineID;                                               // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W60N[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     PoisonCircleCenterArray;                                 // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FInt32Range                                         __;                                                       // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Event_ExecLogic();
		void ExecuteUbergraph_BP_WarmGameLogic_NoramlWarmGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
