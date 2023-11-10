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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Crosshair_Shotgun.Crosshair_Shotgun_C
	 * Size -> 0x0015 (FullSize[0x0315] - InheritedSize[0x0300])
	 */
	class UCrosshair_Shotgun_C : public UCrossHairWidget
	{
	public:
		class UImage* SpreadImg_Leftarrow;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage* SpreadImg_Rightarrow;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_UI_Bullet_Type                                           _;                                                       // 0x0314(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UUserWidget* GetAmmoWidget();
		class UUserWidget* GetReloadWidget();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
