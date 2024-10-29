#pragma once

#include <string>

class Vehicle {
public:
    virtual ~Vehicle() {}

    virtual double getSpeed() const = 0;
    virtual bool isTypeAir() const = 0;

    std::string getName() const { return m_name; }

protected:
    std::string m_name{};
};
