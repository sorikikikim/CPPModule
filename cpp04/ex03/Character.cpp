#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : ICharacter() {}

Character::Character(std::string name) : ICharacter() {
    _name = name;
}

Character::Character( const Character & ch ) {
    *this = ch;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Character& Character::operator=( const Character& ch )
{
    if (this != &ch) {
        _name = ch.getName();
        for (int i = 0; i < 4; i++) {
            if ( this->inventory[i] != NULL) {
                delete this->inventory[i]; //
                this->inventory[i] = NULL;
            }
            this->inventory[i] = ch.inventory[i]->clone();
        }
    }
    return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++)
        if (inventory[i] == NULL) {
            inventory[i] = m;
            return ;
        }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) 
        if (inventory[idx] != NULL) {
            delete inventory[idx];
            inventory[idx] = NULL;
        }
}

void Character::use(int idx, ICharacter& target) {
    if ((idx >= 0 && idx < 4) && inventory[idx]) {
        inventory[idx]->use(target);
        unequip(idx);
    }
    
}

void Character::inventoryCheck() {
    for (int i = 0; i < 4; i++) {
        std::cout << "inventory[" << i << "]:";
        if (inventory[i] != NULL) 
            std::cout << inventory[i]->getType() << std::endl;
        else   
            std::cout << "null" << std::endl;
    }
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */