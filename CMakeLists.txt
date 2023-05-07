cmake_minimum_required(VERSION 3.25)
project(NHF_Sportegyesulet)

set(CMAKE_CXX_STANDARD 11)

add_executable(NHF_Sportegyesulet main.cpp Groups/Group.cpp Groups/Group.h Groups/FootballGroup.cpp Groups/FootballGroup.h Groups/BasketballGroup.cpp Groups/BasketballGroup.h Groups/HandballGroup.cpp Groups/HandballGroup.h Groups/Groups.cpp Groups/Groups.h string.cpp string.h Menus/Menu.h List.h Menus/Lists.cpp Menus/Lists.h Menus/Create.cpp Menus/Create.h Menus/Grouplists.cpp Menus/Grouplists.h Menus/Groups.cpp Menus/Groups.h Menus/Main.cpp Menus/Main.h)
