#pragma once

// Dumped with Dumper-7!


#include "pch.h"

namespace SDK
{
	//Initialize GObjects using InitGObjects()
	class TUObjectArray* UObject::GObjects = nullptr;

	bool UObject::HasTypeFlag(EClassCastFlags TypeFlag) const
	{
		return TypeFlag != EClassCastFlags::None ? Class->CastFlags & TypeFlag : true;
	}

	std::string UObject::GetName() const
	{
		return this ? Name.ToString() : "None";
	}

	std::string UObject::GetFullName() const
	{
		if (Class)
		{
			std::string Temp;

			for (UObject* NextOuter = Outer; NextOuter; NextOuter = NextOuter->Outer)
			{
				Temp = NextOuter->GetName() + "." + Temp;
			}

			std::string Name = Class->GetName();
			Name += " ";
			Name += Temp;
			Name += GetName();

			return Name;
		}

		return "None";
	}

	bool UObject::IsA(class UClass* Clss) const
	{
		for (UStruct* Super = Class; Super; Super = Super->Super)
		{
			if (Super == Clss)
			{
				return true;
			}
		}

		return false;
	}

	class UFunction* UClass::GetFunction(const std::string& ClassName, const std::string& FuncName)
	{
		for (UStruct* Clss = this; Clss; Clss = Clss->Super)
		{
			if (Clss->GetName() == ClassName)
			{
				for (UField* Field = Clss->Children; Field; Field = Field->Next)
				{
					if (Field->HasTypeFlag(EClassCastFlags::Function) && Field->GetName() == FuncName)
					{
						return static_cast<class UFunction*>(Field);
					}
				}
			}
		}
		return nullptr;
	}

	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	FRotator::FRotator()
	{
		Pitch = 0.0f;
		Yaw = 0.0f;
		Roll = 0.0f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              pitch
	 * 		float                                              yaw
	 * 		float                                              roll
	 */
	FRotator::FRotator(float pitch, float yaw, float roll)
	{
		Pitch = pitch;
		Yaw = yaw;
		Roll = roll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator +(float scalar) const
	{
		return FRotator(Pitch + scalar, Yaw + scalar, Roll + scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator +(const FRotator& other) const
	{
		return FRotator(Pitch + other.Pitch, Yaw + other.Yaw, Roll + other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator -(float scalar) const
	{
		return FRotator(Pitch - scalar, Yaw - scalar, Roll - scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator -(const FRotator& other) const
	{
		return FRotator(Pitch - other.Pitch, Yaw - other.Yaw, Roll - other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator *(float scalar) const
	{
		return FRotator(Pitch * scalar, Yaw * scalar, Roll * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator *(const FRotator& other) const
	{
		return FRotator(Pitch * other.Pitch, Yaw * other.Yaw, Roll * other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator /(float scalar) const
	{
		return FRotator(Pitch / scalar, Yaw / scalar, Roll / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator /(const FRotator& other) const
	{
		return FRotator(Pitch / other.Pitch, Yaw / other.Yaw, Roll / other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator =(const FRotator& other)
	{
		Pitch = other.Pitch; Yaw = other.Yaw; Roll = other.Roll; return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator& FRotator::operator +=(float scalar)
	{
		Pitch += scalar;
		Yaw += scalar;
		Roll += scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator +=(const FRotator& other)
	{
		Pitch += other.Pitch;
		Yaw += other.Yaw;
		Roll += other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FRotator& FRotator::operator -=(float scalar)
	{
		Pitch -= scalar;
		Yaw -= scalar;
		Roll -= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator -=(const FRotator& other)
	{
		Pitch -= other.Pitch;
		Yaw -= other.Yaw;
		Roll -= other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator *=(const FRotator& other)
	{
		Pitch *= other.Pitch;
		Yaw *= other.Yaw;
		Roll *= other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const float                                        other
	 */
	FRotator& FRotator::operator *=(const float other)
	{
		Pitch *= other;
		Yaw *= other;
		Roll *= other;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator /=(const FRotator& other)
	{
		Pitch /= other.Pitch;
		Yaw /= other.Yaw;
		Roll /= other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const float                                        other
	 */
	FRotator& FRotator::operator /=(const float other)
	{
		Pitch /= other;
		Yaw /= other;
		Roll /= other;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	float FRotator::Size() const
	{
		return sqrt(Pitch * Pitch + Yaw * Yaw + Roll * Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	FRotator FRotator::Clamp() const
	{
		FRotator r = { Pitch, Yaw, Roll };

		if (r.Yaw > 180.0f)
			r.Yaw -= 360.0f;
		else if (r.Yaw < -180.0f)
			r.Yaw += 360.0f;

		if (r.Pitch > 180.0f)
			r.Pitch -= 360.0f;
		else if (r.Pitch < -180.0f)
			r.Pitch += 360.0f;

		if (r.Pitch < -89.0f)
			r.Pitch = -89.0f;
		else if (r.Pitch > 89.0f)
			r.Pitch = 89.0f;

		r.Roll = 0.0f;

		return r;
	}

	FVector FRotator::ToVector() const
	{
		float angle, sr, sp, sy, cr, cp, cy;

		angle = this->Yaw * (M_PI * 2 / 360);
		sy = sin(angle);
		cy = cos(angle);

		angle = this->Pitch * (M_PI * 2 / 360);
		sp = sin(angle);
		cp = cos(angle);

		angle = this->Roll * (M_PI * 2 / 360);
		sr = sin(angle);
		cr = cos(angle);

		return FVector(cp * cy, cp * sy, -sp);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	FVector::FVector()
	{
		X = 0;
		Y = 0;
		Z = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              x
	 * 		float                                              y
	 * 		float                                              z
	 */
	FVector::FVector(float x, float y, float z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector FVector::operator +(float scalar) const
	{
		return FVector(X + scalar, Y + scalar, Z + scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator +(const FVector& other) const
	{
		return FVector(X + other.X, Y + other.Y, Z + other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector FVector::operator -(float scalar) const
	{
		return FVector(X - scalar, Y - scalar, Z - scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator -(const FVector& other) const
	{
		return FVector(X - other.X, Y - other.Y, Z - other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector FVector::operator *(float scalar) const
	{
		return FVector(X * scalar, Y * scalar, Z * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator *(const FVector& other) const
	{
		return FVector(X * other.X, Y * other.Y, Z * other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector FVector::operator /(float scalar) const
	{
		return FVector(X / scalar, Y / scalar, Z / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator /(const FVector& other) const
	{
		return FVector(X / other.X, Y / other.Y, Z / other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator =(const FVector& other)
	{
		X = other.X;
		Y = other.Y;
		Z = other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector& FVector::operator +=(float scalar)
	{
		X += scalar;
		Y += scalar;
		Z += scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator +=(const FVector& other)
	{
		X += other.X;
		Y += other.Y;
		Z += other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector& FVector::operator -=(float scalar)
	{
		X -= scalar;
		Y -= scalar;
		Z -= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator -=(const FVector& other)
	{
		X -= other.X;
		Y -= other.Y;
		Z -= other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator *=(const FVector& other)
	{
		X *= other.X;
		Y *= other.Y;
		Z *= other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector& FVector::operator *=(float scalar)
	{
		X *= scalar;
		Y *= scalar;
		Z *= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	bool FVector::IsValid()
	{
		return X == 0.0f && Y == 0.0f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           angle
	 */
	void FVector::Normalize360(FVector& angle)
	{
		const float maxX1 = 80.0f;

		while (angle.X > maxX1)
			angle.X -= 180.0f;
		while (angle.X < -maxX1)
			angle.X += 180.0f;
		while (angle.Y > 180.0f)
			angle.Y -= 360.0f;
		while (angle.Y < -180.0f)
			angle.Y += 360.0f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     b
	 */
	float FVector::Dot(const FVector& b) const
	{
		return (X * b.X) + (Y * b.Y) + (Z * b.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	float FVector::MagnitudeSqr() const
	{
		return Dot(*this);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	float FVector::Magnitude() const
	{
		return std::sqrtf(MagnitudeSqr());
	}

	float FVector::Size() const
	{
		return sqrt((this->X * this->X) + (this->Y * this->Y) + (this->Z * this->Z));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	FVector FVector::Unit() const
	{
		const float fMagnitude = Magnitude();
		return FVector(X / fMagnitude, Y / fMagnitude, Z / fMagnitude);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	FRotator FVector::ToRotator() const
	{
		static constexpr float PI = 3.14159265359f;
		// Pitch, Yaw, Roll
		return FRotator(asinf(Z / Magnitude()) * 180.0f / PI, atan2f(Y, X) * 180.0f / PI, 0.0f);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector&                                     v
	 */
	float FVector::Distance(const FVector& v) const
	{
		return float(sqrtf(powf(v.X - X, 2.0f) + powf(v.Y - Y, 2.0f) + powf(v.Z - Z, 2.0f)));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           v
	 */
	float FVector::DistanceMeter(FVector& v) const
	{
		return Distance(v) * 0.01f;
	}

	FORCEINLINE float InvSqrt(float F)
	{
		return 1.0f / sqrtf(F);
	}

	FVector FVector::GetSafeNormal(float Tolerance) const
	{
		const float SquareSum = X * X + Y * Y + Z * Z;

		// Not sure if it's safe to add tolerance in there. Might introduce too many errors
		if (SquareSum == 1.f)
		{
			return *this;
		}
		else if (SquareSum < Tolerance)
		{
			return FVector(0, 0, 0);
		}
		const float Scale = InvSqrt(SquareSum);

		return FVector(X * Scale, Y * Scale, Z * Scale);
	}
	//---------------------------------------------------------------------------------------------------------------------
	// FUNCTIONS
	//---------------------------------------------------------------------------------------------------------------------

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	FVector2D::FVector2D()
	{
		X = 0;
		Y = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              x
	 * 		float                                              y
	 */
	FVector2D::FVector2D(float x, float y)
	{
		X = x;
		Y = y;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	bool FVector2D::IsValid()
	{
		return X == 0 && Y == 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         v
	 */
	float FVector2D::Distance(FVector2D& v) const
	{
		return powf(v.X - X, 2) + powf(v.Y - Y, 2);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator +(const FVector2D& other) const
	{
		return FVector2D(X + other.X, Y + other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator +(float scalar) const
	{
		return FVector2D(X + scalar, Y + scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator -(float scalar) const
	{
		return FVector2D(X - scalar, Y - scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator -(const FVector2D& other) const
	{
		return FVector2D(X - other.X, Y - other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator *(float scalar) const
	{
		return FVector2D(X * scalar, Y * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator *(const FVector2D& other) const
	{
		return FVector2D(X * other.X, Y * other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator /(float scalar) const
	{
		return FVector2D(X / scalar, Y / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator /(const FVector2D& other) const
	{
		return FVector2D(X / other.X, Y / other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator =(const FVector2D& other)
	{
		X = other.X;
		Y = other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D& FVector2D::operator +=(float scalar)
	{
		X += scalar;
		Y += scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator +=(const FVector2D& other)
	{
		X += other.X;
		Y += other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D& FVector2D::operator -=(float scalar)
	{
		X -= scalar;
		Y -= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator -=(const FVector2D& other)
	{
		X -= other.X;
		Y -= other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator *=(const FVector2D& other)
	{
		X *= other.X;
		Y *= other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              scalar
	 */
	FVector2D& FVector2D::operator *=(float scalar)
	{
		X *= scalar;
		Y *= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const FMatrix&                                     other
	 */
	FMatrix FMatrix::operator *(const FMatrix& other) const
	{
		FMatrix ret;

		ret.XPlane.X = XPlane.X * other.XPlane.X + XPlane.Y * other.YPlane.X + XPlane.Z * other.ZPlane.X + XPlane.W * other.WPlane.X;
		ret.XPlane.Y = XPlane.X * other.XPlane.Y + XPlane.Y * other.YPlane.Y + XPlane.Z * other.ZPlane.Y + XPlane.W * other.WPlane.Y;
		ret.XPlane.Z = XPlane.X * other.XPlane.Z + XPlane.Y * other.YPlane.Z + XPlane.Z * other.ZPlane.Z + XPlane.W * other.WPlane.Z;
		ret.XPlane.W = XPlane.X * other.XPlane.W + XPlane.Y * other.YPlane.W + XPlane.Z * other.ZPlane.W + XPlane.W * other.WPlane.W;

		ret.YPlane.X = YPlane.X * other.XPlane.X + YPlane.Y * other.YPlane.X + YPlane.Z * other.ZPlane.X + YPlane.W * other.WPlane.X;
		ret.YPlane.Y = YPlane.X * other.XPlane.Y + YPlane.Y * other.YPlane.Y + YPlane.Z * other.ZPlane.Y + YPlane.W * other.WPlane.Y;
		ret.YPlane.Z = YPlane.X * other.XPlane.Z + YPlane.Y * other.YPlane.Z + YPlane.Z * other.ZPlane.Z + YPlane.W * other.WPlane.Z;
		ret.YPlane.W = YPlane.X * other.XPlane.W + YPlane.Y * other.YPlane.W + YPlane.Z * other.ZPlane.W + YPlane.W * other.WPlane.W;

		ret.ZPlane.X = ZPlane.X * other.XPlane.X + ZPlane.Y * other.YPlane.X + ZPlane.Z * other.ZPlane.X + ZPlane.W * other.WPlane.X;
		ret.ZPlane.Y = ZPlane.X * other.XPlane.Y + ZPlane.Y * other.YPlane.Y + ZPlane.Z * other.ZPlane.Y + ZPlane.W * other.WPlane.Y;
		ret.ZPlane.Z = ZPlane.X * other.XPlane.Z + ZPlane.Y * other.YPlane.Z + ZPlane.Z * other.ZPlane.Z + ZPlane.W * other.WPlane.Z;
		ret.ZPlane.W = ZPlane.X * other.XPlane.W + ZPlane.Y * other.YPlane.W + ZPlane.Z * other.ZPlane.W + ZPlane.W * other.WPlane.W;

		ret.WPlane.X = WPlane.X * other.XPlane.X + WPlane.Y * other.YPlane.X + WPlane.Z * other.ZPlane.X + WPlane.W * other.WPlane.X;
		ret.WPlane.Y = WPlane.X * other.XPlane.Y + WPlane.Y * other.YPlane.Y + WPlane.Z * other.ZPlane.Y + WPlane.W * other.WPlane.Y;
		ret.WPlane.Z = WPlane.X * other.XPlane.Z + WPlane.Y * other.YPlane.Z + WPlane.Z * other.ZPlane.Z + WPlane.W * other.WPlane.Z;
		ret.WPlane.W = WPlane.X * other.XPlane.W + WPlane.Y * other.YPlane.W + WPlane.Z * other.ZPlane.W + WPlane.W * other.WPlane.W;

		return ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   ->
	 * 		Flags  -> ()
	 */
	FMatrix FTransform::ToMatrixWithScale() const
	{
		FMatrix OutMatrix;
		OutMatrix.WPlane.X = Translation.X;
		OutMatrix.WPlane.Y = Translation.Y;
		OutMatrix.WPlane.Z = Translation.Z;

		const float x2 = Rotation.X + Rotation.X;
		const float y2 = Rotation.Y + Rotation.Y;
		const float z2 = Rotation.Z + Rotation.Z;

		{
			const float xx2 = Rotation.X * x2;
			const float yy2 = Rotation.Y * y2;
			const float zz2 = Rotation.Z * z2;

			OutMatrix.XPlane.X = (1.0f - (yy2 + zz2)) * Scale3D.X;
			OutMatrix.YPlane.Y = (1.0f - (xx2 + zz2)) * Scale3D.Y;
			OutMatrix.ZPlane.Z = (1.0f - (xx2 + yy2)) * Scale3D.Z;
		}

		{
			const float yz2 = Rotation.Y * z2;
			const float wx2 = Rotation.W * x2;

			OutMatrix.ZPlane.Y = (yz2 - wx2) * Scale3D.Z;
			OutMatrix.YPlane.Z = (yz2 + wx2) * Scale3D.Y;
		}

		{
			const float xy2 = Rotation.X * y2;
			const float wz2 = Rotation.W * z2;

			OutMatrix.YPlane.X = (xy2 - wz2) * Scale3D.Y;
			OutMatrix.XPlane.Y = (xy2 + wz2) * Scale3D.X;
		}

		{
			const float xz2 = Rotation.X * z2;
			const float wy2 = Rotation.W * y2;

			OutMatrix.ZPlane.X = (xz2 + wy2) * Scale3D.Z;
			OutMatrix.XPlane.Z = (xz2 - wy2) * Scale3D.X;
		}

		OutMatrix.XPlane.W = 0.0f;
		OutMatrix.YPlane.W = 0.0f;
		OutMatrix.ZPlane.W = 0.0f;
		OutMatrix.WPlane.W = 1.0f;

		return OutMatrix;
	}

	// Class CoreUObject.Object
	// (None)

	class UClass* UObject::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Object");

		return Clss;
	}


	// Object CoreUObject.Default__Object
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UObject* UObject::GetDefaultObj()
	{
		static class UObject* Default = nullptr;

		if (!Default)
			Default = static_cast<UObject*>(UObject::StaticClass()->DefaultObject);

		return Default;
	}


	// Function CoreUObject.Object.ExecuteUbergraph
	// (Event, Public, BlueprintEvent)
	// Parameters:
	// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void UObject::ExecuteUbergraph(int32 EntryPoint)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("Object", "ExecuteUbergraph");

		Params::UObject_ExecuteUbergraph_Params Parms{};

		Parms.EntryPoint = EntryPoint;

		UObject::ProcessEvent(Func, &Parms);

	}


	// Class CoreUObject.Interface
	// (None)

	class UClass* IInterface::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Interface");

		return Clss;
	}


	// Interface CoreUObject.Default__Interface
	// (Public, ClassDefaultObject, ArchetypeObject)

	class IInterface* IInterface::GetDefaultObj()
	{
		static class IInterface* Default = nullptr;

		if (!Default)
			Default = static_cast<IInterface*>(IInterface::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Package
	// (Package)

	class UClass* UPackage::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Package");

		return Clss;
	}


	// Package CoreUObject.Default__Package
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UPackage* UPackage::GetDefaultObj()
	{
		static class UPackage* Default = nullptr;

		if (!Default)
			Default = static_cast<UPackage*>(UPackage::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Field
	// (Field)

	class UClass* UField::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Field");

		return Clss;
	}


	// Field CoreUObject.Default__Field
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UField* UField::GetDefaultObj()
	{
		static class UField* Default = nullptr;

		if (!Default)
			Default = static_cast<UField*>(UField::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Struct
	// (Field, Struct)

	class UClass* UStruct::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Struct");

		return Clss;
	}


	// Struct CoreUObject.Default__Struct
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UStruct* UStruct::GetDefaultObj()
	{
		static class UStruct* Default = nullptr;

		if (!Default)
			Default = static_cast<UStruct*>(UStruct::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Class
	// (Field, Struct, Class)

	class UClass* UClass::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Class");

		return Clss;
	}


	// Class CoreUObject.Default__Class
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UClass* UClass::GetDefaultObj()
	{
		static class UClass* Default = nullptr;

		if (!Default)
			Default = static_cast<UClass*>(UClass::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.GCObjectReferencer
	// (None)

	class UClass* UGCObjectReferencer::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GCObjectReferencer");

		return Clss;
	}


	// GCObjectReferencer CoreUObject.Default__GCObjectReferencer
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UGCObjectReferencer* UGCObjectReferencer::GetDefaultObj()
	{
		static class UGCObjectReferencer* Default = nullptr;

		if (!Default)
			Default = static_cast<UGCObjectReferencer*>(UGCObjectReferencer::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.TextBuffer
	// (None)

	class UClass* UTextBuffer::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("TextBuffer");

		return Clss;
	}


	// TextBuffer CoreUObject.Default__TextBuffer
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UTextBuffer* UTextBuffer::GetDefaultObj()
	{
		static class UTextBuffer* Default = nullptr;

		if (!Default)
			Default = static_cast<UTextBuffer*>(UTextBuffer::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.ScriptStruct
	// (Field, Struct, ScriptStruct)

	class UClass* UScriptStruct::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ScriptStruct");

		return Clss;
	}


	// ScriptStruct CoreUObject.Default__ScriptStruct
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UScriptStruct* UScriptStruct::GetDefaultObj()
	{
		static class UScriptStruct* Default = nullptr;

		if (!Default)
			Default = static_cast<UScriptStruct*>(UScriptStruct::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Function
	// (Field, Struct, Function)

	class UClass* UFunction::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Function");

		return Clss;
	}


	// Function CoreUObject.Default__Function
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UFunction* UFunction::GetDefaultObj()
	{
		static class UFunction* Default = nullptr;

		if (!Default)
			Default = static_cast<UFunction*>(UFunction::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.DelegateFunction
	// (Field, Struct, Function, DelegateFunction)

	class UClass* UDelegateFunction::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DelegateFunction");

		return Clss;
	}


	// DelegateFunction CoreUObject.Default__DelegateFunction
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UDelegateFunction* UDelegateFunction::GetDefaultObj()
	{
		static class UDelegateFunction* Default = nullptr;

		if (!Default)
			Default = static_cast<UDelegateFunction*>(UDelegateFunction::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.SparseDelegateFunction
	// (Field, Struct, Function, DelegateFunction, SparseDelegateFunction)

	class UClass* USparseDelegateFunction::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SparseDelegateFunction");

		return Clss;
	}


	// SparseDelegateFunction CoreUObject.Default__SparseDelegateFunction
	// (Public, ClassDefaultObject, ArchetypeObject)

	class USparseDelegateFunction* USparseDelegateFunction::GetDefaultObj()
	{
		static class USparseDelegateFunction* Default = nullptr;

		if (!Default)
			Default = static_cast<USparseDelegateFunction*>(USparseDelegateFunction::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.DynamicClass
	// (Field, Struct, Class)

	class UClass* UDynamicClass::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DynamicClass");

		return Clss;
	}


	// DynamicClass CoreUObject.Default__DynamicClass
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UDynamicClass* UDynamicClass::GetDefaultObj()
	{
		static class UDynamicClass* Default = nullptr;

		if (!Default)
			Default = static_cast<UDynamicClass*>(UDynamicClass::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.PackageMap
	// (None)

	class UClass* UPackageMap::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PackageMap");

		return Clss;
	}


	// PackageMap CoreUObject.Default__PackageMap
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UPackageMap* UPackageMap::GetDefaultObj()
	{
		static class UPackageMap* Default = nullptr;

		if (!Default)
			Default = static_cast<UPackageMap*>(UPackageMap::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Enum
	// (Field, Enum)

	class UClass* UEnum::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Enum");

		return Clss;
	}


	// Enum CoreUObject.Default__Enum
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UEnum* UEnum::GetDefaultObj()
	{
		static class UEnum* Default = nullptr;

		if (!Default)
			Default = static_cast<UEnum*>(UEnum::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.LinkerPlaceholderClass
	// (Field, Struct, Class)

	class UClass* ULinkerPlaceholderClass::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LinkerPlaceholderClass");

		return Clss;
	}


	// LinkerPlaceholderClass CoreUObject.Default__LinkerPlaceholderClass
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ULinkerPlaceholderClass* ULinkerPlaceholderClass::GetDefaultObj()
	{
		static class ULinkerPlaceholderClass* Default = nullptr;

		if (!Default)
			Default = static_cast<ULinkerPlaceholderClass*>(ULinkerPlaceholderClass::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.LinkerPlaceholderExportObject
	// (None)

	class UClass* ULinkerPlaceholderExportObject::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LinkerPlaceholderExportObject");

		return Clss;
	}


	// LinkerPlaceholderExportObject CoreUObject.Default__LinkerPlaceholderExportObject
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ULinkerPlaceholderExportObject* ULinkerPlaceholderExportObject::GetDefaultObj()
	{
		static class ULinkerPlaceholderExportObject* Default = nullptr;

		if (!Default)
			Default = static_cast<ULinkerPlaceholderExportObject*>(ULinkerPlaceholderExportObject::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.LinkerPlaceholderFunction
	// (Field, Struct, Function)

	class UClass* ULinkerPlaceholderFunction::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LinkerPlaceholderFunction");

		return Clss;
	}


	// LinkerPlaceholderFunction CoreUObject.Default__LinkerPlaceholderFunction
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ULinkerPlaceholderFunction* ULinkerPlaceholderFunction::GetDefaultObj()
	{
		static class ULinkerPlaceholderFunction* Default = nullptr;

		if (!Default)
			Default = static_cast<ULinkerPlaceholderFunction*>(ULinkerPlaceholderFunction::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.MetaData
	// (None)

	class UClass* UMetaData::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MetaData");

		return Clss;
	}


	// MetaData CoreUObject.Default__MetaData
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMetaData* UMetaData::GetDefaultObj()
	{
		static class UMetaData* Default = nullptr;

		if (!Default)
			Default = static_cast<UMetaData*>(UMetaData::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.ObjectRedirector
	// (None)

	class UClass* UObjectRedirector::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ObjectRedirector");

		return Clss;
	}


	// ObjectRedirector CoreUObject.Default__ObjectRedirector
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UObjectRedirector* UObjectRedirector::GetDefaultObj()
	{
		static class UObjectRedirector* Default = nullptr;

		if (!Default)
			Default = static_cast<UObjectRedirector*>(UObjectRedirector::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Property
	// (Field, Property)

	class UClass* UProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Property");

		return Clss;
	}


	// Property CoreUObject.Default__Property
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UProperty* UProperty::GetDefaultObj()
	{
		static class UProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UProperty*>(UProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.EnumProperty
	// (Field, Property, EnumProperty)

	class UClass* UEnumProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EnumProperty");

		return Clss;
	}


	// EnumProperty CoreUObject.Default__EnumProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UEnumProperty* UEnumProperty::GetDefaultObj()
	{
		static class UEnumProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UEnumProperty*>(UEnumProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.ArrayProperty
	// (Field, Property, ArrayProperty)

	class UClass* UArrayProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ArrayProperty");

		return Clss;
	}


	// ArrayProperty CoreUObject.Default__ArrayProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UArrayProperty* UArrayProperty::GetDefaultObj()
	{
		static class UArrayProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UArrayProperty*>(UArrayProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.ObjectPropertyBase
	// (Field, Property, ObjectPropertyBase)

	class UClass* UObjectPropertyBase::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ObjectPropertyBase");

		return Clss;
	}


	// ObjectPropertyBase CoreUObject.Default__ObjectPropertyBase
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UObjectPropertyBase* UObjectPropertyBase::GetDefaultObj()
	{
		static class UObjectPropertyBase* Default = nullptr;

		if (!Default)
			Default = static_cast<UObjectPropertyBase*>(UObjectPropertyBase::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.BoolProperty
	// (Field, Property, BoolProperty)

	class UClass* UBoolProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BoolProperty");

		return Clss;
	}


	// BoolProperty CoreUObject.Default__BoolProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UBoolProperty* UBoolProperty::GetDefaultObj()
	{
		static class UBoolProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UBoolProperty*>(UBoolProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.NumericProperty
	// (Field, Property, NumericProperty)

	class UClass* UNumericProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NumericProperty");

		return Clss;
	}


	// NumericProperty CoreUObject.Default__NumericProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UNumericProperty* UNumericProperty::GetDefaultObj()
	{
		static class UNumericProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UNumericProperty*>(UNumericProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.ByteProperty
	// (Field, ByteProperty, Property, NumericProperty)

	class UClass* UByteProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ByteProperty");

		return Clss;
	}


	// ByteProperty CoreUObject.Default__ByteProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UByteProperty* UByteProperty::GetDefaultObj()
	{
		static class UByteProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UByteProperty*>(UByteProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.ObjectProperty
	// (Field, Property, ObjectProperty, ObjectPropertyBase)

	class UClass* UObjectProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ObjectProperty");

		return Clss;
	}


	// ObjectProperty CoreUObject.Default__ObjectProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UObjectProperty* UObjectProperty::GetDefaultObj()
	{
		static class UObjectProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UObjectProperty*>(UObjectProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.ClassProperty
	// (Field, ClassProperty, Property, ObjectProperty, ObjectPropertyBase)

	class UClass* UClassProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ClassProperty");

		return Clss;
	}


	// ClassProperty CoreUObject.Default__ClassProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UClassProperty* UClassProperty::GetDefaultObj()
	{
		static class UClassProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UClassProperty*>(UClassProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.DelegateProperty
	// (Field, Property, DelegateProperty)

	class UClass* UDelegateProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DelegateProperty");

		return Clss;
	}


	// DelegateProperty CoreUObject.Default__DelegateProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UDelegateProperty* UDelegateProperty::GetDefaultObj()
	{
		static class UDelegateProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UDelegateProperty*>(UDelegateProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.DoubleProperty
	// (Field, Property, NumericProperty, DoubleProperty)

	class UClass* UDoubleProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DoubleProperty");

		return Clss;
	}


	// DoubleProperty CoreUObject.Default__DoubleProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UDoubleProperty* UDoubleProperty::GetDefaultObj()
	{
		static class UDoubleProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UDoubleProperty*>(UDoubleProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.FloatProperty
	// (Field, FloatProperty, Property, NumericProperty)

	class UClass* UFloatProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FloatProperty");

		return Clss;
	}


	// FloatProperty CoreUObject.Default__FloatProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UFloatProperty* UFloatProperty::GetDefaultObj()
	{
		static class UFloatProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UFloatProperty*>(UFloatProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.IntProperty
	// (Field, IntProperty, Property, NumericProperty)

	class UClass* UIntProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("IntProperty");

		return Clss;
	}


	// IntProperty CoreUObject.Default__IntProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UIntProperty* UIntProperty::GetDefaultObj()
	{
		static class UIntProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UIntProperty*>(UIntProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Int8Property
	// (Field, Int8Property, Property, NumericProperty)

	class UClass* UInt8Property::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Int8Property");

		return Clss;
	}


	// Int8Property CoreUObject.Default__Int8Property
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UInt8Property* UInt8Property::GetDefaultObj()
	{
		static class UInt8Property* Default = nullptr;

		if (!Default)
			Default = static_cast<UInt8Property*>(UInt8Property::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Int16Property
	// (Field, Property, NumericProperty, Int16Property)

	class UClass* UInt16Property::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Int16Property");

		return Clss;
	}


	// Int16Property CoreUObject.Default__Int16Property
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UInt16Property* UInt16Property::GetDefaultObj()
	{
		static class UInt16Property* Default = nullptr;

		if (!Default)
			Default = static_cast<UInt16Property*>(UInt16Property::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.Int64Property
	// (Field, Property, Int64Property, NumericProperty)

	class UClass* UInt64Property::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Int64Property");

		return Clss;
	}


	// Int64Property CoreUObject.Default__Int64Property
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UInt64Property* UInt64Property::GetDefaultObj()
	{
		static class UInt64Property* Default = nullptr;

		if (!Default)
			Default = static_cast<UInt64Property*>(UInt64Property::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.InterfaceProperty
	// (Field, InterfaceProperty, Property)

	class UClass* UInterfaceProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("InterfaceProperty");

		return Clss;
	}


	// InterfaceProperty CoreUObject.Default__InterfaceProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UInterfaceProperty* UInterfaceProperty::GetDefaultObj()
	{
		static class UInterfaceProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UInterfaceProperty*>(UInterfaceProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.LazyObjectProperty
	// (Field, Property, ObjectPropertyBase, LazyObjectProperty)

	class UClass* ULazyObjectProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LazyObjectProperty");

		return Clss;
	}


	// LazyObjectProperty CoreUObject.Default__LazyObjectProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ULazyObjectProperty* ULazyObjectProperty::GetDefaultObj()
	{
		static class ULazyObjectProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<ULazyObjectProperty*>(ULazyObjectProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.MapProperty
	// (Field, Property, MapProperty)

	class UClass* UMapProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MapProperty");

		return Clss;
	}


	// MapProperty CoreUObject.Default__MapProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMapProperty* UMapProperty::GetDefaultObj()
	{
		static class UMapProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UMapProperty*>(UMapProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.MulticastDelegateProperty
	// (Field, Property, MulticastDelegateProperty)

	class UClass* UMulticastDelegateProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MulticastDelegateProperty");

		return Clss;
	}


	// MulticastDelegateProperty CoreUObject.Default__MulticastDelegateProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMulticastDelegateProperty* UMulticastDelegateProperty::GetDefaultObj()
	{
		static class UMulticastDelegateProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UMulticastDelegateProperty*>(UMulticastDelegateProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.MulticastInlineDelegateProperty
	// (Field, Property, MulticastDelegateProperty, MulticastInlineDelegateProperty)

	class UClass* UMulticastInlineDelegateProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MulticastInlineDelegateProperty");

		return Clss;
	}


	// MulticastInlineDelegateProperty CoreUObject.Default__MulticastInlineDelegateProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMulticastInlineDelegateProperty* UMulticastInlineDelegateProperty::GetDefaultObj()
	{
		static class UMulticastInlineDelegateProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UMulticastInlineDelegateProperty*>(UMulticastInlineDelegateProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.MulticastSparseDelegateProperty
	// (Field, Property, MulticastDelegateProperty, MulticastSparseDelegateProperty)

	class UClass* UMulticastSparseDelegateProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MulticastSparseDelegateProperty");

		return Clss;
	}


	// MulticastSparseDelegateProperty CoreUObject.Default__MulticastSparseDelegateProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMulticastSparseDelegateProperty* UMulticastSparseDelegateProperty::GetDefaultObj()
	{
		static class UMulticastSparseDelegateProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UMulticastSparseDelegateProperty*>(UMulticastSparseDelegateProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.NameProperty
	// (Field, NameProperty, Property)

	class UClass* UNameProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NameProperty");

		return Clss;
	}


	// NameProperty CoreUObject.Default__NameProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UNameProperty* UNameProperty::GetDefaultObj()
	{
		static class UNameProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UNameProperty*>(UNameProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.SetProperty
	// (Field, Property, SetProperty)

	class UClass* USetProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SetProperty");

		return Clss;
	}


	// SetProperty CoreUObject.Default__SetProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class USetProperty* USetProperty::GetDefaultObj()
	{
		static class USetProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<USetProperty*>(USetProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.SoftObjectProperty
	// (Field, Property, ObjectPropertyBase, SoftObjectProperty)

	class UClass* USoftObjectProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SoftObjectProperty");

		return Clss;
	}


	// SoftObjectProperty CoreUObject.Default__SoftObjectProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class USoftObjectProperty* USoftObjectProperty::GetDefaultObj()
	{
		static class USoftObjectProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<USoftObjectProperty*>(USoftObjectProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.SoftClassProperty
	// (Field, Property, ObjectPropertyBase, SoftObjectProperty, SoftClassProperty)

	class UClass* USoftClassProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SoftClassProperty");

		return Clss;
	}


	// SoftClassProperty CoreUObject.Default__SoftClassProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class USoftClassProperty* USoftClassProperty::GetDefaultObj()
	{
		static class USoftClassProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<USoftClassProperty*>(USoftClassProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.StrProperty
	// (Field, StrProperty, Property)

	class UClass* UStrProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("StrProperty");

		return Clss;
	}


	// StrProperty CoreUObject.Default__StrProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UStrProperty* UStrProperty::GetDefaultObj()
	{
		static class UStrProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UStrProperty*>(UStrProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.StructProperty
	// (Field, Property, StructProperty)

	class UClass* UStructProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("StructProperty");

		return Clss;
	}


	// StructProperty CoreUObject.Default__StructProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UStructProperty* UStructProperty::GetDefaultObj()
	{
		static class UStructProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UStructProperty*>(UStructProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.UInt16Property
	// (Field, Property, UInt16Property, NumericProperty)

	class UClass* UUInt16Property::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UInt16Property");

		return Clss;
	}


	// UInt16Property CoreUObject.Default__UInt16Property
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UUInt16Property* UUInt16Property::GetDefaultObj()
	{
		static class UUInt16Property* Default = nullptr;

		if (!Default)
			Default = static_cast<UUInt16Property*>(UUInt16Property::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.UInt32Property
	// (Field, UInt32Property, Property, NumericProperty)

	class UClass* UUInt32Property::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UInt32Property");

		return Clss;
	}


	// UInt32Property CoreUObject.Default__UInt32Property
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UUInt32Property* UUInt32Property::GetDefaultObj()
	{
		static class UUInt32Property* Default = nullptr;

		if (!Default)
			Default = static_cast<UUInt32Property*>(UUInt32Property::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.UInt64Property
	// (Field, UInt64Property, Property, NumericProperty)

	class UClass* UUInt64Property::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UInt64Property");

		return Clss;
	}


	// UInt64Property CoreUObject.Default__UInt64Property
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UUInt64Property* UUInt64Property::GetDefaultObj()
	{
		static class UUInt64Property* Default = nullptr;

		if (!Default)
			Default = static_cast<UUInt64Property*>(UUInt64Property::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.WeakObjectProperty
	// (Field, Property, ObjectPropertyBase, WeakObjectProperty)

	class UClass* UWeakObjectProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("WeakObjectProperty");

		return Clss;
	}


	// WeakObjectProperty CoreUObject.Default__WeakObjectProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UWeakObjectProperty* UWeakObjectProperty::GetDefaultObj()
	{
		static class UWeakObjectProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UWeakObjectProperty*>(UWeakObjectProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.TextProperty
	// (Field, Property, TextProperty)

	class UClass* UTextProperty::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("TextProperty");

		return Clss;
	}


	// TextProperty CoreUObject.Default__TextProperty
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UTextProperty* UTextProperty::GetDefaultObj()
	{
		static class UTextProperty* Default = nullptr;

		if (!Default)
			Default = static_cast<UTextProperty*>(UTextProperty::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.PropertyWrapper
	// (None)

	class UClass* UPropertyWrapper::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyWrapper");

		return Clss;
	}


	// PropertyWrapper CoreUObject.Default__PropertyWrapper
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UPropertyWrapper* UPropertyWrapper::GetDefaultObj()
	{
		static class UPropertyWrapper* Default = nullptr;

		if (!Default)
			Default = static_cast<UPropertyWrapper*>(UPropertyWrapper::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.MulticastDelegatePropertyWrapper
	// (None)

	class UClass* UMulticastDelegatePropertyWrapper::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MulticastDelegatePropertyWrapper");

		return Clss;
	}


	// MulticastDelegatePropertyWrapper CoreUObject.Default__MulticastDelegatePropertyWrapper
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMulticastDelegatePropertyWrapper* UMulticastDelegatePropertyWrapper::GetDefaultObj()
	{
		static class UMulticastDelegatePropertyWrapper* Default = nullptr;

		if (!Default)
			Default = static_cast<UMulticastDelegatePropertyWrapper*>(UMulticastDelegatePropertyWrapper::StaticClass()->DefaultObject);

		return Default;
	}


	// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
	// (None)

	class UClass* UMulticastInlineDelegatePropertyWrapper::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MulticastInlineDelegatePropertyWrapper");

		return Clss;
	}


	// MulticastInlineDelegatePropertyWrapper CoreUObject.Default__MulticastInlineDelegatePropertyWrapper
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMulticastInlineDelegatePropertyWrapper* UMulticastInlineDelegatePropertyWrapper::GetDefaultObj()
	{
		static class UMulticastInlineDelegatePropertyWrapper* Default = nullptr;

		if (!Default)
			Default = static_cast<UMulticastInlineDelegatePropertyWrapper*>(UMulticastInlineDelegatePropertyWrapper::StaticClass()->DefaultObject);

		return Default;
	}

}


