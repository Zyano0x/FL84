#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * ScriptStruct S_TabItem.S_TabItem
	 * Size -> 0x0050
	 */
	struct FS_TabItem
	{
	public:
		class FString                                              Key_19_C8EA5888448C1065B4C67D8ED7184138;                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FS_LocalText                                        Text_2_638A9A6F475599A7AEF8B0843878EB76;                 // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Icon_16_1A14BCEE4619978CCE3DF2B24CDF5566;                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FS_HintData                                         HintPointData_8_9E41A70C407E9BB912DBC9B2329F3516;        // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             LinkWidget_15_2577B04D4032F2C407CAA48E62966365;          // 0x0040(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size_22_18AE03454E3AAECD655B478607F32EC4;                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
