//
// Created by GNS20 on 2023-10-03.
//

#ifndef OBJECT_ORIENTED_PROGRAMMING_POO_LIVRO_EMPRESTIMO_H
#define OBJECT_ORIENTED_PROGRAMMING_POO_LIVRO_EMPRESTIMO_H

#include "Livro.h"
#include "Pessoa.h"


class Livro_emprestimo {
private:
    Livro emprestado;
    int quant_dias;
    Pessoa pessoa;
public:
    Livro getLivro() { return this->emprestado; }

    int getQuantDias() { return this->quant_dias; }

    Pessoa getPessoa() { return this->pessoa; }


    void setEmprestado(Livro livro) { this->emprestado = livro; }

    void setQuantDias(int quant) { this->quant_dias = quant; }

    void setPessoa(Pessoa pessoa) { this->pessoa = pessoa; }

    Livro_emprestimo() {};

    ~Livro_emprestimo() {};
};


#endif //OBJECT_ORIENTED_PROGRAMMING_POO_LIVRO_EMPRESTIMO_H
