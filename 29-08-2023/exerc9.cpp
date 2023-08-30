//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

using namespace std;


int main() {

    int option;
    float sex;
    float value1, height, peso_ideal;

    cout << "Escolha uma da opcoes de sexo (1-Homem 2-Mulher), em seguida a altura (em metro): " << endl;
    cin >> sex >> height;

    if (sex == 1) {
        peso_ideal = (72.7 * height) - 58;
        cout << "Seu peso ideal e: " << peso_ideal << endl;
    }
    if (sex == 1) {
        peso_ideal = (62.1 * height) - 44.7;
        cout << "Seu peso ideal e: " << peso_ideal << endl;
    }
    return 1;
}