/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once

#include <vector>
#include <memory>

#include "Plot.h"
#include "Axis.h"
#include "Legend.h"
#include "Visitor.h"

namespace dvis
{

class XY_Plot : public Plot
{
public:
	XY_Plot
	(
		const std::vector<double>& x,
		const std::vector<double>& y,
		const std::string& x_label = "",
		const std::string& y_label = ""
	) :
		m_x(x),
		m_y(y)
	{
		m_x_axis_bottom = std::make_shared<Axis>();
		m_y_axis_left = std::make_shared<Axis>();

		SetX_Label(x_label);
		SetY_Label(y_label);
	}
	virtual ~XY_Plot() {}
	// Need some representation of the series.... . This initial approach will need to be extended
	std::vector<double> m_x;
	std::vector<double> m_y;

	std::shared_ptr<Axis> m_x_axis_bottom;
	std::shared_ptr<Axis> m_y_axis_left;


	void SetX_Label(std::string x_label) { if(m_x_axis_bottom) m_x_axis_bottom->m_label = x_label; }
	void SetY_Label(std::string y_label) { if(m_y_axis_left) m_y_axis_left->m_label = y_label; }


	//void Render(Figure* fig, std::shared_ptr<Backend> pBackend) override { pBackend->RenderXY_Plot(fig, this); }
	//void Render(Figure* fig, Backend* backend) override { backend->RenderXY_Plot(fig, this); }
	void WelcomeVisitor(Visitor* visitor) override { visitor->Visit(this); }
private:
};


//void Plot(const::std::vector<double>& x, const std::vector<double>& y)

}