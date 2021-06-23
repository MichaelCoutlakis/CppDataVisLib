/***************************************************************************//**
 * \brief
 * \copyright	Michael Coutlakis 2021
 * \license		MIT License, see the LICENSE file.
 ******************************************************************************/
#pragma once


#include <memory>
#include <string>

//#include "Backend.h"
#include "Element.h"
#include "Visitor.h"
#include "Plot.h"

namespace dvis
{
class Figure : public Element
{
public:
	/**
	 * Constructor.
	 *
	 * @param backend Where to render the figure.
	 * @param title
	 * @param plot
	 * @param ID The figure will be rendered to an existing figure window matching this ID
	 */
	Figure(std::string title = "", std::shared_ptr<Plot> plot = nullptr, int ID = -1) :
		m_title(title),
		m_plot(plot),
		m_ID(ID)
	{

	}
	/**
	 * .
	 *
	 * @param title
	 */
	void SetTitle(const std::string& title) { m_title = title; }

	void SetPlot(std::shared_ptr<Plot> plot) { m_plot = plot; }
	const std::string& Title() const { return m_title; }

	int& ID() { return m_ID; }

	//void Render(std::shared_ptr<Backend> backend)
	//{
	//	////m_backend->RenderFigure(this);
	//	//if(m_plot)
	//	//	m_plot->Render(this, backend);
	//	//else
	//	//	backend->RenderFigure(this);
	//	Render(backend.get());
	//}
	//void Render(Backend* backend)
	//{
	//	//m_backend->RenderFigure(this);
	//	if(m_plot)
	//		m_plot->Render(this, backend);
	//	else
	//		backend->RenderFigure(this);
	//}
	void WelcomeVisitor(Visitor* visitor) override { visitor->Visit(this); }
private:
	//std::shared_ptr<Backend> m_backend;
	std::shared_ptr<Plot> m_plot;
	std::string m_title;
	/// Associative ID, figure will be plotted on any existing window with matching ID
	int m_ID = -1;
};
}
