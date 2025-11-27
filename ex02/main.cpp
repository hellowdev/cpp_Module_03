#include "FragTrap.hpp"

int main()
{
    FragTrap fog("meemy");

    fog.attack("enemy");
    fog.takeDamage(10);
    fog.beRepaired(100);
    fog.takeDamage(10);

    FragTrap moo;
    moo = fog;

    moo.attack("hero");
    moo.takeDamage(20);
    moo.beRepaired(-10);
}
