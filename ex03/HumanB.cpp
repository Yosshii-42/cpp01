#include "HumanB.hpp"
#include "HumanA.hpp"

HumanB::HumanB() : name(""), humanA(NULL), weapon(NULL), weaponFlag(0) {}

HumanB::HumanB( std::string newName , HumanA* ptr) 
                 : name(newName), humanA(ptr), weapon(NULL), weaponFlag(0) {
    std::cout << this->name
              << " has arrived on the field"
              << std::endl;
}

HumanB::~HumanB() {
    std::cout << this->name
              << " returned the "
              << this->weapon->getType()
              << " and said, \"Bye\""
              << std::endl;
}

void    HumanB::attack() const {
    if (humanA)
        std::cout << this->name
                  << " attacks with their " 
                  << this->weapon->getType() 
                  << std::endl;
    else
        std::cout << this->name
                  << " cannot attack" << std::endl;
}

void    HumanB::setWeapon( Weapon& newWeapon ) {
    this->weapon = &newWeapon;
    if (humanA == NULL) {
        std::cout << this->name
                  << " couldn't take the "
                  << this->weapon->getType()
                  << std::endl;
        return ;
    }
    if (weaponFlag == 0) {
        std::cout << this->name
                  << " took the "
                  << this->weapon->getType()
                  << std::endl;
        weaponFlag = 1;
    } else {
        std::cout << this->name
                  << " returned the "
                  << this->weapon->getOldType() 
                  << " and took the "
                  << this->weapon->getType()
                 << std::endl; 
    }
}

void    HumanB::setHumanA( HumanA* newHuman ) {
    this->humanA = newHuman;
}
