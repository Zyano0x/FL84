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
	 * Enum KawaiiPhysics.ECollisionLimitType
	 */
	enum class ECollisionLimitType : uint8_t
	{
		None      = 0,
		Spherical = 1,
		Capsule   = 2,
		Planar    = 3,
		MAX       = 4
	};

	/**
	 * Enum KawaiiPhysics.EBoneForwardAxis
	 */
	enum class EBoneForwardAxis : uint8_t
	{
		X_Positive = 0,
		X_Negative = 1,
		Y_Positive = 2,
		Y_Negative = 3,
		Z_Positive = 4,
		Z_Negative = 5,
		MAX        = 6
	};

	/**
	 * Enum KawaiiPhysics.EPlanarConstraint
	 */
	enum class EPlanarConstraint : uint8_t
	{
		None = 0,
		X    = 1,
		Y    = 2,
		Z    = 3,
		MAX  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct KawaiiPhysics.CollisionLimitBase
	 * Size -> 0x0050
	 */
	struct FCollisionLimitBase
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             OffsetLocation;                                          // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            OffsetRotation;                                          // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPQ7[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.SphericalLimit
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FSphericalLimit : public FCollisionLimitBase
	{
	public:
		float                                                      Radius;                                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESphericalLimitType                                        LimitType;                                               // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6H6[0xB];                                   // 0x0055(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.CapsuleLimit
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FCapsuleLimit : public FCollisionLimitBase
	{
	public:
		float                                                      Radius;                                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7HK[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.PlanarLimit
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FPlanarLimit : public FCollisionLimitBase
	{
	public:
		struct FPlane                                              Plane;                                                   // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
	 * Size -> 0x0018
	 */
	struct FKawaiiPhysicsSettings
	{
	public:
		float                                                      Damping;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldDampingLocation;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldDampingRotation;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitAngle;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
	 * Size -> 0x00D0
	 */
	struct FKawaiiPhysicsModifyBone
	{
	public:
		struct FBoneReference                                      BoneRef;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BB8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ChildIndexs;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKawaiiPhysicsSettings                              PhysicsSettings;                                         // 0x0028(0x0018) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrevLocation;                                            // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBWU[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               PrevRotation;                                            // 0x0060(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PoseLocation;                                            // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XWFG[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               PoseRotation;                                            // 0x0080(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PoseScale;                                               // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LengthFromRoot;                                          // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDummy;                                                  // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMP1[0x2F];                                  // 0x00A1(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
	 * Size -> 0x0188 (FullSize[0x0250] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RootBone;                                                // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              ExcludeBones;                                            // 0x00D8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetFramerate;                                         // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideTargetFramerate;                                 // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GQ7[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCalculateDeltaTime;                                   // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMinCalculateDeltaTime;                           // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z31H[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKawaiiPhysicsSettings                              PhysicsSettings;                                         // 0x00F8(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         DampingCurve;                                            // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         WorldDampingLocationCurve;                               // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         WorldDampingRotationCurve;                               // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         StiffnessCurve;                                          // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         RadiusCurve;                                             // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LimitAngleCurve;                                         // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdatePhysicsSettingsInGame;                            // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVHI[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DummyBoneLength;                                         // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneForwardAxis                                           BoneForwardAxis;                                         // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlanarConstraint                                          PlanarConstraint;                                        // 0x0149(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA12[0x6];                                   // 0x014A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSphericalLimit>                             SphericalLimits;                                         // 0x0150(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCapsuleLimit>                               CapsuleLimits;                                           // 0x0160(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlanarLimit>                                PlanarLimits;                                            // 0x0170(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UKawaiiPhysicsLimitsDataAsset*                       LimitsDataAsset;                                         // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSphericalLimit>                             SphericalLimitsData;                                     // 0x0188(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCapsuleLimit>                               CapsuleLimitsData;                                       // 0x0198(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlanarLimit>                                PlanarLimitsData;                                        // 0x01A8(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportDistanceThreshold;                               // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportRotationThreshold;                               // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Gravity;                                                 // 0x01C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWind;                                             // 0x01CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ2L[0x3];                                   // 0x01CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindScale;                                               // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IE3[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKawaiiPhysicsModifyBone>                    ModifyBones;                                             // 0x01D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalBoneLength;                                         // 0x01E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SBYV[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PreSkelCompTransform;                                    // 0x01F0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bInitPhysicsSettings;                                    // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RAT8[0x2F];                                  // 0x0221(0x002F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.CollisionLimitDataBase
	 * Size -> 0x0050
	 */
	struct FCollisionLimitDataBase
	{
	public:
		class FName                                                DrivingBoneName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OffsetLocation;                                          // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            OffsetRotation;                                          // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPBA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0030(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.PlanarLimitData
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FPlanarLimitData : public FCollisionLimitDataBase
	{
	public:
		struct FPlane                                              Plane;                                                   // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct KawaiiPhysics.CapsuleLimitData
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FCapsuleLimitData : public FCollisionLimitDataBase
	{
	public:
		float                                                      Radius;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYYI[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct KawaiiPhysics.SphericalLimitData
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FSphericalLimitData : public FCollisionLimitDataBase
	{
	public:
		float                                                      Radius;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESphericalLimitType                                        LimitType;                                               // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLVT[0xB];                                   // 0x0055(0x000B) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
