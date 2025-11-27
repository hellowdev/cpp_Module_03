#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Random default constructer is called!\n";
    this->setClap(100, 100, 30);
};

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap " << getName() << " parametrized constructer is called!\n";   
    this->setClap(100, 100, 30);
};
// ------------COPY ASSIGN & COPY CONSTR-----------------------
FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
    std::cout << "FragTrap " << getName() << " copy constructer is called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
    ClapTrap::operator=(original);
    std::cout << "FragTrap " << getName() << " copy assignment is called\n";
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " wants a high five! ✋\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " has been destroyed\n";
}