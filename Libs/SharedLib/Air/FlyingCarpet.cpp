#include "FlyingCarpet.h"

FlyingCarpet::FlyingCarpet() : VehicleAir(10) {}

double FlyingCarpet::calculateTime(double distance) const {
    double actualDistance = calculateDistance(distance);

    return actualDistance / m_speed;
}

std::string FlyingCarpet::getName() const { return "Ковёр-самолёт"; }
