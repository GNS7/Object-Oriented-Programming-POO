//
// Created by GNS20 on 2023-10-03.
//
#include "Livro.h"
#include "Pessoa.h"
#include "Livro_emprestimo.h"

Livro createLivro(string name, string Author) {
    Livro l = Livro();

    l.setName(name);
    l.setAuthor(Author);

    return l;
}

int main() {
    int option, pessoa_idade, quant;
    string pessoa_nome;
    Livro l = Livro();

    l = createLivro("Harry potter", "J.K.Rowling");

    cout << "Escolha um livro: " << endl;
    cout << "1- " << l.getName() << " por " << l.getAuthor() << endl;
    cin >> option;
    cin.clear();

    Livro_emprestimo l_e = Livro_emprestimo();
    l_e.setEmprestado(l);

    cout << "Realize seu cadastro no sistema: " << endl;
    cout << "Nome: " << endl;
    cin >> pessoa_nome;
    cin.clear();
    cout << "Idade: " << endl;
    cin >> pessoa_idade;
    cin.clear();

    Pessoa p = Pessoa();
    p.setName(pessoa_nome);
    p.setIdade(pessoa_idade);

    l_e.setPessoa(p);

    cout << "Agora digite a quantidade de dias que voce quer pegar o livro emprestado: " << endl;
    cin >> quant;
    cin.clear();

    l_e.setQuantDias(quant);

    cout << l.getName() << " vai ser emprestado para " << p.getname() << " por " << quant << " dias." << endl;

    return 0;
}