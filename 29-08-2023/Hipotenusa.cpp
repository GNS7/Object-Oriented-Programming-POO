//
// Created by GNS20 on 2023-08-31.
//

#include <iostream>
#include <cmath>


using namespace std;

class Triangle {
public:
    int Hipotenusa(int base, int altura) {

        return (pow(base, 2) + pow(altura, 2));
    }
};

int main() {
    int base, altura;
    Triangle triangulo;
    cout << "Digite a base e altura do triangulo respectivamente" << endl;
    cin >> base >> altura;

    int hipotenusa = sqrt(triangulo.Hipotenusa(base, altura));

    cout << "Hipotenusa: " << hipotenusa << endl;
    return 1;
}