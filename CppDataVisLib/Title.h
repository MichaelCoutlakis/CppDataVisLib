#pragma once

#include <string>

#include "Types.h"

namespace dvis
{
	class Title
	{
	public:
		Title(const std::string& strTitle) :
			m_strTitle(strTitle)
		{

		}
		std::string m_strTitle;
		eHorizontalPlacement m_HorizPos = eHorizontalPlacement::Centre;
		eVerticalPlacement m_VertPos = eVerticalPlacement::Top;
		eDocking m_Docking = eDocking::Outer;
	private:

	};
}
