#include "RaceType.h"
#include <iostream>

int main() {
    int raceTypeNum{};
    RaceType raceTypeEnum{};

    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    while (true) {
        std::cout << "1. Гонка для наземного транспорта" << std::endl;
        std::cout << "2. Гонка для воздушного транспорта" << std::endl;
        std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;

        std::cout << "Выберите тип гонки: ";
        std::cin >> raceTypeNum;

        raceTypeEnum = static_cast<RaceType>(raceTypeNum);
    }

    return 0;
}
