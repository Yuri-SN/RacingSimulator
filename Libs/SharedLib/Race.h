#pragma once

#include <vector>

#include "../../RaceType.h"
#include "IVechicle.h"

class Race {
public:
    Race(RaceType type);

    std::vector<IVechicle> getVehicles();
    bool addVehicle();

private:
    RaceType m_type{};
    std::vector<IVechicle> m_vehicles{};
};
