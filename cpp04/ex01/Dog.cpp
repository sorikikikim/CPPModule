#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
:Animal()
{
	brain = new Brain();
	_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;

}

Dog::Dog( const Dog & dog )
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = dog;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=( Dog const & dog )
{
	if ( this != &dog )
		this->_type = dog.getType();
	this->brain = new Brain(*(dog.brain));

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