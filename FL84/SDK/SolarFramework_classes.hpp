#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SolarFramework.SolarContainer
class USolarContainer : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarContainer* GetDefaultObj();

	void ReceiveInitialize();
	void ReceiveDeinitialize();
};

// 0x0 (0x28 - 0x28)
// Class SolarFramework.SolarAbstractManager
class USolarAbstractManager : public USolarContainer
{
public:

	static class UClass* StaticClass();
	static class USolarAbstractManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SolarFramework.SolarAbstractModel
class USolarAbstractModel : public USolarContainer
{
public:

	static class UClass* StaticClass();
	static class USolarAbstractModel* GetDefaultObj();

};

// 0x1A8 (0x348 - 0x1A0)
// Class SolarFramework.SolarArchitecture
class USolarArchitecture : public UGameInstance
{
public:
	FMulticastInlineDelegateProperty_            OnOnScopeChangeDelegate;                           // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_132B[0x198];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USolarArchitecture* GetDefaultObj();

	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope);
	bool IsScopeSettlement();
	bool IsScopeLogin();
	bool IsScopeLobby();
	bool IsScopeBattle();
	bool IsInScope(enum class EScope InScopeMask);
	class USolarAbstractModel* GetModel(TSubclassOf<class USolarAbstractModel>& ModelClass);
	class USolarAbstractManager* GetManager(TSubclassOf<class USolarAbstractManager>& ManagerClass);
	enum class EScope GetCurScope();
};

// 0x20 (0x58 - 0x38)
// Class SolarFramework.SolarFrameworkSettings
class USolarFrameworkSettings : public UDeveloperSettings
{
public:
	TArray<struct FSolarConfigEntry>             ManagerConfigs;                                    // 0x38(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSolarConfigEntry>             ModelConfigs;                                      // 0x48(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USolarFrameworkSettings* GetDefaultObj();

};

}


