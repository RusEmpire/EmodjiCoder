#ifndef UTF8_H
#define UTF8_H

#include <iostream>
#include <codecvt>
#include <fstream>
#include <sstream>
#include <string> 

class utf8{
public:
    utf8();
    ~utf8();

    std::wstring read_file(std::wstring file);
    int write_file(std::wstring file, std::wstring write_data);
};

#endif
