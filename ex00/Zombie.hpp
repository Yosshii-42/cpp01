#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <new>

class Zombie {
private:
    std::string  _name;
public:
    Zombie( std::string nweName );
    ~Zombie();
    void announce( void );
};

Zombie* newZombie( std::string newName );
void    randomChump( std::string newName );

#endif
