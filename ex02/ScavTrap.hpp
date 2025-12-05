#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap & obj);
        ScavTrap& operator=(const ScavTrap & obj);
        ~ScavTrap();

        void guardGate();
};