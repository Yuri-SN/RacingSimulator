#include "VehicleGround.h"

VehicleGround::VehicleGround(double speed, double movingTime,
                             double restingTime)
    : m_speed(speed), m_movingTime(movingTime), m_restingTime(restingTime) {}

double VehicleGround::calculateRestTime(double distance) const {
    double travelTime = distance / m_speed;
    int rests = static_cast<int>(travelTime / m_movingTime);

    return rests * m_restingTime;
}
