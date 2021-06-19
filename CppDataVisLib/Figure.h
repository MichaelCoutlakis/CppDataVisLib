/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once


#include <memory>
#include <string>

#include "Backend.h"
#include "Plot.h"

namespace dvis
{
	class Figure
	{
	public:
		Figure(std::shared_ptr<Backend> backend, std::string title = "", std::shared_ptr<Plot> plot = nullptr) :
			m_backend(backend),
			m_title(title),
			m_plot(plot)
		{
			
		}
		void SetTitle(const std::string& title) { m_title = title; }
		
		void SetPlot(std::shared_ptr<Plot> plot) { m_plot = plot; }

		const std::string& Title() const { return m_title; }

		void Render()
		{
			m_backend->RenderFigure(this);
			if(m_plot)
				m_plot->Render(m_backend);
		}
	private:
		std::shared_ptr<Backend> m_backend;
		std::shared_ptr<Plot> m_plot;
		std::string m_title;
	};
}
