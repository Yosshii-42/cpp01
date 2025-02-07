#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp" 

class HumanA {
    private:
        std::string _nameA;
        Weapon&     _typeA;
    public:
        HumanA( std::string newName, Weapon& newType );
        ~HumanA();
        void    attack() const; 
} ;

#endif
