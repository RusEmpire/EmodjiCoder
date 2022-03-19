#ifndef CODER_H
#define CODER_H

#include <iostream>
#include <string>
#include <map>

class analyzer {
private:
	std::map<wchar_t, int> freq_data;

public:
	analyzer();
	~analyzer();

	void analyze(std::wstring& src);
#ifdef _DEBUG
	void display();
#endif

};

class coder {
private:
	std::wstring* source;
	analyzer analyze_data;

public:
	coder();
	~coder();

	void calc_stats();

	void set_source(std::wstring& src);
	std::wstring& get_source();
};

#endif