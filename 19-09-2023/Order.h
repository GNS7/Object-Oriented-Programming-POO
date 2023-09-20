//
// Created by GNS20 on 2023-09-20.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_ORDER_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_ORDER_H

#include "Ordered_Product.h"

enum PaymentType {
    credit, debit, cash, bank_cheque
};

class Order {
private:
    int quant;
    Ordered_Product items[4];
    int payment_type;
public:
    int getQuant() { return quant; }

    Ordered_Product *getProducts() { return items; }

    int getPaymentType() { return payment_type; }

    Order();

    ~Order();

};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_ORDER_H
