#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Class RichtapTools.RichtapController
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class URichtapController : public UObject
	{
	public:
		unsigned char                                              UnknownData_9K9G[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class URichtapClip*>                   HeDataMap;                                               // 0x0070(0x0050) NativeAccessSpecifierPrivate

	public:
		void SetRichtapEnable(bool On);
		void STATIC_SetEnableWinRichtap(bool bIsEnableWinRichtap);
		void STATIC_SetEnableRichtap(bool bIsEnableRichtap);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
