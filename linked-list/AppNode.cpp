#include <iostream>

#include "AppNode.h"

AppNode::AppNode()
	: inherited(new App())
{
}

void AppNode::DoPrint() 
{
	App* data = GetData();
	std::cout << "Data: " << data->;
}
