#include "SeaLogistic.h"

Transport* SeaLogistic::createTransport() const
{
    return new Ship();
}
