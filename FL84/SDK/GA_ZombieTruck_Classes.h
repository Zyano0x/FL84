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
	 * BlueprintGeneratedClass GA_ZombieTruck.GA_ZombieTruck_C
	 * Size -> 0x0008 (FullSize[0x0500] - InheritedSize[0x04F8])
	 */
	class UGA_ZombieTruck_C : public USolarVehicleGA_ZombieTruck
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_CommitExecute();
		void ExecuteUbergraph_GA_ZombieTruck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
