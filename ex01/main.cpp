#include "Zombie.hpp"

int main( void) {
    Zombie* ptr = zombieHorde(10, "heapZombie");

    for (int i(0); i < 10; ++i)
        ptr[i].announce();
    delete[] ptr;

    return (0);
}
