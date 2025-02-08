#include "HumanB.hpp"

HumanB::HumanB() : name(""), weapon(NULL) {}
HumanB::HumanB( std::string newName ) : name(newName), weapon(NULL) {}
HumanB::~HumanB() {}

void    HumanB::attack() const {
    if (weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon" << std::endl;
}

void    HumanB::setWeapon( Weapon& newWeapon ) {
    weapon = &newWeapon;
    std::cout << name << " takes weapon" << std::endl; 
}
