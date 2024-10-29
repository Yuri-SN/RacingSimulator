#include "VehicleAir.h"

VehicleAir::VehicleAir(const std::string &name, double speed,
                       double reductionFactor)
    : m_speed{speed}, m_distanceReductionFactor{reductionFactor} {

    m_name = name;
}

double VehicleAir::getSpeed() const { return m_speed; }

double VehicleAir::getDistanceReductionFactor(int raceDistance) const { return m_distanceReductionFactor; }

bool VehicleAir::isTypeAir() const { return true; }
