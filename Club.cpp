#include "Club.h"

void Club::add(Team* const d) {
    ///inicializálás
    Node* newNode = new Node(d);
    newNode->data = d;
    ///pointerek újrarendezése
    newNode->next = tail;
    newNode->prev = tail->prev;
    tail->prev->next = newNode;
    tail->prev = newNode;
}

void Club::pop(Node* const p){
    ///pointerekkel "kiszedi a listából"
    p->prev->next = p->next;
    p->next->prev = p->prev;
    ///felszabadítás
    delete p->data;
    delete p;
}

int Club::length()const{
    ///végigmegy a listán
    Node* iter=head;
    int cnt = 0;
    while (iter != nullptr) {
        ///ahány elem van annyi ++
        cnt++;
        iter = iter->next;
    }
    ///ki kell vonni kett?t a head és tail miatt
    cnt-=2;
    return cnt;
}

void Club::print()const{
    ///végigmegy a listán
    Node* iter=head->next;
    while (iter->next != nullptr) {
        ///meghívja a print fv-t
        iter->data->print();
        iter=iter->next;
    }
}

int Club::totalprice() const{
    ///végigmegy a listán
    Node* iter=head->next;
    int sum=0;
    while (iter->next != nullptr) {
        ///sumhoz hozzáadja minden elem bevételét
        sum+=iter->data->getprice();
        iter=iter->next;
    }
    return sum;
}

int Club::totalathletes() const{
    ///végigmegy a listán
    Node* iter=head->next;
    int sum=0;
    while (iter->next != nullptr) {
        ///sumhoz hozzáadja minden csapat létszámát
        sum+=iter->data->getcount();
        iter=iter->next;
    }
    return sum;
}
