#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

//Cat, Dog는 _type값이 무조건 들어 있어야해서 
//여기서 초기화해줘야해. Animal은 type이 
//없어도 돼!
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
	//지금 dog객체 포인터 (this)랑 복사 대상이 되는
	//dog 변수에 담긴 객체의 포인터(&dog)이 같으면 완전히
	//같은 객체라 복사하지 않고 나머지 경우만 복사하는 거야.
	if ( this != &dog )
		this->_type = dog.getType();

	return *this;
}

//_type 변수가 protected라 getType함수쓰지않고
//바로 쓸수있는거야
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