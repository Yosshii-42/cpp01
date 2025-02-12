#include "Replace.hpp"

bool    checkArgs(int argc, char **argv) {
    if (argc != 4 || !argv[2][0]) {
        std::cerr << "argument error" << std::endl;
        return (false);
    }
    return (true);
}

int main(int argc, char **argv) {
    if (checkArgs(argc, argv) == false)
        return (1);
    Replace replace(argv[1], argv[2], argv[3]);
    if (!replace.replacer())
        return (1);
    return (0);
}
