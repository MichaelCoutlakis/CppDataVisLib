/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once

#include <string>

#include "Element.h"
#include "Types.h"


namespace dvis
{

class Axis : public Element
{
public:
	void WelcomeVisitor(Visitor* visitor) override {}

	Real m_min;
	Real m_max;
	/// Number of labels to use in fixed interval mode
	size_t m_num_labels;

	std::string m_label;

	/// How the renderer should scale the axis labels
	AxisScale m_scale_mode = AxisScale::Auto;
};

}
