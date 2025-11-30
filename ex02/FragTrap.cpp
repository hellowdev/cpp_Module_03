#include "FragTrap.hpp"

FragTrap::FragTrap() // will call default constuctor of base
{
    std::cout << "FragTrap Random default constructor is called!💥\n";
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap " << name << " parametrized constructor is called!💥\n";
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}
// ------------COPY ASSIGN & COPY CONSTR-----------------------
FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
    std::cout << "FragTrap " << name << " copy constructor is called🐑\n";
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
    ClapTrap::operator=(original);
    std::cout << "FragTrap " << name << " copy assignment is called🐑\n";
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " wants a high five!✋🥳\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destroyed👾\n";
}