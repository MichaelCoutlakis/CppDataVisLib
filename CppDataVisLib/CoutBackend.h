#pragma once

#include <iostream>
#include "Backend.h"

#include "Figure.h"
#include "XY_Plot.h"

namespace dvis
{
	class cCoutBackend : public cBackend
	{
	public:
		void RenderFigure(/*std::shared_ptr<cFigure>*/cFigure* pFig) override
		{
			std::cout << "Rendering Figure " << std::endl;
			std::cout << "Title: " << pFig->Title() << std::endl;
		}
		void RenderXY_Plot(/*std::shared_ptr<cXY_Plot>*/cXY_Plot* pXY_Plot) override
		{
			std::cout << "Rendering XY Plot" << std::endl;
			std::cout << "x-axis: Label: " << pXY_Plot->m_pAxisX_Bottom->m_strAxisLabel << std::endl;
			std::cout << "x-axis: Data: ";
			for (auto& d : pXY_Plot->m_vdX)
				std::cout << d << ", ";
			std::cout << std::endl;

			std::cout << "y-axis: Label: " << pXY_Plot->m_pAxisY_Left->m_strAxisLabel << std::endl;
			std::cout << "yaxis: Data: ";
			for (auto& d : pXY_Plot->m_vdY)
				std::cout << d << ", ";
			std::cout << std::endl;
		}
	};
}
