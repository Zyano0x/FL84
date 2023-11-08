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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_TabItem.S_TabItem
	 * Size -> 0x0058
	 */
	struct FS_TabItem
	{
	public:
		class FString                                              Key_19_C8EA5888448C1065B4C67D8ED7184138;                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FS_LocalText                                        Text_2_638A9A6F475599A7AEF8B0843878EB76;                 // 0x0010(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UObject*                                             Icon_16_1A14BCEE4619978CCE3DF2B24CDF5566;                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_HintData                                         HintPointData_8_9E41A70C407E9BB912DBC9B2329F3516;        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             LinkWidget_15_2577B04D4032F2C407CAA48E62966365;          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Size_22_18AE03454E3AAECD655B478607F32EC4;                // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
