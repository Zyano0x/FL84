#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUdiniTableType : uint8
{
	TYPE_Mat                       = 0,
	TYPE_Staticmesh                = 1,
	TYPE_FoliageType               = 2,
	TYPE_Pic                       = 3,
	TYPE_Heigfield                 = 4,
	TYPE_OtherUobject              = 5,
	TYPE_Other                     = 6,
	TYPE_MAX                       = 7,
};

enum class EUdiniPart : uint8
{
	Part_Mesh                      = 0,
	Part_Curve                     = 1,
	Part_Point                     = 2,
	Part_Curve_ReadOnly            = 3,
	Part_Point_ReadOnly            = 4,
	Part_MAX                       = 5,
};

enum class EUdiniAttributeClass : uint8
{
	Class_None                     = 0,
	Class_Core                     = 1,
	Class_CurvePrimAtt             = 2,
	Class_MeshPrimAtt              = 3,
	Class_MeshPointAtt             = 4,
	Class_MeshDetailAtt            = 5,
	Class_MeshControlAtt           = 6,
	Class_PolyLinePrimAtt          = 7,
	Class_PolyLinePointAtt         = 8,
	Class_MAX                      = 9,
};

enum class EUdiniAttributeType : uint8
{
	TYPE_STRING                    = 0,
	TYPE_INT                       = 1,
	TYPE_FLOAT                     = 2,
	TYPE_VECTOR3                   = 3,
	TYPE_VECTOR4                   = 4,
	TYPE_VECTOR2                   = 5,
	TYPE_StringList                = 6,
	TYPE_IntList                   = 7,
	TYPE_Tog                       = 8,
	TYPE_Button                    = 9,
	TYPE_CheckBox                  = 10,
	TYPE_UOBJECT                   = 11,
	TYPE_MAX                       = 12,
};

enum class EUdiniDataPartType : uint8
{
	Part_Point                     = 0,
	Part_Mesh                      = 1,
	Part_Polyline                  = 2,
	Part_Splineline                = 3,
	Part_Volum                     = 4,
	Part_Max                       = 5,
};

enum class EUdiniPartType : uint8
{
	Part_StaticmeshMesh            = 0,
	Part_Instance                  = 1,
	Part_InstanceForlage           = 2,
	Part_HRISInstance              = 3,
	Part_UobjectInstance           = 4,
	Part_Image                     = 5,
	Part_Landscape                 = 6,
	Part_HLOD                      = 7,
	Part_MAX                       = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x10 - 0x8)
