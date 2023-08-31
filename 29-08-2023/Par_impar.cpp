//
// Created by GNS20 on 2023-08-31.
//

#include <iostream>


using namespace std;

class Numero {
public:
    void Verifica(int n) {
        if (n % 2 == 0)
            cout << "PAR" << endl;
        else
            cout << "IMPAR" << endl;
    }
};

int main() {

    int n;
    Numero numero;
    cout << "Digite um numero: " << endl;
    cin >> n;

    numero.Verifica(n);


}