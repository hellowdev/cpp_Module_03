#include "ScavTrap.hpp"

int main()
{
    // ClapTrap* ptr = new ScavTrap();
    
    // ptr->x();
    
    // ScavTrap scav;
    // ClapTrap clap(scav);
    
    // ScavTrap test("qwe");
    ScavTrap copy("emy");
    ScavTrap co("sfartah");
    ScavTrap cs;
    ScavTrap newcons(copy);

    // newcons = copy;
    // test.see();
    // ScavTrap test1;
    // test.attack("someone");
    // test.takeDamage(50);
    // test.takeDamage(20);
    newcons.takeDamage(20);
    // test.beRepaired(10);
    // test.takeDamage(40);
    // test.guardGate();
    
    // test.n()

}
