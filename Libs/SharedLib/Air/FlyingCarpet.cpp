#include "FlyingCarpet.h"

FlyingCarpet::FlyingCarpet()
    : VehicleAir("Ковёр-самолёт", 10, 0) {}

double FlyingCarpet::getDistanceReductionFactor(int raceDistance) const {
    if (raceDistance < 1000) {
        return 0;  // Без сокращения
    } else if (raceDistance < 5000) {
        return 0.03;  // Сокращение на 3%
    } else if (raceDistance < 10000) {
        return 0.10;  // Сокращение на 10%
    } else {
        return 0.05;  // Если расстояние больше или равно 10000 км, сокращение на 5%
    }
}
