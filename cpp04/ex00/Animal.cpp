#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() {
	std::cout << "Animal Default Constructor created" << std::endl;
}

Animal::Animal( const Animal & animal ) {
	std::cout << "Animal Copy Constructor created" << std::endl;

	*this = animal;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {
	std::cout << "Animal Default Destructor created" << std::endl;
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

void Animal::makeSound() const{
	std::cout << "Animal type : ( "<<_type<< ") make Sound!"<<std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */