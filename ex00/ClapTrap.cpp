#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

// Copy constr & copy assig
ClapTrap::ClapTrap(const ClapTrap& original)
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original) // return needed when chaining
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
    return (*this);
}

ClapTrap::ClapTrap(std::string Name)
{
    name = Name;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
    std::cout << "the ClapTrap has been created\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "ClapTrap " << name << " attacks " << target \
        << ", causing " << attack_damage << " points of damage!\n"; 
    }
    else
        std::cout << "out of energy or dead\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= hit_points && (hit_points != 0 && energy_points != 0))
    {
        hit_points -= amount;
        std::cout << "ClapTrap " << name << " took damage, HP left " << hit_points << '\n';
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points != 0 && energy_points != 0)
    {
        hit_points += amount;
        energy_points--;
        std::cout << "ClapTrap " << name << " repairs itself, getting " << amount <<  " hit points back!\n";
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "the ClapTrap has been destroyed\n";
}