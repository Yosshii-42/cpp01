#ifndef REPLACEFILE_H
# define REPLACEFILE_H

# include <iostream>
# include <fstream>
# include <string>


class Replace {
private:
    std::string     _filename;
    std::string     _s1;
    std::string     _s2;

public:
    Replace( std::string filename, std::string s1, std::string s2 );
    ~Replace();
    bool    replacer();
    void    replaceBuffer( std::string buffer, std::ofstream& newFileFd );

} ;

#endif