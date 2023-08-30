//
// Created by GNS20 on 2023-08-30.
//

//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

using namespace std;

void multiplo(int x, int y) {

    if (x % y == 0 && x != 0) {
        cout << x << " e multiplo de " << y << endl;
    } else {
        cout << x << " nao e multiplo de " << y << endl;
    }

    if (y % x == 0 && y != 0) {
        cout << y << " e multiplo de " << x << endl;
    } else {
        cout << y << " nao e multiplo de " << x << endl;
    }
}

void par(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0 && x != 0 && y != 0) {
        cout << x << " e " << y << " sao pares" << endl;
    } else if (x % 2 == 0 && x != 0) {
        cout << x << " e par" << endl;
    } else if (y % 2 == 0 && y != 0) {
        cout << y << " e par" << endl;
    } else {
        cout << "nenhum dos dois e par" << endl;
    }
}

int main() {

    int option;
    float value1, value2, media;

    cout << "Digite 2 numeros: " << endl;
    cin >> value1 >> value2;

    do {

        cout << "1-Verificar se um dos numeros lidos e multiplo do outro" << endl
             << "2-Verificar se os numeros lidos sao pares" << endl
             << "3-Verifica se a media dos dois numeros e maior ou igual a 7"
             << endl
             << "0-Sair"
             << endl;
        cin >> option;

        switch (option) {
            case 1:
                multiplo(value1, value2);
                break;
            case 2:
                par(value1, value2);
                break;
            case 3:
                media = (value1 + value2) / 2;
                media >= 7 ? cout << "media= " << media << endl << "media maior ou igual a 7" << endl : cout
                        << "media menor que 7" << endl;
                break;
        }
        system("pause");
        system("cls");
    } while (option != 0);
    return 1;
}
