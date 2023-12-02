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
	 * WidgetBlueprintGeneratedClass BattleUI_Score.BattleUI_Score_C
	 * Size -> 0x0050 (FullSize[0x0478] - InheritedSize[0x0428])
	 */
	class UBattleUI_Score_C : public UHUDBattleUIScore
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Enter_Anim;                                              // 0x0430(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_BG_Grid01;                                         // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_BG_Grid03;                                         // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_BG_Grid04;                                         // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_BG_KillLeader;                                     // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextKillNum;                                             // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextLeftNum;                                             // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DeathView_HeatScore_C*                           UI_DeathView_HeatScore;                                  // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		void CustomEvent_1();
		void CustomEvent_2(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue);
		void CustomEvent_3(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue);
		void Construct();
		void OnSpectateInfoRep_Event(class ASolarSpectateInfo* SpectateInfo);
		void OnSpectateTargetChanged_Event(class ASolarPlayerState* OldTarget, class ASolarSpectateInfo* SpectateInfo);
		void OnSpectateTargetKillNumChanged(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue);
		void ExecuteUbergraph_BattleUI_Score(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
