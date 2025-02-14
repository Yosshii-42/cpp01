#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <new>

class Zombie {
private:
    std::string  _name;
public:
    Zombie();
    Zombie( std::string newName );
    ~Zombie();
    void    announce( void );
    void    setName( std::string newName);
};

Zombie* zombieHorde( int N, std::string newName );

#endif
