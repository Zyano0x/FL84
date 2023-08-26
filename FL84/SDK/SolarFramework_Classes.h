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
	 * Class SolarFramework.SolarContainer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USolarContainer : public UObject
	{
	public:
		void ReceiveInitialize();
		void ReceiveDeinitialize();
		static UClass* StaticClass();
	};

	/**
	 * Class SolarFramework.SolarAbstractManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USolarAbstractManager : public USolarContainer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SolarFramework.SolarAbstractModel
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USolarAbstractModel : public USolarContainer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SolarFramework.SolarArchitecture
	 * Size -> 0x01A8 (FullSize[0x0348] - InheritedSize[0x01A0])
	 */
	class USolarArchitecture : public UGameInstance
	{
	public:
		class FScriptMulticastDelegate                             OnOnScopeChangeDelegate;                                 // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIVS[0x198];                                 // 0x01B0(0x0198) MISSED OFFSET (PADDING)

	public:
		void OnScopeChanged(EScope InLastScope, EScope InCurScope);
		bool IsScopeSettlement();
		bool IsScopeLogin();
		bool IsScopeLobby();
		bool IsScopeBattle();
		bool IsInScope(EScope InScopeMask);
		class USolarAbstractModel* GetModel(class UClass* ModelClass);
		class USolarAbstractManager* GetManager(class UClass* ManagerClass);
		EScope GetCurScope();
		static UClass* StaticClass();
	};

	/**
	 * Class SolarFramework.SolarFrameworkSettings
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class USolarFrameworkSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FSolarConfigEntry>                           ManagerConfigs;                                          // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSolarConfigEntry>                           ModelConfigs;                                            // 0x0048(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
