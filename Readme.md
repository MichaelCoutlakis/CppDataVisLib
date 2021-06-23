# CppDataVisLib

Yet another library for C++ data visualization. This one to have a few interesting features, if I ever get there... .

## Motivation

## Roadmap


## Limitiations


## Example

```c++
	using namespace dvis;
	
	auto xy_plot = std::make_shared<XY_Plot>
	(
		std::vector<double>{ 1.0, 2.0, 3.0 },
		std::vector<double>{ 42.0, 33.0, 43.0 }
	);
	xy_plot->SetX_Label("Time [seconds]");
	xy_plot->SetY_Label("Voltage [Volts]");

	auto fig = std::make_shared<Figure>("My Figure Title");
	fig->SetPlot(xy_plot);
	
	auto backend = std::make_shared<CoutBackend>();
	backend->Render(fig);
```


## Implemented Functionality
The following functionality has been implemented:


- Almost none at the moment

## Further Reading


