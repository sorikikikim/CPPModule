//
// Created by 김소리 on 2022/03/12.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(const std::string name);
        ~ScavTrap();
        void attack(std::string const & target);
        void guardGate();
};


#endif //SCAVTRAP_HPP
