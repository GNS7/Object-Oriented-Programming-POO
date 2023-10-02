//
// Created by GNS20 on 2023-10-02.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_AGENDA_BIG_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_AGENDA_BIG_H

#include "Agenda.h"

class Agenda_big {
private:
    int quant = 0;
    Agenda_menor a[10];
public:

    void getAgenda(Agenda_menor *A) { for (int i = 0; i < 10; i++) { A[i] = this->a[i]; }}

    int getQuant() { return quant; }

    void setAgenda(Agenda_menor *A) { for (int i = 0; i < 10; i++) { this->a[i] = A[i]; }}

    void setQuant(int i) { quant = i; }

    void add_agenda(Agenda_menor a) {
        this->a[this->getQuant()] = a;
        this->setQuant(quant + 1);
    }

    Agenda_big() {};

    ~Agenda_big() {};
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_AGENDA_BIG_H
