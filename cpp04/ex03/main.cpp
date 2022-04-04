#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
# include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	//src->materiaCheck();
	std::cout << "===============" << std::endl;
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	//me->inventoryCheck();

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}