// linked-list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "App.h"
#include "AppList.h"

int main()
{
    AppList* appList = new AppList();
    std::auto_ptr<AppList> auto_appList(appList);

    App* app0 = new App();
    app0->SetData("application 0");
    appList->Add(app0);

    App* app1 = new App();
    app1->SetData("application 1");
    appList->Add(app1);

    App* app2 = new App();
    app2->SetData("application 2");
    appList->Add(app2);

    App* app3 = new App();
    app3->SetData("application 3");
    appList->Add(app3);

    App* app4 = new App();
    app4->SetData("application 4");
    appList->Add(app4);

    App* app5 = new App();
    app5->SetData("application 5");
    appList->Add(app5);

    for (unsigned int i = 0, count = appList->GetCount(); i < count; ++i)
    {
        App* app = appList->Get(i);
        std::cout << i << " " << app->GetData() << std::endl;
    }
    
    appList->Remove(0);
    appList->Remove(2);

    std::cout << std::endl;
    for (unsigned int i = 0, count = appList->GetCount(); i < count; ++i)
    {
        App* app = appList->Get(i);
        std::cout << i << " " << app->GetData() << std::endl;
    }

}
