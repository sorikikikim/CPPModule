#include "WrongDog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongDog::WrongDog()
:WrongAnimal()
{
	_type = "WrongDog";
	std::cout << "WrongDog Default Constructor created" << std::endl;

}

WrongDog::WrongDog( const WrongDog & wrongDog )
{
	std::cout << "WrongDog Copy Constructor created" << std::endl;
	*this = wrongDog;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongDog::~WrongDog()
{
	std::cout << "WrongDog Default Destructor created" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongDog& WrongDog::operator=( WrongDog const & wrongDog )
{
	if ( this != &wrongDog )
		this->_type = wrongDog.getType();

	return *this;
}


void WrongDog::makeSound() const {
	std::cout << "WrongDog type : (" << _type << ") make Sound!" << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */