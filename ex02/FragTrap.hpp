#ifndef __FRAGTRAP__
#define __FRAGTRAP__
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    // Public Members ------ //
    public:
     // ---------------- Constructors & Destructors ------------- //
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &scav_trap);
    FragTrap( std::string name);

    // ----------------- Getters & Setters ------------------------ //
    std::string getName( void );
    // ------------------- Members Public functions ---------------- //
    void    highFivesGuys( void );

    // ------------------  Operator Overload ----------------------- //
                 //  ***** Assignement ********* //
    FragTrap    &operator = (FragTrap const &frag_trap);

};

#endif
