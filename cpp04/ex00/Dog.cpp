#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
:Animal()
{
	_type = "Dog";
	std::cout << "Dog Default Constructor created" << std::endl;

}

Dog::Dog( const Dog & dog )
{
	std::cout << "Dog Copy Constructor created" << std::endl;
	*this = dog;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Default Destructor created" << std::endl;

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=( const Dog& dog )
{
	if ( this != &dog )
		this->_type = dog.getType();

	return *this;
}

void Dog::makeSound() const{
	std::cout << "Dog type : (" << _type << ") make Sound!" << std::endl;

}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */