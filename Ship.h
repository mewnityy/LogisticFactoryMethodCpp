#pragma once
#include "Transport.h"
class Ship :public Transport
{
public:
	string deliver() const override;
};

