#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoudiniStaticMeshMethod : uint8
{
	RawMesh                        = 0,
	FMeshDescription               = 1,
	UHoudiniStaticMesh             = 2,
	EHoudiniStaticMeshMethod_MAX   = 3,
};

enum class EHoudiniAssetStateResult : uint8
{
	None                           = 0,
	Working                        = 1,
	Success                        = 2,
	FinishedWithError              = 3,
	FinishedWithFatalError         = 4,
	Aborted                        = 5,
	EHoudiniAssetStateResult_MAX   = 6,
};

enum class EHoudiniAssetState : uint8
{
	NeedInstantiation              = 0,
	NewHDA                         = 1,
	PreInstantiation               = 2,
	Instantiating                  = 3,
	PreCook                        = 4,
	Cooking                        = 5,
	PostCook                       = 6,
	PreProcess                     = 7,
	Processing                     = 8,
	None                           = 9,
	NeedRebuild                    = 10,
	NeedDelete                     = 11,
	Deleting                       = 12,
	ProcessTemplate                = 13,
	EHoudiniAssetState_MAX         = 14,
};

enum class EHoudiniProxyRefineRequestResult : uint8
{
	Invalid                        = 0,
	None                           = 1,
	PendingCooks                   = 2,
	Refined                        = 3,
	EHoudiniProxyRefineRequestResult_MAX = 4,
};

enum class EHoudiniProxyRefineResult : uint8
{
	Invalid                        = 0,
	Failed                         = 1,
	Success                        = 2,
	Skipped                        = 3,
	EHoudiniProxyRefineResult_MAX  = 4,
};

enum class EHoudiniLandscapeExportType : uint8
{
	Heightfield                    = 0,
	Mesh                           = 1,
	Points                         = 2,
	EHoudiniLandscapeExportType_MAX = 3,
};

enum class EHoudiniCurveBreakpointParameterization : uint8
{
	Invalid                        = -1,
	Uniform                        = 0,
	Chord                          = 1,
	Centripetal                    = 2,
	EHoudiniCurveBreakpointParameterization_MAX = 3,
};

enum class EHoudiniCurveMethod : uint8
{
	Invalid                        = -1,
	CVs                            = 0,
	Breakpoints                    = 1,
	Freehand                       = 2,
	EHoudiniCurveMethod_MAX        = 3,
};

enum class EHoudiniCurveType : uint8
{
	Invalid                        = -1,
	Polygon                        = 0,
	Nurbs                          = 1,
	Bezier                         = 2,
	Points                         = 3,
	EHoudiniCurveType_MAX          = 4,
};

enum class EHoudiniOutputType : uint8
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Landscape                      = 3,
	Curve                          = 4,
	Skeletal                       = 5,
	GeometryCollection             = 6,
	DataTable                      = 7,
	Texture                        = 8,
	EHoudiniOutputType_MAX         = 9,
};

enum class EHoudiniInputType : uint8
{
	Invalid                        = 0,
	Geometry                       = 1,
	Curve                          = 2,
	Asset                          = 3,
	Landscape                      = 4,
	World                          = 5,
	Skeletal                       = 6,
	GeometryCollection             = 7,
	Foliage                        = 8,
	WorldStaticMeshComponents      = 9,
	PointCloud                     = 10,
	LandscapeSplines               = 11,
	Texture                        = 12,
	EHoudiniInputType_MAX          = 13,
};

enum class EHoudiniLandscapeOutputBakeType : uint8
{
	Detachment                     = 0,
	BakeToImage                    = 1,
	BakeToWorld                    = 2,
	InValid                        = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4,
};

enum class EHoudiniRampInterpolationType : uint8
{
	InValid                        = -1,
	CONSTANT                       = 0,
	LINEAR                         = 1,
	CATMULL_ROM                    = 2,
	MONOTONE_CUBIC                 = 3,
	BEZIER                         = 4,
	BSPLINE                        = 5,
	HERMITE                        = 6,
	EHoudiniRampInterpolationType_MAX = 7,
};

enum class EAttribOwner : uint8
{
	Invalid                        = -1,
	Vertex                         = 0,
	Point                          = 1,
	Prim                           = 2,
	Detail                         = 3,
	EAttribOwner_MAX               = 4,
};

enum class EAttribStorageType : uint8
{
	Invalid                        = -1,
	INT                            = 0,
	INT64                          = 1,
	FLOAT                          = 2,
	FLOAT64                        = 3,
	STRING                         = 4,
	EAttribStorageType_MAX         = 5,
};

