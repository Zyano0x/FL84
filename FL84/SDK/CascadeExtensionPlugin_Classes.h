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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CascadeExtensionPlugin.AbstractParticleModule
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAbstractParticleModule : public UParticleModule
	{
	public:
		struct FParticleRandomSeedInfo                             RandomSeedInfo;                                          // 0x0030(0x0020) Edit, NativeAccessSpecifierPublic
		int32_t                                                    StartDelay;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDuration;                                             // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopAfter;                                               // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYHV[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ForcePointDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UForcePointDataProvider : public UInterface
	{
	public:
		struct FForcePoints GetForcePoints();
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.MeshDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshDataProvider : public UInterface
	{
	public:
		struct FMeshTriangleData GetMeshTriangleData();
		int32_t GetDataRevision();
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UParticleDataProvider : public UInterface
	{
	public:
		struct FParticleProperties UpdateParticle(const struct FParticleProperties& currentParticleProperties);
		struct FParticleProperties SpawnParticle(const struct FParticleProperties& currentParticleProperties);
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleDecalComponent
	 * Size -> 0x0014 (FullSize[0x0370] - InheritedSize[0x035C])
	 */
	class UParticleDecalComponent : public UDecalComponent
	{
	public:
		float                                                      TimeLeftUntilDestruction;                                // 0x035C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaseScale;                                               // 0x0360(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPR8[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleColorTexture
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UParticleModuleColorTexture : public UAbstractParticleModule
	{
	public:
		class UTexture2D*                                          ColorIndexTexture;                                       // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UpdateWithTick;                                          // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D16E[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                MapBounds;                                               // 0x006C(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		ESpaceAxis                                                 ParticleAxisToTextureX;                                  // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESpaceAxis                                                 ParticleAxisToTextureY;                                  // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TIFC[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Intensity;                                               // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UseTextureAlpha;                                         // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WLGB[0x1F];                                  // 0x0091(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleCustomData
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UParticleModuleCustomData : public UAbstractParticleModule
	{
	public:
		class FName                                                DataProviderParameterName;                               // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UpdatedSpawnedParticles;                                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UpdatedTickedParticles;                                  // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UseLocationFromProvider;                                 // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UseVelocityFromProvider;                                 // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UseSizeFromProvider;                                     // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UseColorFromProvider;                                    // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UseRotationFromProvider;                                 // 0x006E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UseRotationRateFromProvider;                             // 0x006F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleDecalComponent
	 * Size -> 0x00C0 (FullSize[0x0120] - InheritedSize[0x0060])
	 */
	class UParticleModuleDecalComponent : public UAbstractParticleModule
	{
	public:
		TArray<class UMaterialInterface*>                          DecalMaterials;                                          // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRawDistributionVector                              DecalScale;                                              // 0x0070(0x0048) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       ScaleWithParticleSize;                                   // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4D8A[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionVector                              DecalRotation;                                           // 0x00C0(0x0048) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       RotateToParticleVelocity;                                // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BWN7[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SortOrder;                                               // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       OptimizeDecalComponentUsage;                             // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8LN7[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MaterialColorParameter;                                  // 0x0114(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5FU9[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleForcePoints
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UParticleModuleForcePoints : public UAbstractParticleModule
	{
	public:
		float                                                      Intensity;                                               // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GEJN[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Points;                                                  // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDistanceWeight                                            SeparationDistanceWeight;                                // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y8XR[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceScale;                                           // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                DynamicForcePointProviderName;                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleLocationDonut
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UParticleModuleLocationDonut : public UAbstractParticleModule
	{
	public:
		struct FVector                                             Center;                                                  // 0x0060(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinRadius;                                               // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxRadius;                                               // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       SurfaceOnly;                                             // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       IsFlat;                                                  // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6ECD[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UParticleModuleLocationHeightmap : public UAbstractParticleModule
	{
	public:
		class UTexture2D*                                          HeightmapTexture;                                        // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       UpdateWithTick;                                          // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       SmoothUpdate;                                            // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L3UY[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                MapBounds;                                               // 0x006C(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      Intensity;                                               // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N7ZC[0x1C];                                  // 0x008C(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleLocationJiggle
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UParticleModuleLocationJiggle : public UAbstractParticleModule
	{
	public:
		struct FRawDistributionVector                              Intensity;                                               // 0x0060(0x0048) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleLocationMesh
	 * Size -> 0x00F0 (FullSize[0x0150] - InheritedSize[0x0060])
	 */
	class UParticleModuleLocationMesh : public UAbstractParticleModule
	{
	public:
		class UStaticMesh*                                         SurfaceMesh;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                DynamicMeshParameterName;                                // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          MeshTransform;                                           // 0x0070(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       EqualTriangeWeight;                                      // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SUX3[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               VelocityScale;                                           // 0x00A8(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y2V4[0x78];                                  // 0x00D8(0x0078) MISSED OFFSET (PADDING)

	public:
		void OnCachedActorDestroyed(class AActor* DestroyedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleLocationSpiral
	 * Size -> 0x00C0 (FullSize[0x0120] - InheritedSize[0x0060])
	 */
	class UParticleModuleLocationSpiral : public UAbstractParticleModule
	{
	public:
		struct FRawDistributionVector                              StartLocation;                                           // 0x0060(0x0048) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FRawDistributionFloat                               Radius;                                                  // 0x00A8(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      DeltaAngle;                                              // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EllipseA;                                                // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EllipseB;                                                // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7HB6[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawDistributionFloat                               DiscHeight;                                              // 0x00E8(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      FalloffFactor;                                           // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2UYA[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime
	 * Size -> 0x0068 (FullSize[0x00C8] - InheritedSize[0x0060])
	 */
	class UParticleModuleSizeBySpeedOverTime : public UAbstractParticleModule
	{
	public:
		struct FRawDistributionVector                              Size;                                                    // 0x0060(0x0048) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       InvertSpeed;                                             // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J4ED[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MaxSize;                                                 // 0x00AC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             MinSize;                                                 // 0x00B8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8CVT[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleSortOrder
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UParticleModuleSortOrder : public UAbstractParticleModule
	{
	public:
		int32_t                                                    SortOrder;                                               // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FO38[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleSwarmMovement
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UParticleModuleSwarmMovement : public UAbstractParticleModule
	{
	public:
		float                                                      PerceptionRadius;                                        // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAcceleration;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxVelocity;                                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SeparationWeight;                                        // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AlignmentWeight;                                         // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CohesionWeight;                                          // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlindspotAngleDeg;                                       // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDistanceWeight                                            SeparationDistanceWeight;                                // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6XSE[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     SteeringTargets;                                         // 0x0080(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SteeringWeight;                                          // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDistanceWeight                                            SteeringTargetDistanceWeight;                            // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FBMM[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DynamicSteeringPointProviderName;                        // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UParticleModuleVelocityTurbulence : public UAbstractParticleModule
	{
	public:
		struct FVector                                             Intensity;                                               // 0x0060(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LengthScale;                                             // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Tightness;                                               // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAcceleration;                                         // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxVelocity;                                             // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ID65[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
