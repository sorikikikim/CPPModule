#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( const Animal & animal ) {
	std::cout << "Animal Copy Constructor called" << std::endl;

	*this = animal;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {
	std::cout << "Animal Default Destructor called" << std::endl;
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



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::getType() const{
	return this->_type;
}

void Animal::setType(const std::string& type){
	this->_type = type;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */