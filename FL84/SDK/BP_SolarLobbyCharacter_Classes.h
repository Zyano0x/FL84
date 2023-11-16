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
	 * BlueprintGeneratedClass BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C
	 * Size -> 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
	 */
	class ABP_SolarLobbyCharacter_C : public ASolarLobbyCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMediaSoundComponent*                                MediaSound;                                              // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool IsCanOpenChangeAnim();
		void ClearCharacterByLua();
		void InitCharacterByLua();
		bool IsCanOpenMirror();
		class FString GetModuleName();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_SolarLobbyCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
