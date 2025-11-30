#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Random"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Random default constructor is called!🤖\n";
}

ClapTrap::ClapTrap(std::string Name) : name(Name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap " << name << " parametrized constructor is called!🤖\n";
}
// Copy constr & copy assig
ClapTrap::ClapTrap(const ClapTrap& original)
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
    std::cout << "ClapTrap " << name << " copy constructor is called!🐑\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original) // return needed when chaining
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
    std::cout << "ClapTrap " << name << " copy assignment operator called🐑\n";
    return (*this);
}
// ------------------------------------

void ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        energy_points--;
        std::cout << "ClapTrap " << name << " attacks 🗡️  " << target \
        << ", causing " << attack_damage << " points of damage!🩸\n";
    }
    else
        std::cout << "ClapTrap " << name << " out of energy or dead!💀\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= hit_points && hit_points > 0 && energy_points > 0)
    {
        hit_points -= amount;
        std::cout << "ClapTrap " << name << " took " << amount << " damage🩸, HP left " << hit_points << '\n';
    }
    else
    {
        hit_points = 0;
        std::cout << "ClapTrap " << name << " is already dead!💀\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points > 0 && energy_points > 0)
    {
        hit_points += amount;
        energy_points--;
        std::cout << "ClapTrap " << name << " repairs itself 🔧, getting " << amount <<  " hit points back!⚡\n";
    }
    else
        std::cout << "ClapTrap " << name << " can't repair itself not enough Hp or Energy🔋\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destroyed👾\n";
}