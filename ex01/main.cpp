#include "ClapTrap.hpp"

int main(void) {
    
    ClapTrap a("Bob");

    a.attack("Enemy1");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(5);
    a.takeDamage(8);
    a.attack("Enemy2");

    return 0;
}