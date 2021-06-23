/***************************************************************************//**
 * \brief		Define base class for all data visualization elements (e.g. to
 *				allow the visitor pattern)
 * \copyright	Michael Coutlakis (2021)
 * \license		MIT License, see the LICENSE file.
 *******************************************************************************/
#pragma once


namespace dvis
{

class Visitor;

/**
 * Base class to enable visitor pattern.
 *
 */
class Element
{
public:
	/**
	 * Destructor.
	 *
	 */
	virtual ~Element() {}

	/**
	 * Welcome (or accept, but that sounds more grudging) a visitor.
	 *
	 * \note This follows the c++ core guidelines of B. Stroustrup and H. Sutter,
	 *		 R.30: Take smart pointer as parameters only to explicitly express
	 *		 lifetime semantics. A function that does not manipulate lifetime
	 *		 should take raw pointers or reference instead.
	 *		 https://isocpp.github.io/CppCoreGuidelines
	 *
	 * \param visitor The visitor to welcome
	 */
	virtual void WelcomeVisitor(Visitor* visitor) = 0;
private:
};

}
