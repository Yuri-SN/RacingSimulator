cmake_minimum_required(VERSION 3.5)

project(RacingSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(SharedDynamicLib SHARED
    Libs/SharedLib/IVehicle.h
    Libs/SharedLib/VehicleGround.h
    Libs/SharedLib/VehicleGround.cpp
    Libs/SharedLib/VehicleAir.h
    Libs/SharedLib/VehicleAir.cpp
    Libs/SharedLib/Ground/Camel.h
    Libs/SharedLib/Ground/Camel.cpp
    Libs/SharedLib/Ground/CamelSpeed.h
    Libs/SharedLib/Ground/CamelSpeed.cpp
    Libs/SharedLib/Ground/Centaur.h
    Libs/SharedLib/Ground/Centaur.cpp
    Libs/SharedLib/Ground/AllTerrainBoots.h
    Libs/SharedLib/Ground/AllTerrainBoots.cpp
    Libs/SharedLib/Air/FlyingCarpet.h
    Libs/SharedLib/Air/FlyingCarpet.cpp
    Libs/SharedLib/Air/Eagle.h
    Libs/SharedLib/Air/Eagle.cpp
    Libs/SharedLib/Air/Broom.h
    Libs/SharedLib/Air/Broom.cpp
    Libs/SharedLib/RaceType.h
    Libs/SharedLib/Race.h
    Libs/SharedLib/Race.cpp
)

add_executable(RacingSimulator
    main.cpp
)

target_link_libraries(RacingSimulator SharedDynamicLib)

include(GNUInstallDirs)

install(TARGETS RacingSimulator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
