#pragma once

#include "IVehicle.h"
#include <vector>

class Race {
public:
    Race(double distance);

    void registerVehicle(IVehicle *vehicle);
    void startRace();

private:
    std::vector<IVehicle *> m_vehicles{};
    double m_distance{};
};
