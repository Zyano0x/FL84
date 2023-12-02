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
	 * WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Lava.Crosshair_CarWeapon_Lava_C
	 * Size -> 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
	 */
	class UCrosshair_CarWeapon_Lava_C : public UVehicleWeaponCrossHairWidget
	{
	public:
		class UImage*                                              SpreadImg_coredot;                                       // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
