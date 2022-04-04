#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//Cat, Dog는 _type값이 무조건 들어 있어야해서 
//여기서 초기화해줘야해. Animal은 type이 
//없는 상태로 생성돼도 돼!
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
	//지금 cat객체 포인터 (this)랑 복사 대상이 되는
	//cat 변수에 담긴 객체의 포인터(&cat)이 같으면 완전히
	//같은 객체라 복사하지 않고 나머지 경우만 복사하는 거야.
	if ( this != &cat )
		this->_type = cat.getType();

	return *this;
}

//_type 변수가 protected라 getType함수쓰지않고
//바로 쓸수있는거야
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