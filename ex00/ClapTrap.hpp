#ifndef __CLAPTRAP__
#define __CLAPTRAP__
#include <iostream>

class ClapTrap
{
      // Private Members ----- //
    private:
    std::string         _name;
    unsigned int        _hitPoints;
    unsigned int        _energyPoints;
    unsigned int        _attackDamage;


    // Public Members ------ //
    public:

    // ---------------- Constructors & Destructors ------------- //
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap &clap_trap);
    ClapTrap( std::string name);

    // ----------------- Getters & Setters ------------------------ //
    void         setAttackDamage( unsigned int const amount );
    unsigned int getAttackDamage ( void ) const;

    // ------------------- Members Public functions ---------------- //
    void        attack( std::string const & target);
    void        takeDamage( unsigned int amount );
    void        beRepaired( unsigned int amount );

    // ------------------  Operator Overload ----------------------- //
            //  ***** Assignement ********* //
    ClapTrap    &operator = (ClapTrap const &clap_trap);

};

#endif