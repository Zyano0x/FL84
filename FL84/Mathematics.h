#pragma once

#define M_PI 3.14159265358979323846f
#define RAD2DEG( x )  ( (float)(x) * (float)(180.f / M_PI) )
#define DEG2RAD( x ) ( (float)(x) * (float)(M_PI / 180.f) )
#define ImVec4Copy(i,v)	(v.x = i.x, v.y = i.y, v.z = i.z, v.w = i.w)

namespace Math
{
	D3DXMATRIX Matrix(SDK::FRotator Rotation, SDK::FRotator Origin = SDK::FRotator(0, 0, 0));
	D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2);
	SDK::FVector2D WorldToRadar(SDK::FRotator Rotation, SDK::FVector Location, SDK::FVector EnemyLocation, SDK::FVector2D RadarPosition, SDK::FVector2D RadarSize);
	SDK::FVector GetDirectionUnitVector(SDK::FVector From, SDK::FVector To);
	void VectorAnglesRadar(SDK::FVector& Forward, SDK::FVector& Angles);
	void RotateTriangle(std::array<SDK::FVector, 3>& Points, float Rotation);
}