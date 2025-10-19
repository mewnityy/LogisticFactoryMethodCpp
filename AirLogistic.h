#pragma once
#include "BaseLogistic.h"
#include "Plane.h"

class AirLogistic : public BaseLogistic {
public:
    Transport* createTransport() const override;
};