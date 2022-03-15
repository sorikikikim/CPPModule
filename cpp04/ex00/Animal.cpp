#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() {
	std::cout << "Animal Constructor created" << std::endl;
}

Animal::Animal( const Animal & animal ) {
	*this = animal;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {
	std::cout << "Animal Destructor created" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Animal& Animal::operator=( const Animal& animal )
{
	if (this != &animal)
	{	
		this->_type= animal.getType();
	}
	return *this;
}

std::ostream& operator<<( std::ostream & out, Animal const & in)
{
	//out << "Value = " << in.getValue();
	return out;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string& Animal::getType() {
	return this->_type;
}

void Animal::makeSound() {
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */