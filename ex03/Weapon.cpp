#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon() : _type(""), _oldType("") {}
Weapon::Weapon( std::string newType)
                 : _type(newType), _oldType("") {
    std::cout << "\nVillagers have placed the weapon \""
              << this->_type
              << "\" on the field"
              << std::endl;
                 }
Weapon::~Weapon() {
    std::cout << "Villagers put away";
    if (this->_oldType != "")
        std::cout << " weapons" << std::endl;
    else
        std::cout << " the weapon" << std::endl;
}

const std::string   Weapon::getType( void ) const {
    return (this->_type);
}

const std::string   Weapon::getOldType( void ) const {
    return (this->_oldType);
}

void    Weapon::setType( std::string newType) {
    this->_oldType = this->_type;
    this->_type = newType;
    std::cout << "The weapon \""
              << this->_oldType 
              << "\" has been removed and replaced with \""
              << this->_type
              << "\""
              << std::endl;
}
