#include "ClapTrap.hpp"

int main()
{
    ClapTrap trapy("rabbit");

    trapy.attack("Enenemy");
    trapy.attack("Bos");
    trapy.attack("nemy");
    trapy.attack("Enenemy");
    trapy.attack("Bos");
    trapy.attack("nemy");
    trapy.attack("Enenemy");
    trapy.attack("Bos");
    trapy.attack("nemy");
    trapy.beRepaired(15);
    trapy.attack("Enenemy");
    trapy.attack("Bos");
    trapy.attack("nemy");
    // trapy.takeDamage(8);
}
