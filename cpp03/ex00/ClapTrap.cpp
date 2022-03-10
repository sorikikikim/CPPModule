//
// Created by 김소리 on 2022/03/10.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
: _name(name),
_hit(10),
_energy(10),
_damage(0) {
    std::cout << _name << "'s constructor is called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << _name << "'s destructor is called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap <" << _name << "> attack <" << target <<">, causing <"
        << _damage << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    int total_damage;

    if (_damage - amount > 0)
    std::cout << "ClapTrap <" << _name << "> takes <" <<  <<"> damage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount);