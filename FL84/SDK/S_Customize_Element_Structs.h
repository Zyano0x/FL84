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
	 * UserDefinedStruct S_Customize_Element.S_Customize_Element
	 * Size -> 0x0060
	 */
	struct FS_Customize_Element
	{
	public:
		class FString                                              PanelConfigName_30_C8EA5888448C1065B4C67D8ED7184138;     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UCanvasPanel*                                        PanelWidget_49_2577B04D4032F2C407CAA48E62966365;         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             DragWidget_32_625CBF2246B0278CD18809971563076C;          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             SelectedWidget_34_8DEE1E594AE75D45FD35AAA7EBB6FF14;      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NoticeId_45_FD5E6E5C45B1A0B2786E3B9107BABFFA;            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y5QZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     SelectedHideWidgets_40_E56A7010459F7BE4121B739202DA1058; // 0x0030(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UWidget*>                                     SelectedShowWidgets_41_3DB1ACF94FF26528168047A9A05881A1; // 0x0040(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		class UWidget*                                             PanelDisableWidget_48_9C396A2343CA316E853BC7B06F9F2901;  // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             RelatedPanelWidget_60_ECDF5D7848961F3F8BA163AE036090D8;  // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
