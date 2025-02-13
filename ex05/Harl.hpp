#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include <map>

class Harl {
private:
    enum level {
        DEBUG = 1,
        INFO,
        WARNING,
        ERROR
    };
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
