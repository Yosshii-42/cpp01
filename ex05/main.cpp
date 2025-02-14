#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Argument error" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(std::string(argv[1]));
    return (0);
}
