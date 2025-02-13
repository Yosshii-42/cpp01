#include "HumanB.hpp"
#include "HumanA.hpp"

HumanB::HumanB() : _name(""), _weapon(NULL), _humanA(NULL), _ifArmed(0) {}

HumanB::HumanB( std::string newName , HumanA* newHumanA)
                : _name(newName), _weapon(NULL), _humanA(NULL), _ifArmed(0) {
    this->_humanA = newHumanA;
    std::cout << this->_name
              << " arrives"
              << std::endl;
}

HumanB::~HumanB() {
    std::cout << this->_name
              << " returned the "
              << this->_weapon->getType()
              << " and said, \"Bye\""
              << std::endl;   
}

void    HumanB::attack() const {
    if (this->_humanA) {
        std::cout << this->_name
                  << " attacks with their " 
                  << this->_weapon->getType() 
                  << std::endl;
    } else {
        std::cout << this->_name
            << " cannot attack"
            << std::endl;        
    }
}

void    HumanB::getWeapon( Weapon& newWeapon ) {
    this->_weapon = &newWeapon;
    if (this->_humanA == NULL) {
        std::cout << this->_name
                  << " couldn't take the "
                  << this->_weapon->getType()
                  << std::endl;
        return ;
    }
    if (this->_ifArmed == 0) {
        std::cout << this->_name
                  << " took the "
                  << this->_weapon->getType()
                  << std::endl;
        this->_ifArmed = 1;             
    } else {
        std::cout << this->_name
                  << " returned the "
                  << this->_weapon->getOldType()
                  << " and took the "
                  << this->_weapon->getType()
                  << std::endl;
    }
}

void    HumanB::setHumanA( HumanA* newHumanA)
{
    this->_humanA = newHumanA;
}
