//
// Created by 김소리 on 2022/02/27.
//

#include "Zombie.hpp"
Zombie* newZombie( std::string name ){
    return new Zombie(name);
}
