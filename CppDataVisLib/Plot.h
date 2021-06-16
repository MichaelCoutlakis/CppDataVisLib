#pragma once

#include <memory>

namespace dvis
{
	class cBackend;

	class cPlot
	{
	public:
		virtual void Render(std::shared_ptr<cBackend> pBackend) = 0;
	private:
	};
}
