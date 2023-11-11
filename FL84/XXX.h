#pragma once

class XXX
{
public:
	XXX()
	{
		IsTeam = false;

		ItemPos = CG::FVector2D(0.0f, 0.0f);
		VehiclePos = CG::FVector2D(0.0f, 0.0f);

		HeadPos = CG::FVector(0.0f, 0.0f, 0.0f);
		FootPos = CG::FVector(0.0f, 0.0f, 0.0f);

		Head = CG::FVector(0.0f, 0.0f, 0.0f);
		Root = CG::FVector(0.0f, 0.0f, 0.0f);

		RadarPos = ImVec2(0.0f, 0.0f);
		RadarSize = ImVec2(0.0f, 0.0f);

		ColorVisisble = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	}

	bool SanityCheck();
	void Unknown();
	void Removals();
	void Vehicle();
	void Aimbot();
	void Misc();
	void Radar();
	void BypassEAC();

public:
	CG::UWorld* World;
	CG::ULocalPlayer* LocalPlayer;
	CG::APlayerController* PlayerController;
	CG::APlayerCameraManager* CameraManager;
	CG::UKismetMathLibrary* MathLibrary;
	CG::UGameplayStatics* GameplayStatics;

private:
	bool IsTeam;
	ImVec2 RadarPos, RadarSize;
	ImVec4 ColorVisisble;
	CG::FVector2D ItemPos, VehiclePos;
	CG::FVector HeadPos, FootPos;
	CG::FVector Head, Root;
};

extern XXX ZXC;