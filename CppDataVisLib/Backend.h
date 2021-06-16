#pragma once

#include <memory>

namespace dvis
{

	class cFigure;
	class cXY_Plot;

	class cBackend
	{
	public:
		virtual void RenderFigure(/*std::shared_ptr<cFigure>*/cFigure* pFig) = 0;
		virtual void RenderXY_Plot(/*std::shared_ptr<cXY_Plot>*/cXY_Plot* pXY_Plot) = 0;
	private:
	};
}
