#include "CamelSpeed.h"

CamelSpeed::CamelSpeed() : VehicleGround("Верблюд-быстроход", 40, 10, 5) {}

void CamelSpeed::setRestDuration(int stopNumber) {
    if (stopNumber == 1) {
        m_restDuration = 5;      // Первое время отдыха
    } else if (stopNumber == 2) {
        m_restDuration = 6.5;    // Второе время отдыха
    } else {
        m_restDuration = 8;      // Все последующие остановки
    }
}
