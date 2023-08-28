#pragma once

namespace Math
{
	D3DXMATRIX Matrix(CG::FRotator Rotation, CG::FRotator Origin = CG::FRotator(0, 0, 0));
	D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2);
}