enum class EHoudiniInstancerType : uint8
{
	Invalid                        = 0,
	ObjectInstancer                = 1,
	PackedPrimitive                = 2,
	AttributeInstancer             = 3,
	OldSchoolAttributeInstancer    = 4,
	GeometryCollection             = 5,
	EHoudiniInstancerType_MAX      = 6,
};

enum class EHoudiniPartType : uint8
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Curve                          = 3,
	Volume                         = 4,
	DataTable                      = 5,
	Texture                        = 6,
	EHoudiniPartType_MAX           = 7,
};

enum class EHoudiniGeoType : uint8
{
	Invalid                        = 0,
	Default                        = 1,
	Intermediate                   = 2,
	Input                          = 3,
	Curve                          = 4,
	EHoudiniGeoType_MAX            = 5,
};

enum class EHoudiniHandleType : uint8
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3,
};

enum class EXformParameter : uint8
{
	TX                             = 0,
	TY                             = 1,
	TZ                             = 2,
	RX                             = 3,
	RY                             = 4,
	RZ                             = 5,
	SX                             = 6,
	SY                             = 7,
	SZ                             = 8,
	COUNT                          = 9,
	EXformParameter_MAX            = 10,
};

enum class ETransferLayerMode : uint8
{
	Default                        = 0,
	NoneLayer                      = 1,
	SpecifiedLayer                 = 2,
	UnderSpecifiedLayer            = 3,
	ETransferLayerMode_MAX         = 4,
};

enum class ETransferHeightMode : uint8
{
	Default                        = 0,
	AllLayer                       = 1,
	SpecifiedLayer                 = 2,
	UnderSpecifiedLayer            = 3,
	ETransferHeightMode_MAX        = 4,
};

enum class EHoudiniInputObjectType : uint8
{
	Invalid                        = 0,
	Object                         = 1,
	StaticMesh                     = 2,
	SkeletalMesh                   = 3,
	SceneComponent                 = 4,
	StaticMeshComponent            = 5,
	InstancedStaticMeshComponent   = 6,
	SplineComponent                = 7,
	HoudiniSplineComponent         = 8,
	HoudiniAssetComponent          = 9,
	Actor                          = 10,
	Landscape                      = 11,
	Brush                          = 12,
	CameraComponent                = 13,
	DataTable                      = 14,
	HoudiniAssetActor              = 15,
	FoliageType_InstancedStaticMesh = 16,
	GeometryCollection             = 17,
	GeometryCollectionComponent    = 18,
	GeometryCollectionActor_Deprecated = 19,
	SkeletalMeshComponent          = 20,
	Blueprint                      = 21,
	InstancedFoliageActor          = 22,
	LandscapeSplinesComponent      = 23,
	Texture                        = 24,
	EHoudiniInputObjectType_MAX    = 25,
};

enum class EHoudiniXformType : uint8
{
	None                           = 0,
	IntoThisObject                 = 1,
	Auto                           = 2,
	EHoudiniXformType_MAX          = 3,
};

enum class EHoudiniCurveOutputType : uint8
{
	UnrealSpline                   = 0,
	HoudiniSpline                  = 1,
	EHoudiniCurveOutputType_MAX    = 2,
};

enum class EHoudiniParameterType : uint8
{
	Invalid                        = 0,
	Button                         = 1,
	ButtonStrip                    = 2,
	Color                          = 3,
	ColorRamp                      = 4,
	File                           = 5,
	FileDir                        = 6,
	FileGeo                        = 7,
	FileImage                      = 8,
	Float                          = 9,
	FloatRamp                      = 10,
	Folder                         = 11,
	FolderList                     = 12,
	Input                          = 13,
	Int                            = 14,
	IntChoice                      = 15,
	Label                          = 16,
	MultiParm                      = 17,
	Separator                      = 18,
	String                         = 19,
	StringChoice                   = 20,
	StringAssetRef                 = 21,
	Toggle                         = 22,
	EHoudiniParameterType_MAX      = 23,
};

enum class EHoudiniFolderParameterType : uint8
{
	Invalid                        = 0,
	Collapsible                    = 1,
	Simple                         = 2,
	Tabs                           = 3,
	Radio                          = 4,
	Other                          = 5,
	EHoudiniFolderParameterType_MAX = 6,
};

enum class EHoudiniMultiParmModificationType : uint8
{
	None                           = 0,
	Inserted                       = 1,
	Removed                        = 2,
	Modified                       = 3,
	EHoudiniMultiParmModificationType_MAX = 4,
};

enum class EHoudiniRampPointConstructStatus : uint8
{
	None                           = 0,
	INITIALIZED                    = 1,
	POSITION_INSERTED              = 2,
	VALUE_INSERTED                 = 3,
	INTERPTYPE_INSERTED            = 4,
	EHoudiniRampPointConstructStatus_MAX = 5,
};

