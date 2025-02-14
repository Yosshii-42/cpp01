#include "Zombie.hpp"

Zombie::Zombie( std::string newName) : _name(newName) {}
Zombie::~Zombie() {
    std::cout << this->_name << " said, \"Bye\"" << std::endl;
}

void    Zombie::announce( void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

