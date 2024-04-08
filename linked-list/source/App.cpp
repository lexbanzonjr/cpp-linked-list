#include "App.h"
using namespace std;

string App::GetData() const
{
	return Data;
}

void App::SetData(string const& Value)
{
	Data = Value;
}