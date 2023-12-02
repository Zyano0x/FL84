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
	 * BlueprintGeneratedClass SolarFunctionLibrary.SolarFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USolarFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_FormatMinuteTime(int32_t Seconds, class UObject* __WorldContext, class FString* FTime);
		void STATIC_IsMobilePlatform(class UObject* __WorldContext, bool* IsMobilePlatform);
		void STATIC_IsPCPlatform(class UObject* __WorldContext, bool* IsPCPlatform);
		void STATIC_GetLocalNowTotalSeconds(class UObject* __WorldContext, int32_t* TotalSeconds);
		void STATIC_GetUtcNowTotalSeconds(class UObject* __WorldContext, int32_t* TotalSeconds);
		void STATIC_GetLocalNowTotalMilliseconds(class UObject* __WorldContext, int32_t* TotalMilliseconds);
		void STATIC_GetUtcNowTotalMilliseconds(class UObject* __WorldContext, int32_t* TotalMilliseconds);
		void STATIC_DoNothing(class UObject* __WorldContext);
		void STATIC_SolarFunctionLibraryTest(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
