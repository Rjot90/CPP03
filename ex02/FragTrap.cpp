#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_Scav") {
    std::cout << "[FragTrap] Default constructor called Default_Scav" << std::endl;
    _hitPoints = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "[FragTrap] Assignement constructor called for " << name << std::endl;
    _hitPoints = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::FragTrap(const FragTrap & obj) {
    *this = obj;
    std::cout << "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "[FrapTrap] assignment operator called" << std::endl;
    if (this != &other) {
        this->_damage = other._damage;
        this->_energy = other._energy;
        this->_hitPoints = other._hitPoints;
        this->_name = other._name;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "[FragTrap] Destructor called for " << _name << std::endl;
}

void    FragTrap::attack(const std::string &target) {
    if (_energy <= 0 || _hitPoints <= 0) {
        std::cout << "[FragTrap] " << _name << " can't attack" << std::endl;
        return ;
    }
    _energy--;
    std::cout << "[FragTrap] " << _name << " attacks " << target <<  ", causing " << _damage << " points of damage !" << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "[FragTrap] " << _name << " doing a hive five" << std::endl;
}