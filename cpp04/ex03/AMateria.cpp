#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() : _type("sorkim") {}

AMateria::AMateria( const AMateria & amateria ) {
    *this = amateria;
}

AMateria::AMateria(std::string const & type) {
    _type = type;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


AMateria& AMateria::operator=( const AMateria& amateria )
{
	_type = amateria.getType();
    return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    std::cout << target.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */