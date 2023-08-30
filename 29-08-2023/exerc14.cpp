//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

#define quant 5

using namespace std;

int main() {

    int numerosX[quant], numerosY[quant], count = 0;
    int resultado = 0;

    cout << "Digite os numeros (" << quant << ") do vetor 1: " << endl;
    for (int i = 0; i < quant; i++) {
        cin >> numerosX[count];
        count++;
    }

    count = 0;
    cout << "Digite os numeros (" << quant << ") do vetor 2: " << endl;
    for (int i = 0; i < quant; i++) {
        cin >> numerosY[count];
        count++;
    }

    for (int i = 0; i < quant; i++) {
        resultado += numerosX[i] * numerosY[i];
    }

    cout << "A soma escalar dos dois vetores e: " << resultado << endl;
    return 1;
}