// ScriptStruct UdiniInputActor.UdiniAssetData
struct FUdiniAssetData : public FTableRowBase
{
public:
	bool                                         bIsDebug;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUdiniTableType                   TableType;                                         // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3F[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct UdiniInputActor.UdiniTableDatas
struct FUdiniTableDatas
{
public:
	uint8                                        Pad_F40[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x80 - 0x10)
// ScriptStruct UdiniInputActor.UdiniFoliageTypeDataTable
struct FUdiniFoliageTypeDataTable : public FUdiniAssetData
{
public:
	class FString                                RowName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFoliageType_InstancedStaticMesh*> FoliageTypes;                                      // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x70 (0x80 - 0x10)
// ScriptStruct UdiniInputActor.UdiniHeightFieldDatable
struct FUdiniHeightFieldDatable : public FUdiniAssetData
{
public:
	class FString                                RowName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHeightFieldTexture*>           TextureList;                                       // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct UdiniInputActor.HoudiniParmData
struct FHoudiniParmData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Help;                                              // 0x10(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUdiniAttributeType               AttributeType;                                     // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F45[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TupleSize;                                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FloatValue;                                        // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                IntValue;                                          // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringValue;                                       // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                DefaultFloatValue;                                 // 0x58(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                DefaultFIntValue;                                  // 0x68(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultFStringValue;                               // 0x78(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ChoseListStringLable;                              // 0x88(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ChoseListStringValue;                              // 0x98(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ChoseListIntValue;                                 // 0xA8(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHide;                                           // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasMin;                                            // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasMax;                                            // 0xC2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasUIMin;                                          // 0xC3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasUIMax;                                          // 0xC4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F46[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UIMax;                                             // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UIMin;                                             // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VisibilityCondition;                               // 0xD0(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x288 (0x288 - 0x0)
// ScriptStruct UdiniInputActor.SubOpData
struct FSubOpData
{
public:
	class FString                                Icon;                                              // 0x0(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubOpName;                                         // 0x10(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MainOpName;                                        // 0x20(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Parent;                                            // 0x30(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubOpToolTip;                                      // 0x40(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HdaTypeName;                                       // 0x50(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsClosedCurve;                                     // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPoint;                                           // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F49[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnapGridSize;                                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnapGridNum;                                       // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OperationModeType;                                 // 0x70(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputTypeClassName;                               // 0x80(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActorOwnerClassName;                               // 0x90(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImportClassName;                                   // 0xA0(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HelpURL;                                           // 0xB0(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelName;                                         // 0xC0(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnableResetMeshPart;                               // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnableResetPolyLinePart;                           // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AutoUpdateHdaName;                                 // 0xD8(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModifyLandscapeLayer;                              // 0xE8(0x10)(Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FHoudiniParmData> SubCurveAttribute;                                 // 0xF8(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, struct FHoudiniParmData> SubCoutrlAttribute;                                // 0x148(0x50)(Edit, NonTransactional, NativeAccessSpecifierPublic)
	TMap<class FString, struct FHoudiniParmData> SubPointAttribute;                                 // 0x198(0x50)(Edit, NonTransactional, NativeAccessSpecifierPublic)
	TMap<class FString, struct FHoudiniParmData> SubPrimAttribute;                                  // 0x1E8(0x50)(Edit, NonTransactional, NativeAccessSpecifierPublic)
	TMap<class FString, struct FHoudiniParmData> SubDetailAttribute;                                // 0x238(0x50)(Edit, NonTransactional, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct UdiniInputActor.ManOpData
struct FManOpData
{
public:
	class FString                                MainOpName;                                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Icon;                                              // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FSubOpData>       SubOpDatas;                                        // 0x20(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct UdiniInputActor.InputDataList
struct FInputDataList
{
public:
	TMap<class FString, struct FManOpData>       ManOpDatasList;                                    // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// ScriptStruct UdiniInputActor.InputDynamicData
struct FInputDynamicData
{
public:
	float                                        PaintScale;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubOpData                            StaticSubOpData;                                   // 0x8(0x288)(NonTransactional, NativeAccessSpecifierPublic)
	class FString                                PaintAttValue;                                     // 0x290(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PaintAttName;                                      // 0x2A0(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsePaintDir;                                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x80 - 0x10)
// ScriptStruct UdiniInputActor.UdiniTextureDatable
struct FUdiniTextureDatable : public FUdiniAssetData
{
public:
	class FString                                RowName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    TextureList;                                       // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x70 (0x80 - 0x10)
// ScriptStruct UdiniInputActor.UdiniDataTable
struct FUdiniDataTable : public FUdiniAssetData
{
public:
	class FString                                RowName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   StaticMesh;                                        // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x70 (0x80 - 0x10)
// ScriptStruct UdiniInputActor.UdiniMatDatable
struct FUdiniMatDatable : public FUdiniAssetData
{
public:
	class FString                                RowName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstance*>             MatInstance;                                       // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct UdiniInputActor.OnePoly
struct FOnePoly
{
public:
	TArray<int32>                                PolyPosIndex;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PolyNonSharedEdgeArray;                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PolyTrianglePrimIndex;                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        __Primitive_Id_;                                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHid;                                            // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F50[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x80 - 0x10)
// ScriptStruct UdiniInputActor.UdiniOtherUobjectDataTable
struct FUdiniOtherUobjectDataTable : public FUdiniAssetData
{
public:
	class FString                                RowName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UObject>>           ActorInstance;                                     // 0x20(0x10)(Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UdiniInputActor.SnapPoint
struct FSnapPoint
{
public:
	uint8                                        Pad_F52[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5 (0x5 - 0x0)
// ScriptStruct UdiniInputActor.UdiniOpParmSelf
struct FUdiniOpParmSelf
{
public:
	bool                                         EnableShowBackGround;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowAttributeValueAsText;                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowAttributeValueAsDir;                           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableShowBackGroundText;                          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableShowColor;                                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct UdiniInputActor.OneLine
struct FOneLine
{
public:
	TArray<int32>                                PolyPosIndex;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHid;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F58[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UdiniInputActor.IndexCluster
struct FIndexCluster
{
public:
	TArray<int32>                                Indexs;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x80 - 0x10)
// ScriptStruct UdiniInputActor.UdiniStaticMeshDataTable
struct FUdiniStaticMeshDataTable : public FUdiniAssetData
{
public:
	class FString                                RowName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   StaticMesh;                                        // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Attributes;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct UdiniInputActor.UdiniInstanceData
struct FUdiniInstanceData
{
public:
	uint8                                        Pad_F59[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct UdiniInputActor.OutPutContext
struct FOutPutContext
{
public:
	uint8                                        Pad_F5A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct UdiniInputActor.HoudiniPartData
struct FHoudiniPartData
{
public:
	uint8                                        Pad_F5C[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


