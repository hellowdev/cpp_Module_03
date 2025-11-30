#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("Random")// we cant initlize list them cuz isnt not yet inherited 
{
    hit_points = FragTrap::hit_points; // here the last one has 100 so its the same 
    energy_points = ScavTrap::energy_points;
    attack_damage = 30; // we have 30 dmg in frag but since scav called the last one called it will change it to 20
    std::cout << "DiamondTrap Random default constructor is called!💎\n";
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), FragTrap(Name), ScavTrap(Name), name(Name)
{// frag and Scav will not call the base or change in it cuz it already called by Diamond and created
    hit_points = FragTrap::hit_points; // here the last one has 100 so its the same 
    energy_points = ScavTrap::energy_points;
    attack_damage = 30; // we have 30 dmg in frag but since scav called the last one called it will change it to 20
    std::cout << "DiamondTrap " << name << " parametrized constructor is called!💎\n";
}
// --------------------------COPY CONSTUCTOR AND ASSIGNEMENT-------------
DiamondTrap::DiamondTrap(const DiamondTrap& original)
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
    std::cout << "DiamondTrap " << name << " copy constructor is called!🐑\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original) // return needed when chaining
{
    name = original.name;
    hit_points = original.hit_points;
    energy_points = original.energy_points;
    attack_damage = original.attack_damage;
    std::cout << "DiamondTrap " << name << " copy assignment operator called🐑\n";
    return (*this);
}
// ---------------------------------------------------------------------
void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << name <<" and my ClapTrap name is "<< ClapTrap::name << "♦️💎\n";
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " has been destroyed👾\n";
}
