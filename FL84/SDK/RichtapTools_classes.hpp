#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xC0 - 0x28)
// Class RichtapTools.RichtapController
class URichtapController : public UObject
{
public:
	uint8                                        Pad_970[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class URichtapClip*>     HeDataMap;                                         // 0x70(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URichtapController* GetDefaultObj();

	void SetRichtapEnable(bool On);
	void SetEnableWinRichtap(bool bIsEnableWinRichtap);
	void SetEnableRichtap(bool bIsEnableRichtap);
};

}


