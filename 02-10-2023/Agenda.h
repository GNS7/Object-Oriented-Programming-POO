//
// Created by GNS20 on 2023-10-02.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_AGENDA_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_AGENDA_H

#include "Contato.h"

class Agenda_menor {
private:
    int quant = 0;
    Contato c[30];
public:
    void getAgenda(Contato *a) { for (int i = 0; i < 30; i++) { a[i] = this->c[i]; }}

    int getQuant() { return quant; }

    void setAgenda(Contato *a) { for (int i = 0; i < 30; i++) { this->c[i] = a[i]; }}

    void setQuant(int i) { quant = i; }

    void addContato(Contato a) {
        this->c[this->getQuant()] = a;
        this->setQuant(quant + 1);
    }


    Agenda_menor() {};

    ~Agenda_menor() {};
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_AGENDA_H
