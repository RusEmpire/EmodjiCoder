#include "../headers/coder.h"

coder::coder() : source(nullptr) {}

coder::~coder() {}

void coder::calc_stats() {
	analyze_data.analyze(*source);
#ifdef _DEBUG
	analyze_data.display();
#endif
}

void coder::set_source(std::wstring& src) {
	source = &src;
}

std::wstring& coder::get_source() {
	return *source;
}

analyzer::analyzer() {}
analyzer::~analyzer() {}

void analyzer::analyze(std::wstring& src) {
	for (int i = 0; i < src.length(); ++i) {
		if (freq_data.find(src[i]) == freq_data.end())
			freq_data[src[i]] = 1;
		else
			++freq_data[src[i]];
	}
}

#ifdef _DEBUG
void analyzer::display() {
	for (auto item : freq_data) {
		std::wcout << L"[wchar_t] = " << item.first << "\t"
			<< L"[count] = " << item.second << std::endl;
	}
}
#endif
