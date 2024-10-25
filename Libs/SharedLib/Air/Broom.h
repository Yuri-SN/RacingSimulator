#pragma once

#include "../VehicleAir.h"

class Broom : public VehicleAir {
public:
    Broom();

    double calculateTime(double distance) const override;

    std::string getName() const override;
};
