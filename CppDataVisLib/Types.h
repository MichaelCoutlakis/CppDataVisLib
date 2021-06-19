/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once

namespace dvis
{

using FontUnit = int;

using Real = double;


class CoordXY
{
public:
	Real m_x;
	Real m_y;
};

class RectArea
{
public:
	Real m_width;
	Real m_height;
};

enum class HorizontalPlacement
{
	Left,
	Centre,
	Right,
};


enum class VerticalPlacement
{
	Top,
	Middle,
	Bottom,
};

enum class Docking
{
	Inner,
	Outer,
};


enum class AxisScale
{
	Auto,
	FixedInterval,
};

}