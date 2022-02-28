//
// Created by Sori Kim on 2/28/22.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon();
        Weapon(const std::string& type);
        void setType(const std::string& type);
        const std::string& getType();
};

#endif //WEAPON_HPP
