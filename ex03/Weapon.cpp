#include "Weapon.hpp"

Weapon::Weapon() : type("") {}
Weapon::Weapon( std::string newType ) : type(newType) {}
Weapon::~Weapon() {}

const std::string  Weapon::getType( void ) const {
    return (type);
}

void    Weapon::setType( std::string newType) {
    type = newType;
    std::cout << "weapon " << type << " have set" << std::endl;
}
