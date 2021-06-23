/***************************************************************************//**
 * \brief		Define a base visitor class
 * \copyright	Michael Coutlakis (2021)
 * \license		MIT License, see the LICENSE file.
 *******************************************************************************/
#pragma once

namespace dvis
{

/* Here we need to forward declare all the objects that could be visited: */
class Figure;
class XY_Plot;
// ...

class Visitor
{
public:
	/**
	 * .
	 * 
	 */
	virtual ~Visitor(){}
	/**
	 * .
	 * 
	 * \param figure
	 */
	virtual void Visit(Figure* figure) = 0;
	/**
	 * .
	 * 
	 * \param plot
	 */
	virtual void Visit(XY_Plot* plot) = 0;
private:
};

}
