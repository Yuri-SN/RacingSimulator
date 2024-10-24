cmake_minimum_required(VERSION 3.5)

project(RacingSimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(SharedDynamicLib SHARED
    Libs/SharedLib/IVechicle.h
    Libs/SharedLib/IVechicle.cpp
    Libs/SharedLib/Camel.h
    Libs/SharedLib/Camel.cpp
    Libs/SharedLib/CamelSpeed.h
    Libs/SharedLib/CamelSpeed.cpp
    Libs/SharedLib/Centaur.h
    Libs/SharedLib/Centaur.cpp
    Libs/SharedLib/AllTerrainBoots.h
    Libs/SharedLib/AllTerrainBoots.cpp
    Libs/SharedLib/FlyingCarpet.h
    Libs/SharedLib/FlyingCarpet.cpp
    Libs/SharedLib/Eagle.h
    Libs/SharedLib/Eagle.cpp
    Libs/SharedLib/Broom.h
    Libs/SharedLib/Broom.cpp
    Libs/SharedLib/Race.h
    Libs/SharedLib/Race.cpp
)

add_executable(RacingSimulator
    main.cpp
    VehicleType.h
    RaceType.h
)

target_link_libraries(RacingSimulator SharedDynamicLib)

include(GNUInstallDirs)

install(TARGETS RacingSimulator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
