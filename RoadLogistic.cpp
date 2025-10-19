#include "RoadLogistic.h"

Transport* RoadLogistic::createTransport() const
{
    return new Truck();
}
