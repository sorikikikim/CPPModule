#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2) 
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}
	//Animal *a = new Animal(); -> x
	std::cout << "-------------delete-----------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << std::endl;

	}
}