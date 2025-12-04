#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_Scav") {
    std::cout << "[ScavTrap] Default constructor called Default_Scav" << std::endl;
    _hitPoints = 100;
    _energy = 50;
    _damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "[ScavTrap] Assignement constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj) {
    *this = obj;
    std::cout << "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "[ScavTrap] assignment operator called" << std::endl;
    if (this != &other) {
        this->_damage = other._damage;
        this->_energy = other._energy;
        this->_hitPoints = other._hitPoints;
        this->_name = other._name;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap] Destructor called" << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << "is now in Gate keeper mode" << std::endl;
}