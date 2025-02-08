#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon& newWeapon) 
        : name(newName), weapon(newWeapon) {
    std::cout << name << " takes weapon" << std::endl;
        }
HumanA::~HumanA() {}

void    HumanA::attack() const {
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
