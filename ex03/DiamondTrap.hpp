#ifndef  DIAMONDTRAP_HPP
#define  DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string Name);
        DiamondTrap(const DiamondTrap& original);
        DiamondTrap& operator=(const DiamondTrap& original);
        void whoAmI();
        ~DiamondTrap();
};

#endif