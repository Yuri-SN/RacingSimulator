#include "Race.h"
#include "Air/Broom.h"
#include "Air/Eagle.h"
#include "Air/FlyingCarpet.h"
#include "Ground/AllTerrainBoots.h"
#include "Ground/Camel.h"
#include "Ground/CamelSpeed.h"
#include "Ground/Centaur.h"
#include <algorithm>
#include <iostream>

Race::Race() {
    m_availableVehicles.push_back(new AllTerrainBoots());
    m_availableVehicles.push_back(new Broom());
    m_availableVehicles.push_back(new Camel());
    m_availableVehicles.push_back(new Centaur());
    m_availableVehicles.push_back(new Eagle());
    m_availableVehicles.push_back(new CamelSpeed());
    m_availableVehicles.push_back(new FlyingCarpet());
}

void Race::clean() {
    m_registeredVehicles = {};
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

int Race::getVehiclesCount() { return m_registeredVehicles.size(); }

std::vector<IVehicle *> Race::getAvailableVahicles() {
    return m_availableVehicles;
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

std::string Race::getRegisteredVehicles() {
    std::string result{};

    if (!m_registeredVehicles.empty()) {
        result = "Зарегистрированные транспортные средства: ";

        for (auto vehicle : m_registeredVehicles) {
            result += vehicle->getName();

            if (vehicle != m_registeredVehicles.back()) {
                result += ", ";
            }
        }
    }

    return result;
}

std::string Race::registerVehicle(int vehicleIndex) {
    std::string result{};
    IVehicle *selectedVehicle = m_availableVehicles.at(vehicleIndex);

    auto it = std::find(m_registeredVehicles.begin(), m_registeredVehicles.end(), selectedVehicle);

    if (it != m_registeredVehicles.end()) {
        result += selectedVehicle->getName() + " уже зарегистрирован!";
    } else {
        result += selectedVehicle->getName() + " успешно зарегистрирован!";
        m_registeredVehicles.push_back(selectedVehicle);
    }

    return result;
}

void Race::startRace() {
    std::vector<std::pair<std::string, double>> results;

    for (auto *vehicle : m_registeredVehicles) {
        double time = vehicle->calculateTime(m_raceDistance);
        results.push_back({vehicle->getName(), time});
    }

    std::sort(results.begin(), results.end(),
              [](const auto &a, const auto &b) { return a.second < b.second; });

    for (const auto &result : results) {
        std::cout << result.first << ": " << result.second << " ч" << std::endl;
    }
}
