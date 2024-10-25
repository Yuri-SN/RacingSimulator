#include "Libs/SharedLib/Air/FlyingCarpet.h"
#include "Libs/SharedLib/Ground/Camel.h"
#include "Libs/SharedLib/Race.h"

#include <iostream>

int main() {
    Race *race = new Race();

    int raceType{};
    int raceDistance{};

    bool raceTypeCorrect{};
    bool raceDistanceCorrect{};

    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    while (true) {
        race->clean();

        std::cout << "1. Гонка для наземного транспорта" << std::endl;
        std::cout << "2. Гонка для воздушного транспорта" << std::endl;
        std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;

        do {
            std::cout << "Выберите тип гонки: ";
            std::cin >> raceType;

            raceTypeCorrect = race->setRaceType(raceType);

            if (!raceTypeCorrect) {
                std::cout << "Неверный тип гонки" << std::endl;
            }
        } while (!raceTypeCorrect);

        do {
            std::cout << "Укажите длину дистанции (должна быть положительна): ";
            std::cin >> raceDistance;

            raceDistanceCorrect = race->setRaceDistance(raceDistance);

            if (!raceDistanceCorrect) {
                std::cout << "Неверное значение" << std::endl;
            }
        } while (!raceDistanceCorrect);

        std::cout << race->getRaceParams() << std::endl;

        race->registerVehicle(new Camel());
        race->registerVehicle(new FlyingCarpet());

        std::cout << race->getRegisteredVehicles() << std::endl;

        break;

        // race.startRace();

        // char choice;
        // std::cout << "Хотите провести ещё одну гонку? (y/n): ";
        // std::cin >> choice;
        // if (choice != 'y')
        //     break;
    }

    delete race;

    return 0;
}
