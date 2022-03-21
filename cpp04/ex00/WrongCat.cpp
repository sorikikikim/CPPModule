#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//WrongCat, Dog는 _type값이 무조건 들어 있어야해서 
//여기서 초기화해줘야해. Animal은 type이 
//없는 상태로 생성돼도 돼!
WrongCat::WrongCat()
:WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat Default Constructor created" << std::endl;

}

WrongCat::WrongCat( const WrongCat & wrongCat )
{
	std::cout << "WrongCat Copy Constructor created" << std::endl;
	*this = wrongCat;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor created" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & wrongCat )
{
	//지금 Wrongcat객체 포인터 (this)랑 복사 대상이 되는
	//Wrongcat 변수에 담긴 객체의 포인터(&Wrongcat)이 같으면 완전히
	//같은 객체라 복사하지 않고 나머지 경우만 복사하는 거야.
	if ( this != &wrongCat )
	{
		this->_type = wrongCat.getType();
	}
	return *this;
}

//_type 변수가 protected라 getType함수쓰지않고
//바로 쓸수있는거야
void 	WrongCat::makeSound() const{
	std::cout<<"WrongCat type:("<<_type<<") make Sound!"<<std::endl;

}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */