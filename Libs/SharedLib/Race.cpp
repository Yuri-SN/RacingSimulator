#include "Race.h"

Race::Race(RaceType type) : m_type{type} {}

std::vector<IVechicle> Race::getVehicles() {
    return m_vehicles;
}

bool Race::addVehicle() {
    return false;
}
