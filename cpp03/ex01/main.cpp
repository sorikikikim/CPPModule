//
// Created by 김소리 on 2022/03/10.
//

#include "ClapTrap.hpp"

int main() {
    ClapTrap ct("sorkim");

    ct.attack("enemy");
    ct.takeDamage(30);
    ct.beRepaired(50);
    ct.takeDamage(100);
    ct.beRepaired(10);
    ct.attack("enemy");
    ct.beRepaired(5);
    ct.attack("enemy");
    ct.attack("enemy");
    ct.attack("enemy");
}