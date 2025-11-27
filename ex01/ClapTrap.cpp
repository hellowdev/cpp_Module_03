#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Random"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Random default constructer is called! 🐑\n";   
}

ClapTrap::ClapTrap(std::string Name) : name(Name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap " << getName() << " parametrized constructer is called! 🐑\n";  
}

// Copy constr & copy assig
ClapTrap::ClapTrap(const ClapTrap& original)
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
    std::cout << "ClapTrap " << getName() << " copy constructer is called! 🐑\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original) // return needed when chaining
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
    std::cout << "ClapTrap " << getName() << " copy assignment operator called 💀\n";
    return (*this);
}
// ------------------------------------

void ClapTrap::setClap(unsigned int hp, unsigned int energy, unsigned int dmg)
{
    hit_points = hp;
    energy_points = energy;
    attack_damage = dmg;
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "ClapTrap " << getName() << " attacks " << target \
        << ", causing " << attack_damage << " points of damage!\n";
    }
    else
        std::cout << "ClapTrap " << getName() << " out of energy or dead\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= hit_points && (hit_points > 0 && energy_points > 0))
    {
        hit_points -= amount;
        std::cout << "ClapTrap " << getName() << " took " << amount << " damage, HP left " << hit_points << '\n';
    }
    else
        std::cout << "ClapTrap " << getName() << " is already dead\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points > 0 && energy_points > 0)
    {
        hit_points += amount;
        energy_points--;
        std::cout << "ClapTrap " << getName() << " repairs itself, getting " << amount <<  " hit points back!\n";
    }
    else
        std::cout << "ClapTrap " << getName() << " can't repair itself not enough Hp or Energy\n";
}

const std::string& ClapTrap::getName()
{
    return (name);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << getName() << " has been destroyed 🐑\n";
}