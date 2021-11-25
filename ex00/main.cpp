#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("p1");
    ClapTrap p2("p2");

    p1.attack("p2");
    p1.setAttackDamage(5);
    p1.attack("p2");
    p2.takeDamage(4); // getters;
    p1.beRepaired(5);
    


    return (0);
}