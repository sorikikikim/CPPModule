//
// Created by 김소리 on 2022/03/14.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        DiamondTrap(const std::string& name);
        ~DiamondTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate(void);
        void highFivesGuys(void); 
        void whoAmI(void);
};


#endif //DIAMONDTRAP_HPP