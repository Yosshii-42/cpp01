#include "Harl.hpp"

void    Harl::_debug() {
    std::cout << "[DEBUG]" << std::endl
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
              << std::endl
              << "I really do!"
              << std::endl;
}

void    Harl::_info() {
    std::cout << "[INFO]" << std::endl
              << "I cannot believe adding extra bacon costs more money."
              << std::endl
              << "You didn't put enough bacon in my burger!"
              << std::endl
              << "If you did, I wouldn't be asking for more!"
              << std::endl;
}

void    Harl::_warning() {
    std::cout << "[WARNING]" << std::endl
              << "I think I deserve to have some extra bacon for free."
              << std::endl
              << "I've been coming foryears whereas you started working here since last month."
              << std::endl;
}

void    Harl::_error() {
    std::cout << "[ERROR]" << std::endl
              << "This is unacceptable!"
              << std::endl
              << "I want to speak to the manager now."
              << std::endl;
}

void    Harl::_argError() {
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
}

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::complain( const std::string& level ) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void    (Harl::*func[])() = {
        &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error
    };

    for (int i(0); i < 4; ++i) {
        if (levels[i] == level) {
            for (int j(i); j < 4; ++j)
                (this->*func[j])();
            break ;
        }
    }
    this->_argError();
}

