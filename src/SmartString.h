#pragma once
#include <string>
#include <vector>

#ifdef SMARTSTRING_EXPORTS
#define SMARTSTRING_API __declspec(dllexport)
#else
#define SMARTSTRING_API __declspec(dllimport)
#endif

class SMARTSTRING_API SmartString: public std::string
{
public:
	SmartString(const std::string& str);

	std::vector<std::string> split(const std::string &sep);

	void trim(char c = ' ');
	void trimLeft(char c = ' ');
	void trimRight(char c = ' ');
	std::string trimmed(char c = ' ');

private:

};

