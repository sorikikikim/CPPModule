//
// Created by Sori Kim on 2/28/22.
//

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
:name(name), weapon(0) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon& wp) {
    this->weapon = &wp;
}

void HumanB::attack() {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}