#include "Race.h"
#include <algorithm>
#include <iostream>

Race::Race() {}

void Race::clean() {
    m_vehicles = {};
    m_raceType = {};
    m_raceDistance = 0;
}

bool Race::setRaceType(int type) {
    RaceType raceTypeEnum = static_cast<RaceType>(type);

    if (m_validRaceTypes.find(raceTypeEnum) != m_validRaceTypes.end()) {
        m_raceType = raceTypeEnum;

        return true;
    } else {
        return false;
    }
}

bool Race::setRaceDistance(int distance) {
    if (distance > 0) {
        m_raceDistance = distance;

        return true;
    } else {
        return false;
    }
}

std::string Race::getRaceParams() {
    std::string result{};

    switch (m_raceType) {
    case RaceType::GROUND:
        result = "Гонка для наземного транспорта. ";
        break;
    case RaceType::AIR:
        result = "Гонка для воздушного транспорта. ";
        break;
    case RaceType::GROUND_AND_AIR:
        result = "Гонка для наземного и воздушного транспорта. ";
        break;
    default:
        result = "Ошибка. ";
        break;
    }

    result = result + "Расстояние: " + std::to_string(m_raceDistance);

    return result;
}

void Race::registerVehicle(IVehicle *vehicle) { m_vehicles.push_back(vehicle); }

void Race::startRace() {
    std::vector<std::pair<std::string, double>> results;

    for (auto *vehicle : m_vehicles) {
        double time = vehicle->calculateTime(m_raceDistance);
        results.push_back({vehicle->getName(), time});
    }

    std::sort(results.begin(), results.end(),
              [](const auto &a, const auto &b) { return a.second < b.second; });

    for (const auto &result : results) {
        std::cout << result.first << ": " << result.second << " ч" << std::endl;
    }
}
