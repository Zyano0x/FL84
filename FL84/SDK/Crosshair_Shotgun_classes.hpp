#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x315 - 0x300)
// WidgetBlueprintGeneratedClass Crosshair_Shotgun.Crosshair_Shotgun_C
class UCrosshair_Shotgun_C : public UCrossHairWidget
{
public:
	class UImage*                                SpreadImg_leftarrow;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_rightarrow;                              // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Nineop_;                                           // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_UI_Bullet_Type                  Nineo__;                                           // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrosshair_Shotgun_C* GetDefaultObj();

	class UUserWidget* GetAmmoWidget();
	class UUserWidget* GetReloadWidget();
};

}


