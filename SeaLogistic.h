#pragma once
#include "BaseLogistic.h"
#include "Ship.h"
class SeaLogistic : public BaseLogistic
{
public:
	Transport* createTransport() const override;
};

