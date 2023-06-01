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
    /// Param�terk�nt adott csapatot hozz�adja a list�hoz
    /// @param d Team pointer a csapatr�l
    void add(Team* d);
    /// Param�terk�nt adott listaelemet t�rli a list�r�l
    /// @param p listaelem pointer a csapatr�l
    void pop(Node* p);
    ///Visszaadja a lista hossz�t head �s tail n�lk�l
    /// @return int hossz
    int length()const;
    ///Ki�rja a lista elemeit sorban
    void print()const;

    Node* gethead()const{
        return head;
    }
    ///Visszaadja a csapatok �vi bev�tel�t
    /// @return int bev�tel
    int totalprice()const;
    ///Visszaadja a csapatok tagjainak sz�m�t
    /// @return int
    int totalathletes()const;
    ///Fileba menti a csapatokat
    void save();

    ~Club(){
        Node* iter=head;
        while (iter != nullptr) {
            Node* temp = iter->next;
            delete iter->data;
            delete iter;
            iter = temp;
        }
    }
};

#endif // NHF_SPORTEGYESULET_CLUB_H