//
// Created by GNS20 on 2023-10-03.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_LIVRO_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_LIVRO_H

#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    string name;
    string Author;
public:
    string getName() { return this->name; };

    string getAuthor() { return this->Author; };

    void setName(string name) { this->name = name; };

    void setAuthor(string author) { this->Author = author; };

    Livro() {};

    ~Livro() {};
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_LIVRO_H
