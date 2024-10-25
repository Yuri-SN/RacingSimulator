#pragma once

#include <string>

class IVehicle {
public:
    virtual ~IVehicle() {}
    virtual double calculateTime(double distance) const = 0;
    virtual std::string getName() const = 0;
};
