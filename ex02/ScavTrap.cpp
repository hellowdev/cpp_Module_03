#include "ScavTrap.hpp"

ScavTrap::ScavTrap() // he call the parent constructor first so it will initialize name
{
    std::cout << "ScavTrap Random default constructor is called!🛡️\n";
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
};

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap " << name << " parametrized constructor is called!🛡️\n";   
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
};
// ------------COPY ASSIGN & COPY CONSTR-----------------------
ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
    std::cout << "ScavTrap " << name << " copy constructor is called🐑\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "ScavTrap " << name << " attacks 🗡️  " << target \
        << ", causing " << attack_damage << " points of damage!🩸\n";
    }
    else
        std::cout << "ScavTrap " << name << " out of energy or dead💀\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
    ClapTrap::operator=(original);
    std::cout << "ScavTrap " << name << " copy assignment is called🐑\n";
    return (*this);
}
// ---------------------------------------

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode🛑🚧\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has been destroyed👾\n";
}