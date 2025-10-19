#pragma once
#include "Transport.h"

class Truck : public Transport
{
public:
	string deliver() const override;
};

