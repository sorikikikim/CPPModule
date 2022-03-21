#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

//getType 함수가 const로 정의 되어있어야한다는 에러가
//떳을 수있는데 const Animal*가 Animal의 내부 멤버 변수의
//내용을 바꾸지 않는 다는 의미라 const function만 부를 수 
//있는거야 getType함수를 const로 해주면돼 ->getType함수가
//객체 내부변수를 바꾸지 않는다는 의미인거 기억나지?


//밑에 5줄은 virtual 함수를 잘 써서 만든 것들이야
//const Animal* animal = new Cat();
//그래서 위의 문장에서 const Animal* 를 보고 '정적'으로 어떤
//메서드를 호출하지 않아. 뒤에있는 new Cat()에서 생성되는걸
//프로그램이 시작했을때 보고 Cat객체구나! 이렇게 판단하고 Cat의
//makeSound가 잘 호출 되는거야
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout<<"-----------------Animal 소멸자------------"<<std::endl;


delete i;//dog 소멸자, animal 소멸자
delete j;//cat 소멸자, animal 소멸자
delete meta;//animal 소멸자

std::cout<<"-----------------WrongAnimal------------"<<std::endl;
//virtual 을 소멸자와 overriding하는 메서드에 붙여주지 못한 경우.
const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* wrongJ = new WrongDog();
const WrongAnimal* wrongI = new WrongCat();

// overriding하는 메서드(makeSound)와 소멸자에 WrongAnimal
//에서 virtual 을 붙여주지 않았기 때문에 정적바인딩이 일어나서
//const Animal* 를 보고 모두 Animal 메서드만 호출돼
//이러면 안돼는 사례를 보여주는 거야.
std::cout << wrongI->getType() << " " << std::endl;
std::cout << wrongJ->getType() << " " << std::endl;
wrongI->makeSound(); //모두 WrongAnimal makeSound호출
wrongJ->makeSound();//모두 WrongAnimal makeSound호출
wrongMeta->makeSound(); //모두 WrongAnimal makeSound호출

std::cout<<"-----------------WrongAnimal소멸자------------"<<std::endl;

delete wrongI;//모두 animal 소멸자만 호출됨.
delete wrongJ;//모두 animal 소멸자만 호출됨.
delete wrongMeta;//모두 animal 소멸자만 호출됨.
}