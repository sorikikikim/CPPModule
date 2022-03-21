#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//디폴트 생성자, 복사생성자 , 소멸자 출력 해줘야해!
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
		this->_type= wrongAnimal.getType();
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string WrongAnimal::getType() const{
	return this->_type;
}

//WrongAnimal 클래스가 디폴트생성자랑 복사생성자 밖에 없어서
//이름을 정할 수없어서 setter를 만들어줬어.
void WrongAnimal::setType(const std::string& type){
	this->_type = type;
}

//_type 하고 WrongAnimal클래스인거 나오게 출력.
void WrongAnimal::makeSound() const{
	std::cout<<"WrongAnimal type:("<<_type<<") make Sound!"<<std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */