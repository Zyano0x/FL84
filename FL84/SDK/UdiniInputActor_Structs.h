#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum UdiniInputActor.EUdiniTableType
	 */
	enum class EUdiniTableType : uint8_t
	{
		TYPE_Mat          = 0,
		TYPE_Staticmesh   = 1,
		TYPE_FoliageType  = 2,
		TYPE_Pic          = 3,
		TYPE_Heigfield    = 4,
		TYPE_OtherUobject = 5,
		TYPE_Other        = 6,
		TYPE_MAX          = 7
	};

	/**
	 * Enum UdiniInputActor.EUdiniPart
	 */
	enum class EUdiniPart : uint8_t
	{
		Part_Mesh           = 0,
		Part_Curve          = 1,
		Part_Point          = 2,
		Part_Curve_ReadOnly = 3,
		Part_Point_ReadOnly = 4,
		Part_MAX            = 5
	};

	/**
	 * Enum UdiniInputActor.EUdiniAttributeClass
	 */
	enum class EUdiniAttributeClass : uint8_t
	{
		Class_None             = 0,
		Class_Core             = 1,
		Class_CurvePrimAtt     = 2,
		Class_MeshPrimAtt      = 3,
		Class_MeshPointAtt     = 4,
		Class_MeshDetailAtt    = 5,
		Class_MeshControlAtt   = 6,
		Class_PolyLinePrimAtt  = 7,
		Class_PolyLinePointAtt = 8,
		Class_MAX              = 9
	};

	/**
	 * Enum UdiniInputActor.EUdiniAttributeType
	 */
	enum class EUdiniAttributeType : uint8_t
	{
		TYPE_STRING     = 0,
		TYPE_INT        = 1,
		TYPE_FLOAT      = 2,
		TYPE_VECTOR3    = 3,
		TYPE_VECTOR4    = 4,
		TYPE_VECTOR2    = 5,
		TYPE_StringList = 6,
		TYPE_IntList    = 7,
		TYPE_Tog        = 8,
		TYPE_Button     = 9,
		TYPE_CheckBox   = 10,
		TYPE_UOBJECT    = 11,
		TYPE_MAX        = 12
	};

	/**
	 * Enum UdiniInputActor.EUdiniDataPartType
	 */
	enum class EUdiniDataPartType : uint8_t
	{
		Part_Point      = 0,
		Part_Mesh       = 1,
		Part_Polyline   = 2,
		Part_Splineline = 3,
		Part_Volum      = 4,
		Part_Max        = 5
	};

	/**
	 * Enum UdiniInputActor.EUdiniPartType
	 */
	enum class EUdiniPartType : uint8_t
	{
		Part_StaticmeshMesh  = 0,
		Part_Instance        = 1,
		Part_InstanceForlage = 2,
		Part_HRISInstance    = 3,
		Part_UobjectInstance = 4,
		Part_Image           = 5,
		Part_Landscape       = 6,
		Part_HLOD            = 7,
		Part_MAX             = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UdiniInputActor.OnePoly
	 * Size -> 0x0038
	 */
	struct FOnePoly
	{
	public:
		TArray<int32_t>                                            polyPosIndex;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            polyNonSharedEdgeArray;                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            polyTrianglePrimIndex;                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    __Primitive_Id_;                                         // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHid;                                                  // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MQ2[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.OneLine
	 * Size -> 0x0018
	 */
	struct FOneLine
	{
	public:
		TArray<int32_t>                                            polyPosIndex;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHid;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTJE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.IndexCluster
	 * Size -> 0x0010
	 */
	struct FIndexCluster
	{
	public:
		TArray<int32_t>                                            Indexs;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniAssetData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FUdiniAssetData : public FTableRowBase
	{
	public:
		bool                                                       bIsDebug;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUdiniTableType                                            TableType;                                               // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1OK4[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniTableDatas
	 * Size -> 0x00E0
	 */
	struct FUdiniTableDatas
	{
	public:
		unsigned char                                              UnknownData_RMA1[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniFoliageTypeDataTable
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FUdiniFoliageTypeDataTable : public FUdiniAssetData
	{
	public:
		class FString                                              RowName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFoliageType_InstancedStaticMesh*>            FoliageTypes;                                            // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Attributes;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniHeightFieldDatable
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FUdiniHeightFieldDatable : public FUdiniAssetData
	{
	public:
		class FString                                              RowName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UHeightFieldTexture*>                         TextureList;                                             // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Attributes;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.HoudiniParmData
	 * Size -> 0x00E0
	 */
	struct FHoudiniParmData
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              help;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUdiniAttributeType                                        AttributeType;                                           // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWLJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TupleSize;                                               // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FloatValue;                                              // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            IntValue;                                                // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringValue;                                             // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultFloatValue;                                       // 0x0058(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DefaultFIntValue;                                        // 0x0068(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      DefaultFStringValue;                                     // 0x0078(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ChoseListStringLable;                                    // 0x0088(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ChoseListStringValue;                                    // 0x0098(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ChoseListIntValue;                                       // 0x00A8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHide;                                                 // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasMin;                                                  // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasMax;                                                  // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasUIMin;                                                // 0x00C3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasUIMax;                                                // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDGT[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UIMax;                                                   // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UIMin;                                                   // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VisibilityCondition;                                     // 0x00D0(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.SubOpData
	 * Size -> 0x0288
	 */
	struct FSubOpData
	{
	public:
		class FString                                              Icon;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubOpName;                                               // 0x0010(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MainOpName;                                              // 0x0020(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Parent;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubOpToolTip;                                            // 0x0040(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HdaTypeName;                                             // 0x0050(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsClosedCurve;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPoint;                                                 // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NPZ[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapGridSize;                                            // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapGridNum;                                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NZV[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OperationModeType;                                       // 0x0070(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputTypeClassName;                                     // 0x0080(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActorOwnerClassName;                                     // 0x0090(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImportClassName;                                         // 0x00A0(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HelpURL;                                                 // 0x00B0(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelName;                                               // 0x00C0(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnableResetMeshPart;                                     // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnableResetPolyLinePart;                                 // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AutoUpdateHdaName;                                       // 0x00D8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModifyLandscapeLayer;                                    // 0x00E8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubCurveAttribute;                                       // 0x00F8(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubCoutrlAttribute;                                      // 0x0148(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubPointAttribute;                                       // 0x0198(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubPrimAttribute;                                        // 0x01E8(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubDetailAttribute;                                      // 0x0238(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.ManOpData
	 * Size -> 0x0070
	 */
	struct FManOpData
	{
	public:
		class FString                                              MainOpName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Icon;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FSubOpData>                     SubOpDatas;                                              // 0x0020(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.InputDataList
	 * Size -> 0x0050
	 */
	struct FInputDataList
	{
	public:
		TMap<class FString, struct FManOpData>                     ManOpDatasList;                                          // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.InputDynamicData
	 * Size -> 0x02B8
	 */
	struct FInputDynamicData
	{
	public:
		float                                                      PaintScale;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y859[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubOpData                                          StaticSubOpData;                                         // 0x0008(0x0288) NonTransactional, NativeAccessSpecifierPublic
		class FString                                              PaintAttValue;                                           // 0x0290(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PaintAttName;                                            // 0x02A0(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsePaintDir;                                          // 0x02B0(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZ4M[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniTextureDatable
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FUdiniTextureDatable : public FUdiniAssetData
	{
	public:
		class FString                                              RowName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  TextureList;                                             // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Attributes;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniDataTable
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FUdiniDataTable : public FUdiniAssetData
	{
	public:
		class FString                                              RowName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 StaticMesh;                                              // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Attributes;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniMatDatable
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FUdiniMatDatable : public FUdiniAssetData
	{
	public:
		class FString                                              RowName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstance*>                           MatInstance;                                             // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Attributes;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniOtherUobjectDataTable
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FUdiniOtherUobjectDataTable : public FUdiniAssetData
	{
	public:
		class FString                                              RowName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ActorInstance;                                           // 0x0020(0x0010) Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Attributes;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.SnapPoint
	 * Size -> 0x0010
	 */
	struct FSnapPoint
	{
	public:
		unsigned char                                              UnknownData_DP8K[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniOpParmSelf
	 * Size -> 0x0005
	 */
	struct FUdiniOpParmSelf
	{
	public:
		bool                                                       EnableShowBackGround;                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowAttributeValueAsText;                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowAttributeValueAsDir;                                 // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableShowBackGroundText;                                // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableShowColor;                                         // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniStaticMeshDataTable
	 * Size -> 0x0070 (FullSize[0x0080] - InheritedSize[0x0010])
	 */
	struct FUdiniStaticMeshDataTable : public FUdiniAssetData
	{
	public:
		class FString                                              RowName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 StaticMesh;                                              // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Attributes;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniInstanceData
	 * Size -> 0x0068
	 */
	struct FUdiniInstanceData
	{
	public:
		unsigned char                                              UnknownData_SS9V[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.OutPutContext
	 * Size -> 0x0018
	 */
	struct FOutPutContext
	{
	public:
		unsigned char                                              UnknownData_98EY[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.HoudiniPartData
	 * Size -> 0x0020
	 */
	struct FHoudiniPartData
	{
	public:
		unsigned char                                              UnknownData_E55Q[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
