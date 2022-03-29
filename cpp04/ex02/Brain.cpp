#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		ideas[i] = std::string("init");
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain( const Brain & brain ) {
	//std::cout << "Brain Copy Constructor called" << std::endl;
	*this = brain;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain() {
	std::cout << "Brain Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Brain& Brain::operator=( const Brain& brain )
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = brain.getIdeas(i);
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Brain::getIdeas(int i) const{
	return ideas[i];
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */