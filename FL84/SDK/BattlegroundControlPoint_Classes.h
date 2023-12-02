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
	 * BlueprintGeneratedClass BattlegroundControlPoint.BattlegroundControlPoint_C
	 * Size -> 0x024A (FullSize[0x04DA] - InheritedSize[0x0290])
	 */
	class ABattlegroundControlPoint_C : public ABattlegroundControlPoint
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                FX_BG_HoldAreaEdge;                                      // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FX_BG_HoldAreaCube;                                      // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_BG_CenterSparks;                                      // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FX_BG_CenterGround;                                      // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FX_BG_CenterSignalLine;                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FX_BG_CenterSignalGlow;                                  // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CenterSignalGlowMI;                                      // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CenterSignalLineMI;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            HoldAreaCubeMI;                                          // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            HoldAreaEdgeMI;                                          // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EControlPointStatus, struct FLinearColor>             CenterSignalGlowColors;                                  // 0x02F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EControlPointStatus, struct FLinearColor>             CenterSignalLineColors;                                  // 0x0348(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EControlPointStatus, struct FLinearColor>             HoldAreaCubeColors_Dark;                                 // 0x0398(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EControlPointStatus, struct FLinearColor>             HoldAreaCubeColors_Bright;                               // 0x03E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EControlPointStatus, struct FLinearColor>             HoldAreaEdgeColors_Dark;                                 // 0x0438(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EControlPointStatus, struct FLinearColor>             HoldAreaEdgeColors_Bright;                               // 0x0488(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		EControlPointStatus                                        CurOccupiedFactionStatus;                                // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bOccupying;                                              // 0x04D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetOccupying(bool* NewOccupying);
		void GetStatus(EFactionType InFaction, EControlPointStatus* OutStatus);
		void OnOccupiedChanged();
		void OnOccupyingChanged();
		void ReceiveBeginPlay();
		void K2_OnOccupiedFactionChanged();
		void K2_OnCharactersInsideChanged();
		void K2_OnProgressOwnerFactionChanged();
		void K2_OnProgressStatusChanged();
		void ExecuteUbergraph_BattlegroundControlPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
