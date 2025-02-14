#include "Zombie.hpp"

int main( void) {
    int N = 10;
    Zombie* ptr = zombieHorde(N, "heapZombie");

    for (int i(0); i < N; ++i)
        ptr[i].announce();
    delete[] ptr;

    return (0);
}
