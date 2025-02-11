#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"
# include "HumanA.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon*     _weapon;
        HumanA*     _humanA;
        int         _ifArmed;
    
    public:
        HumanB();
        HumanB( std::string newName , HumanA* humanA);
        ~HumanB();
        void    setWeapon( Weapon& newWeapon );
        void    setHumanA( HumanA* newhumanA);
        void    attack() const;
} ;

#endif
