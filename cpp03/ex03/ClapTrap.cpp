//
// Created by 김소리 on 2022/03/10.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
: _name(name),
_hit(10),
_energy(10),
_damage(0),
_attack_energy(2) {
    std::cout << "ClapTrap <" << _name << "> constructor is called." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap <" << _name << "> destructor is called." << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    if (_energy - _attack_energy <= 0) {
        _energy = 0;
        std::cout << "ClapTrap <" << _name << "> can't attack <" << target << ">." << std::endl;
        std::cout << "Energy point is less than Attack energy point." << std::endl;
    }
    else {
        _energy -= _attack_energy;
        std::cout << "ClapTrap <" << _name << "> attack <" << target <<">, causing <"
                << _damage << "> points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap <" << _name << "> got <" << amount << "> points of damage." << std::endl;

    int amount_int = static_cast<int>(amount);
    if (_hit - amount_int <= 0) {
        _hit = 0;
        std::cout << "ClapTrap <" << _name << "> died..." << std::endl;
    }
    else {
        _hit -= amount_int;
        std::cout << "ClapTrap <" << _name << ">'s Hit point is <" << _hit << ">." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap <" << _name << ">'s Hit point has been repaired by <" << amount << ">!" << std::endl;

    int amount_int = static_cast<int>(amount);
    _hit += amount_int;
    std::cout << "ClapTrap <" << _name << ">'s Hit point is <" << _hit << ">." << std::endl;
}