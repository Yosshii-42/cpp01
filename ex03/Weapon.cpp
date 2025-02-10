#include "Weapon.hpp"

Weapon::Weapon() : type(""), oldType("") {}
Weapon::Weapon( std::string newType ) 
                 : type(newType), oldType("") {
    std::cout << "\nVillagers have placed the weapon \""
              << this->type
              << "\" on the field"
              << std::endl;
}
Weapon::~Weapon() {
    std::cout << "Villagers put away the "
              << this->type
              << std::endl << std::endl;
}

const std::string  Weapon::getType( void ) const {
    return (type);
}

const std::string Weapon::getOldType( void ) const {
    return (oldType);
}

void    Weapon::setType( std::string newType) {
    oldType = type;
    type = newType;
    std::cout << "The weapon \"" 
              << this->oldType 
              << "\" has been removed and replaced with \"" 
              << this->type
              << "\""
              << std::endl;
}
