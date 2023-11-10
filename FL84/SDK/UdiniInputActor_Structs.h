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
		Class_None               = 0,
		Class_Core               = 1,
		Class_CurvePrimAtt       = 2,
		Class_MeshPrimAtt        = 3,
		Class_MeshPointAtt       = 4,
		Class_MeshDetailAtt      = 5,
		Class_MeshControlAtt     = 6,
		Class_PolyLinePrimAtt    = 7,
		Class_PolyLinePointAtt   = 8,
		Class_HeightfieldPrimAtt = 9,
		Class_MAX                = 10
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
		Part_ProceduareMesh  = 1,
		Part_Instance        = 2,
		Part_InstanceForlage = 3,
		Part_HRISInstance    = 4,
		Part_DecalActor      = 5,
		Part_UobjectInstance = 6,
		Part_Image           = 7,
		Part_Landscape       = 8,
		Part_HLOD            = 9,
		Part_MAX             = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UdiniInputActor.HeightFieldData
	 * Size -> 0x0070
	 */
	struct FHeightFieldData
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XLength;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    YLength;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              HeightData;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      MaskNames;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CenterPos;                                               // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundSize;                                               // 0x0044(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixSize;                                                 // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTOJ[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                MaskColors;                                              // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBitMast;                                              // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z15B[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

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
		unsigned char                                              UnknownData_1O42[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_KMUD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_3ELH[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.UdiniTableDatas
	 * Size -> 0x00E0
	 */
	struct FUdiniTableDatas
	{
	public:
		unsigned char                                              UnknownData_4SR9[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
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
	 * Size -> 0x00E8
	 */
	struct FHoudiniParmData
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              help;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUdiniAttributeType                                        AttributeType;                                           // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ULG[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_BMQ2[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UIMax;                                                   // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UIMin;                                                   // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F62M[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VisibilityCondition;                                     // 0x00D8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UdiniInputActor.SubOpData
	 * Size -> 0x02F0
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
		class FString                                              CurveType;                                               // 0x0060(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CoodOnPaintEnd;                                          // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HDV[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SecondHdaTypeName;                                       // 0x0078(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsClosedCurve;                                           // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPoint;                                                 // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVBI[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapGridSize;                                            // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapGridNum;                                             // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBAR[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OperationModeType;                                       // 0x0098(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputTypeClassName;                                     // 0x00A8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActorOwnerClassName;                                     // 0x00B8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImportClassName;                                         // 0x00C8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HelpURL;                                                 // 0x00D8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelName;                                               // 0x00E8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelFolderName;                                         // 0x00F8(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnableResetMeshPart;                                     // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnableResetPolyLinePart;                                 // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnableResetHeightFieldPart;                              // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnableResetPointPart;                                    // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AutoUpdateHdaName;                                       // 0x0118(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModifyLandscapeLayer;                                    // 0x0128(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurveEditMode;                                           // 0x0138(0x0010) Edit, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveSnapDistance;                                       // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultCurveWith;                                        // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerDrawPointAddHeight;                                   // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnableCookForActorMove;                                  // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineResolution;                                        // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7U8C[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FHoudiniParmData>               SubCurveAttribute;                                       // 0x0160(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubCoutrlAttribute;                                      // 0x01B0(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubPointAttribute;                                       // 0x0200(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubPrimAttribute;                                        // 0x0250(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
		TMap<class FString, struct FHoudiniParmData>               SubDetailAttribute;                                      // 0x02A0(0x0050) Edit, NonTransactional, NativeAccessSpecifierPublic
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
	 * Size -> 0x0320
	 */
	struct FInputDynamicData
	{
	public:
		float                                                      PaintScale;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJCI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubOpData                                          StaticSubOpData;                                         // 0x0008(0x02F0) NonTransactional, NativeAccessSpecifierPublic
		class FString                                              PaintAttValue;                                           // 0x02F8(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PaintAttName;                                            // 0x0308(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsePaintDir;                                          // 0x0318(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLFF[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_9NN3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_4XG6[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.OutPutContext
	 * Size -> 0x0018
	 */
	struct FOutPutContext
	{
	public:
		unsigned char                                              UnknownData_MHZG[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UdiniInputActor.HoudiniPartData
	 * Size -> 0x0020
	 */
	struct FHoudiniPartData
	{
	public:
		unsigned char                                              UnknownData_JVAA[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
