#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FL_UIComponents.FL_UIComponents_C
class UFL_UIComponents_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFL_UIComponents_C* GetDefaultObj();

	void LocalText2Text(const struct FS_LocalText& LocalText, class UObject* __WorldContext, class FText* Text, const class FString& Loctext, bool Temp_bool_Variable, const class FString& CallFunc_ToUpper_ReturnValue, const class FString& CallFunc_GetLocalText_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
	void LocalText2String(const struct FS_LocalText& LocalText, class UObject* __WorldContext, class FString* Text, const class FString& CallFunc_GetLocalText_ReturnValue);
};

}


