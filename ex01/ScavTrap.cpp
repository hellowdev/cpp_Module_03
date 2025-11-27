#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Random default constructer is called!\n";
    this->setClap(100, 50, 20);
};

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap " << getName() << " parametrized constructer is called!\n";   
    this->setClap(100, 50, 20);
};
// ------------COPY ASSIGN & COPY CONSTR-----------------------
ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
    std::cout << "ScavTrap " << getName() << " copy constructer is called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
    ClapTrap::operator=(original);
    std::cout << "ScavTrap " << getName() << " copy assignment is called\n";
    return (*this);
}
// ---------------------------------------
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() << " has been destroyed\n";
}