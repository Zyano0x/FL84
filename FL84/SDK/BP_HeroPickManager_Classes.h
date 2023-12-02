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
	 * BlueprintGeneratedClass BP_HeroPickManager.BP_HeroPickManager_C
	 * Size -> 0x0028 (FullSize[0x0320] - InheritedSize[0x02F8])
	 */
	class ABP_HeroPickManager_C : public AHeroPickManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnAllHeroPickEnd;                                        // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSideHeroPickEnd;                                       // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ReceiveAllHeroPickEnd();
		void ReceiveTeamPickHeroEnd(const class FString& TeamName);
		void ExecuteUbergraph_BP_HeroPickManager(int32_t EntryPoint);
		void OnSideHeroPickEnd__DelegateSignature(const class FString& Side);
		void OnAllHeroPickEnd__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
