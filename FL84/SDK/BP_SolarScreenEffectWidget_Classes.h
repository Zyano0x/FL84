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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C
	 * Size -> 0x0000 (FullSize[0x0408] - InheritedSize[0x0408])
	 */
	class UBP_SolarScreenEffectWidget_C : public USolarScreenEffectWidget
	{
	public:
		void FadeOutScreenEffect();
		bool IsFadeOutFinished();
		bool IsInstantEffectComplete();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
