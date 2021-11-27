#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("p1");
    ClapTrap p2("p2");


    p1.attack("p2");
    p2.takeDamage(p1.getAttackDamage()); // Getters;
    p1.attack("p2");
    p2.takeDamage(p1.getAttackDamage());
    p1.attack("p2");
    p2.beRepaired(5); // Health P2;
    p1.attack("p2");

    p1.attack("p2");

    return (0);
}