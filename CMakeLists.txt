cmake_minimum_required(VERSION 3.25)
project(NHF_Sportegyesulet)

set(CMAKE_CXX_STANDARD 11)

add_executable(NHF_Sportegyesulet main.cpp Group.cpp Group.h FootballGroup.cpp FootballGroup.h BasketballGroup.cpp BasketballGroup.h HandballGroup.cpp HandballGroup.h Groups.cpp Groups.h string.cpp string.h Menu.cpp Menu.h List.h)
