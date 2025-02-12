#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp" 

class HumanA {
    private:
        std::string _name;
        Weapon&     _weapon;
    public:
        HumanA( std::string newName, Weapon& newWeapon );
        ~HumanA();
        void    setWeapon( void ) const;
        void    attack() const;
} ;

#endif
