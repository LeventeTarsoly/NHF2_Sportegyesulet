cmake_minimum_required(VERSION 3.25)
project(NHF_Sportegyesulet)

set(CMAKE_CXX_STANDARD 11)

add_compile_definitions(MEMTRACE)

add_executable(NHF_Sportegyesulet main.cpp Data/Team.h Data/FootballTeam.cpp Data/FootballTeam.h Data/BasketballTeam.cpp Data/BasketballTeam.h Data/HandballTeam.cpp Data/HandballTeam.h Data/Club.cpp Data/Club.h Data/string.cpp Data/string.h Menus/Add.cpp Menus/Add.h Menus/Manageteams.cpp Menus/Manageteams.h Menus/Main.cpp Menus/Main.h test.h memtrace.h memtrace.cpp test.cpp files.cpp files.h)
