#pragma once
#ifndef APPLIST
#define APPLIST

#include "App.h"
#include "LinkedList.h"

class AppList : public LinkedList<App>
{
private:
	typedef LinkedList<App> inherited;

public:
	AppList();
};

#endif // #ifndef APPLINKEDLIST