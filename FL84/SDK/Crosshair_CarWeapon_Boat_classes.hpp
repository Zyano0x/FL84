#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x520 - 0x488)
// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C
class UCrosshair_CarWeapon_Boat_C : public UVehicleWeaponCrossHairWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Charging;                                     // 0x490(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Cooldown;                                     // 0x498(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Bullet_1;                                          // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet_2;                                          // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet_3;                                          // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet_4;                                          // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet_5;                                          // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet_6;                                          // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet_7;                                          // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Bullet_8;                                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Container_SecondReticle;                           // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Coredot;                                           // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ReticleDirection;                                  // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_coredot;                                 // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PreBurstCount;                                     // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UImage*>                        BulletImages;                                      // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         IsCoolDown;                                        // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPreCharging;                                     // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A8F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimationReversTime;                               // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrosshair_CarWeapon_Boat_C* GetDefaultObj();

	void SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic);
	void OnUpdateChargeProgress(bool InbCharging, int32 InChargeMode, float InChargeProgress, int32 InChargeBurstCount);
	void OnInitialized();
	void OnUpdateCoolDownProgress(float InCoolDownProgress);
	void ExecuteUbergraph_Crosshair_CarWeapon_Boat(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, int32 K2Node_Event_InChargeBurstCount, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_Event_InCoolDownProgress, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


