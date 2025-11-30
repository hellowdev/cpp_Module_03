#include "DiamondTrap.hpp"

int main()
{
    //
    std::cout << "\n--- CONSTRUCTOR TEST ---" << std::endl;
    // 1. Test the Parametrized Constructor
    DiamondTrap monster("Monster");

    std::cout << "\n--- WHO AM I TEST ---" << std::endl;
    // 2. Test the unique DiamondTrap function
    monster.whoAmI();

    std::cout << "\n--- INHERITANCE TEST (FragTrap Side) ---" << std::endl;

    monster.highFivesGuys();

    std::cout << "\n--- INHERITANCE TEST (ScavTrap Side) ---" << std::endl;
    
    monster.attack("Dummy"); // Note: attack() usually comes from ScavTrap, check your subject!
    monster.guardGate();

    std::cout << "\n--- DESTRUCTOR chaining TEST ---" << std::endl;
    // Destructors chaining will be called automatically here
    return 0;
}
