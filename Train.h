#pragma once
#include "Transport.h"

class Train : public Transport {
public:
    string deliver() const override;
};