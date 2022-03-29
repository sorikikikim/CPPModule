//
// Created by 김소리 on 2022/03/12.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& st);
        ScavTrap& operator=(const ScavTrap& st);  
        ~ScavTrap();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();

};


#endif //SCAVTRAP_HPP
