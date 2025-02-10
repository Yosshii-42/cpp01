#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"
# include "HumanA.hpp"

class HumanB {
    private:
        std::string name;
        HumanA*     humanA;
        Weapon*     weapon;
        int         weaponFlag;
    
    public:
        HumanB();
        HumanB( std::string newName , HumanA* ptr);
        ~HumanB();
        void    setWeapon( Weapon& newWeapon );
        void    setHumanA( HumanA* newHuman );
        void    attack() const;
} ;

#endif
