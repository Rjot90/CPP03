#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap & obj);
        FragTrap& operator=(const FragTrap & obj);
        ~FragTrap();

        void attack(const std::string &target);
        void highFivesGuys(void);
};
