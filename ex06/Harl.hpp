#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include <map>

class Harl {
private:
    std::map<std::string, int> _levelMap;
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
