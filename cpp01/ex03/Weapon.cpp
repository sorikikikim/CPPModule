//
// Created by Sori Kim on 2/28/22.
//

#include "Weapon.hpp"


Weapon::Weapon(const std::string& type)
:type(type){

}

Weapon::Weapon() {

}

void Weapon::setType(const std::string& type) {
    this->type = type;
}

const std::string& Weapon::getType() {
    return type;
}