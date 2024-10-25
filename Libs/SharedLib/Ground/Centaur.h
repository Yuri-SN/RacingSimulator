#pragma once

#include "../VehicleGround.h"

class Centaur : public VehicleGround {
public:
    Centaur();

    double calculateTime(double distance) const override;

    std::string getName() const override;
};
