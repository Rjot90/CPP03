#include "ScavTrap.hpp"

int main(void) {
    
    std::cout << "=== TEST SCAVTRAP ===" << std::endl;

    ScavTrap s1("Guardian");
    ScavTrap s2("Intruder");

    std::cout << "\n--- Attacks ---" << std::endl;
    s1.attack("Intruder");

    std::cout << "\n--- Take Damage & Repair ---" << std::endl;
    s2.takeDamage(30);
    s2.beRepaired(20);

    std::cout << "\n--- Gate Keeper Mode ---" << std::endl;
    s1.guardGate();

    std::cout << "\n--- Energy Drain Test ---" << std::endl;
    for (int i = 0; i < 55; i++)
        s1.attack("Dummy");

    std::cout << "\n--- Copy Constructor / Assignment ---" << std::endl;
    ScavTrap copy(s1);
    ScavTrap assigned;
    assigned = s2;

    copy.attack("CopyTarget");
    assigned.attack("AssignedTarget");

    std::cout << "\n=== END TEST ===" << std::endl;
    return 0;
}