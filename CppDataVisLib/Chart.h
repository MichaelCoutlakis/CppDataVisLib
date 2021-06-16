#pragma once

#include <vector>
#include <memory>

#include "Types.h"

namespace dvis
{
	class Chart
	{
	public:
		//std::vector<std::shared_ptr
		virtual void SetChartArea(const cRectArea& Area) = 0;


		virtual void Zoom(cCoordXY LowerLeft, cCoordXY UpperRight) = 0;


	};
}
