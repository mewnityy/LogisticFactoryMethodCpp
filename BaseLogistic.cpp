#include "BaseLogistic.h"

string BaseLogistic::planDelivery() const
{
    Transport *t = createTransport();
    string result = "  Delivery Planning=>  " + t->deliver();
    delete t;
    return result;
}

