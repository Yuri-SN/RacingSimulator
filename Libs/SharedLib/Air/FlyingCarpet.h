#pragma once

#include "../VehicleAir.h"

class FlyingCarpet : public VehicleAir {
public:
    FlyingCarpet();

    double getDistanceReductionFactor(int raceDistance) const override;
};
