#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice") {}

Ice::Ice( const Ice & ice ) : AMateria("ice") {
    *this = ice;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Ice& Ice::operator=( const Ice& ice )
{
	_type = ice.getType();
    return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter& target) {
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */