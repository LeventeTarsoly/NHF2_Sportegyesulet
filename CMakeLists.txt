cmake_minimum_required(VERSION 3.25)
project(NHF_Sportegyesulet)

set(CMAKE_CXX_STANDARD 11)

add_compile_definitions(MEMTRACE)

add_executable(NHF_Sportegyesulet main.cpp Team.h FootballTeam.cpp FootballTeam.h BasketballTeam.cpp BasketballTeam.h HandballTeam.cpp HandballTeam.h Club.cpp Club.h string.cpp string.h Add.cpp Add.h Manageteams.cpp Manageteams.h Mainmenu.cpp Mainmenu.h test.h memtrace.h memtrace.cpp test.cpp files.cpp files.h)
