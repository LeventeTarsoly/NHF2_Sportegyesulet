cmake_minimum_required(VERSION 3.25)
project(NHF_Sportegyesulet)

set(CMAKE_CXX_STANDARD 11)

add_executable(NHF_Sportegyesulet main.cpp Teams/Team.cpp Teams/Team.h Teams/FootballTeam.cpp Teams/FootballTeam.h Teams/BasketballTeam.cpp Teams/BasketballTeam.h Teams/HandballTeam.cpp Teams/HandballTeam.h Teams/Teams.cpp Teams/Teams.h string.cpp string.h Menus/Lists.cpp Menus/Lists.h Menus/Add.cpp Menus/Add.h Menus/Teamlists.cpp Menus/Teamlists.h Menus/Manageteams.cpp Menus/Manageteams.h Menus/Main.cpp Menus/Main.h)
