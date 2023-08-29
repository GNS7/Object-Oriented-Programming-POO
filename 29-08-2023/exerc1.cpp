//
// Created by gabrielns on 29/08/23.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int quant_min, quant_max;
    cout<<"Digite a quantidade minima do produto no estoque"<<endl;
    cin>>quant_min;

    cout<<"Digite a quantidade maxima do produto no estoque"<<endl;
    cin>>quant_max;

    cout<<"Estoque medio = "<<(quant_min+quant_max)/2<<endl;

    system("pause");
    return 1;
}