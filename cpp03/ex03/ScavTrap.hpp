//
// Created by 김소리 on 2022/03/12.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& st);
        ScavTrap& operator=(const ScavTrap& st);  
        virtual ~ScavTrap();

        virtual void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        virtual void guardGate();

};


#endif //SCAVTRAP_HPP
