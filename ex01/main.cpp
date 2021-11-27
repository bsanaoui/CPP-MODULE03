#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap1("CT 1");
    ClapTrap clapTrap2("CT 2");


    clapTrap2.attack("CT 1");
    scavTrap1.takeDamage(clapTrap2.getAttackDamage()); // Getters;
    scavTrap1.attack("CT 2");
    clapTrap2.takeDamage(scavTrap1.getAttackDamage());
    clapTrap2.beRepaired(30);
    scavTrap1.attack("CT 2");
    clapTrap2.takeDamage(scavTrap1.getAttackDamage());
    scavTrap1.attack("CT 2");
    return (0);
}