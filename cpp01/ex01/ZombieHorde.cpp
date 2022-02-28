//
// Created by 김소리 on 2022/02/27.
//

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name ) {

    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return zombies;
}

