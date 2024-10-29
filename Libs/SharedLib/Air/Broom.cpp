#include "Broom.h"

Broom::Broom() : VehicleAir("Метла", 20, 0) {}

double Broom::getDistanceReductionFactor(int raceDistance) const {
    return (raceDistance / 1000) * 0.01;   // Коэффициент увеличивается на 1% за каждые 1000 единиц расстояния
}
