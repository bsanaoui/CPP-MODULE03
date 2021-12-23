#include "DiamondTrap.hpp"

   // ---------------- Constructors & Destructors ------------- //
DiamondTrap::DiamondTrap()
{
    // std::cout << "Call The Default Constructor" << std::endl;

    this->_name = "Unknown DiamondTrap";
    ScavTrap::_name = "Unknown ScavTrap";
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap <" << this->_name << "> dead !!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & daimond_trap)
{
    // std::cout << "Call The Copy Constructor" << std::endl;
    this->_name = daimond_trap._name;
    this->_hitPoints = daimond_trap._hitPoints;
    this->_energyPoints = daimond_trap._energyPoints;
    this->_attackDamage = daimond_trap._attackDamage;
}

DiamondTrap::DiamondTrap( std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap <" << name << "> was created \U0001F468 !!" << std::endl;
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage =  FragTrap::_attackDamage;
}

// ----------------- Getters & Setters ------------------------ //

    // ------------------- Members Public functions ---------------- //
void    DiamondTrap::attack( std::string const & target )
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI( void )

{
    std::cout << "My DiamondTrap name is <" << this->_name << "> and my ClapTrap name is <"
                << ClapTrap::_name << "> "<< std::endl;
}

    // ------------------  Operator Overload ----------------------- //
                 //  ***** Assignement ********* //
DiamondTrap    &DiamondTrap::operator = (DiamondTrap const &daimond_trap)
{
    this->_name = daimond_trap._name;
    this->_hitPoints = daimond_trap._hitPoints;
    this->_energyPoints = daimond_trap._energyPoints;
    this->_attackDamage = daimond_trap._attackDamage;
    return (*this);
}
