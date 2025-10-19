#pragma once
#include "BaseLogistic.h"
#include "Train.h"

class RailLogistic : public BaseLogistic {
public:
    Transport* createTransport() const override;
};