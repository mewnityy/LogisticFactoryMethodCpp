#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::displayLine(int n, char c) const
{
    for (int i = 0; i < n; i++) {
        cout << c;
    }
    cout << endl;
}

void Menu::displayTitle(string title) const
{
    int size = title.size() + 2;
    displayLine(size, '=');
    cout << " " << title << endl;
    displayLine(size, '=');
}

void Menu::demo(BaseLogistic* logistic) const
{
    cout << "Client: I do not know what logistic to use\n";
    cout << "But I want to deliver my cargo to destination point\n";
    cout << logistic->planDelivery();
    delete logistic;
}

void Menu::demoRoadLogistic() const
{
    cout << "\n> Road Logistic Demo:\n";
    demo(new RoadLogistic());
}

void Menu::demoSeaLogistic() const
{
    cout << "\n> Sea Logistic Demo:\n";
    demo(new SeaLogistic());
}

void Menu::demoAirLogistic() const
{
    cout << "\n> Air Logistic Demo:\n";
    demo(new AirLogistic());
}

void Menu::demoRailLogistic() const
{
    cout << "\n> Rail Logistic Demo:\n";
    demo(new RailLogistic());
}