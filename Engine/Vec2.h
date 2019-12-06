#pragma once

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x_in, float y_in);
	Vec2 operator+(const Vec2& rhs) const;
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator*(float rhs) const;
	Vec2& operator*=(float rhs);
	Vec2 operator-(const Vec2& rhs) const;
	Vec2& operator-=(const Vec2& rhs);
	float GetLenght() const;
	float GetLenghtSq() const;
	Vec2& Normalized();
	Vec2 GetNormalized() const;
public:
	float x;
	float y;
};
