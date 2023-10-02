//
// Created by GNS20 on 2023-09-20.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H

#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    float price;
    int quantity;
public:
    std::string getName() { return name; };

    int getPrice() { return this->price; };

    int getQuantity() { return this->quantity; };

    void setPrice(float value) { this->price = value; };

    void setQuantity(int value) { this->quantity = value; };

    void setProduct(std::string n, float p, int q) {
        this->name = n;
        this->price = p;
        this->quantity = q;
    }

    Product() {};

    ~Product() {};
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H
