#pragma once

#include "../VehicleGround.h"

class CamelSpeed : public VehicleGround {
public:
    CamelSpeed();

    double calculateTime(double distance) const override;

    std::string getName() const override;
};
