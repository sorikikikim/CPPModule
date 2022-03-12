//
// Created by 김소리 on 2022/03/10.
//

#include "ScavTrap.hpp"

int main() {
    // ScavTrap st("sorkim");

    // st.attack("enemy");
    // st.takeDamage(30);
    // st.beRepaired(50);
    // st.takeDamage(100);
    // st.beRepaired(10);
    // st.attack("enemy");
    // st.beRepaired(5);
    // st.attack("enemy");
    // st.attack("enemy");
    // st.attack("enemy");
    // st.guardGate();


    ClapTrap* ct = new ScavTrap("sorkim");

    ct->attack("enemy");
    delete ct;
}