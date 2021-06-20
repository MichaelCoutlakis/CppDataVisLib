/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once

#include <iostream>
#include "Backend.h"

#include "Figure.h"
#include "XY_Plot.h"

namespace dvis
{
	class CoutBackend : public Backend
	{
	public:
		void RenderFigure(Figure* pFig) override
		{
			std::cout << "Rendering Figure " << std::endl;
			std::cout << "Title: " << pFig->Title() << std::endl;
			std::cout << "ID: " << pFig->ID() << std::endl;
		}
		void RenderXY_Plot(Figure* fig, XY_Plot* pXY_Plot) override
		{
			std::cout << "Rendering XY Plot" << std::endl;
			std::cout << "x-axis: Label: " << pXY_Plot->m_x_axis_bottom->m_label << std::endl;
			std::cout << "x-axis: Data: ";
			for (auto& d : pXY_Plot->m_x)
				std::cout << d << ", ";
			std::cout << std::endl;

			std::cout << "y-axis: Label: " << pXY_Plot->m_y_axis_left->m_label << std::endl;
			std::cout << "yaxis: Data: ";
			for (auto& d : pXY_Plot->m_y)
				std::cout << d << ", ";
			std::cout << std::endl;
		}
	};
}
