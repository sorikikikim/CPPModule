#include "WrongDog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

//Cat, WrongDog는 _type값이 무조건 들어 있어야해서 
//여기서 초기화해줘야해. WrongAnimal은 type이 
//없어도 돼!
WrongDog::WrongDog()
:WrongAnimal()
{
	_type = "WrongDog";
	std::cout << "WrongDog Default Constructor created" << std::endl;

}

WrongDog::WrongDog( const WrongDog & wrongDog )
{
	std::cout << "WrongDog Copy Constructor created" << std::endl;
	*this = wrongDog;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongDog::~WrongDog()
{
	std::cout << "WrongDog Default Destructor created" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongDog &				WrongDog::operator=( WrongDog const & wrongDog )
{
	//지금 Wrongdog객체 포인터 (this)랑 복사 대상이 되는
	//Wrongdog 변수에 담긴 객체의 포인터(&Wrongdog)이 같으면 완전히
	//같은 객체라 복사하지 않고 나머지 경우만 복사하는 거야.
	if ( this != &wrongDog )
	{
		this->_type = wrongDog.getType();
	}
	return *this;
}

//_type 변수가 protected라 getType함수쓰지않고
//바로 쓸수있는거야
void 	WrongDog::makeSound() const{
	std::cout<<"WrongDog type:("<<_type<<") make Sound!"<<std::endl;

}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */