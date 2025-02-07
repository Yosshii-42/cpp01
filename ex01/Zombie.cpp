#include "Zombie.hpp"

Zombie::Zombie() : name("") {}
Zombie::Zombie( std::string newName) : name(newName) {}
Zombie::~Zombie() {}

void    Zombie::announce( void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string newName) {
    name = newName;
}
