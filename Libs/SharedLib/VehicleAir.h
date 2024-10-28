#pragma once

#include "IVehicle.h"

class VehicleAir : public IVehicle {

public:
    VehicleAir(double speed);

    double calculateDistance(double distance) const;

    bool isTypeAir() const override;

protected:
    double m_speed{};
};
