#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon& newWeapon ) 
                : _name(newName), _weapon(newWeapon) {
    std::cout << this->_name
              << " has arrived on the field and took the "
              << this->_weapon.getType()
              << std::endl;
        }
HumanA::~HumanA() {
    std::cout << this->_name
              << " returned the "
              << this->_weapon.getType()
              << " and said, \"Bye\""
              << std::endl;
}

void    HumanA::setWeapon() const {
    std::cout << this->_name
              << " return the "
              << this->_weapon.getOldType()
              << " and took the "
              << this->_weapon.getType()
              << std::endl; 
}

void    HumanA::attack() const {
    std::cout << this->_name 
              << " attacks with their "
              << this->_weapon.getType() 
              << std::endl;
}

// std::string HumanA::getName() const {
//     return (this->_name);
// }
