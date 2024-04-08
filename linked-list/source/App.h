#pragma once
#ifndef APP
#define APP
#include <string>

class App
{
private:
	std::string Data;

public:
	std::string GetData() const;
	void SetData(std::string const& Value);
};


#endif // #ifndef APP