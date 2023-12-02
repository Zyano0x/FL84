#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	 */
	struct UAnimNotifyState_MotionWarping_OnWarpUpdate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	 */
	struct UAnimNotifyState_MotionWarping_OnWarpEnd_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	 */
	struct UAnimNotifyState_MotionWarping_OnWarpBegin_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	 */
	struct UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	 */
	struct UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	 */
	struct UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	 */
	struct UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTime;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	 */
	struct UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Params
	{
	public:
		class UAnimSequenceBase*                                   Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMotionWarpingWindowData>                    OutWindows;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	 */
	struct UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Params
	{
	public:
		class UAnimSequenceBase*                                   Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                WarpTargetName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMotionWarpingWindowData>                    OutWindows;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	 */
	struct UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params
	{
	public:
		class UAnimSequenceBase*                                   Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTime;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	 */
	struct UMotionWarpingComponent_RemoveWarpTarget_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	 */
	struct UMotionWarpingComponent_DisableAllRootMotionModifiers_Params
	{	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EMRV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          TargetTransform;                                         // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            TargetRotation;                                          // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFollowComponent;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTarget_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JLKH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMotionWarpingTarget                                WarpTarget;                                              // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.GetAdjustmentBlendIKBoneTransformAndAlpha
	 */
	struct URootMotionModifier_AdjustmentBlendWarp_GetAdjustmentBlendIKBoneTransformAndAlpha_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          OutTransform;                                            // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      OutAlpha;                                                // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.AddRootMotionModifierAdjustmentBlendWarp
	 */
	struct URootMotionModifier_AdjustmentBlendWarp_AddRootMotionModifierAdjustmentBlendWarp_Params
	{
	public:
		class UMotionWarpingComponent*                             InMotionWarpingComp;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   InAnimation;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InStartTime;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InEndTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InWarpTargetName;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWarpPointAnimProvider                                     InWarpPointAnimProvider;                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VB93[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InWarpPointAnimTransform;                                // 0x0030(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                InWarpPointAnimBoneName;                                 // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWarpTranslation;                                      // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInIgnoreZAxis;                                          // 0x0069(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWarpRotation;                                         // 0x006A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWarpIKBones;                                          // 0x006B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_20ZY[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        InIKBones;                                               // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier_AdjustmentBlendWarp*             ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	 */
	struct URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params
	{
	public:
		class UMotionWarpingComponent*                             InMotionWarpingComp;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   InAnimation;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InStartTime;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InEndTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InWarpTargetName;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWarpPointAnimProvider                                     InWarpPointAnimProvider;                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ITUP[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InWarpPointAnimTransform;                                // 0x0030(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                InWarpPointAnimBoneName;                                 // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWarpTranslation;                                      // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInIgnoreZAxis;                                          // 0x0069(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWarpRotation;                                         // 0x006A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMotionWarpRotationType                                    InRotationType;                                          // 0x006B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InWarpRotationTimeMultiplier;                            // 0x006C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier_SkewWarp*                        ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
