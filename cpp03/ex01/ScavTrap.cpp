//
// Created by 김소리 on 2022/03/12.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
:ClapTrap(name) {
    _hit = 100;
    _energy = 50;
    _damage = 20;
    _attack_energy = 5;

    std::cout << "ScavTrap <" << _name << "> constructor is called." << std::endl;
    std::cout << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap <" << _name << "> destructor is called." << std::endl;
}

void ScavTrap::attack(std::string const & target) {
    if (_energy - _attack_energy <= 0) {
        _energy = 0;
        std::cout << "ScavTrap <" << _name << "> can't attack <" << target << ">." << std::endl;
        std::cout << "Energy point is less than Attack energy point." << std::endl;
    }
    else {
        _energy -= _attack_energy;
        std::cout << "ScavTrap <" << _name << "> attack <" << target <<">, causing <"
                << _damage << "> points of damage!" << std::endl;
    }
    std::cout << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << "ScavTrap <" << _name << "> got <" << amount << "> points of damage." << std::endl;

    int amount_int = static_cast<int>(amount);
    if (_hit - amount_int <= 0) {
        _hit = 0;
        std::cout << "ScavTrap " << _name << " died..." << std::endl;
    }
    else {
        _hit -= amount_int;
        std::cout << "ScavTrap " << _name << "'s Hit point is " << _hit << "." << std::endl;
    }
    std::cout << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "ScavTrap <" << _name << ">'s Hit point has been repaired by <" << amount << ">!" << std::endl;

    int amount_int = static_cast<int>(amount);
    _hit += amount_int;
    std::cout << "ScavTrap " << _name << "'s Hit point is " << _hit << "." << std::endl;
    std::cout << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap <" << _name << "> have enterred in Gate keeper mode." << std::endl;
}