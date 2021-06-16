#pragma once

#include <string>

#include "Types.h"


namespace dvis
{

	class cAxis
	{
	public:
		Real m_Min;
		Real m_Max;
		/// Number of labels to use in fixed interval mode
		size_t m_uNumLabels;

		std::string m_strAxisLabel;

		/// How the renderer should scale the axis labels
		eAxisScale m_AxisScaleMode = eAxisScale::Auto;
	};
}
