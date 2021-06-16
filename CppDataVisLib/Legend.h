#pragma once

#include <string>
#include <memory>


#include "Types.h"

namespace dvis
{
	class cLegend
	{
	public:
		cLegend(eDocking Docking, eHorizontalPlacement Horiz, eVerticalPlacement Vert) :
			m_Docking(Docking),
			m_Horiz(Horiz),
			m_Vert(Vert)
		{

		}
		eDocking m_Docking;
		eHorizontalPlacement m_Horiz;
		eVerticalPlacement m_Vert;
	private:
	};
}
