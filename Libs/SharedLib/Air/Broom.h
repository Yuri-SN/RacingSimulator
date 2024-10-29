#pragma once

#include "../VehicleAir.h"

class Broom : public VehicleAir {
public:
    Broom();

    double getDistanceReductionFactor(int raceDistance) const override;
};
