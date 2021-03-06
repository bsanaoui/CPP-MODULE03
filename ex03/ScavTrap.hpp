#ifndef __SCAVTRAP__
#define __SCAVTRAP__
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    // Public Members ------ //
    public:
     // ---------------- Constructors & Destructors ------------- //
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &scav_trap);
    ScavTrap( std::string name);

    // ----------------- Getters & Setters ------------------------ //
    std::string getName( void );
    // ------------------- Members Public functions ---------------- //
    void    guardGate( void );
    void    attack( std::string const & target);

    // ------------------  Operator Overload ----------------------- //
                 //  ***** Assignement ********* //
    ScavTrap    &operator = (ScavTrap const &scav_trap);

};

#endif
