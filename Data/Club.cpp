#include "Club.h"

void Club::add(Team* const d) {
    ///inicializ�l�s
    Node* newNode = new Node(d);
    newNode->data = d;
    ///pointerek �jrarendez�se
    newNode->next = tail;
    newNode->prev = tail->prev;
    tail->prev->next = newNode;
    tail->prev = newNode;
}

void Club::pop(Node* const p){
    ///pointerekkel "kiszedi a list�b�l"
    p->prev->next = p->next;
    p->next->prev = p->prev;
    ///felszabad�t�s
    delete p->data;
    delete p;
}

int Club::length()const{
    ///v�gigmegy a list�n
    Node* iter=head;
    int cnt = 0;
    while (iter != nullptr) {
        ///ah�ny elem van annyi ++
        cnt++;
        iter = iter->next;
    }
    ///ki kell vonni kett?t a head �s tail miatt
    cnt-=2;
    return cnt;
}

void Club::print()const{
    ///v�gigmegy a list�n
    Node* iter=head->next;
    while (iter->next != nullptr) {
        ///megh�vja a print fv-t
        iter->data->print();
        iter=iter->next;
    }
}

int Club::totalprice() const{
    ///v�gigmegy a list�n
    Node* iter=head->next;
    int sum=0;
    while (iter->next != nullptr) {
        ///sumhoz hozz�adja minden elem bev�tel�t
        sum+=iter->data->getprice();
        iter=iter->next;
    }
    return sum;
}

int Club::totalathletes() const{
    ///v�gigmegy a list�n
    Node* iter=head->next;
    int sum=0;
    while (iter->next != nullptr) {
        ///sumhoz hozz�adja minden csapat l�tsz�m�t
        sum+=iter->data->getcount();
        iter=iter->next;
    }
    return sum;
}
