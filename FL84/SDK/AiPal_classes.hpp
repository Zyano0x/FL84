#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// Class AiPal.AiPalComponent
class UAiPalComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UAiPalComponent* GetDefaultObj();

	void SetUserID(const class FString& UserId);
	void SetThreshold(float ThresholdPer);
	void SetMaxDetectTimes(int32 DetectGap_ms);
	void SetDetectGap_ms(int32 DetectGap_ms);
	void EndDetect();
	void Capture();
	void BeginDetect();
};

}


