#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default Constructor created" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & wrongAnimal ) {
	std::cout << "WrongAnimal Copy Constructor created" << std::endl;

	*this = wrongAnimal;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Default Destructor created" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


WrongAnimal& WrongAnimal::operator=( const WrongAnimal& wrongAnimal )
{
	if (this != &wrongAnimal)
	{	
		this->_type = wrongAnimal.getType();
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string WrongAnimal::getType() const{
	return this->_type;
}

void WrongAnimal::setType(const std::string& type){
	this->_type = type;
}

//
void WrongAnimal::makeSound() const{
	std::cout<<"WrongAnimal type : (" << _type << ") make Sound!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */