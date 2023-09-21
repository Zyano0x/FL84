#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DTBPJson.DTBPJsonBPLib
class UDTBPJsonBPLib : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDTBPJsonBPLib* GetDefaultObj();

	void StructToJson(struct FDTStruct& Struct, class FString* Json, bool PrettyPrint);
	void JsonToStruct(struct FDTStruct* Struct, const class FString& Json);
};

}


