#include "Menu.h"

int main()
{
    // 1
    Menu* m = new Menu();
    m->displayTitle("Demo of Factory Method");

    // 2 
    m->demoRoadLogistic();
    m->demoSeaLogistic();
    m->demoAirLogistic();  
    m->demoRailLogistic(); 

    // Fin
    delete m;
    cout << "\n\nFinish";
    system("pause");
}