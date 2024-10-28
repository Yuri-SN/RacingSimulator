#include "VehicleAir.h"

VehicleAir::VehicleAir(double speed) : m_speed{speed} {}

double VehicleAir::calculateDistance(double distance) const {
    if (distance < 1000) return distance;
    if (distance < 5000) return distance * 0.97;
    if (distance < 10000) return distance * 0.90;

    return distance * 0.95;
}

bool VehicleAir::isTypeAir() const {
    return true;
}
