#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWarpPointAnimProvider : uint8
{
	None                           = 0,
	Static                         = 1,
	Bone                           = 2,
	EWarpPointAnimProvider_MAX     = 3,
};

enum class EMotionWarpRotationType : uint8
{
	Default                        = 0,
	Facing                         = 1,
	EMotionWarpRotationType_MAX    = 2,
};

enum class ERootMotionModifierState : uint8
{
	Waiting                        = 0,
	Active                         = 1,
	MarkedForRemoval               = 2,
	Disabled                       = 3,
	ERootMotionModifierState_MAX   = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MotionWarping.MotionWarpingWindowData
struct FMotionWarpingWindowData
{
public:
	class UAnimNotifyState_MotionWarping*        AnimNotify;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MotionWarping.MotionWarpingTarget
struct FMotionWarpingTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFollowComponent;                                  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54D[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MotionWarping.MotionDeltaTrack
struct FMotionDeltaTrack
{
public:
	TArray<struct FTransform>                    BoneTransformTrack;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       DeltaTranslationTrack;                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                      DeltaRotationTrack;                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TotalTranslation;                                  // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TotalRotation;                                     // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MotionWarping.MotionDeltaTrackContainer
struct FMotionDeltaTrackContainer
{
public:
	TArray<struct FMotionDeltaTrack>             Tracks;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


