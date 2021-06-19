/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once

#include <memory>

namespace dvis
{

	class Figure;
	class XY_Plot;

	class Backend
	{
	public:
		virtual ~Backend() {}
		virtual void RenderFigure(/*std::shared_ptr<Figure>*/Figure* pFig) = 0;
		virtual void RenderXY_Plot(/*std::shared_ptr<XY_Plot>*/XY_Plot* pXY_Plot) = 0;
	private:
	};
}
