//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int option;
    float value1, value2, soma, subtracao, multiplicacao, divisao;
    do {
        cout << "1-Adicao" << endl << "2-Subtracao" << endl << "3-Multiplicacao" << endl << "4-Divisao" << endl
             << "0-Sair"
             << endl;
        cin >> option;

        switch (option) {
            case 1:
                cout << "Digite 2 numeros: " << endl;
                cin >> value1 >> value2;
                soma = (value1 + value2);
                cout << "Resultado: " << soma << endl;
                break;

            case 2:
                cout << "Digite 2 numeros: " << endl;
                cin >> value1 >> value2;
                subtracao = (value1 - value2);
                cout << "Resultado: " << subtracao << endl;
                break;
            case 3:
                cout << "Digite 2 numeros: " << endl;
                cin >> value1 >> value2;
                multiplicacao = (value1 * value2);
                cout << "Resultado: " << multiplicacao << endl;
                break;
            case 4:
                cout << "Digite 2 numeros: " << endl;
                cin >> value1 >> value2;
                divisao = (value1 / value2);
                cout << "Resultado: " << divisao << endl;
                break;
        }
        system("pause");
        system("cls");
    } while (option != 0);
    return 1;
}
