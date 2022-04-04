#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
:Animal()
{
	brain = new Brain();
	_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;

}

Cat::Cat( const Cat & cat )
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = cat;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Default Destructor called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=( Cat const & cat )
{
	if ( this != &cat )
		this->_type = cat.getType();
	this->brain = new Brain(*(cat.brain));
	
	return *this;
}

void Cat::makeSound() const{
	std::cout<< "Cat type : (" <<_type<< ") make Sound!" <<std::endl;

}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */