//
// Created by TLevente on 04/05/2023.
//

#ifndef NHF_SPORTEGYESULET_MENU_H
#define NHF_SPORTEGYESULET_MENU_H

#include <iostream>
#include <map>
#include <functional>
#include <utility>
#include "../List.h"
#include "../string.h"

class Menu {
    std::map<int, String> points;
    std::map<int, std::function<void()>> menu;
    int length;
public:
    Menu(std::map<int, String> p, std::map<int, std::function<void()>> m, int l = 0) :points(std::move(p)), menu(std::move(m)), length(l){}
    void display(){
        for (int i = 1; i <= menu.size(); ++i) {
            std::cout << i+1 << ". " << points[i]<<std::endl;
        }
        int input = 0;
        while (input!=length) {
            std::cin >> input;
            while(input<=length && input>0){
                std::cout << "Wrong input";
                std::cin >> input;
            }
            if(input!=length)
                menu[input]();
        }
    }
};


#endif //NHF_SPORTEGYESULET_MENU_H
