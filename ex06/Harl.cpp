#include "Harl.hpp"

void    Harl::_debug() {
    std::cout << "[DEBUG]" << std::endl << std::endl
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
              << std::endl
              << "I really do!"
              << std::endl << std::endl;
}
void    Harl::_info() {
    std::cout << "[INFO]" << std::endl << std::endl
              << "I cannot believe adding extra bacon costs more money."
              << std::endl
              << "You didn't put enough bacon in my burger!"
              << std::endl
              << "If you did, I wouldn't be asking for more!"
              << std::endl << std::endl;
}
void    Harl::_warning() {
    std::cout << "[WARNING]" << std::endl << std::endl
              << "I think I deserve to have some extra bacon for free."
              << std::endl
              << "I've been coming foryears whereas you started working here since last month."
              << std::endl << std::endl;
} 
void    Harl::_error() {
    std::cout << "[ERROR]" << std::endl << std::endl
              << "This is unacceptable!"
              << std::endl
              << "I want to speak to the manager now."
              << std::endl << std::endl;
}
void    Harl::_argError() {
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
}

Harl::Harl() {
<<<<<<< Updated upstream
    _levelMap["DEBUG"] = &Harl::_debug;
    _levelMap["INFO"] = &Harl::_info;
    _levelMap["WARNING"] = &Harl::_warning;
    _levelMap["ERROR"] = &Harl::_error;
=======
    _levelMap["DEBUG"] = 1;
    _levelMap["INFO"] = 2;
    _levelMap["WARNING"] = 3;
    _levelMap["ERROR"] = 4;
>>>>>>> Stashed changes
}
Harl::~Harl() {}

void    Harl::complain( const std::string& level ) {
<<<<<<< Updated upstream
    std::map<std::string, void (Harl::*)()>::iterator it = _levelMap.find(level);
=======
    std::map<std::string, int>::iterator it = _levelMap.find(level);
>>>>>>> Stashed changes
    if (it == _levelMap.end()) {
        _argError();
        return ;
    }
<<<<<<< Updated upstream
    for (; it != _levelMap.end(); ++it) {
        (this->*it->second)();       
=======
    switch (it->second) {
        case 1:
            _debug();
        case 2:
            _info();
        case 3:
            _warning();
        case 4:
            _error();
            break;
>>>>>>> Stashed changes
    }
}

