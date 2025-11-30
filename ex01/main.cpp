#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("xbex");

    scav.attack("enemy");
    scav.takeDamage(99);
    scav.beRepaired(10);
    scav.takeDamage(11);
    scav.beRepaired(5);
    scav.attack("someone");
    scav.guardGate();
    

}
