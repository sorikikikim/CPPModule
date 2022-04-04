#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
:Animal()
{
	_type = "Cat";
	std::cout << "Cat Default Constructor created" << std::endl;
}

Cat::Cat( const Cat & cat )
{
	std::cout << "Cat Copy Constructor created" << std::endl;
	*this = cat;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Default Destructor created" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=( Cat const & cat )
{
	if ( this != &cat )
		this->_type = cat.getType();

	return *this;
}

void Cat::makeSound() const{
	std::cout << "Cat type : (" << _type << ") make Sound!" << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */