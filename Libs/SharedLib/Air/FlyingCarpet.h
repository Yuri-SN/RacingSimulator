#pragma once

#include "../VehicleAir.h"

class FlyingCarpet : public VehicleAir {
public:
    FlyingCarpet();

    double calculateTime(double distance) const override;

    std::string getName() const override;
};
