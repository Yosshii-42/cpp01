#include "Zombie.hpp"

int main( void) {
    Zombie* ptr = newZombie("heapZombie");

    ptr->announce();
    randomChump("stackZombie");
    delete ptr;
    return (0);
}
