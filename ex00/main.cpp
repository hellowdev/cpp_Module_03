#include "ClapTrap.hpp"

int main()
{

    ClapTrap fog("Katrina");

    fog.attack("enemy");
    fog.takeDamage(9);
    fog.beRepaired(10);
    fog.takeDamage(11);
    fog.beRepaired(5);
    fog.attack("someone");
    
}
