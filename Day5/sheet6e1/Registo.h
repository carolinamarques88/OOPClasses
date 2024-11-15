//
// Created by Luccas on 15/11/2024.
//

#ifndef REGISTO_H
#define REGISTO_H

#include <string>
#include "pessoa.h";
#include <fstream>

class Registo {
    const static int MAX = 50;
    std::string const pais;
    int nPessoas;

    pessoa *conjunto[MAX] = {};
    int procura(int bi) const;
public:
    Registo(std::string _nome);
    ~Registo();

    [[nodiscard]] std::string getPais() const;
    [[nodiscard]] int getNPessoas() const;

    bool adicionarPessoa(const std::string &n, int bi, int nif);
    bool adicionarPessoa(const std::string &ficheiro);
    bool apagar(int bi);

    [[nodiscard]] std::string getNomePessoa(int bi) const;

    [[nodiscard]] std::string getPessoaList() const;

    bool setNomePessoa(int bi, const std::string &novoNome);
};



#endif //REGISTO_H
