//
// Created by Sori Kim on 2/28/22.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& weapon;

    public:
        HumanA(const std::string& name, Weapon& weapon);
        void attack();
        ~HumanA();
};


#endif //HUMANA_HPP
