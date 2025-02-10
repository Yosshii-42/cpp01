#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon& newWeapon) 
        : name(newName), weapon(newWeapon) {
    std::cout << this->name
              << " has arrived on the field and took the "
              << this->weapon.getType()
              << std::endl;
}

HumanA::~HumanA() {
    std::cout << this->name
              << " returned the "
              << this->weapon.getType()
              << " and said, \"Bye\""
              << std::endl;
}

void    HumanA::attack() const {
    std::cout << this->name 
              << " attacks with their " 
              << weapon.getType() 
              << std::endl;
}

void    HumanA::setWeapon( Weapon& newWeapon ) {
    weapon = newWeapon;
    std::cout << this->name 
              << " returnd the "
              << this->weapon.getOldType()
              << " and took the "
              << weapon.getType() 
              << std::endl; 
}

// bool    HumanA::getIfWeapon() {
//     if (weapon)
//         return (true);
//     return (false);
// }
