#include "Vec2.h"
using Math::Vec2;

inline Vec2::Vec2()
	:x(0.0f), y(0.0f)
{}

inline Vec2::Vec2(const Vec2& vec)
	: x(vec.x), y(vec.y)
{}

inline Vec2::Vec2(float  x, float  y)
	: x(x), y(y)
{}

inline Vec2::~Vec2()
{}

inline void Vec2::add(const Vec2& vec)
{
	x += vec.x;
	y += vec.y;
}
inline void Vec2::subtract(const Vec2& vec)
{
	x -= vec.x;
	y -= vec.y;
}
inline void Vec2::multiply(const Vec2& vec)
{
	x *= vec.x;
	y *= vec.y;
}
inline void Vec2::divide(const Vec2& vec)
{
	x /= vec.x;
	y /= vec.y;
}

inline bool Vec2::operator==(const Vec2& vec)
{
	return x == vec.x && y == vec.y;
}

inline bool Vec2::operator!=(const Vec2& vec)
{
	return x != vec.x || y != vec.y;
}

inline const Vec2 Vec2::operator+(const Vec2& vec) const
{
	Vec2 result(*this);
	result.add(vec);
	return result;
}

inline Vec2& Vec2::operator+=(const Vec2& vec)
{
	add(vec);
	return *this;
}
inline const Vec2 Vec2::operator-(const Vec2& vec) const
{
	Vec2 result(*this);
	result.subtract(vec);
	return result;
}

inline  Vec2& Vec2::operator-=(const Vec2& vec)
{
	subtract(vec);
	return *this;
}

inline const Vec2 Vec2::operator*(const Vec2& vec) const
{
	Vec2 result(*this);
	result.multiply(vec);
	return result;
}

inline Vec2& Vec2::operator*=(const Vec2& vec)
{
	multiply(vec);
	return *this;
}

inline const Vec2 Vec2::operator/(const Vec2& vec) const
{
	Vec2 result(*this);
	result.divide(vec);
	return result;
}

inline Vec2& Vec2::operator/=(const Vec2& vec)
{
	divide(vec);
	return *this;
}

inline void Vec2::scale(float scale)
{
	x *= scale;
	y *= scale;
}
inline void Vec2::scale(const Vec2& vec)
{
	x *= vec.x;
	y *= vec.y;
}

inline const Vec2 operator*(float scale, const Vec2& right)
{
	Vec2 result(right);
	result.scale(scale);
	return result;
}
inline const Vec2 operator*(const Vec2& left, float scale)
{
	Vec2 result(left);
	result.scale(scale);
	return result;
}
