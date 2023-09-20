//
// Created by GNS20 on 2023-09-20.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H


class Ordered_Product {
private:
    float price;
    int quantity;
public:
    float getPrice() { return this->price; };

    int getQuantity() { return this->quantity; };

    void setPrice(float value) { this->price = value; };

    void setQuantity(int value) { this->quantity = value; };

    Ordered_Product();

    ~Ordered_Product();
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H
