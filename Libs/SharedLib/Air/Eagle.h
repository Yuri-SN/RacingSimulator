#pragma once

#include "../VehicleAir.h"

class Eagle : public VehicleAir {
public:
    Eagle();

    double calculateTime(double distance) const override;

    std::string getName() const override;
};
