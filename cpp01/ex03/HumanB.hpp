//
// Created by Sori Kim on 2/28/22.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& wp);
        void attack();
        ~HumanB();
};


#endif //HUMANB_HPP
