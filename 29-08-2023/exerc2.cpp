//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    float cotacao_dolar, valor_dolar;
    cout<<"Digite a cotacao do dolar"<<endl;
    cin>>cotacao_dolar;

    cout<<"Digite o valor em dolares"<<endl;
    cin>>valor_dolar;

    cout<<"Valor em real = "<<(cotacao_dolar*valor_dolar)<<endl;

    system("pause");
    return 1;
}