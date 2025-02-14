#include "Zombie.hpp"

Zombie* newZombie( std::string newName ) {
    return (new Zombie(newName));
}
