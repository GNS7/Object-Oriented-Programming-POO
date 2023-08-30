//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int quant_numeros;

    cout << "Digite a quantidade de numeros que serao processados " << endl;
    cin >> quant_numeros;

    int numeros[quant_numeros];
    cout << "Digite os numeros: " << endl;
    for (int i = 0; i < quant_numeros; i++)
        cin >> numeros[i];


    for (int i = 0; i < quant_numeros; i++) {
        int fatorial = 1;
        for (int j = 1; j <= numeros[i]; j++) {
            cout << "numeros[i]: " << numeros[i] << endl;
            cout << "j: " << j << endl;
            fatorial *= j;

        }
        cout << "O fatorial de " << numeros[i] << " e " << fatorial << endl;
    }

    return 1;
}