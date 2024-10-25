#pragma once

#include "../VehicleGround.h"

class AllTerrainBoots : public VehicleGround {
public:
    AllTerrainBoots();

    double calculateTime(double distance) const override;

    std::string getName() const override;
};
