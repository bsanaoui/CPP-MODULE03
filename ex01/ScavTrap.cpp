#include "ScavTrap.hpp"

   // ---------------- Constructors & Destructors ------------- //
ScavTrap::ScavTrap() : ClapTrap()
{
    // std::cout << "Call The Default Constructor" << std::endl;
    _name = "Unknown";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap <" << this->_name << "> dead !!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap) : ClapTrap(scav_trap)
{
    // std::cout << "Call The Copy Constructor" << std::endl;
    this->_name = scav_trap._name;
    this->_hitPoints = scav_trap._hitPoints;
    this->_energyPoints = scav_trap._energyPoints;
    this->_attackDamage = scav_trap._attackDamage;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap <" << name << "> was created \U0001F468 !!" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

// ----------------- Getters & Setters ------------------------ //
std::string ScavTrap::getName( void )
{
    return (this->_name);
}
    // ------------------- Members Public functions ---------------- //

void    ScavTrap::attack( std::string const & target)
{
    if (this->_energyPoints < this->_attackDamage)
        std::cout << "ScavTrap <" << this->_name
                << "> Does not have enough Energy Points To attack" << std::endl;
    else
    {
        this->_energyPoints -= this->_attackDamage;
        std::cout << "ScavTrap <" << this->_name << "> attack <" << target
                << ">, causing " << this->_attackDamage
                << " points of damage!" << std::endl;
    }

}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap <" << this->_name << "> have enterred in Gate keeper mode !" << std::endl;
}

    // ------------------  Operator Overload ----------------------- //
                 //  ***** Assignement ********* //
ScavTrap    &ScavTrap::operator = (ScavTrap const &scav_trap)
{
    this->_name = scav_trap._name;
    this->_hitPoints = scav_trap._hitPoints;
    this->_energyPoints = scav_trap._energyPoints;
    this->_attackDamage = scav_trap._attackDamage;
    return (*this);
}