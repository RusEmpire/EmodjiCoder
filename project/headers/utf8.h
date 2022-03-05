#ifndef UTF8_H
#define UTF8_H

#include <fstream>
#include <string> 

class utf8{
private:
    std::string filename;
    std::wstring data;

public:
    utf8();
    ~utf8();

    void read_file(std::string file);

};

#endif
