#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include <map>

class Harl {
private:
<<<<<<< Updated upstream
    std::map<std::string, void (Harl::*)()> _levelMap;
=======
    std::map<std::string, int> _levelMap;
>>>>>>> Stashed changes
    void    _debug();
    void    _info();
    void    _warning();
    void    _error();
    void    _argError();

public:
    Harl();
    ~Harl();
    void    complain( const std::string& level );
} ;

#endif
