#pragma once

#include "IVehicle.h"

class VehicleGround : public IVehicle {
public:
    VehicleGround(double speed, double movingTime, double restingTime);

    double calculateRestTime(double distance) const;

    bool isTypeAir() const override;

protected:
    double m_speed{};
    double m_movingTime{};
    double m_restingTime{};
};
