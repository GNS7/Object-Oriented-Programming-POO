//
// Created by GNS20 on 2023-09-20.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H


class Product {
private:
    float price;
    int quantity_stocked;
public:
    int getPrice() { return this->price; };
    int getQuantity() { return this->quantity_stocked;};
    void setPrice(float value) { this->price = value;};
    void setQuantity(int value) { this->quantity_stocked = value};

    Product();
    ~Product();
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_PRODUCT_H
