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
	 * Class ProtectBase.ProtectBaseComponent
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UProtectBaseComponent : public UObject
	{
	public:
		unsigned char                                              UnknownData_RD5Q[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		class UProtectBaseComponent* STATIC_GetInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class ProtectBase.ProtectBaseManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProtectBaseManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProtectBase.SecDSComponent
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class USecDSComponent : public UObject
	{
	public:
		unsigned char                                              UnknownData_P10Y[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		class USecDSComponent* STATIC_GetInstance();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
