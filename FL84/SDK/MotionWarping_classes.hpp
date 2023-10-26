#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class MotionWarping.AnimNotifyState_MotionWarping
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
public:
	class URootMotionModifier*                   RootMotionModifier;                                // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotifyState_MotionWarping* GetDefaultObj();

	void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// 0x0 (0x28 - 0x28)
// Class MotionWarping.MotionWarpingUtilities
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionWarpingUtilities* GetDefaultObj();

	void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows);
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, class FName WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows);
	struct FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// 0x98 (0x148 - 0xB0)
// Class MotionWarping.MotionWarpingComponent
class UMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_524[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ACharacter>             CharacterOwner;                                    // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URootMotionModifier*>           Modifiers;                                         // 0xD0(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FMotionWarpingTarget> WarpTargetMap;                                     // 0xE0(0x50)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_525[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMotionWarpingComponent* GetDefaultObj();

	int32 RemoveWarpTarget(class FName WarpTargetName);
	void DisableAllRootMotionModifiers();
	void AddOrUpdateWarpTargetFromTransform(class FName WarpTargetName, const struct FTransform& TargetTransform);
	void AddOrUpdateWarpTargetFromLocationAndRotation(class FName WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void AddOrUpdateWarpTargetFromLocation(class FName WarpTargetName, const struct FVector& TargetLocation);
	void AddOrUpdateWarpTargetFromComponent(class FName WarpTargetName, class USceneComponent* Component, class FName BoneName, bool bFollowComponent);
	void AddOrUpdateWarpTarget(class FName WarpTargetName, struct FMotionWarpingTarget& WarpTarget);
};

// 0x90 (0xB8 - 0x28)
// Class MotionWarping.RootMotionModifier
class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousPosition;                                  // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentPosition;                                   // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLocalSpace;                                     // 0x44(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_527[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartTransform;                                    // 0x50(0x30)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ActualStartTime;                                   // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnActivateDelegate;                                // 0x84(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnUpdateDelegate;                                  // 0x94(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnDeactivateDelegate;                              // 0xA4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERootMotionModifierState          State;                                             // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_528[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URootMotionModifier* GetDefaultObj();

};

// 0xF8 (0x1B0 - 0xB8)
// Class MotionWarping.RootMotionModifier_Warp
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                  WarpTargetName;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWarpPointAnimProvider            WarpPointAnimProvider;                             // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WarpPointAnimTransform;                            // 0xD0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  WarpPointAnimBoneName;                             // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpTranslation;                                  // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreZAxis;                                      // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyZAxis;                                        // 0x10A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWarpRotation;                                     // 0x10B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMotionWarpRotationType           RotationType;                                      // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WarpRotationTimeMultiplier;                        // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52D[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedTargetTransform;                             // 0x120(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_52E[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URootMotionModifier_Warp* GetDefaultObj();

};

// 0x0 (0x1B0 - 0x1B0)
// Class MotionWarping.RootMotionModifier_SimpleWarp
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{
public:

	static class UClass* StaticClass();
	static class URootMotionModifier_SimpleWarp* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MotionWarping.RootMotionModifier_Scale
class URootMotionModifier_Scale : public URootMotionModifier
{
public:
	struct FVector                               Scale;                                             // 0xB8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_531[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URootMotionModifier_Scale* GetDefaultObj();

};

// 0xD0 (0x280 - 0x1B0)
// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          IKBones;                                           // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedMeshTransform;                               // 0x1D0(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x200(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            CachedRootMotion;                                  // 0x230(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAnimSequenceTrackContainer           Result;                                            // 0x260(0x20)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URootMotionModifier_AdjustmentBlendWarp* GetDefaultObj();

	void GetAdjustmentBlendIKBoneTransformAndAlpha(class ACharacter* Character, class FName BoneName, struct FTransform* OutTransform, float* OutAlpha);
	class URootMotionModifier_AdjustmentBlendWarp* AddRootMotionModifierAdjustmentBlendWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, class FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, TArray<class FName>& InIKBones);
};

// 0x20 (0x1D0 - 0x1B0)
// Class MotionWarping.RootMotionModifier_SkewWarp
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{
public:
	uint8                                        Pad_549[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWarpDistance;                                   // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClampByWarpDir2D;                                 // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54A[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URootMotionModifier_SkewWarp* GetDefaultObj();

	class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, class FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
};

}


