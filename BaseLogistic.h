#pragma once
#include "Transport.h"
class BaseLogistic
{
public:
	string planDelivery() const;
	virtual Transport* createTransport() const = 0;
};

