#include "ClapTrap.hpp"

   // ---------------- Constructors & Destructors ------------- //
ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap <" << "Unknown" << "> was created \U0001F468 !!" << std::endl;
    _name = "Unknown";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap <" << this->_name << "> dead !!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
    // std::cout << "Call The Copy Constructor" << std::endl;
    this->_name = clap_trap._name;
    this->_hitPoints = clap_trap._hitPoints;
    this->_energyPoints = clap_trap._energyPoints;
    this->_attackDamage = clap_trap._attackDamage;
}

ClapTrap::ClapTrap( std::string name)
{
    std::cout << "ClapTrap <" << name << "> was created \U0001F468 !!" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

    // ----------------- Getters & Setters ------------------------ //
void        ClapTrap::setAttackDamage( unsigned int const amount )
{
    this->_attackDamage = amount;
}

unsigned int ClapTrap::getAttackDamage ( void ) const
{
    return (this->_attackDamage);
}
    // ------------------- Members Public functions ---------------- //
void    ClapTrap::attack( std::string const & target)
{
    if (this->_energyPoints < this->_attackDamage)
        std::cout << "ClapTrap <" << this->_name
                << "> Does not have enough Energy Points To attack" << std::endl;
    else
    {
        this->_energyPoints -= this->_attackDamage;
        std::cout << "ClapTrap <" << this->_name << "> attack <" << target
                << ">, causing " << this->_attackDamage
                << " points of damage!" << std::endl;
    }

}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_hitPoints < amount)
    {
        this->_hitPoints = 0;
        std::cout << "ClapTrap <" << this->_name << "> take " << amount
                << " of damage !!" << std::endl;
        std::cout << "ClapTrap <" << this->_name << "> passed out  \U0001F480 !!" << std::endl;
    }
    else
    {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap <" << this->_name << "> take " << amount
                << " of damage !!" << std::endl;
    }
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << "ClapTrap <" << this->_name << "> was repaired by " << amount
                << " of hit points \U00002764 !! |" << std::endl;
    this->_hitPoints += amount;
}

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
ClapTrap    &ClapTrap::operator = (ClapTrap const &clap_trap)
{
    // std::cout << "Call The Copy Constructor" << std::endl;
    this->_name = clap_trap._name;
    this->_hitPoints = clap_trap._hitPoints;
    this->_energyPoints = clap_trap._energyPoints;
    this->_attackDamage = clap_trap._attackDamage;
    return (*this);
}
