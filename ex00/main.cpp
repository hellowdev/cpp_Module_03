#include "ClapTrap.hpp"

int main()
{

    ClapTrap trapy("rabbit");

    ClapTrap x(trapy);
    
    trapy.attack("Enenemy");
    x = trapy;
    // trapy.beRepaired(15);
    trapy.takeDamage(10);
    trapy.attack("Bos");
    trapy.attack("nemy");
    // trapy.attack("Enenemy");
    trapy.attack("Bos");
    trapy.takeDamage(10);
    // trapy.attack("nemy");
    // trapy.beRepaired(-15);
    // trapy.attack("Enenemy");
    // trapy.attack("Bos");
    // trapy.attack("nemy");
    // trapy.takeDamage(10);


}
