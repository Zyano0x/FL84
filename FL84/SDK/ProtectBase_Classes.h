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
	 * Class ProtectBase.ProtectBaseComponent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UProtectBaseComponent : public UObject
	{
	public:
		unsigned char                                              UnknownData_JJ2Y[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_3JOV[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		class USecDSComponent* STATIC_GetInstance();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
