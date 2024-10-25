#pragma once

#include "../VehicleGround.h"

class Camel : public VehicleGround {
public:
    Camel();

    double calculateTime(double distance) const override;

    std::string getName() const override;
};
