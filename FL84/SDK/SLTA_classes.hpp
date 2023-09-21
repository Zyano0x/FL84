#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SLTA.SLTA_BPL
class USLTA_BPL : public UObject
{
public:

	static class UClass* StaticClass();
	static class USLTA_BPL* GetDefaultObj();

	bool WriteTxt(const class FString& SaveString, const class FString& Path);
	void SLTA_SetDetailMode(class USceneComponent* _sceneComponent);
	int32 SLTA_GetPrimitivesRHI();
	int32 SLTA_GetLightMapIndex(class UStaticMeshComponent* _ustaticMeshComponent);
	struct FVector4 SLTA_GetLightMapCoordinateBias(class UStaticMeshComponent* _ustaticMeshComponent);
	int32 SLTA_GetDrawcalls();
	TArray<float> SLTA_GetCustomPrimitiveData(class UPrimitiveComponent* _primitive);
	bool SLTA_ArrayToCSV(const class FString& SaveDirectory, const class FString& Filename, const class FString& TitleName, const TArray<class FString>& SaveText, int32 ArrayIndex, bool AllowOverwriting);
	class FString ReadTxt(const class FString& Path);
};

}


