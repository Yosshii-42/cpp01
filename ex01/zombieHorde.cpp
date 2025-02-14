#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string newName ) {
    if (N <= 0)
        return (NULL);
    Zombie* ptr = new Zombie[N];
    for (int i(0); i < N; ++i) {
        ptr[i].setName(newName);
    }
    return ( ptr );
}
