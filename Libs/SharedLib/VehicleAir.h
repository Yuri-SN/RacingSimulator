#pragma once

#include "Vehicle.h"

class VehicleAir : public Vehicle {

public:
    VehicleAir(const std::string &name, double speed, double reductionFactor);

    virtual double getSpeed() const override;
    virtual double getDistanceReductionFactor(int raceDistance) const;

    bool isTypeAir() const override;

protected:
    double m_distanceReductionFactor{};

private:
    double m_speed{};
};
