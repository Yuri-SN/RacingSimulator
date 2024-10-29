#pragma once

#include "../VehicleGround.h"

class AllTerrainBoots : public VehicleGround {
public:
    AllTerrainBoots();

    void setRestDuration(int stopNumber) override;
};
