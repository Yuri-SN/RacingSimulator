#include "IVechicle.h"

IVechicle::IVechicle() {}

bool IVechicle::isGround() {
    return m_type == VehicleType::GROUND;
}
