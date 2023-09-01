#pragma once

#define M_PI 3.14159265358979323846
#define DEG2RAD(x) x * (M_PI/180.0f)
#define ImVec4Copy(i,v)	(v.x = i.x, v.y = i.y, v.z = i.z, v.w = i.w)

enum BONES
{
	ROOT = 0, BIP001 = 1, PELVIS = 2,
	SPINE_01 = 3, SPINE_02 = 4, SPINE_03 = 5,
	CLAVICLE_L = 6, UPPERARM_L = 7, LOWERARM_L = 8, HAND_L = 9,
	THUMB_01_L = 10, THUMB_02_L = 11, THUMB_03_L = 12,
	INDEX_01_L = 13, INDEX_02_L = 14, INDEX_03_L = 15,
	MIDDLE_01_L = 16, MIDDLE_02_L = 17, MIDDLE_03_L = 18,
	RING_01_L = 19, RING_02_L = 20, RING_03_L = 21,
	PINKY_01_L = 22, PINKY_02_L = 23, PINKY_03_L = 24,
	CLAVICLE_R = 25, UPPERARM_R = 26, LOWERARM_R = 27, HAND_R = 28,
	THUMB_01_R = 29, THUMB_02_R = 30, THUMB_03_R = 31,
	INDEX_01_R = 32, INDEX_02_R = 33, INDEX_03_R = 34,
	MIDDLE_01_R = 35, MIDDLE_02_R = 36, MIDDLE_03_R = 37,
	RING_01_R = 38, RING_02_R = 39, RING_03_R = 40,
	PINKY_01_R = 41, PINKY_02_R = 42, PINKY_03_R = 43,
	RIGHTHANDWEAPONATTACH = 44,
	NECK_01 = 45,
	HEAD = 46,
	BACKPACKATTACH = 47,
	THIGH_L = 48,
	CALF_L = 49,
	FOOT_L = 50,
	BALL_L = 51,
	THIGH_R = 52,
	CALF_R = 53,
	FOOT_R = 54,
	BALL_R = 55,
	VB_SPINE_03_RIGHTHANDWEAPONATTACH = 56,
	VB_VB_SPINE_03_RIGHTHANDWEAPONATTACH_HAND_R = 57,
	VB_VB_VB_SPINE_03_RIGHTHANDWEAPONATTACH_HAND_R_LOWERARM_R = 58,
};

class XXX
{
public:
	XXX()
	{
		IsTeam = false;

		HeadPos = CG::FVector2D(0.0f, 0.0f);
		FootPos = CG::FVector2D(0.0f, 0.0f);
		ItemPos = CG::FVector2D(0.0f, 0.0f);
		VehiclePos = CG::FVector2D(0.0f, 0.0f);

		Head = CG::FVector(0.0f, 0.0f, 0.0f);
		Root = CG::FVector(0.0f, 0.0f, 0.0f);

		ColorVisisble = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	}

	void Unknown();
	void Removal();
	void Aimbot();
	void Radar();

private:
	bool IsTeam;
	ImVec4 ColorVisisble;
	CG::FVector2D HeadPos, FootPos, ItemPos, VehiclePos;
	CG::FVector Head, Root;
};

extern XXX ZZZ;