#pragma once


#include <memory>
#include <string>

#include "Backend.h"
#include "Plot.h"

namespace dvis
{
	class cFigure
	{
	public:
		cFigure(std::shared_ptr<cBackend> pBackend, std::string strTitle = "", std::shared_ptr<cPlot> pPlot = nullptr) :
			m_pBackend(pBackend),
			m_strTitle(strTitle),
			m_pPlot(pPlot)
		{
			
		}
		void SetTitle(const std::string& strTitle) { m_strTitle = strTitle; }
		
		void SetPlot(std::shared_ptr<cPlot> pPlot) { m_pPlot = pPlot; }

		const std::string& Title() const { return m_strTitle; }

		void Render()
		{
			m_pBackend->RenderFigure(this);
			if(m_pPlot)
				m_pPlot->Render(m_pBackend);
		}
	private:
		std::shared_ptr<cBackend> m_pBackend;
		std::shared_ptr<cPlot> m_pPlot;
		std::string m_strTitle;
	};
}
