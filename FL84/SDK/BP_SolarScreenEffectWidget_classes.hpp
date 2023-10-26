#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x408 - 0x408)
// WidgetBlueprintGeneratedClass BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C
class UBP_SolarScreenEffectWidget_C : public USolarScreenEffectWidget
{
public:

	static class UClass* StaticClass();
	static class UBP_SolarScreenEffectWidget_C* GetDefaultObj();

	void FadeOutScreenEffect();
	bool IsFadeOutFinished();
	bool IsInstantEffectComplete(bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


