#include "AllTerrainBoots.h"

AllTerrainBoots::AllTerrainBoots()
    : VehicleGround("Ботинки-вездеходы", 6, 60, 10) {}

void AllTerrainBoots::setRestDuration(int stopNumber) {
    if (stopNumber == 1) {
        m_restDuration = 10;  // Первое время отдыха
    } else {
        m_restDuration = 5;   // Все последующие остановки
    }
}
