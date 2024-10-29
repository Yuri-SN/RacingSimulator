#include "Camel.h"

Camel::Camel() : VehicleGround("Верблюд", 10, 30, 5) {}

void Camel::setRestDuration(int stopNumber) {
    if (stopNumber == 1) {
        m_restDuration = 5;
    } else {
        m_restDuration = 8;
    }
}
