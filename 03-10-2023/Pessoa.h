//
// Created by GNS20 on 2023-10-03.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_PESSOA_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_PESSOA_H

#include "Livro.h"

class Pessoa {
private:
    string name;
    int age;
public:
    string getname() { return this->name; };

    int getIdade() { return this->age; };

    void setName(string name) { this->name = name; };

    void setIdade(int age) { this->age = age; };

    Pessoa() {};

    ~Pessoa() {};
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_PESSOA_H
