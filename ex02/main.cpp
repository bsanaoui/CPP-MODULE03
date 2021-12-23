#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "// ------------------------ EX00 ------------------------ //\n" << std::endl;
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
    }
    std::cout << "\n// ------------------------ EX01 ------------------------ //\n" << std::endl;
    {
        ScavTrap scavTrap1("ST 1");
        ClapTrap clapTrap2("CT 1");

        clapTrap2.attack("ST 1");
        scavTrap1.takeDamage(clapTrap2.getAttackDamage()); // Getters;

        scavTrap1.guardGate();
        scavTrap1.attack("CT 1");
        clapTrap2.takeDamage(scavTrap1.getAttackDamage());
        clapTrap2.beRepaired(30);
        scavTrap1.attack("CT 1");
        clapTrap2.takeDamage(scavTrap1.getAttackDamage());
        scavTrap1.attack("CT 1");
    }
    std::cout << "\n// ------------------------ EX02 ------------------------ //\n" << std::endl;
    {
        ScavTrap scavTrap1("CT 1");
        FragTrap fragTrap2("CT 2");

        scavTrap1.guardGate();
        scavTrap1.attack("CT 2");
        fragTrap2.takeDamage(scavTrap1.getAttackDamage());

        fragTrap2.beRepaired(40);
        fragTrap2.attack("CT 1");
        scavTrap1.takeDamage(fragTrap2.getAttackDamage());

        fragTrap2.highFivesGuys();
        fragTrap2.attack("CT 1");
        scavTrap1.takeDamage(fragTrap2.getAttackDamage());
    }
    

    return (0);
}