//
// Created by 김소리 on 2022/02/27.
//


#include "Zombie.hpp"

int main(){
    Zombie* zombie = zombieHorde(5, "sori");
    delete[] zombie;
}