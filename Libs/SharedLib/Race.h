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

    std::string getRaceParams();

    void registerVehicle(IVehicle *vehicle);

    void startRace();

private:
    std::set<RaceType> const m_validRaceTypes{RaceType::GROUND, RaceType::AIR,
                                              RaceType::GROUND_AND_AIR};

    std::vector<IVehicle *> m_vehicles{};

    RaceType m_raceType{};
    int m_raceDistance{};
};
