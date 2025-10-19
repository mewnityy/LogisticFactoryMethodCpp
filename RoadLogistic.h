#pragma once
#include "BaseLogistic.h"
#include "Truck.h"
class RoadLogistic : public BaseLogistic
{
public:
	Transport* createTransport() const override;
};

