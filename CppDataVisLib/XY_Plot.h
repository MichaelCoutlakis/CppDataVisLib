#pragma once

#include <vector>
#include <memory>

#include "Plot.h"
#include "Axis.h"
#include "Legend.h"

namespace dvis
{
	class cXY_Plot : public cPlot
	{
	public:
		cXY_Plot
		(
			const std::vector<double>& vdX,
			const std::vector<double>& vdY,
			const std::string& strX_Label = "",
			const std::string& strY_Label = ""
		) :
			m_vdX(vdX),
			m_vdY(vdY)
		{
			m_pAxisX_Bottom = std::make_shared<cAxis>();
			m_pAxisY_Left = std::make_shared<cAxis>();

			SetX_Label(strX_Label);
			SetY_Label(strY_Label);
		}
		// Need some representation of the series.... . This initial approach will need to be extended
		std::vector<double> m_vdX;
		std::vector<double> m_vdY;
		
		std::shared_ptr<cAxis> m_pAxisX_Bottom;
		std::shared_ptr<cAxis> m_pAxisY_Left;


		void SetX_Label(std::string strX_Label) { if (m_pAxisX_Bottom) m_pAxisX_Bottom->m_strAxisLabel = strX_Label; }
		void SetY_Label(std::string strY_Label) { if (m_pAxisY_Left) m_pAxisY_Left->m_strAxisLabel = strY_Label; }


		void Render(std::shared_ptr<cBackend> pBackend) override { pBackend->RenderXY_Plot(this); }
	private:
	};
}