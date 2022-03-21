#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//디폴트 생성자, 복사생성자 , 소멸자 출력 해줘야해!
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

//Animal 클래스가 디폴트생성자랑 복사생성자 밖에 없어서
//이름을 정할 수없어서 setter를 만들어줬어.
void Animal::setType(const std::string& type){
	this->_type = type;
}

//_type 하고 Animal클래스인거 나오게 출력.
void Animal::makeSound() const{
	std::cout<<"Animal type:("<<_type<<") make Sound!"<<std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */