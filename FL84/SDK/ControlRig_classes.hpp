#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x338 (0x360 - 0x28)
// Class ControlRig.ControlRig
class UControlRig : public UObject
{
public:
	uint8                                        Pad_B4B[0x4C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERigExecutionType                 ExecutionType;                                     // 0x74(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URigVM*                                VM;                                                // 0x78(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRigHierarchyContainer                Hierarchy;                                         // 0x80(0x1B0)(Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRigGizmoLibrary> GizmoLibrary;                                      // 0x230(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B4E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FCachedPropertyPath> InputProperties;                                   // 0x268(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCachedPropertyPath> OutputProperties;                                  // 0x2B8(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	struct FControlRigDrawContainer              DrawContainer;                                     // 0x308(0x10)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_B4F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B50[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

};

// 0x10 (0x370 - 0x360)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_B52[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class ControlRig.ControlRigBindingTrack
class UControlRigBindingTrack : public UMovieSceneSpawnTrack
{
public:

	static class UClass* StaticClass();
	static class UControlRigBindingTrack* GetDefaultObj();

};

// 0x0 (0x328 - 0x328)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj();

};

// 0x48 (0xF8 - 0xB0)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreEvaluateDelegate;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostEvaluateDelegate;                            // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UControlRig*                           ControlRig;                                        // 0xF0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	void OnPreInitialize();
	void OnPreEvaluate();
	void OnPostInitialize();
	void OnPostEvaluate();
	class UControlRig* BP_GetControlRig();
};

// 0xB8 (0xE0 - 0x28)
// Class ControlRig.ControlRigGizmoLibrary
class UControlRigGizmoLibrary : public UObject
{
public:
	uint8                                        Pad_B64[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigGizmoDefinition            DefaultGizmo;                                      // 0x30(0x60)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x90(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialColorParameter;                            // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FControlRigGizmoDefinition>    Gizmos;                                            // 0xC0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B65[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigGizmoLibrary* GetDefaultObj();

};

// 0x8 (0x270 - 0x268)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_B67[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x58 (0x4F0 - 0x498)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x498(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x4C0(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastExportedFrameRate;                             // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x10 (0x280 - 0x270)
// Class ControlRig.ControlRigSequencerAnimInstance
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:
	uint8                                        Pad_B6C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSequencerAnimInstance* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigManipulatable
class IControlRigManipulatable : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IControlRigManipulatable* GetDefaultObj();

};

// 0x138 (0x278 - 0x140)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	class UControlRig*                           ControlRig;                                        // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 ControlsMask;                                      // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x158(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAdditive;                                         // 0x15C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x15D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputBlendPose                       BoneFilter;                                        // 0x160(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x170(0xA0)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x210(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_B6F[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	class UControlRig*                           ControlRig;                                        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                    SectionToKey;                                      // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x68(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterTrack* GetDefaultObj();

};

// 0xB8 (0x210 - 0x158)
// Class ControlRig.MovieSceneControlRigSection
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{
public:
	bool                                         bAdditive;                                         // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B71[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputBlendPose                       BoneFilter;                                        // 0x160(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x170(0xA0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneControlRigSection* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class ControlRig.MovieSceneControlRigTrack
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneControlRigTrack* GetDefaultObj();

};

}


