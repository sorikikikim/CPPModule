#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
:WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat Default Constructor created" << std::endl;

}

WrongCat::WrongCat( const WrongCat & wrongCat )
{
	std::cout << "WrongCat Copy Constructor created" << std::endl;
	*this = wrongCat;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor created" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat& WrongCat::operator=( WrongCat const & wrongCat )
{
	if ( this != &wrongCat )
		this->_type = wrongCat.getType();

	return *this;
}

void 	WrongCat::makeSound() const{
	std::cout << "WrongCat type : (" << _type << ") make Sound!" << std::endl;

}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */