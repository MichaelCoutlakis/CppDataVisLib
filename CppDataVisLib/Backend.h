/***************************************************************************//**
* \brief
* \copyright	Michael Coutlakis 2021
* \license		MIT License, see the LICENSE file.
*******************************************************************************/
#pragma once

#include <memory>

#include "Visitor.h"

namespace dvis
{

class Figure;
class XY_Plot;


class Backend : public Visitor
{
public:
	/**
	 * .
	 * 
	 */
	virtual ~Backend() {}
private:
};

}
