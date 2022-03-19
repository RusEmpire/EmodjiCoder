#include "../headers/utf8.h"

utf8::utf8() {}
utf8::~utf8() {}

std::wstring utf8::read_file(std::wstring file){
    std::wifstream wif(file);    
    std::wstring data;

    if (wif.is_open()) {
        std::wstringstream wss;
        wss << wif.rdbuf();
        data = wss.str();
    }
    else
        return L"";

    return data;
}

int utf8::write_file(std::wstring file, std::wstring write_data) {
    std::wofstream wof(file, std::ios::app | std::ios::out);
    
    if (wof.is_open()) {
        std::wstringstream wss;
        wof << write_data;
    }
    else
        return -1;

    return 0;
}