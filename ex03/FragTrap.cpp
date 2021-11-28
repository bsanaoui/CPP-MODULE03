#include "FragTrap.hpp"

   // ---------------- Constructors & Destructors ------------- //
FragTrap::FragTrap() : ClapTrap()
{
    // std::cout << "Call The Default Constructor" << std::endl;
    _name = "Unknown";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap <" << this->_name << "> dead !!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag_trap) : ClapTrap(frag_trap)
{
    // std::cout << "Call The Copy Constructor" << std::endl;
    this->_name = frag_trap._name;
    this->_hitPoints = frag_trap._hitPoints;
    this->_energyPoints = frag_trap._energyPoints;
    this->_attackDamage = frag_trap._attackDamage;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap <" << name << "> was created \U0001F468 !!" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

// ----------------- Getters & Setters ------------------------ //
std::string FragTrap::getName( void )
{
    return (this->_name);
}
    // ------------------- Members Public functions ---------------- //

void    FragTrap::highFivesGuys( void )
{
    std::cout << "high Fives Guys!!" << std::endl;
}

    // ------------------  Operator Overload ----------------------- //
                 //  ***** Assignement ********* //
FragTrap    &FragTrap::operator = (FragTrap const &frag_trap)
{
    this->_name = frag_trap._name;
    this->_hitPoints = frag_trap._hitPoints;
    this->_energyPoints = frag_trap._energyPoints;
    this->_attackDamage = frag_trap._attackDamage;
    return (*this);
}