#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Class SLTA.SLTA_BPL
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USLTA_BPL : public UObject
	{
	public:
		bool STATIC_WriteTxt(const class FString& saveString, const class FString& Path);
		void STATIC_SLTA_SetDetailMode(class USceneComponent* _sceneComponent);
		int32_t STATIC_SLTA_GetPrimitivesRHI();
		int32_t STATIC_SLTA_GetLightMapIndex(class UStaticMeshComponent* _ustaticMeshComponent);
		struct FVector4 STATIC_SLTA_GetLightMapCoordinateBias(class UStaticMeshComponent* _ustaticMeshComponent);
		int32_t STATIC_SLTA_GetDrawcalls();
		TArray<float> STATIC_SLTA_GetCustomPrimitiveData(class UPrimitiveComponent* _primitive);
		bool STATIC_SLTA_ArrayToCSV(const class FString& SaveDirectory, const class FString& Filename, const class FString& TitleName, TArray<class FString> SaveText, int32_t ArrayIndex, bool AllowOverwriting);
		class FString STATIC_ReadTxt(const class FString& Path);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
