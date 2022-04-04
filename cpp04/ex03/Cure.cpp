#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure") {}

Cure::Cure( const Cure & cure ) : AMateria("cure") {
    *this = cure;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Cure& Cure::operator=( const Cure& cure )
{
	_type = cure.getType();
    return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target) {
    std::cout <<  "* heals " << target.getName() << "'s wounds * " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */