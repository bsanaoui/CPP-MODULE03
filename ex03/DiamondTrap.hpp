#ifndef __DIAMONDTRAP__
#define __DIAMONDTRAP__
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
    // Private Members ------ //
    private:
    std::string _name;

    // Public Members ------ //
    public:
     // ---------------- Constructors & Destructors ------------- //
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &daimond_trap);
    DiamondTrap( std::string name);

    // ----------------- Getters & Setters ------------------------ //

    // ------------------- Members Public functions ---------------- //
    void    attack( std::string const & target );
    void    whoAmI( void );
    // ------------------  Operator Overload ----------------------- //
                 //  ***** Assignement ********* //
    DiamondTrap    &operator = (DiamondTrap const &daimond_trap);

};

#endif
