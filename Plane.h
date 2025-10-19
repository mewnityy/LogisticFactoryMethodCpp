#pragma once
#include "Transport.h"

class Plane : public Transport {
public:
    string deliver() const override;
};