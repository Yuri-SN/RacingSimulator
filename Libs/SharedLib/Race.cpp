#include "Race.h"
#include <algorithm>
#include <iostream>

Race::Race(double distance) : m_distance(distance) {}

void Race::registerVehicle(IVehicle *vehicle) { m_vehicles.push_back(vehicle); }

void Race::startRace() {
    std::vector<std::pair<std::string, double>> results;

    for (auto *vehicle : m_vehicles) {
        double time = vehicle->calculateTime(m_distance);
        results.push_back({vehicle->getName(), time});
    }

    std::sort(results.begin(), results.end(),
              [](const auto &a, const auto &b) { return a.second < b.second; });

    for (const auto &result : results) {
        std::cout << result.first << ": " << result.second << " ч" << std::endl;
    }
}
