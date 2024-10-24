#pragma once

#include "../../VehicleType.h"

class IVechicle {
public:
    IVechicle();

    bool isGround();

private:
    VehicleType m_type{};
    int m_speed{};
};
