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
	 * WidgetBlueprintGeneratedClass UI_AvatarFrame_City.UI_AvatarFrame_City_C
	 * Size -> 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
	 */
	class UUI_AvatarFrame_City_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Loop_Anim;                                               // 0x0350(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class FString GetModuleName();
		void SetAvatarIcon(int32_t InAvatarID);
		void SetEmptyState(bool IsEmpty);
		void SetPlayerGender(E_Type_Gender Gender);
		void SetSocialIcon(E_Type_Social Social);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Update();
		void ExecuteUbergraph_UI_AvatarFrame_City(int32_t EntryPoint);
		void OnReleased__DelegateSignature();
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
