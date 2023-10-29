#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x548 - 0x488)
// WidgetBlueprintGeneratedClass Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C
class UCrosshair_Carweapon_WL09Rocket_C : public UVehicleWeaponCrossHairWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Coredot;                                           // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_1;                                      // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_2;                                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_3;                                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_4;                                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_5;                                      // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_6;                                      // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_7;                                      // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_8;                                      // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_9;                                      // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_10;                                     // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_11;                                     // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_12;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_13;                                     // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_14;                                     // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_15;                                     // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bullet_16;                                     // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Reload;                                      // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_coredot;                                 // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Distance;                                      // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        LastRservedAmmo;                                   // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UImage*>                        BulletImage;                                       // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrosshair_Carweapon_WL09Rocket_C* GetDefaultObj();

	void OnAmmoCounterChanged(int32 Counter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnAmmoChanged(int32 InReservedAmmo, int32 InMaxAmmo, bool InbFirst);
	void OnUpdateReloadProgress(float InReloadProgress, int32 InReservedAmmo, int32 InMaxAmmo);
	void OnInitialized();
	void OnReloadFinished(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo);
	void OnUpdateAimTargetDistance(float InDistance);
	void ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_InReservedAmmo_2, int32 K2Node_Event_InMaxAmmo_2, bool K2Node_Event_InbFirst, float K2Node_Event_InReloadProgress, int32 K2Node_Event_InReservedAmmo_1, int32 K2Node_Event_InMaxAmmo_1, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo, int32 CallFunc_Array_Add_ReturnValue_15, float K2Node_Event_InDistance, class UImage* CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


