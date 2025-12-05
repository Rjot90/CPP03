#include "FragTrap.hpp"

int main() {
    std::cout << "=== TEST FRAGTRAP ===" << std::endl;

    FragTrap a("Alpha");
    FragTrap b("Bravo");
    FragTrap c(a);            // Test constructeur par copie
    c = b;                    // Test opérateur d'affectation

    std::cout << "\n--- Attaques ---" << std::endl;
    a.attack("Bravo");
    b.takeDamage(30);

    b.attack("Alpha");
    a.takeDamage(20);

    std::cout << "\n--- Réparations ---" << std::endl;
    a.beRepaired(15);
    b.beRepaired(10);

    std::cout << "\n--- Capacité spéciale ---" << std::endl;
    a.highFivesGuys();
    b.highFivesGuys();

    std::cout << "\n--- Attaques jusqu'à energy points = 0 ---" << std::endl;
    for (int i = 0; i < 15; i++)
        a.attack("somebody");

    std::cout << "\n--- Endurance Check ---" << std::endl;
    a.beRepaired(5);  // devrait échouer si plus d’énergie
    a.highFivesGuys(); // doit fonctionner même sans énergie (si ton sujet l’autorise)

    std::cout << "\n=== END TEST ===" << std::endl;
    return 0;
}