#include "Replace.hpp"

Replace::Replace( std::string filename, std::string s1, std::string s2 ) 
    : _filename(filename), _s1(s1), _s2(s2) {
}

Replace::~Replace() {}

void Replace::replaceBuffer( std::string buffer, std::ofstream& newFileFd ) {
    size_t          pos;
    size_t          found;
    std::string     newBuffer;

    pos = 0;
    while (pos < buffer.length()) {
        found = buffer.find(this->_s1, pos);
        if (found == std::string::npos) {
            newBuffer += buffer.substr(pos);
            break ;
        }
        newBuffer += buffer.substr(pos, found - pos);
        newBuffer += this->_s2;
        pos = found + this->_s1.length();
    }
    newFileFd << newBuffer;
}

bool    Replace::replacer() {
    std::string     newFile = this->_filename + ".replace";
    std::string     buffer;
    std::ifstream   fileFd(this->_filename.c_str(), std::ios::in);
    std::ofstream   newFileFd(newFile.c_str(), std::ios::out);

    if (!fileFd || !newFileFd) {
        std::cerr << "file open error" << std::endl;
        return (false);
    }
    char    c;

    fileFd >> std::noskipws;
    while (fileFd >> c)
        buffer += c;
    replaceBuffer(buffer, newFileFd);
    fileFd.close();
    newFileFd.close();
    return (true);
}
