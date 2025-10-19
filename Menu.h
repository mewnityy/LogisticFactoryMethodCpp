#pragma once
#include "BaseLogistic.h"
#include "RoadLogistic.h"
#include "SeaLogistic.h"
#include "AirLogistic.h"
#include "RailLogistic.h"

class Menu
{
public:
    void displayLine(int n, char c) const;
    void displayTitle(string title) const;
    void demo(BaseLogistic* logistic) const;
    void demoRoadLogistic() const;
    void demoSeaLogistic() const;
    void demoAirLogistic() const;
    void demoRailLogistic() const;
};