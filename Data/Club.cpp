#include "Club.h"

void Club::add(Team* d) {
    Node* newNode = new Node(d);
    newNode->data = d;
    newNode->next = nullptr;

    newNode->next = tail;
    newNode->prev = tail->prev;
    tail->prev->next = newNode;
    tail->prev = newNode;
}

void Club::pop(Node* p){
    p->prev->next = p->next;
    p->next->prev = p->prev;
    delete p;
}

int Club::length(){
    Node* iter=head;
    int cnt = 0;
    while (iter != nullptr) {
        cnt++;
        iter = iter->next;
    }
    return cnt;
}

void Club::print(){
    Node* iter=head->next;
    while (iter->next != nullptr) {
        iter->data->print();
        iter=iter->next;
    }
}

int Club::totalprice() {
    Node* iter=head->next;
    int sum=0;
    while (iter->next != nullptr) {
        sum+=iter->data->getprice();
        iter=iter->next;
    }
    return sum;
}

int Club::totalathletes() {
    Node* iter=head->next;
    int sum=0;
    while (iter->next != nullptr) {
        sum+=iter->data->getcount();
        iter=iter->next;
    }
    return sum;
}

int Club::typeteamcnt() {
    return 0;
}

int Club::typeathletecnt() {
    return 0;
}
