//
// Created by GNS20 on 2023-10-02.
//
#include <iostream>
#include "Contato.h"
#include "Agenda.h"
#include "Agenda_big.h"

int main() {
    int option;
    string name;
    long number;
    Agenda_big A = Agenda_big();
    Agenda_menor temp_a_menor = Agenda_menor();
    Contato temp_contato = Contato();

    cout << "Digite 1 para adicionar um contato ou 0 para sair" << endl;
    cin >> option;
    cin.clear();
    if (option == 1) {
        do {
            cout << "Digite o nome seguido do numero da pessoa que deseja adicionar" << endl;
            cout << "Nome: " << endl;
            cin >> name;
            cin.clear();
            cout << "Numero: " << endl;
            cin >> number;
            cin.clear();

            temp_contato.setName(name);
            temp_contato.setNumber(number);

            temp_a_menor.addContato(temp_contato);

            if (temp_a_menor.getQuant() == 30) {
                A.add_agenda(temp_a_menor);
                temp_a_menor = Agenda_menor();
            }

            cout << "Press 0 to exit" << endl;
            cin >> option;
            if (option == 0) {
                break;
            }
        } while (option != 0);
    }
    return 0;
}