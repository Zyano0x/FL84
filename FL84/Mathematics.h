#pragma once

#define M_PI 3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / M_PI))
#define DEG2RAD(x) ((float)(x) * (float)(M_PI / 180.f))
#define ImVec4Copy(i,v)	(v.x = i.x, v.y = i.y, v.z = i.z, v.w = i.w)
#define FVectorCopy(i,v) (v.X = i.X, v.Y = i.Y, v.Z = i.Z)

namespace Math
{
	D3DXMATRIX Matrix(CG::FRotator Rotation, CG::FRotator Origin = CG::FRotator(0, 0, 0));
	D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2);
	CG::FVector2D WorldToRadar(CG::FRotator Rotation, CG::FVector Location, CG::FVector EnemyLocation, CG::FVector2D RadarPosition, CG::FVector2D RadarSize);
	CG::FVector GetDirectionUnitVector(CG::FVector From, CG::FVector To);
	void VectorAnglesRadar(CG::FVector& Forward, CG::FVector& Angles);
	void RotateTriangle(std::array<CG::FVector, 3>& Points, float Rotation);
	float GetFOV(CG::FRotator Angle, CG::FVector Src, CG::FVector Dst);
}