#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class  ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap& original);
        ScavTrap& operator=(const ScavTrap& original);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};

#endif