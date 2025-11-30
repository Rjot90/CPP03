#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string &name);
        ~ScavTrap();
        void guardGate();
};

ScavTrap::ScavTrap() : ClapTrap("Default_Scav") {
    std::cout << "[ScavTrap] Default constructor called Default_Scav" << std::endl;
    _hitPoints = 100;
    _energy = 50;
    _damage = 20;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name) {
    std::cout << "[ScavTrap] Assignement constructor called for " << name << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap] Destructor called" << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << "is now in Gate keeper mode" << std::endl;
}