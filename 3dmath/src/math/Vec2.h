
namespace Math {

	class Vec2
	{
	public:
		inline Vec2();
		inline Vec2(float x, float y);
		inline Vec2(const Vec2& vec);
		inline ~Vec2();

		inline void add(const Vec2& vec);

		inline void subtract(const Vec2& vec);

		inline void multiply(const Vec2& vec);

		inline void divide(const Vec2& vec);

	public:
		inline void scale(float scale);
		inline void scale(const Vec2& vec);
	
	public:
		inline bool operator==(const Vec2& vec);
		inline bool operator!=(const Vec2& vec);

		inline const Vec2 operator+(const Vec2& vec) const;
		inline Vec2& operator+=(const Vec2& vec);

		inline const Vec2 operator-(const Vec2& vec) const;
		inline Vec2& operator-=(const Vec2& vec);

		inline const Vec2 operator*(const Vec2& vec) const;
		inline Vec2& operator*=(const Vec2& vec);

		inline const Vec2 operator/(const Vec2& vec) const;
		inline Vec2& operator/=(const Vec2& vec);

	public:


	public:
		float x;
		float y;
	};
	inline const Vec2 operator*(float scale, const Vec2& right);
	inline const Vec2 operator*(const Vec2& left, float scale);
}


