#include "Figure.h"
#include "CoutBackend.h"


int main()
{
	using namespace dvis;
	auto pBackend = std::make_shared<cCoutBackend>();
	auto pFig = std::make_shared<cFigure>(pBackend);

	pFig->SetTitle("My New Figure");

	auto pXY_Plot = std::make_shared<cXY_Plot>(std::vector<double>{ 1.0, 2.0, 3.0 }, std::vector<double>{ 42.0, 33.0, 43.0 });
	pXY_Plot->SetX_Label("Time [seconds]");
	pXY_Plot->SetY_Label("Voltage [Volts]");

	pFig->SetPlot(pXY_Plot);


	pFig->Render();

	system("pause");
	return 0;
}
