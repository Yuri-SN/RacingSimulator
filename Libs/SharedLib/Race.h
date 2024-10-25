#pragma once

#include "IVehicle.h"
#include "RaceType.h"

#include <set>
#include <vector>

class Race {
public:
    Race();

    // Очищает все данные между гонками
    void clean();

    bool setRaceType(int type);
    bool setRaceDistance(int distance);

    int getVehiclesCount();

    std::vector<std::string> getAvailableVahicles();

    std::string getRaceParams();
    std::string getRegisteredVehicles();

    std::string registerVehicle(int vehicleIndex);

    void startRace();

private:
    std::set<RaceType> const m_validRaceTypes{RaceType::GROUND, RaceType::AIR,
                                              RaceType::GROUND_AND_AIR};

    std::vector<IVehicle *> m_availableVehicles{};
    std::vector<IVehicle *> m_registeredVehicles{};

    RaceType m_raceType{};
    int m_raceDistance{};
};
