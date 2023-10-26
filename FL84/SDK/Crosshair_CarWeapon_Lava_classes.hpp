#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x490 - 0x488)
// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Lava.Crosshair_CarWeapon_Lava_C
class UCrosshair_CarWeapon_Lava_C : public UVehicleWeaponCrossHairWidget
{
public:
	class UImage*                                SpreadImg_coredot;                                 // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrosshair_CarWeapon_Lava_C* GetDefaultObj();

	void SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic);
};

}


