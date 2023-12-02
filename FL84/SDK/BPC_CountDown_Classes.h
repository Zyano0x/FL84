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
	 * BlueprintGeneratedClass BPC_CountDown.BPC_CountDown_C
	 * Size -> 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
	 */
	class UBPC_CountDown_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_CountDown_C*                                     CountDownWidget;                                         // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Time;                                                    // 0x00C0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6V03[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer;                                                   // 0x00C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LocalTime;                                               // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y604[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LocalTimer;                                              // 0x00D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLocalTimeChange;                                       // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCountDownFinished;                                     // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    MatchingText;                                            // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MatchingTime;                                            // 0x0104(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMatchCountDownFinished;                                // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        TimerMatch;                                              // 0x0118(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bCountDownFinished;                                      // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y9J0[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CountSoundName;                                          // 0x0128(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash

	public:
		void OnRep_CountSoundName();
		void CCountEnd();
		void SStopMatchCountDown();
		void SStartMatchCountDown(int32_t MatchTime, const class FScriptDelegate& Event);
		void SStartCountDown(int32_t Time, const class FString& SoundName, const class FScriptDelegate& Event);
		void CStopCountDown();
		void OnRep_Time();
		void GetCountDownWidget(class UUI_CountDown_C** Output_Get1);
		void ReceiveBeginPlay();
		void StartCountdown(int32_t Time);
		void OnCountDownTime();
		void CClientCountDown();
		void CountDownTick();
		void MCountDownTick();
		void CustomEvent_1(ESCMInGameState NewState);
		void ExecuteUbergraph_BPC_CountDown(int32_t EntryPoint);
		void OnMatchCountDownFinished__DelegateSignature();
		void OnCountDownFinished__DelegateSignature();
		void OnLocalTimeChange__DelegateSignature(int32_t Time);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
