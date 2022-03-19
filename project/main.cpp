#include "headers/utf8.h"
#include "headers/coder.h"
#include <iostream>

int main() {
	std::wstring file;
	std::wstring data;
	coder main_coder;
	utf8 utf;


	std::wcout << "Enter file name: ";
	std::wcin >> file;

	std::wcout << (data = utf.read_file(file)) << std::endl;
	if (data != L"") {
		main_coder.set_source(data);
		main_coder.calc_stats();
		utf.write_file(L"test_fl.txt", data);
	}

	std::cin.get();
	return 0;
}