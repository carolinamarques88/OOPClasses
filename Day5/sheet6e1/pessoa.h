//
// Created by Luccas on 15/11/2024.
//

#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <sstream>

class pessoa {
    int bi, nif;
    std::string nome;
public:
    pessoa(const std::string &n, int _bi, int _nif);
    ~pessoa();

    [[nodiscard]] std::string getNome() const;
    [[nodiscard]] int getBi() const;
    [[nodiscard]] int getNif() const;

    void atualizaNome(const std::string &n);
    [[nodiscard]] std::string descricao() const;
};



#endif //PESSOA_H
