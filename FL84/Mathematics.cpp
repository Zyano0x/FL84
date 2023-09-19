#include "pch.h"

namespace Math
{
	D3DXMATRIX Matrix(CG::FRotator Rotation, CG::FRotator Origin)
	{
		float radPitch = (Rotation.Pitch * float(M_PI) / 180.f);
		float radYaw = (Rotation.Yaw * float(M_PI) / 180.f);
		float radRoll = (Rotation.Roll * float(M_PI) / 180.f);

		float SP = sinf(radPitch);
		float CP = cosf(radPitch);
		float SY = sinf(radYaw);
		float CY = cosf(radYaw);
		float SR = sinf(radRoll);
		float CR = cosf(radRoll);

		D3DMATRIX matrix;
		matrix.m[0][0] = CP * CY;
		matrix.m[0][1] = CP * SY;
		matrix.m[0][2] = SP;
		matrix.m[0][3] = 0.f;

		matrix.m[1][0] = SR * SP * CY - CR * SY;
		matrix.m[1][1] = SR * SP * SY + CR * CY;
		matrix.m[1][2] = -SR * CP;
		matrix.m[1][3] = 0.f;

		matrix.m[2][0] = -(CR * SP * CY + SR * SY);
		matrix.m[2][1] = CY * SR - CR * SP * SY;
		matrix.m[2][2] = CR * CP;
		matrix.m[2][3] = 0.f;

		matrix.m[3][0] = Origin.Pitch;
		matrix.m[3][1] = Origin.Yaw;
		matrix.m[3][2] = Origin.Roll;
		matrix.m[3][3] = 1.f;

		return matrix;
	}

	D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2)
	{
		D3DMATRIX pOut;
		pOut._11 = pM1._11 * pM2._11 + pM1._12 * pM2._21 + pM1._13 * pM2._31 + pM1._14 * pM2._41;
		pOut._12 = pM1._11 * pM2._12 + pM1._12 * pM2._22 + pM1._13 * pM2._32 + pM1._14 * pM2._42;
		pOut._13 = pM1._11 * pM2._13 + pM1._12 * pM2._23 + pM1._13 * pM2._33 + pM1._14 * pM2._43;
		pOut._14 = pM1._11 * pM2._14 + pM1._12 * pM2._24 + pM1._13 * pM2._34 + pM1._14 * pM2._44;
		pOut._21 = pM1._21 * pM2._11 + pM1._22 * pM2._21 + pM1._23 * pM2._31 + pM1._24 * pM2._41;
		pOut._22 = pM1._21 * pM2._12 + pM1._22 * pM2._22 + pM1._23 * pM2._32 + pM1._24 * pM2._42;
		pOut._23 = pM1._21 * pM2._13 + pM1._22 * pM2._23 + pM1._23 * pM2._33 + pM1._24 * pM2._43;
		pOut._24 = pM1._21 * pM2._14 + pM1._22 * pM2._24 + pM1._23 * pM2._34 + pM1._24 * pM2._44;
		pOut._31 = pM1._31 * pM2._11 + pM1._32 * pM2._21 + pM1._33 * pM2._31 + pM1._34 * pM2._41;
		pOut._32 = pM1._31 * pM2._12 + pM1._32 * pM2._22 + pM1._33 * pM2._32 + pM1._34 * pM2._42;
		pOut._33 = pM1._31 * pM2._13 + pM1._32 * pM2._23 + pM1._33 * pM2._33 + pM1._34 * pM2._43;
		pOut._34 = pM1._31 * pM2._14 + pM1._32 * pM2._24 + pM1._33 * pM2._34 + pM1._34 * pM2._44;
		pOut._41 = pM1._41 * pM2._11 + pM1._42 * pM2._21 + pM1._43 * pM2._31 + pM1._44 * pM2._41;
		pOut._42 = pM1._41 * pM2._12 + pM1._42 * pM2._22 + pM1._43 * pM2._32 + pM1._44 * pM2._42;
		pOut._43 = pM1._41 * pM2._13 + pM1._42 * pM2._23 + pM1._43 * pM2._33 + pM1._44 * pM2._43;
		pOut._44 = pM1._41 * pM2._14 + pM1._42 * pM2._24 + pM1._43 * pM2._34 + pM1._44 * pM2._44;

		return pOut;
	}

	CG::FVector2D WorldToRadar(CG::FRotator LocalRotation, CG::FVector LocalPosition, CG::FVector EntityPosition, CG::FVector2D RadarPosition, CG::FVector2D RadarSize)
	{
		CG::FVector2D DotPos;
		CG::FVector2D Direction;

		// Calculate Direction
		Direction.Y = EntityPosition.X - LocalPosition.X;
		Direction.X = EntityPosition.Y - LocalPosition.Y;

		float Radian = DEG2RAD(LocalRotation.Yaw);

		// Calculate Raw DotPos
		DotPos.X = (Direction.X * (float)cos(Radian) - Direction.Y * (float)sin(Radian)) / 150.0f;
		DotPos.Y = (Direction.Y * (float)cos(Radian) + Direction.X * (float)sin(Radian)) / 150.0f;

		// Add RadarPos To Calculated DotPos
		DotPos.X = DotPos.X + RadarPosition.X + RadarSize.X / 2.f;
		DotPos.Y = -DotPos.Y + RadarPosition.Y + RadarSize.Y / 2.f;

		// Clamp Dots To RadarSize ( Where 10 = Width/Height of the Dot)
		if (DotPos.X < RadarPosition.X)
			DotPos.X = RadarPosition.X + 10;

		if (DotPos.X > RadarPosition.X + RadarSize.X - 10)
			DotPos.X = RadarPosition.X + RadarSize.X - 10;

		if (DotPos.Y < RadarPosition.Y)
			DotPos.Y = RadarPosition.Y + 10;

		if (DotPos.Y > RadarPosition.Y + RadarSize.Y - 10)
			DotPos.Y = RadarPosition.Y + RadarSize.Y - 10;

		return DotPos;
	}

	CG::FVector GetDirectionUnitVector(CG::FVector From, CG::FVector To)
	{
		return (To - From).GetSafeNormal();
	}

	void VectorAnglesRadar(CG::FVector& Forward, CG::FVector& Angles)
	{
		if (Forward.X == 0.f && Forward.Y == 0.f)
		{
			Angles.X = Forward.Z > 0.f ? -90.f : 90.f;
			Angles.Y = 0.f;
		}
		else
		{
			Angles.X = RAD2DEG(atan2(-Forward.Z, Forward.Size()));
			Angles.Y = RAD2DEG(atan2(Forward.Y, Forward.X));
		}
		Angles.Z = 0.f;
	}

	void RotateTriangle(std::array<CG::FVector2D, 3>& Points, float Rotation)
	{
		const auto PointsCenter = (Points.at(0) + Points.at(1) + Points.at(2)) / 3;
		for (auto& Point : Points)
		{
			Point -= PointsCenter;

			const auto TempX = Point.X;
			const auto TempY = Point.Y;

			const auto theta = DEG2RAD(Rotation);
			const auto c = cosf(theta);
			const auto s = sinf(theta);

			Point.X = TempX * c - TempY * s;
			Point.Y = TempX * s + TempY * c;

			Point += PointsCenter;
		}
	}
}