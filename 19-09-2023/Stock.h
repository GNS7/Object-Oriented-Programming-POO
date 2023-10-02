//
// Created by GNS20 on 2023-09-21.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_STOCK_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_STOCK_H

#include "Product.h"

class Stock {
private:
    Product Stocked[3];
public:
    void getStock(Product *value, int pos) { value[pos] = Stocked[pos]; }

    Product getStocked(int pos) { return Stocked[pos]; }

    void setProductQuantity(Product *value, int pos, int quantity) { Stocked[pos] = value[pos]; }

    void setStock(Product value[3]) { for (int i = 0; i < 3; i++) { this->Stocked[i] = value[i]; }}

    Stock() : Stocked{Product(), Product(), Product()} {};

    ~Stock() {};
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_STOCK_H
