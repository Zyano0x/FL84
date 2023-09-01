#pragma once

namespace Math
{
	D3DXMATRIX Matrix(CG::FRotator Rotation, CG::FRotator Origin = CG::FRotator(0, 0, 0));
	D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2);
	CG::FVector2D WorldToRadar(CG::FRotator Rotation, CG::FVector CameraLocation, CG::FVector Origin, CG::FVector2D RadarPosition, CG::FVector2D RadarSize);
}