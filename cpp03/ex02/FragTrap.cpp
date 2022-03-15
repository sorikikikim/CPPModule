#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name)
:ClapTrap(name) {
    _hit = 100;
    _energy = 100;
    _damage = 30;
    _attack_energy = 10;
    std::cout << "FragTrap <" << _name << "> constructor is called." << std::endl;
}

FragTrap::~FragTrap() {
     std::cout << "FragTrap <" << _name << "> destructor is called." << std::endl;
}

void FragTrap::attack(std::string const & target) {
    if (_energy - _attack_energy <= 0) {
        _energy = 0;
        std::cout << "FragTrap <" << _name << "> can't attack <" << target << ">." << std::endl;
        std::cout << "Energy point is less than Attack energy point." << std::endl;
    }
    else {
        _energy -= _attack_energy;
        std::cout << "FragTrap <" << _name << "> attack <" << target <<">, causing <"
                << _damage << "> points of damage!" << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount) {
    std::cout << "FragTrap <" << _name << "> got <" << amount << "> points of damage." << std::endl;

    int amount_int = static_cast<int>(amount);
    if (_hit - amount_int <= 0) {
        _hit = 0;
        std::cout << "FragTrap <" << _name << "> died..." << std::endl;
    }
    else {
        _hit -= amount_int;
        std::cout << "FragTrap <" << _name << ">'s Hit point is " << _hit << "." << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    std::cout << "FragTrap <" << _name << ">'s Hit point has been repaired by <" << amount << ">!" << std::endl;

    int amount_int = static_cast<int>(amount);
    _hit += amount_int;
    std::cout << "FragTrap <" << _name << ">'s Hit point is <" << _hit << ">." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap <" << _name << "> request high fives to guys." << std::endl;
}