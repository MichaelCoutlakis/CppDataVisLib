/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once

#include <memory>

#include "Element.h"

namespace dvis
{
class Backend;

class Plot : public Element
{
public:
	virtual ~Plot() {}

	//virtual void Render(Figure* fig, std::shared_ptr<Backend> backend) = 0;
	//virtual void Render(Figure* fig, Backend* backend) = 0;
private:
};

}
