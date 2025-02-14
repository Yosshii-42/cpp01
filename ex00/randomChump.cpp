#include "Zombie.hpp"

void    randomChump( std::string newName ) {
    Zombie  random(newName);

    random.announce();
}
