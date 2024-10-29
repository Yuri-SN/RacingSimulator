#pragma once

#include "../VehicleGround.h"

class CamelSpeed : public VehicleGround {
public:
    CamelSpeed();

    void setRestDuration(int stopNumber) override;
};
