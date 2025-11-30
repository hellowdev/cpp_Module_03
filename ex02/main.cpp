#include "FragTrap.hpp"

int main()
{
    
    FragTrap frag("benten");

    frag.attack("enemy");
    frag.takeDamage(99);
    frag.beRepaired(10);
    frag.takeDamage(11);
    frag.beRepaired(5);
    frag.attack("someone");
    frag.highFivesGuys();
}
