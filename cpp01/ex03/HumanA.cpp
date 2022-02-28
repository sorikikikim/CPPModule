//
// Created by Sori Kim on 2/28/22.
//

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
: name(name), weapon(weapon) {

}

HumanA::~HumanA() {

}

void HumanA::attack() {
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}