enum class EPDGWorkResultState : uint8
{
	None                           = 0,
	ToLoad                         = 1,
	Loading                        = 2,
	Loaded                         = 3,
	ToDelete                       = 4,
	Deleting                       = 5,
	Deleted                        = 6,
	NotLoaded                      = 7,
	EPDGWorkResultState_MAX        = 8,
};

enum class EPDGNodeState : uint8
{
	None                           = 0,
	Dirtied                        = 1,
	Dirtying                       = 2,
	Cooking                        = 3,
	Cook_Complete                  = 4,
	Cook_Failed                    = 5,
	EPDGNodeState_MAX              = 6,
};

enum class EPDGLinkState : uint8
{
	Inactive                       = 0,
	Linking                        = 1,
	Linked                         = 2,
	Error_Not_Linked               = 3,
	EPDGLinkState_MAX              = 4,
};

enum class EHoudiniExecutableType : uint8
{
	HRSHE_Houdini                  = 0,
	HRSHE_HoudiniFX                = 1,
	HRSHE_HoudiniCore              = 2,
	HRSHE_HoudiniIndie             = 3,
	HRSHE_MAX                      = 4,
};

enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Never                    = 2,
	HRSRF_MAX                      = 3,
};

enum class EHoudiniRuntimeSettingsSessionType : uint8
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_None                     = 3,
	HRSST_MAX                      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
