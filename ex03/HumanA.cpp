#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon& newType) 
        : _nameA(newName), _typeA(newType) {}

HumanA::~HumanA() {}

void    HumanA::attack( void ) const {
    std::cout << this->_nameA << " attacks with their " << _typeA.getType() << std::endl;
}
