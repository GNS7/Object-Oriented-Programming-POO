//
// Created by GNS20 on 2023-08-31.
//

#include <iostream>
#include <cstring>

#define quant 10

using namespace std;

int main() {

    int numerosX[quant], x, count = 0, count_maior = 0, count_menor = 0, count_igual = 0;
    int resultado = 0;

    cout << "Digite os numeros (" << quant << ") do vetor 1: " << endl;
    for (int i = 0; i < quant; i++) {
        cin >> numerosX[count];
        count++;
    }

    cout << "Digite um numero: " << endl;
    cin >> x;

    for (int i = 0; i < quant; i++) {
        if (x < numerosX[i])
            count_maior++;
        else if (x == numerosX[i])
            count_igual++;
        else
            count_menor++;
    }

    cout << " Numeros maior que x: " << count_maior << endl;
    cout << " Numeros iguais a x: " << count_igual << endl;
    cout << " Numeros menor que x: " << count_menor << endl;
    return 1;
}