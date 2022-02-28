//
// Created by 김소리 on 2022/02/27.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}


void Zombie::announce() {
    std::cout<<name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie() {
    std::cout<<name<<"'s destructor is called"<<std::endl;
}

