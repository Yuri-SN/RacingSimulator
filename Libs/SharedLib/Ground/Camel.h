#pragma once

#include "../VehicleGround.h"

class Camel : public VehicleGround {
public:
    Camel();

    void setRestDuration(int stopNumber) override;
};
