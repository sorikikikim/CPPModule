//
// Created by 김소리 on 2022/03/10.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    public:
        ClapTrap(const std::string& name);
        virtual ~ClapTrap();
        virtual void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
    protected:
        std::string _name;
        int _hit; //hp, 체력
        int _energy; //마나
        int _damage;
        int _attack_energy;
};


#endif //CLAPTRAP_HPP
