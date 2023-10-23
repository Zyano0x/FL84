#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x351 - 0x300)
// WidgetBlueprintGeneratedClass Crosshair_Simple_En.Crosshair_Simple_En_C
class UCrosshair_Simple_En_C : public UCrossHairWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Simple_EN_Anim;                                    // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ForbidImg;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_Bullet_Simple_C*                  HUD_Bullet_Simple;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_Reload_C*                         HUD_Reload;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_coredot;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_downarrow;                               // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_leftarrow;                               // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_rightarrow;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_uparrow;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_UI_Bullet_Type                  Nineo__;                                           // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrosshair_Simple_En_C* GetDefaultObj();

	class UUserWidget* GetReloadWidget();
	class UUserWidget* GetAmmoWidget();
	void Update();
	void Construct();
	void ExecuteUbergraph_Crosshair_Simple_En(int32 EntryPoint);
};

}


