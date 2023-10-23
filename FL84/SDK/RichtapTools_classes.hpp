#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x90 - 0x28)
// Class RichtapTools.RichtapController
class URichtapController : public UObject
{
public:
	uint8                                        Pad_954[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class URichtapClip*>     HeDataMap;                                         // 0x40(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URichtapController* GetDefaultObj();

	void SetRichtapEnable(bool On);
	void SetEnableRichtap(bool bIsEnableRichtap);
};

}


