#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECollisionLimitType : uint8
{
	None                           = 0,
	Spherical                      = 1,
	Capsule                        = 2,
	Planar                         = 3,
	ECollisionLimitType_MAX        = 4,
};

enum class EBoneForwardAxis : uint8
{
	X_Positive                     = 0,
	X_Negative                     = 1,
	Y_Positive                     = 2,
	Y_Negative                     = 3,
	Z_Positive                     = 4,
	Z_Negative                     = 5,
	EBoneForwardAxis_MAX           = 6,
};

enum class EPlanarConstraint : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EPlanarConstraint_MAX          = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct KawaiiPhysics.CollisionLimitBase
struct FCollisionLimitBase
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocation;                                    // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x1C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x40(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x60 - 0x50)
// ScriptStruct KawaiiPhysics.CapsuleLimit
struct FCapsuleLimit : public FCollisionLimitBase
{
public:
	float                                        Radius;                                            // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_417[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
struct FKawaiiPhysicsSettings
{
public:
	float                                        Damping;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldDampingLocation;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldDampingRotation;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitAngle;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x60 - 0x50)
// ScriptStruct KawaiiPhysics.SphericalLimit
struct FSphericalLimit : public FCollisionLimitBase
{
public:
	float                                        Radius;                                            // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_419[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x60 - 0x50)
// ScriptStruct KawaiiPhysics.PlanarLimit
struct FPlanarLimit : public FCollisionLimitBase
{
public:
	struct FPlane                                Plane;                                             // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
struct FKawaiiPhysicsModifyBone
{
public:
	struct FBoneReference                        BoneRef;                                           // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ChildIndexs;                                       // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKawaiiPhysicsSettings                PhysicsSettings;                                   // 0x28(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrevLocation;                                      // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 PrevRotation;                                      // 0x60(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PoseLocation;                                      // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 PoseRotation;                                      // 0x80(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PoseScale;                                         // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthFromRoot;                                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDummy;                                            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E[0x2F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x188 (0x250 - 0xC8)
// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RootBone;                                          // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                ExcludeBones;                                      // 0xD8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetFramerate;                                   // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OverrideTargetFramerate;                           // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinCalculateDeltaTime;                             // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OverrideMinCalculateDeltaTime;                     // 0xF4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_422[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKawaiiPhysicsSettings                PhysicsSettings;                                   // 0xF8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DampingCurve;                                      // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           WorldDampingLocationCurve;                         // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           WorldDampingRotationCurve;                         // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StiffnessCurve;                                    // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           RadiusCurve;                                       // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LimitAngleCurve;                                   // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdatePhysicsSettingsInGame;                      // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DummyBoneLength;                                   // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneForwardAxis                  BoneForwardAxis;                                   // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlanarConstraint                 PlanarConstraint;                                  // 0x149(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalLimit>               SphericalLimits;                                   // 0x150(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                 CapsuleLimits;                                     // 0x160(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                  PlanarLimits;                                      // 0x170(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKawaiiPhysicsLimitsDataAsset*         LimitsDataAsset;                                   // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSphericalLimit>               SphericalLimitsData;                               // 0x188(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                 CapsuleLimitsData;                                 // 0x198(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                  PlanarLimitsData;                                  // 0x1A8(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportDistanceThreshold;                         // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportRotationThreshold;                         // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Gravity;                                           // 0x1C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWind;                                       // 0x1CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindScale;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKawaiiPhysicsModifyBone>      ModifyBones;                                       // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalBoneLength;                                   // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_430[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PreSkelCompTransform;                              // 0x1F0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bInitPhysicsSettings;                              // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_432[0x2F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct KawaiiPhysics.CollisionLimitDataBase
struct FCollisionLimitDataBase
{
public:
	class FName                                  DrivingBoneName;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLocation;                                    // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OffsetRotation;                                    // 0x14(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x20(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x30(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x40(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x60 - 0x50)
// ScriptStruct KawaiiPhysics.PlanarLimitData
struct FPlanarLimitData : public FCollisionLimitDataBase
{
public:
	struct FPlane                                Plane;                                             // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x60 - 0x50)
// ScriptStruct KawaiiPhysics.CapsuleLimitData
struct FCapsuleLimitData : public FCollisionLimitDataBase
{
public:
	float                                        Radius;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x60 - 0x50)
// ScriptStruct KawaiiPhysics.SphericalLimitData
struct FSphericalLimitData : public FCollisionLimitDataBase
{
public:
	float                                        Radius;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_438[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


