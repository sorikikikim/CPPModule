#include "DiamondTrap.hpp"

int main() {

    DiamondTrap dt("sori kim");
    dt.attack("enemy");
    dt.takeDamage(30);
    dt.beRepaired(50);
    dt.takeDamage(100);
    dt.beRepaired(10);
    dt.attack("enemy");
    dt.beRepaired(5);
    dt.attack("enemy");
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();
    ClapTrap* ct = new ScavTrap("sorkim");
    ct->attack("enemy");
    delete ct;
}