struct FHoudiniOutputObjectIdentifier
{
public:
	int32                                        ObjectId;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GeoId;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartID;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SplitIdentifier;                                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PartName;                                          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimitiveIndex;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointIndex;                                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
struct FHoudiniCurveOutputProperties
{
public:
	enum class EHoudiniCurveOutputType           CurveOutputType;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_415[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPoints;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosed;                                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_416[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
struct FHoudiniOutputObject
{
public:
	class UObject*                               OutputObject;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OutputComponent;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ProxyObject;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ProxyComponent;                                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProxyIsCurrent;                                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsImplicit;                                       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGeometryCollectionPiece;                        // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_418[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GeometryCollectionPieceName;                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakeName;                                          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHoudiniCurveOutputProperties         CurveOutputProperty;                               // 0x48(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_419[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           CachedAttributes;                                  // 0x58(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CachedTokens;                                      // 0xA8(0x50)(NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
struct FHoudiniAssetBlueprintOutput
{
public:
	int32                                        OutputIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHoudiniOutputObject                  OutputObject;                                      // 0x8(0xF8)(NativeAccessSpecifierPublic)
};

// 0xB8 (0x110 - 0x58)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
public:
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssetId;                                           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniAssetState                AssetState;                                        // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SubAssetIndex;                                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       AssetCookCount;                                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenLoaded;                                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenDuplicated;                                // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPendingDelete;                                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecookRequested;                                  // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRebuildRequested;                                 // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCooking;                                    // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceNeedUpdate;                                  // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLastCookSuccess;                                  // 0x77(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ComponentGUID;                                     // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 HapiGUID;                                          // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRegisteredComponentTemplate;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceName;                                        // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs;                                           // 0xB0(0x50)(NativeAccessSpecifierPublic)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
struct FHoudiniGenericAttribute
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttribStorageType                AttributeType;                                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttribOwner                      AttributeOwner;                                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_420[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AttributeCount;                                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttributeTupleSize;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               DoubleValues;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int64>                                IntValues;                                         // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringValues;                                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
struct FHoudiniGenericAttributeChangedProperty
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_422[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
struct FHoudiniMeshSocket
{
public:
	uint8                                        Pad_423[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x230 (0x230 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
struct FHoudiniGeoPartObject
{
public:
	int32                                        AssetId;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssetName;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ObjectId;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_425[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ObjectName;                                        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GeoId;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartID;                                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PartName;                                          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasCustomPartName;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_427[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SplitGroups;                                       // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            TransformMatrix;                                   // 0x60(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                NodePath;                                          // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniPartType                  Type;                                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniInstancerType             InstancerType;                                     // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_428[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VolumeName;                                        // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasEditLayers;                                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VolumeLayerName;                                   // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VolumeTileIndex;                                   // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisible;                                        // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEditable;                                       // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemplated;                                      // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInstanced;                                      // 0xD7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasGeoChanged;                                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPartChanged;                                   // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTransformChanged;                              // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMaterialsChanged;                              // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B[0x144];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHoudiniMeshSocket>            AllMeshSockets;                                    // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
struct FHoudiniCurveInfo
{
public:
	uint8                                        Pad_42C[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
struct FHoudiniVolumeInfo
{
public:
	uint8                                        Pad_42D[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
struct FHoudiniPartInfo
{
public:
	uint8                                        Pad_42E[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
struct FHoudiniGeoInfo
{
public:
	uint8                                        Pad_42F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
struct FHoudiniObjectInfo
{
public:
	uint8                                        Pad_431[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
struct FHoudiniBrushInfo
{
public:
	TWeakObjectPtr<class ABrush>                 BrushActor;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_433[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedTransform;                                   // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CachedOrigin;                                      // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CachedExtent;                                      // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBrushType                        CachedBrushType;                                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CachedSurfaceHash;                                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniInputLandscapeTransferParams
struct FHoudiniInputLandscapeTransferParams
{
public:
	enum class ETransferHeightMode               TransferHeightMode;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_436[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            HeightSpecifiedLayerNames;                         // 0x8(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  HeightUnderSpecifiedLayerName;                     // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransferLayerMode                TransferLayerMode;                                 // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_437[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            LayerSpecifiedLayerNames;                          // 0x68(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  LayerUnderSpecifiedLayerName;                      // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransferWeightmap;                                // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_438[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
struct FHoudiniBakedOutputObjectIdentifier
{
public:
	int32                                        PartID;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SplitIdentifier;                                   // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
struct FHoudiniBakedOutputObject
{
public:
	class FString                                Actor;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Blueprint;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorBakeName;                                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakedObject;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakedComponent;                                    // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        InstancedActors;                                   // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        InstancedComponents;                               // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             LandscapeLayers;                                   // 0x68(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
struct FHoudiniBakedOutput
{
public:
	TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
struct FHoudiniInstancedOutput
{
public:
	TSoftObjectPtr<class UObject>                OriginalObject;                                    // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OriginalObjectIndex;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    OriginalTransforms;                                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UObject>>        VariationObjects;                                  // 0x40(0x10)(ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    VariationTransformOffsets;                         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TransformVariationIndices;                         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                OriginalInstanceIndices;                           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChanged;                                          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStale;                                            // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
struct FHoudiniPDGWorkResultObjectBakedOutput
{
public:
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
struct FWorkItemTallyBase
{
public:
	uint8                                        Pad_43F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
public:
	int32                                        TotalWorkItems;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WaitingWorkItems;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ScheduledWorkItems;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CookingWorkItems;                                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CookedWorkItems;                                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ErroredWorkItems;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CookCancelledWorkItems;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_442[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x230 (0x238 - 0x8)
// ScriptStruct HoudiniEngineRuntime.WorkItemTally
struct FWorkItemTally : public FWorkItemTallyBase
{
public:
	TSet<int32>                                  AllWorkItems;                                      // 0x8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  WaitingWorkItems;                                  // 0x58(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  ScheduledWorkItems;                                // 0xA8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  CookingWorkItems;                                  // 0xF8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  CookedWorkItems;                                   // 0x148(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  ErroredWorkItems;                                  // 0x198(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  CookCancelledWorkItems;                            // 0x1E8(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
struct FOutputActorOwner
{
public:
	uint8                                        Pad_445[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OutputActor;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
struct FTOPWorkResultObject
{
public:
	uint8                                        Pad_446[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x18(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPDGWorkResultState               State;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_449[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkItemResultInfoIndex;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHoudiniOutput*>                ResultOutputs;                                     // 0x30(0x10)(ZeroConstructor, NonTransactional, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoBakedSinceLastLoad;                           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_44A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x48(0x10)(NonTransactional, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
struct FTOPWorkResult
{
public:
	int32                                        WorkItemIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkItemID;                                        // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTOPWorkResultObject>          ResultObjects;                                     // 0x8(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
struct FHoudiniStaticMeshGenerationProperties
{
public:
	uint8                                        bGeneratedDoubleSidedGeometry : 1;                 // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_44F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     GeneratedPhysMaterial;                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0x10(0x130)(Edit, NativeAccessSpecifierPublic)
	enum class ECollisionTraceFlag               GeneratedCollisionTraceFlag;                       // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_451[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeneratedLightMapResolution;                       // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWalkableSlopeOverride                GeneratedWalkableSlopeOverride;                    // 0x148(0x10)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        GeneratedLightMapCoordinateIndex;                  // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGeneratedUseMaximumStreamingTexelRatio : 1;       // Mask: 0x1, PropSize: 0x10x15C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_29 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_454[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeneratedStreamingDistanceMultiplier;              // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_455[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoliageType_InstancedStaticMesh*      GeneratedFoliageDefaultSettings;                   // 0x168(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAssetUserData*>                GeneratedAssetUserData;                            // 0x170(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x88 - 0x58)
// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
public:
	TArray<struct FTransform>                    CurvePoints;                                       // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       DisplayPoints;                                     // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


