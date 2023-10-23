#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct S_Customize_Element.S_Customize_Element
struct FS_Customize_Element
{
public:
	class FString                                PanelConfigName_30_C8EA5888448C1065B4C67D8ED7184138; // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                          PanelWidget_49_2577B04D4032F2C407CAA48E62966365;   // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               DragWidget_32_625CBF2246B0278CD18809971563076C;    // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               SelectedWidget_34_8DEE1E594AE75D45FD35AAA7EBB6FF14; // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NoticeId_45_FD5E6E5C45B1A0B2786E3B9107BABFFA;      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       SelectedHideWidgets_40_E56A7010459F7BE4121B739202DA1058; // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                       SelectedShowWidgets_41_3DB1ACF94FF26528168047A9A05881A1; // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               PanelDisableWidget_48_9C396A2343CA316E853BC7B06F9F2901; // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


