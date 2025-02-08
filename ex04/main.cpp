#include "handle_files.hpp"

bool    check_args(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "argument error" << std::endl;
        return (false);
    }
    for (int i(0); i < 4; ++i) {
        if (argv[i][0] == '\0') {
            std::cout << "argument error" << std::endl;
            return (false);
        }
    }
    return (true);
}

int main(int argc, char **argv) {
    if (check_args(argc, argv) == false)
        return (1);

    std::ifstream file(argv[1], std::ios::in);
    std::ofstream s1(argv[2], std::ios::app);
    std::ofstream s2(argv[3], std::ios::app);

    if (!file || !s1 || !s2) {
        std::cout << "file open error" << std::endl;
        return (1);
    }

    std::string line;
    while (std::getline(file, line)) {
        s1 << line << std::endl;
        s2 << line << std::endl;
    }
    file.close();
    s1.close();
    s2.close();
    return (0);
}
