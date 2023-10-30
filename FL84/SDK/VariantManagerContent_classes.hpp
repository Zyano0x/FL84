#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x90 - 0x28)
// Class VariantManagerContent.LevelVariantSets
class ULevelVariantSets : public UObject
{
public:
	class UClass*                                DirectorClass;                                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UVariantSet*>                   VariantSets;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AA[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelVariantSets* GetDefaultObj();

	class UVariantSet* GetVariantSetByName(const class FString& VariantSetName);
	class UVariantSet* GetVariantSet(int32 VariantSetIndex);
	int32 GetNumVariantSets();
};

// 0x18 (0x240 - 0x228)
// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                       LevelVariantSets;                                  // 0x228(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ALevelVariantSetsActor* GetDefaultObj();

	bool SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName);
	bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// 0x18 (0x40 - 0x28)
// Class VariantManagerContent.LevelVariantSetsFunctionDirector
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	uint8                                        Pad_7B9[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelVariantSetsFunctionDirector* GetDefaultObj();

};

// 0x190 (0x1B8 - 0x28)
// Class VariantManagerContent.PropertyValue
class UPropertyValue : public UObject
{
public:
	uint8                                        Pad_7C0[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<FFieldPathProperty_>                  Properties;                                        // 0x88(0x10)(ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                PropertyIndices;                                   // 0x98(0x10)(ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCapturedPropSegment>          CapturedPropSegments;                              // 0xA8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                FullDisplayString;                                 // 0xB8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PropertySetterName;                                // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0xD0(0x50)(Protected, NativeAccessSpecifierProtected)
	bool                                         bHasRecordedData;                                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                LeafPropertyClass;                                 // 0x128(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7C5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ValueBytes;                                        // 0x138(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPropertyValueCategory            PropCategory;                                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7C6[0x6F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPropertyValue* GetDefaultObj();

	bool HasRecordedData();
	class FText GetPropertyTooltip();
	class FString GetFullDisplayString();
};

// 0x0 (0x1B8 - 0x1B8)
// Class VariantManagerContent.PropertyValueTransform
class UPropertyValueTransform : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueTransform* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class VariantManagerContent.PropertyValueVisibility
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueVisibility* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class VariantManagerContent.PropertyValueColor
class UPropertyValueColor : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueColor* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class VariantManagerContent.PropertyValueMaterial
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueMaterial* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class VariantManagerContent.PropertyValueOption
class UPropertyValueOption : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueOption* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class VariantManagerContent.PropertyValueSoftObject
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueSoftObject* GetDefaultObj();

};

// 0x28 (0x250 - 0x228)
// Class VariantManagerContent.SwitchActor
class ASwitchActor : public AActor
{
public:
	uint8                                        Pad_7CE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x240(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LastSelectedOption;                                // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7CF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASwitchActor* GetDefaultObj();

	void SelectOption(int32 OptionIndex);
	int32 GetSelectedOption();
	TArray<class AActor*> GetOptions();
};

// 0x48 (0x70 - 0x28)
// Class VariantManagerContent.Variant
class UVariant : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DA[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVariantObjectBinding*>         ObjectBindings;                                    // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            Thumbnail;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVariant* GetDefaultObj();

	void SwitchOn();
	void SetDisplayText(class FText& NewDisplayText);
	bool IsActive();
	class UTexture2D* GetThumbnail();
	int32 GetNumActors();
	class FText GetDisplayText();
	class AActor* GetActor(int32 ActorIndex);
};

// 0x68 (0x90 - 0x28)
// Class VariantManagerContent.VariantObjectBinding
class UVariantObjectBinding : public UObject
{
public:
	class FString                                CachedActorLabel;                                  // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       ObjectPtr;                                         // 0x38(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TLazyObjectPtr<class UObject>                LazyObjectPtr;                                     // 0x50(0x1C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7DB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPropertyValue*>                CapturedProperties;                                // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFunctionCaller>               FunctionCallers;                                   // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVariantObjectBinding* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class VariantManagerContent.VariantSet
class UVariantSet : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E4[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExpanded;                                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVariant*>                      Variants;                                          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVariantSet* GetDefaultObj();

	void SetDisplayText(class FText& NewDisplayText);
	class UVariant* GetVariantByName(const class FString& VariantName);
	class UVariant* GetVariant(int32 VariantIndex);
	int32 GetNumVariants();
	class FText GetDisplayText();
};

}


