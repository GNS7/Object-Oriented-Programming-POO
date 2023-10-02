//
// Created by GNS20 on 2023-10-02.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_CONTATO_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_CONTATO_H

#include <string>

using namespace std;

class Contato {
private:
    string name;
    long number;
public:
    string getName() { return name; }

    long getNumber() { return number; }

    void setName(string n) { name = n; }

    void setNumber(long n) { number = n; }

    Contato() {};

    ~Contato() {};

};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_CONTATO_H
