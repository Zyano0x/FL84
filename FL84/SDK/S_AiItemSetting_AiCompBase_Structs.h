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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_AiItemSetting_AiCompBase.S_AiItemSetting_AiCompBase
	 * Size -> 0x00F0
	 */
	struct FS_AiItemSetting_AiCompBase
	{
	public:
		TMap<E_AiEquipmentSettingType_AiCompBase, struct FS_EquipmentArray_AiCompBase> Equipment_18_9C814D4B443C3D40AEB7F7BA8C9347DC;           // 0x0000(0x0050) Edit, BlueprintVisible
		TMap<E_AiItemSettingType_AiCompBase, struct FIntPoint>     Consumable_16_381728FD4CB1313E0D6308A986EE78AD;          // 0x0050(0x0050) Edit, BlueprintVisible
		TMap<E_WeaponParts_AiCompBase, struct FS_EquipmentArray_AiCompBase> WeaponPart_27_A0B9A42B41A500C81FF8A997BC5F7D70;          // 0x00A0(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
