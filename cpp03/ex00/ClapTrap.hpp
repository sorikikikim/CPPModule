//
// Created by 김소리 on 2022/03/10.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    public:
        ClapTrap(const std::string& name);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string& _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _damage;
};


#endif //CLAPTRAP_HPP
