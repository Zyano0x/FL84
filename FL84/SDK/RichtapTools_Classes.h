#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class URichtapController : public UObject
	{
	public:
		unsigned char                                              UnknownData_M9TP[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class URichtapClip*>                   HeDataMap;                                               // 0x0040(0x0050) NativeAccessSpecifierPrivate

	public:
		void SetRichtapEnable(bool On);
		void STATIC_SetEnableRichtap(bool bIsEnableRichtap);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
