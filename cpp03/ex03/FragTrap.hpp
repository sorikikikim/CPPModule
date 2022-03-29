//
// Created by 김소리 on 2022/03/14.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& ft);
        FragTrap& operator=(const FragTrap& ft);
        virtual ~FragTrap();
        virtual void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        virtual void highFivesGuys(void); 
};


#endif //FRAGTRAP_HPP
