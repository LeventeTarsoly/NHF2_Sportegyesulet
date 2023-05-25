#include "Club.h"

/*void add(Team* d) {
    if (head == nullptr) {
        tail = new Node(d);
        head = new Node(d);
    } else {
        tail->prev->next = new Node(d, tail, tail->prev);
        tail->prev = tail->prev->next;
    }
}*/
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
    return 0;
}

int Club::totalathletes() {
    return 0;
}

int Club::typeteamcnt() {
    return 0;
}

int Club::typeathletecnt() {
    return 0;
}
