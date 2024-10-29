#pragma once

#include "Vehicle.h"

class VehicleGround : public Vehicle {
public:
    VehicleGround(const std::string &name, int speed, int movementTime,
                  int restDuration);

    virtual double getSpeed() const override;
    virtual int getMovementTime() const;
    virtual int getRestDuration() const;
    virtual void setRestDuration(int duration);

    bool isTypeAir() const override;

protected:
    int m_movementTime{};
    double m_restDuration{};

private:
    double m_speed{};
};
