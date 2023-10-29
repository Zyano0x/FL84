#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// Class CascadeExtensionPlugin.AbstractParticleModule
class UAbstractParticleModule : public UParticleModule
{
public:
	struct FParticleRandomSeedInfo               RandomSeedInfo;                                    // 0x30(0x20)(Edit, NativeAccessSpecifierPublic)
	int32                                        StartDelay;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDuration;                                       // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopAfter;                                         // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A37[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbstractParticleModule* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CascadeExtensionPlugin.ForcePointDataProvider
class IForcePointDataProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IForcePointDataProvider* GetDefaultObj();

	struct FForcePoints GetForcePoints();
};

// 0x0 (0x28 - 0x28)
// Class CascadeExtensionPlugin.MeshDataProvider
class IMeshDataProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshDataProvider* GetDefaultObj();

	struct FMeshTriangleData GetMeshTriangleData();
	int32 GetDataRevision();
};

// 0x0 (0x28 - 0x28)
// Class CascadeExtensionPlugin.ParticleDataProvider
class IParticleDataProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IParticleDataProvider* GetDefaultObj();

	struct FParticleProperties UpdateParticle(const struct FParticleProperties& CurrentParticleProperties);
	struct FParticleProperties SpawnParticle(const struct FParticleProperties& CurrentParticleProperties);
};

// 0x18 (0x370 - 0x358)
// Class CascadeExtensionPlugin.ParticleDecalComponent
class UParticleDecalComponent : public UDecalComponent
{
public:
	int32                                        ModuleID;                                          // 0x358(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeftUntilDestruction;                          // 0x35C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaseScale;                                         // 0x360(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleDecalComponent* GetDefaultObj();

};

// 0x50 (0xB0 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleColorTexture
class UParticleModuleColorTexture : public UAbstractParticleModule
{
public:
	class UTexture2D*                            ColorIndexTexture;                                 // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UpdateWithTick;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A42[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  MapBounds;                                         // 0x6C(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class ESpaceAxis                        ParticleAxisToTextureX;                            // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESpaceAxis                        ParticleAxisToTextureY;                            // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A44[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Intensity;                                         // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UseTextureAlpha;                                   // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A45[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleColorTexture* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleCustomData
class UParticleModuleCustomData : public UAbstractParticleModule
{
public:
	class FName                                  DataProviderParameterName;                         // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UpdatedSpawnedParticles;                           // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UpdatedTickedParticles;                            // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UseLocationFromProvider;                           // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UseVelocityFromProvider;                           // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UseSizeFromProvider;                               // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UseColorFromProvider;                              // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UseRotationFromProvider;                           // 0x6E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UseRotationRateFromProvider;                       // 0x6F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UParticleModuleCustomData* GetDefaultObj();

};

// 0xC0 (0x120 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleDecalComponent
class UParticleModuleDecalComponent : public UAbstractParticleModule
{
public:
	TArray<class UMaterialInterface*>            DecalMaterials;                                    // 0x60(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRawDistributionVector                DecalScale;                                        // 0x70(0x48)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         ScaleWithParticleSize;                             // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A46[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawDistributionVector                DecalRotation;                                     // 0xC0(0x48)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         RotateToParticleVelocity;                          // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SortOrder;                                         // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         OptimizeDecalComponentUsage;                       // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A48[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MaterialColorParameter;                            // 0x114(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A49[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleDecalComponent* GetDefaultObj();

};

// 0x28 (0x88 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleForcePoints
class UParticleModuleForcePoints : public UAbstractParticleModule
{
public:
	float                                        Intensity;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A4A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Points;                                            // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EDistanceWeight                   SeparationDistanceWeight;                          // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A4B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceScale;                                     // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DynamicForcePointProviderName;                     // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UParticleModuleForcePoints* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleLocationDonut
class UParticleModuleLocationDonut : public UAbstractParticleModule
{
public:
	struct FVector                               Center;                                            // 0x60(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinRadius;                                         // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRadius;                                         // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SurfaceOnly;                                       // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsFlat;                                            // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A4D[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleLocationDonut* GetDefaultObj();

};

// 0x48 (0xA8 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap
class UParticleModuleLocationHeightmap : public UAbstractParticleModule
{
public:
	class UTexture2D*                            HeightmapTexture;                                  // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         UpdateWithTick;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         SmoothUpdate;                                      // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A4E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  MapBounds;                                         // 0x6C(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        Intensity;                                         // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A50[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleLocationHeightmap* GetDefaultObj();

};

// 0x48 (0xA8 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleLocationJiggle
class UParticleModuleLocationJiggle : public UAbstractParticleModule
{
public:
	struct FRawDistributionVector                Intensity;                                         // 0x60(0x48)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UParticleModuleLocationJiggle* GetDefaultObj();

};

// 0xF0 (0x150 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleLocationMesh
class UParticleModuleLocationMesh : public UAbstractParticleModule
{
public:
	class UStaticMesh*                           SurfaceMesh;                                       // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DynamicMeshParameterName;                          // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            MeshTransform;                                     // 0x70(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         EqualTriangeWeight;                                // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A53[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawDistributionFloat                 VelocityScale;                                     // 0xA8(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A54[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleLocationMesh* GetDefaultObj();

	void OnCachedActorDestroyed(class AActor* DestroyedActor);
};

// 0xC0 (0x120 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleLocationSpiral
class UParticleModuleLocationSpiral : public UAbstractParticleModule
{
public:
	struct FRawDistributionVector                StartLocation;                                     // 0x60(0x48)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FRawDistributionFloat                 Radius;                                            // 0xA8(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        DeltaAngle;                                        // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EllipseA;                                          // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EllipseB;                                          // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawDistributionFloat                 DiscHeight;                                        // 0xE8(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        FalloffFactor;                                     // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A57[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleLocationSpiral* GetDefaultObj();

};

// 0x68 (0xC8 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime
class UParticleModuleSizeBySpeedOverTime : public UAbstractParticleModule
{
public:
	struct FRawDistributionVector                Size;                                              // 0x60(0x48)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         InvertSpeed;                                       // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MaxSize;                                           // 0xAC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               MinSize;                                           // 0xB8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleSizeBySpeedOverTime* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleSortOrder
class UParticleModuleSortOrder : public UAbstractParticleModule
{
public:
	int32                                        SortOrder;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleSortOrder* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleSwarmMovement
class UParticleModuleSwarmMovement : public UAbstractParticleModule
{
public:
	float                                        PerceptionRadius;                                  // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAcceleration;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxVelocity;                                       // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SeparationWeight;                                  // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AlignmentWeight;                                   // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CohesionWeight;                                    // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlindspotAngleDeg;                                 // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EDistanceWeight                   SeparationDistanceWeight;                          // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       SteeringTargets;                                   // 0x80(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SteeringWeight;                                    // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EDistanceWeight                   SteeringTargetDistanceWeight;                      // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DynamicSteeringPointProviderName;                  // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UParticleModuleSwarmMovement* GetDefaultObj();

};

// 0x20 (0x80 - 0x60)
// Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence
class UParticleModuleVelocityTurbulence : public UAbstractParticleModule
{
public:
	struct FVector                               Intensity;                                         // 0x60(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LengthScale;                                       // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Tightness;                                         // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAcceleration;                                   // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxVelocity;                                       // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleModuleVelocityTurbulence* GetDefaultObj();

};

}


