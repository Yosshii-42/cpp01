#include "Harl.hpp"

void    Harl::_debug() {
    std::cout << "I love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-special-"
              << "ketchup burger. I really do!"
              << std::endl;
}
void    Harl::_info() {
    std::cout << "I cannot believe adding extra bacon "
              << "costs more money. You didn’t put "
              << "enough bacon in my burger! If you did,"
              << " I wouldn’t be asking for more!"
              << std::endl;
}
void    Harl::_warning() {
    std::cout << "I think I deserve to have some extra bacon"
              << " for free. I’ve been coming foryears whereas"
              << " you started working here since last month."
              << std::endl;
} 
void    Harl::_error() {
    std::cout << "This is unacceptable! I want to speak to "
              << "he manager now."
              << std::endl;
}
void    Harl::_argError() {
    std::cout << "Argument error"
              << std::endl;
}

Harl::Harl() {
    _levelMap["DEBUG"] = DEBUG;
    _levelMap["INFO"] = INFO;
    _levelMap["WARNING"] = WARNING;
    _levelMap["ERROR"] = ERROR;
}
Harl::~Harl() {}

void    Harl::complain( const std::string& level ) {
    std::map<std::string, int>::iterator it = _levelMap.find(level);
    switch (it->second) {
        case DEBUG:
            _debug();
            break;
        case INFO:
            _info();
            break;
        case WARNING:
            _warning();
            break;
        case ERROR:
            _error();
            break;
        default:
            _argError();
            break;
    }
}

