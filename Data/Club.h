#include <vector>
#include "Team.h"

#ifndef NHF_SPORTEGYESULET_CLUB_H
#define NHF_SPORTEGYESULET_CLUB_H

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
    Club() {
        head = new Node(nullptr);
        tail = new Node(nullptr);
        head->next = tail;
        head->prev = nullptr;
        tail->prev = head;
        tail->next = nullptr;
    }
    Node* gethead(){
        return head;
    }

    void add(Team* d);
    void pop(Node* p);
    int length();
    void print();

    ~Club(){
        Node* iter=head;
        while (iter != nullptr) {
            Node* temp = iter->next;
            delete iter;
            iter = temp;
        }
    }

    int totalprice();

    int totalathletes();
    //TODO typeteamcnt();
    int typeteamcnt();
    //TODO typeathletecnt();
    int typeathletecnt();
    void save();
};

#endif // NHF_SPORTEGYESULET_CLUB_H