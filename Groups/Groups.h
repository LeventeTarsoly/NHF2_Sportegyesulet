//
// Created by TLevente on 03/05/2023.
//

#ifndef NHF_SPORTEGYESULET_GROUPS_H
#define NHF_SPORTEGYESULET_GROUPS_H

#include <vector>
#include "Group.h"

struct Node {
    Group* data;
    Node* next;
    Node* prev;
    Node(Group* d, Node* n = nullptr, Node* p = nullptr) : data(d), next(n), prev(p) {}
};

class Club {
    Node* head;
    Node* tail;
public:
    Club() : head(nullptr), tail(nullptr) {}

    void push_front(Group* d) {
        if (head == nullptr) {
            head = new Node(d);
            tail = new Node(d);
        } else {
            head->prev = new Node(d, nullptr, head);
            head = head->prev;
        }
    }

    void push_back(Group* d) {
        if (tail == nullptr) {
            head = new Node(d);
            tail = new Node(d);
        } else {
            tail->next = new Node(d, tail, nullptr);
            tail = tail->next;
        }
    }

    void pop(Node* p){
        p->prev->next = p->next;
        p->next->prev = p->prev;
        delete p;
    }

    int length(){
        Node* iter=head;
        int cnt = 0;
        while (iter != nullptr) {
            cnt++;
            iter = iter->next;
        }
        return cnt;
    }

    ~Club(){
        Node* iter=head;
        while (iter != nullptr) {
            Node* temp = iter->next;
            free(iter);
            iter = temp;
        }
    }
};

#endif //NHF_SPORTEGYESULET_GROUPS_H
