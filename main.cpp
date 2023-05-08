#include <iostream>
#include <map>
#include <vector>
#include <bits/stdc++.h>
#include <functional>
#include "Menus/Main.h"
#include "Menus/Add.h"

using namespace std;

int main() {
    std::cout << "  _____   _   _     _       ____                           _              ____   _           _     \n"
                 " |  ___| (_) | |_  | |_    / ___|   _ __     ___    _ __  | |_   ___     / ___| | |  _   _  | |__  \n"
                 " | |_    | | | __| | __|   \\___ \\  | '_ \\   / _ \\  | '__| | __| / __|   | |     | | | | | | | '_ \\ \n"
                 " |  _|   | | | |_  | |_     ___) | | |_) | | (_) | | |    | |_  \\__ \\   | |___  | | | |_| | | |_) |\n"
                 " |_|     |_|  \\__|  \\__|   |____/  | .__/   \\___/  |_|     \\__| |___/    \\____| |_|  \\__,_| |_.__/ \n"
                 "                                   |_|                                                             " << std::endl;
    Manageteamsmenu manageteamsmenu;
    manageteamsmenu.display();
}

