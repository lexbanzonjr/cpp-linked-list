#pragma once
#ifndef APPNODE
#define APPNODE
#include <String>
#include "App.h"
#include "Node.h"


class AppNode : public Node<App>
{
private:
	typedef Node<App> inherited;

protected: // implementation for ancestor
	void DoPrint();

public:
	AppNode();
};

#endif // #endif APPNODE