#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon();
        Weapon( std::string newType );
        ~Weapon();
        Weapon  getType( void ) const;
        void    setType( std::string type );
} ;

#endif
