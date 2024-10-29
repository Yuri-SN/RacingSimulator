#include "VehicleGround.h"

VehicleGround::VehicleGround(const std::string &name, int speed, int movingTime,
                             int restDuration)
    : m_speed(speed), m_movementTime(movingTime), m_restDuration(restDuration) {

    m_name = name;
}

double VehicleGround::getSpeed() const { return m_speed; }

int VehicleGround::getMovementTime() const { return m_movementTime; }
int VehicleGround::getRestDuration() const { return m_restDuration; }

void VehicleGround::setRestDuration(int duration) { m_restDuration = duration; }

bool VehicleGround::isTypeAir() const { return false; }
