#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energy(10), _damage(0) {
    std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energy(10), _damage(0) {
    std::cout << "[ClapTrap] Constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & obj) {
    *this = obj;
    std::cout << "[ClapTrap] Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "[ClapTrap] assignment operator called" << std::endl;
    if (this != &other) {
        this->_damage = other._damage;
        this->_energy = other._energy;
        this->_hitPoints = other._hitPoints;
        this->_name = other._name;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "[ClapTrap] Destructor called for " << _name << std::endl;
}

void    ClapTrap::attack(const std::string &target) {
    if (_energy <= 0 || _hitPoints <= 0) {
        std::cout << "[ClapTrap] " << _name << " can't attack" << std::endl;
        return ;
    }
    _energy--;
    std::cout << "[ClapTrap] " << _name << " attacks " << target <<  ", causing " << _damage << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (amount <= 0) {
        std::cout << "[ERROR] Bad value for the amount of damage" << std::endl;
        return ;
    }
    if (_hitPoints <= 0) {
        std::cout << "[ClapTrap] " << _name << " have no HP left :(" << std::endl;
        return ;
    }
    _hitPoints -= amount;
    std::cout << "[ClapTrap] " << _name << " takes " << amount << " points of damages" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (amount <= 0) {
        std::cout << "[ERROR] Bad value for the repaired amount" << std::endl;
        return ;
    }
    if (_energy <= 0) {
        std::cout << "[ClapTrap] " << _name << " has no energy left and cannot attack!" << std::endl;
    }
    _energy--;
    _hitPoints += amount;
    std::cout << "[ClapTrap] " << _name << " repairs itself, recovering " << amount << " hit points" << std::endl;   
}