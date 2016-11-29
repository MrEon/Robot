cmake_minimum_required(VERSION 3.3)
project(Robot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Robot.cpp Robot.h Etat.h Position.cpp Position.h Plot.h Objet.h Fige.cpp Fige.h EnRoute.cpp EnRoute.h AVide.cpp AVide.h AVideFacePlot.cpp AVideFacePlot.h EnChargeFacePlot.cpp EnChargeFacePlot.h EnCharge.cpp EnCharge.h chargeException.h actifException.h figeException.h Exception.h)
add_executable(Robot ${SOURCE_FILES})