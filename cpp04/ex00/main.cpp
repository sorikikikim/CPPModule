#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	//virtual functions 
	//동적바인딩 in runtime
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout<<"-----------------Animal 소멸자------------"<<std::endl;

	//virtual destructor -> call child class
	delete i;
	delete j;
	delete meta;

	std::cout<<"-----------------WrongAnimal------------"<<std::endl;
	//virtual을 소멸자와 overriding하는 메서드에 붙이지 않는 경우
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongJ = new WrongDog();
	const WrongAnimal* wrongI = new WrongCat();

	// 정적바인딩 in compile
	std::cout << wrongI->getType() << " " << std::endl;
	std::cout << wrongJ->getType() << " " << std::endl;
	wrongI->makeSound();
	wrongJ->makeSound();
	wrongMeta->makeSound();

	std::cout<<"-----------------WrongAnimal소멸자------------"<<std::endl;

	delete wrongI;
	delete wrongJ;
	delete wrongMeta;
}