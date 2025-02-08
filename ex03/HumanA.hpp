#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp" 

class HumanA {
    private:
        std::string name;
        Weapon&     weapon;
    public:
        HumanA( std::string newName, Weapon& newWeapon );
        ~HumanA();
        void    attack() const; 
} ;

#endif
