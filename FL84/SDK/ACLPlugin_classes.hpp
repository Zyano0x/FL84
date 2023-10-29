#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x158 - 0x28)
// Class ACLPlugin.AnimationCompressionLibraryDatabase
class UAnimationCompressionLibraryDatabase : public UObject
{
public:
	TArray<uint8>                                CookedCompressedBytes;                             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint64>                               CookedAnimSequenceMappings;                        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C[0x108];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaxStreamRequestSizeKB;                            // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimationCompressionLibraryDatabase* GetDefaultObj();

	void SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class EACLVisualFidelityChangeResult* Result, enum class EACLVisualFidelity VisualFidelity);
	enum class EACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);
};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{
public:

	static class UClass* StaticClass();
	static class UAnimBoneCompressionCodec_ACLBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACL
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{
public:
	class UAnimBoneCompressionCodec*             SafetyFallbackCodec;                               // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimBoneCompressionCodec_ACL* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static class UClass* StaticClass();
	static class UAnimBoneCompressionCodec_ACLCustom* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{
public:
	class UAnimationCompressionLibraryDatabase*  DatabaseAsset;                                     // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimBoneCompressionCodec_ACLDatabase* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static class UClass* StaticClass();
	static class UAnimBoneCompressionCodec_ACLSafe* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ACLPlugin.AnimCurveCompressionCodec_ACL
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{
public:

	static class UClass* StaticClass();
	static class UAnimCurveCompressionCodec_ACL* GetDefaultObj();

};

}


