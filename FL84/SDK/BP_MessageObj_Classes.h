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
	 * BlueprintGeneratedClass BP_MessageObj.BP_MessageObj_C
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UBP_MessageObj_C : public UObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnTimeOut;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsRunning;                                               // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O7E9[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer;                                                   // 0x0048(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBlocking;                                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BCOM[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_MessageRequest                                   NewVar_1;                                                // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Init(const struct FS_MessageRequest& MessageInfo, int32_t Time, bool* Return);
		void ReplyDeal(int32_t BlockTime, bool Reply);
		void Timeout();
		void BlockTimeUp();
		void ExecuteUbergraph_BP_MessageObj(int32_t EntryPoint);
		void OnTimeOut__DelegateSignature(const struct FS_MessageRequest& Info);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
