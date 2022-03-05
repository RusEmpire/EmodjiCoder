#ifndef UTF8_H
#define UTF8_H

#include <fstream>
#include <string> 

class utf8_reader{
private:
    std::string filename;
    std::wstring data;
public:
    utf8_reader();
    ~utf8_reader();

    void read_file(std::string file);

};

#endif
