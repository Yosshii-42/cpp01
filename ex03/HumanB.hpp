#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon*     weapon;;
    
    public:
        HumanB();
        HumanB( std::string newName );
        ~HumanB();
        void    attack() const;
        void    setWeapon( Weapon& newWeapon );
} ;

#endif
