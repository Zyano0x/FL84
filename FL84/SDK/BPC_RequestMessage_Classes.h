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
	 * BlueprintGeneratedClass BPC_RequestMessage.BPC_RequestMessage_C
	 * Size -> 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
	 */
	class UBPC_RequestMessage_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class FString, class UBP_MessageObj_C*>               Queryer;                                                 // 0x00B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnReceiveRequest;                                        // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGetReply;                                              // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_RequestMessage_C*                                CommonMessageManager;                                    // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetOwnerPlayerID(int32_t* PlayerId);
		void ToMessageInfo(const class FString& Key, struct FS_MessageRequest* MessageInfo);
		void ToString(const struct FS_MessageRequest& MessageInfo, class FString* Key);
		void ReceiveBeginPlay();
		void ReceiveRequest(const struct FS_MessageRequest& Info);
		void SendReply(const struct FS_MessageRequest& Info, bool Reply);
		void ExecuteUbergraph_BPC_RequestMessage(int32_t EntryPoint);
		void OnGetReply__DelegateSignature(const class FString& Handle, bool Reply, unsigned char Type, int32_t ReplierPlayerID);
		void OnReceiveRequest__DelegateSignature(const class FString& Handle, unsigned char Type, int32_t SenderPlayerID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
