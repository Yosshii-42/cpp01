#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
    private:
        std::string type;
        std::string oldType;
    public:
        Weapon();
        Weapon( std::string newType );
        ~Weapon();
        const std::string  getType( void ) const;
        const std::string  getOldType( void ) const;
        void    setType( std::string type );
} ;

#endif
