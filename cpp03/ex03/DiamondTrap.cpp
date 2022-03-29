#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
:ClapTrap(name + "_clap_name"), 
ScavTrap(name),
FragTrap(name) {
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
    _attack_energy = ScavTrap::_attack_energy;

    std::cout << "DiamondTrap <" << _name << "> constructor is called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap <" << _name << "> destructor is called." << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
    ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
    std::cout << "DiamondTrap <" << _name << "> got <" << amount << "> points of damage." << std::endl;

    int amount_int = static_cast<int>(amount);
    if (_hit - amount_int <= 0) {
        _hit = 0;
        std::cout << "DiamondTrap <" << _name << "> died..." << std::endl;
    }
    else {
        _hit -= amount_int;
        std::cout << "DiamondTrap <" << _name << ">'s Hit point is " << _hit << "." << std::endl;
    }
}

void DiamondTrap::beRepaired(unsigned int amount) {
    std::cout << "DiamondTrap <" << _name << ">'s Hit point has been repaired by <" << amount << ">!" << std::endl;

    int amount_int = static_cast<int>(amount);
    _hit += amount_int;
    std::cout << "DiamondTrap " << _name << "'s Hit point is " << _hit << "." << std::endl;
}

void DiamondTrap::guardGate() {
    std::cout << "DiamondTrap <" << _name << "> have enterred in Gate keeper mode." << std::endl;
}

void DiamondTrap::highFivesGuys(void) {
    std::cout << "DiamondTrap <" << _name << "> request high fives to guys." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap my name is <" << _name << "> and <" << ClapTrap::_name << ">." << std::endl;
}