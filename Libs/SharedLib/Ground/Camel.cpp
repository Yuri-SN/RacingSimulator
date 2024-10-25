#include "Camel.h"

Camel::Camel() : VehicleGround(10, 30, 5) {}

double Camel::calculateTime(double distance) const {
    double travelTime = distance / m_speed;
    double restTime = calculateRestTime(distance);

    return travelTime + restTime;
}

std::string Camel::getName() const { return "Верблюд"; }
