//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int A, B, aux;
    cout << "Digite dois numeros:" << endl;
    cin >> A >> B;

    cout << "A = " << A << endl << "B = " << B << endl;

    aux = A;
    A = B;
    B = aux;

    cout << "A = " << A << endl << "B = " << B << endl;

    system("pause");
    return 1;
}