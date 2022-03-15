#include "FragTrap.hpp"

int main() {

    FragTrap ft("sori kim");
    ft.attack("enemy");
    ft.takeDamage(30);
    ft.beRepaired(50);
    ft.takeDamage(100);
    ft.beRepaired(10);
    ft.attack("enemy");
    ft.beRepaired(5);
    ft.attack("enemy");
    ft.highFivesGuys();

    //ClapTrap* ct = new ScavTrap("sorkim");
    //ct->attack("enemy");
    //delete ct;
}