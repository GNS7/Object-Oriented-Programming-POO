//
// Created by GNS20 on 2023-09-20.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_ORDER_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_ORDER_H

#include "Product.h"
#include <string>

enum PaymentType {
    credit, debit, cash, bank_cheque
};

class Order {
private:
    int quant;
    Product items[3];
    std::string payment_type;
public:
    int getQuant() { return quant; }

    Product *getProducts() { return items; }

    std::string getPaymentType() { return payment_type; }

    void setProduct(Product *p) { for (int i = 0; i < 3; i++) { this->items[i] = p[i]; }; }

    void setPaymentType(std::string p_t) { this->payment_type = p_t; }

    Order() {};

    ~Order() {};

};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_ORDER_H
