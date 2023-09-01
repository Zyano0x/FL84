#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
	 * Size -> 0x0018 (FullSize[0x09D0] - InheritedSize[0x09B8])
	 */
	class USolarGameInstance_C : public USolarGameInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnBroadcastModeChanged;                                  // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void LuaOnBroadcastModeChanged();
		void LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void SolarGM_TestCrashWithBP();
		void SolarGM_TestEnsureMsgWithBP();
		void ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint);
		void OnBroadcastModeChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
