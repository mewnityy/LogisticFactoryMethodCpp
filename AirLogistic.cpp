#include "AirLogistic.h"

Transport* AirLogistic::createTransport() const {
    return new Plane();
}