#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>

class HumanB {
    private:
        std::string name;
        std::string Weapon;
    
        void    attack( std::string name, std::string Weapon ) const;
    public:
        HumanB();
        HumanB( std::string Weapon );
        ~HumanB();
} ;

#endif
