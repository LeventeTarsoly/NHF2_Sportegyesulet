//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_TEAMS_H
#define NHF_SPORTEGYESULET_TEAMS_H

#include <vector>
#include "Team.h"

struct Node {
    Team* data;
    Node* next;
    Node* prev;
    Node(Team* d, Node* n = nullptr, Node* p = nullptr) : data(d), next(n), prev(p) {}
};

class Club {
    Node* head;
    Node* tail;
public:
    Club() : head(nullptr), tail(nullptr) {}

    void add(Team* d);
    void pop(Node* p);
    int length();
    void print();

    ~Club(){
        Node* iter=head;
        while (iter != nullptr) {
            Node* temp = iter->next;
            free(iter);
            iter = temp;
        }
    }
    //TODO
    int totalprice();
    //TODO
    int totalathletes();
    //TODO
    int typeteamcnt();
    //TODO
    int typeathletecnt();
};

#endif //NHF_SPORTEGYESULET_TEAMS_H
