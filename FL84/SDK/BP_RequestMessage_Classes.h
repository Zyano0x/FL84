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
	 * BlueprintGeneratedClass BP_RequestMessage.BP_RequestMessage_C
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class ABP_RequestMessage_C : public ASolarMapElementBase
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMessageDeal;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnMessageDeal__DelegateSignature(const struct FS_MessageRequest& Info, bool Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
