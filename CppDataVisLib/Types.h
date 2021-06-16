#pragma once

namespace dvis
{

	using FontUnit = int;

	using Real = double;


	class cCoordXY
	{
	public:
		Real m_X;
		Real m_Y;
	};

	class cRectArea
	{
	public:
		Real m_Width;
		Real m_Height;
	};

	enum class eHorizontalPlacement
	{
		Left,
		Centre,
		Right,
	};


	enum class eVerticalPlacement
	{
		Top,
		Middle,
		Bottom,
	};

	enum class eDocking
	{
		Inner,
		Outer,
	};


	enum class eAxisScale
	{
		Auto,
		FixedInterval,
	};

}