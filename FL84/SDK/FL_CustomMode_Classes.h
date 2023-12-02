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
	 * BlueprintGeneratedClass FL_CustomMode.FL_CustomMode_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_CustomMode_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetPortraitfromAvatarID(int32_t AvatarID, class UObject* __WorldContext, class UTexture2D** PortraitTexture);
		class ULocal_RequestMessage_C* STATIC_GetLocRequestComponet(class UObject* WorldContextObject, class UObject* __WorldContext);
		void STATIC_sBindOnPlayerReconnected(const class FScriptDelegate& Event, class UObject* __WorldContext, bool* bSuccess);
		void STATIC_sBindOnPlayerDisconnected(const class FScriptDelegate& Event, class UObject* __WorldContext, bool* bSuccess);
		void STATIC_IDID(int32_t ID, class UObject* __WorldContext, int32_t* ID2);
		void STATIC_Icon(int32_t ID, class UObject* __WorldContext, class UTexture2D** Icon, int32_t* ID2);
		void STATIC_Icon(int32_t ID, class UObject* __WorldContext, class UTexture2D** Icon, int32_t* , int32_t* PartsType);
		void STATIC_Icon(int32_t ID, class UObject* __WorldContext, class UTexture2D** Icon, TArray<float>* HUDColor, class UTexture2D** Icon2, int32_t* PartsType);
		void STATIC_Pawnisavehicle(class APawn* Pawn, class UObject* __WorldContext, bool* Result);
		ESolarNetMode STATIC_GetNetMode(class UObject* __WorldContext);
		void STATIC_cBindOnReceiveRequest(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void STATIC_cBindOnRequestReplied(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void STATIC_sBindOnRequestDealt(const class FScriptDelegate& Event, class UObject* __WorldContext, class ABP_RequestMessage_C** RequestManager);
		class UBPC_RequestMessage_C* STATIC_GetRequestComponet(class UObject* __WorldContext);
		void STATIC_Name2String(TArray<class FName>* Names, class UObject* __WorldContext, TArray<class FString>* Strings);
		void STATIC_ArrayContain(TArray<class FString>* Main, TArray<class FString>* Sub, class UObject* __WorldContext, bool* Contain);
		void STATIC_(int32_t _, class UObject* __WorldContext, class FText* __);
		void STATIC_(int32_t _, int32_t __, TArray<int32_t>* ___, class UObject* __WorldContext, int32_t* Result);
		void STATIC_(class UObject* __WorldContext, ESolarBuildConfiguration* );
		void STATIC_Number2Letter(int32_t Number, class UObject* __WorldContext, class FString* Letter);
		void STATIC_Noya(float , class UObject* __WorldContext);
		void STATIC_Noya(class UObject* __WorldContext, class UUI_Notice_Noya_C** NoyaWidget);
		void STATIC_Noya(TMap<unsigned char, bool> , class UObject* __WorldContext);
		void STATIC_Noya(E_NoticeType_Noya , float _, const class FString& __, class UObject* __WorldContext);
		void STATIC_Noya(E_NoticeType_Noya , float _, const class FString& __, TMap<unsigned char, bool> ___, int32_t ____, class UObject* __WorldContext);
		EDriveState STATIC_(class AActor* NewParam, class UObject* __WorldContext);
		void STATIC_(TArray<class AActor*>* , class UObject* __WorldContext, TArray<class FString>* Result);
		void STATIC_(const struct FVector& Vector, class UObject* __WorldContext, class FString* str);
		void STATIC_(class UClass* InMapMarkClass, const struct FVector& InMarkPos, bool EdgeSupport, int32_t ZOrder, class UObject* __WorldContext, class UMapMarkBase** Output);
		void STATIC_(class ASolarCharacter* , class UObject* __WorldContext, E_CharacterHealthState* _);
		void STATIC_(const struct FVector& , bool _, class UObject* __WorldContext, struct FVector* __, float* Z, bool* ___);
		void STATIC_ToIntStringArray(TArray<class FString>* str, class UObject* __WorldContext, TArray<int32_t>* Int);
		void STATIC_(class ASolarCharacter* , class UObject* __WorldContext, bool* _);
		void STATIC_POP(TArray<class ASolarMapElementBase*>* Array, int32_t , class UObject* __WorldContext, TArray<class ASolarMapElementBase*>* resault);
		void STATIC_(class UWidget* Target, bool Visiable, class UObject* __WorldContext);
		void STATIC_(int32_t ItemCount, int32_t PageCapacity, class UObject* __WorldContext, int32_t* PageCount);
		void STATIC_(int32_t , int32_t _, int32_t __, class UObject* __WorldContext, int32_t* ___);
		void STATIC_(class UUserWidget* Target, class UObject* __WorldContext, bool* Visible, class UUserWidget** Widget);
		void STATIC_(class UObject* , const class FString& _, E_NoticeLevel __, class UObject* __WorldContext);
		void STATIC_ConvertToString(const struct FKey& Key, class UObject* __WorldContext, class FString* KeyString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
