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
	 * Class AiPal.AiPalComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UAiPalComponent : public UActorComponent
	{
	public:
		void SetUserID(const class FString& UserId);
		void SetThreshold(float ThresholdPer);
		void SetMaxDetectTimes(int32_t DetectGap_ms);
		void SetDetectGap_ms(int32_t DetectGap_ms);
		void EndDetect();
		void Capture();
		void BeginDetect();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
