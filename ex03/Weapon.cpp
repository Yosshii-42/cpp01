#include "Weapon.hpp"

Weapon::Weapon() : type("") {}
Weapon::Weapon( std::string newType ) : type(newType) {}
Weapon::~Weapon() {}

Weapon  Weapon::getType( void ) const {
    return (type);
}

void    Weapon::setType( std::string newType) {
    type = newType;
}
