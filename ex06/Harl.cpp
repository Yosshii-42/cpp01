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
        case INFO:
            _info();
        case WARNING:
            _warning();
        case ERROR:
            _error();
            break;
        default:
            _argError();
            break;
    }
}

