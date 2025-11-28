#include <iostream>

class ClapTrap {

    private:
        std::string _name;
        int         _hitPoints;
        int         _energy;
        int         _damage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap(std::string name) : _name(name) {}

ClapTrap::~ClapTrap() {}

void    ClapTrap::attack(const std::string &target) {
    if (_energy <= 0 || _hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't attack" << std::endl;
        return ;
    }
    _energy--;
    std::cout << "ClapTrap " << _name << " attacks " << target <<  ", causing " << _damage << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (amount <= 0) {
        std::cout << "[ERROR] Bad value for the amount of damage" << std::endl;
        return ;
    }
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " have no HP left :(" << std::endl;
        return ;
    }
    _hitPoints--;
    std::cout << "ClapTrap " << _name << " takes " << amount << "points of damages" << std::endl;
}