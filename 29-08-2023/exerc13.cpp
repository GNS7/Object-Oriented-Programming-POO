//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

#define quant 5

using namespace std;

int main() {

    int numeros[quant], count = 0;

    cout << "Digite os numeros (" << quant << "): " << endl;
    for (int i = 0; i < quant; i++) {
        cin >> numeros[count];
        count++;
    }

    cout << "\n" << endl;

    for (int i = 0; i < quant; i++) {
        cout << numeros[i] << endl;
    }

    cout << "\n" << endl;

    int aux[quant];
    for (int i = 0; i < quant; i++) {
        //if (i == 0)
        //aux[i] = numeros[-1 + (-i)];
        aux[i] = numeros[(quant - 1) - i];
    }

    for (int i = 0; i < quant; i++) {
        cout << aux[i] << endl;
    }

    return 1;
}