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
	 * Class MotionWarping.AnimNotifyState_MotionWarping
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_MotionWarping : public UAnimNotifyState
	{
	public:
		class URootMotionModifier*                                 RootMotionModifier;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.MotionWarpingUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows);
		void STATIC_GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, const class FName& WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows);
		struct FTransform STATIC_ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.MotionWarpingComponent
	 * Size -> 0x0098 (FullSize[0x0148] - InheritedSize[0x00B0])
	 */
	class UMotionWarpingComponent : public UActorComponent
	{
	public:
		bool                                                       bSearchForWindowsInAnimsWithinMontages;                  // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMHK[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPreUpdate;                                             // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ACharacter>                           CharacterOwner;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class URootMotionModifier*>                         Modifiers;                                               // 0x00D0(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FName, struct FMotionWarpingTarget>             WarpTargetMap;                                           // 0x00E0(0x0050) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XPHW[0x18];                                  // 0x0130(0x0018) MISSED OFFSET (PADDING)

	public:
		int32_t RemoveWarpTarget(const class FName& WarpTargetName);
		void DisableAllRootMotionModifiers();
		void AddOrUpdateWarpTargetFromTransform(const class FName& WarpTargetName, const struct FTransform& TargetTransform);
		void AddOrUpdateWarpTargetFromLocationAndRotation(const class FName& WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
		void AddOrUpdateWarpTargetFromLocation(const class FName& WarpTargetName, const struct FVector& TargetLocation);
		void AddOrUpdateWarpTargetFromComponent(const class FName& WarpTargetName, class USceneComponent* Component, const class FName& BoneName, bool bFollowComponent);
		void AddOrUpdateWarpTarget(const class FName& WarpTargetName, const struct FMotionWarpingTarget& WarpTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class URootMotionModifier : public UObject
	{
	public:
		TWeakObjectPtr<class UAnimSequenceBase>                    Animation;                                               // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousPosition;                                        // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentPosition;                                         // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInLocalSpace;                                           // 0x0044(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSXH[0xB];                                   // 0x0045(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartTransform;                                          // 0x0050(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ActualStartTime;                                         // 0x0080(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnActivateDelegate;                                      // 0x0084(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnUpdateDelegate;                                        // 0x0094(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnDeactivateDelegate;                                    // 0x00A4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		ERootMotionModifierState                                   State;                                                   // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_95U4[0x3];                                   // 0x00B5(0x0003) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_Warp
	 * Size -> 0x00F8 (FullSize[0x01B0] - InheritedSize[0x00B8])
	 */
	class URootMotionModifier_Warp : public URootMotionModifier
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWarpPointAnimProvider                                     WarpPointAnimProvider;                                   // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EJI[0xF];                                   // 0x00C1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WarpPointAnimTransform;                                  // 0x00D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                WarpPointAnimBoneName;                                   // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWarpTranslation;                                        // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreZAxis;                                            // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyZAxis;                                              // 0x010A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWarpRotation;                                           // 0x010B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMotionWarpRotationType                                    RotationType;                                            // 0x010C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3IP[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarpRotationTimeMultiplier;                              // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO98[0xC];                                   // 0x0114(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CachedTargetTransform;                                   // 0x0120(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5L8I[0x60];                                  // 0x0150(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_SimpleWarp
	 * Size -> 0x0000 (FullSize[0x01B0] - InheritedSize[0x01B0])
	 */
	class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_Scale
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class URootMotionModifier_Scale : public URootMotionModifier
	{
	public:
		struct FVector                                             Scale;                                                   // 0x00B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6XQ[0xC];                                   // 0x00C4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
	 * Size -> 0x00D0 (FullSize[0x0280] - InheritedSize[0x01B0])
	 */
	class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
	{
	public:
		bool                                                       bWarpIKBones;                                            // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_292Z[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        IKBones;                                                 // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q772[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CachedMeshTransform;                                     // 0x01D0(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          CachedMeshRelativeTransform;                             // 0x0200(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          CachedRootMotion;                                        // 0x0230(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimSequenceTrackContainer                         Result;                                                  // 0x0260(0x0020) Protected, NativeAccessSpecifierProtected

	public:
		void STATIC_GetAdjustmentBlendIKBoneTransformAndAlpha(class ACharacter* Character, const class FName& BoneName, struct FTransform* OutTransform, float* OutAlpha);
		class URootMotionModifier_AdjustmentBlendWarp* STATIC_AddRootMotionModifierAdjustmentBlendWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const class FName& InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, const class FName& InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, TArray<class FName> InIKBones);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_SkewWarp
	 * Size -> 0x0020 (FullSize[0x01D0] - InheritedSize[0x01B0])
	 */
	class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
	{
	public:
		unsigned char                                              UnknownData_INP8[0x4];                                   // 0x01B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWarpDistance;                                         // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampByWarpDir2D;                                       // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CSJ[0x17];                                  // 0x01B9(0x0017) MISSED OFFSET (PADDING)

	public:
		class URootMotionModifier_SkewWarp* STATIC_AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const class FName& InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, const class FName& InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
