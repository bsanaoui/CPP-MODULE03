#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

//******************  Ex00 ********************//
    ClapTrap p1("p1");
    ClapTrap p2("p2");


    p1.attack("p2");
    p2.takeDamage(p1.getAttackDamage()); // Getters;
    p1.attack("p2");
    p2.takeDamage(p1.getAttackDamage());
    p1.attack("p2");
    p2.beRepaired(5); // Health P2;
    p1.attack("p2");

//******************  Ex01 ********************//
    p1.attack("p2");
    ScavTrap scavTrap1("CT 1");
    ClapTrap clapTrap2("CT 2");

    clapTrap2.attack("CT 1");
    scavTrap1.takeDamage(clapTrap2.getAttackDamage()); // Getters;

    scavTrap1.guardGate();
    scavTrap1.attack("CT 2");
    clapTrap2.takeDamage(scavTrap1.getAttackDamage());
    clapTrap2.beRepaired(30);
    scavTrap1.attack("CT 2");
    clapTrap2.takeDamage(scavTrap1.getAttackDamage());
    scavTrap1.attack("CT 2");


    return (0);
}