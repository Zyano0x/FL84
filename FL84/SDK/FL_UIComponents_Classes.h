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
	 * BlueprintGeneratedClass FL_UIComponents.FL_UIComponents_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_UIComponents_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_LocalText2Text(const struct FS_LocalText& LocalText, class UObject* __WorldContext, class FText* Text);
		void STATIC_LocalText2String(const struct FS_LocalText& LocalText, class UObject* __WorldContext, class FString* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
