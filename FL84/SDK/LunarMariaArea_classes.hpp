#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// Class LunarMariaArea.LM_AreaData_Base
class ULM_AreaData_Base : public UDataAsset
{
public:
	int32                                        ComponentSizeQuads;                                // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x34(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentNumSubsections;                           // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBitArea;                                        // 0x3C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULM_AreaData_Base* GetDefaultObj();

};

// 0x170 (0x1B0 - 0x40)
// Class LunarMariaArea.LM_AreaData
class ULM_AreaData : public ULM_AreaData_Base
{
public:
	bool                                         bDataTableDirty;                                   // 0x40(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULandscapeInfo*                        LandscapeInfo;                                     // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsProcessArea;                                     // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FAreaLayerData>     LayerTextures;                                     // 0x58(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAreaGroupSet>      GroupSettings;                                     // 0xA8(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>       DecalDisplayColorSettings;                         // 0xF8(0x50)(Edit, NativeAccessSpecifierPublic)
	class UScriptStruct*                         AreaAttributeStruct;                               // 0x148(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            FinalAreaAttributeDataTable;                       // 0x150(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A1[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULM_AreaData* GetDefaultObj();

};

}


