#pragma once

#include <string>

class IVehicle {
public:
    virtual ~IVehicle() {}
    virtual std::string getName() const = 0;
    virtual double calculateTime(double distance) const = 0;
    virtual bool isTypeAir() const = 0;
};
