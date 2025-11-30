#include <iostream>

class ClapTrap {

    protected:
        std::string _name;
        int         _hitPoints;
        int         _energy;
        int         _damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};