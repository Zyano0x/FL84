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
	 * BlueprintGeneratedClass AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_SolarLobbyAkEvent_C : public UAnimNotifyState
	{
	public:
		bool                                                       Follow;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z7WM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttachName;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       BeginEvent;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              BeginEventName;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       EndEvent;                                                // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              EndEventName;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UAkComponent*                                        NewVar_1;                                                // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AKEventFun(class USkeletalMeshComponent* SkeletalMeshComp, class UAkAudioEvent* Event, const class FString& EventName, bool isNotifyEnd, bool* ReturnValue);
		void GetMeshAKComponent(class USkeletalMeshComponent* InSkeletalMeshComp, class UAkComponent** OutAkComp, bool* IsSuccess);
		void GetAkSwitch(class USkeletalMeshComponent* InSkeletalMeshComp, bool* ShouldPlaySounds);
		bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
