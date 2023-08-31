//
// Created by GNS20 on 2023-08-31.
//

#include <iostream>

using namespace std;

class Salario {
public:
    int Reajuste(int salario, float reajuste) {
        return salario + (salario * reajuste);
    }
};

int main() {

    int n_salario;
    float reajuste;
    Salario salario;
    cout << "Digite o salario e em seguida o valor do reajuste: " << endl;
    cin >> n_salario >> reajuste;

    cout << "Salario reajustado: " << salario.Reajuste(n_salario, reajuste) << endl;


}