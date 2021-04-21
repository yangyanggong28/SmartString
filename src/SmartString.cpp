#include "pch.h"
#include "SmartString.h"
#include <string>
#include <vector>

SmartString::SmartString(const std::string &str): std::string(str) {}

std::string getStr(SmartString& str, const std::string& sep)
{
	std::string out;
	size_t pos = str.find(sep);
	if (pos == std::string::npos) {
		return str;
	}
	out = str.substr(0, pos);
	str = str.substr(pos);
	return out;
}


std::vector<std::string> SmartString::split(const std::string& sep)
{	
	std::vector<std::string> spiltStr;
	std::string numStr;
	while (numStr != *this) {
		numStr = getStr(*this, sep);		
		spiltStr.push_back(numStr);		
	}
	return spiltStr;
}

void SmartString::trim(char c)
{
	trimLeft();
	trimRight();
}

void SmartString::trimLeft(char c)
{	
	for (int i = 0; i < this->size(); ++i) {
		if ((*this)[i] != c) {
			*this = this->substr(i);
			break;
		}
		if (!isspace((*this)[i])) {
			*this = this->substr(i);
			break;
		}
	}	
}

void SmartString::trimRight(char c)
{
	for (int i = this->size()-1; i > 0; --i) {
		if ((*this)[i] != c) {
			*this = this->substr(0,i+1);
			break;
		}
		if (!isspace((*this)[i])) {
			*this = this->substr(0, i + 1);
			break;
		}
	}
}

std::string SmartString::trimmed(char c)
{
	trim();
	return *this;
}