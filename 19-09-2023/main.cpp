//
// Created by GNS20 on 2023-09-20.
//
#include <iostream>
#include "Stock.h"
#include "Product.h"
#include "Order.h"

using namespace std;


Stock create_products_stocked() {
    Stock s = Stock();
    Product p[3];
    string product_names[3] = {"paper-towel", "notebook", "flour"};
    for (int i = 0; i < 3; i++) {
        p[i] = Product();
    }
    for (int i = 0; i < 3; i++) {
        p[i].setProduct(product_names[i], 10.4 + i, 5 + i);
    }

    s.setStock(p);

    return s;
}

Stock update_stock(Stock s, Product *p, int option, int quant) {
    /*Function that receives the quantity of prod in an order, and removes them from the stock*/

    p[option].setQuantity((p[option].getQuantity()) - quant); //remove quant from product stock

    s.setProductQuantity(p, option, p[option].getQuantity()); //set product quantity in stock

    return s;
}

void CreateOrderedProduct(Order o, Product *p_temp, Product *p, int option, int quant, int *p_count) {
    //Create temp products array
    for (int i = 0; i < 3; i++) {
        p_temp[i] = Product();
    }
    Product temp_product;
    temp_product = Product();
    temp_product.setProduct(p[option].getName(), p[option].getPrice(), quant);

    p_temp[*p_count] = temp_product;
    ++(*p_count);
}

int main() {
    int option, quant, p_count = 0;
    int meio_pagamento;

    Stock s;
    s = create_products_stocked();
    Product p[3], p_temp[3];

    ////SET MEMORY FOR PRODUCTS INSIDE STOCK//////
    for (int i = 0; i < 3; i++) {
        p[i] = Product();
        s.getStock(p, i);
    }

    ///////MENU///////

    cout << "Escolha uma das opcoes:" << endl;
    cout << "1-Fazer um pedido" << endl;
    cout << "100-Sair" << endl;
    cin >> option;
    cin.clear();
    //system("cls");

    if (option == 1) {
        Order o;
        o = Order();
        /////PRODUCT MENU///////
        do {
            cout << "Escolha um produto" << endl;
            cout << "1- " << p[0].getName() << " price: " << p[0].getPrice() << " quant: " << p[0].getQuantity()
                 << endl;
            cout << "2- " << p[1].getName() << " price: " << p[1].getPrice() << " quant: " << p[1].getQuantity()
                 << endl;
            cout << "3- " << p[2].getName() << " price: " << p[2].getPrice() << " quant: " << p[2].getQuantity()
                 << endl;
            cout << "4-Sair" << endl;
            cin >> option;
            cin.clear();

            if (option != 4 && option > 0 && option < 4) {
                option = (option - 1); ////-1 to compensate 0 in array

                cout << "Digite a quantidade desejada desse produto: " << endl;
                cin >> quant;

                if (p[option].getQuantity() < quant) {
                    cout << "Produto indisponivel." << endl;
                    break;
                }

                CreateOrderedProduct(o, p_temp, p, option, quant, &p_count);

                //Fill order
                o.setProduct(p_temp);

                s = update_stock(s, p, option, quant);
                if (p_count == 3) {
                    cout << "Seu carrinho esta cheio, escolha o meio de pagamento: " << endl;
                    cout << "1- Credito" << endl;
                    cout << "2- Debito" << endl;
                    cout << "3- Dinheiro" << endl;
                    cin >> option;

                    switch (option) {
                        case 1:
                            o.setPaymentType("credit");
                            break;
                        case 2:
                            o.setPaymentType("debit");
                            break;
                        case 3:
                            o.setPaymentType("cash");
                            break;
                    }

                    cout << "Obrigado por comprar, volte sempre!" << endl;

                    cout << "Saindo..." << endl;
                    system("pause");
                    exit(1);
                }
            }
        } while (option != 4);

    } else {
        cout << "Saindo..." << endl;
        system("pause");
        exit(1);
    }


    // Clean up memory
    //for (int i = 0; i < 3; i++) {
    //delete p[i];
    //}
    //delete s;

    return 0;
}