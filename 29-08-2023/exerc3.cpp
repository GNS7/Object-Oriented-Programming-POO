//
// Created by GNS20 on 2023-08-30.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int cod_peca, quant_vendida;
    float preco_peca;
    string sales_id;

    cout<<"Digite o nome do vendedor: "<<endl;
    cin>>sales_id;

    cout<<"Digite o valor das pecas (unidade): "<<endl;
    cin>>preco_peca;

    cout<<"Digite a quantidade de pecas vendidas: "<<endl;
    cin>>quant_vendida;


    float comissao = (0.05*(quant_vendida*preco_peca));

    cout<<sales_id<<" vendeu "<<quant_vendida<<" pecas com valor R$"<<preco_peca<<"."<<endl<<"O valor da comissao e: "<<comissao<<endl;
    system("pause");
    return 1;
}