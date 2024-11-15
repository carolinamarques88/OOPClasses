//
// Created by Luccas on 15/11/2024.
//

#include "pessoa.h"


pessoa::pessoa(const std::string &n, int _bi, int _nif) : nome(n), bi(_bi), nif(_nif) {}

pessoa::~pessoa() = default;

std::string pessoa::getNome() const {
    return nome;
}

int pessoa::getNif() const {
    return nif;
}

int pessoa::getBi() const {
    return bi;
}

void pessoa::atualizaNome(const std::string &n) {
    nome = n;
}

std::string pessoa::descricao() const {
    std::ostringstream oss;
    oss << "Nome: " << nome << ", BI: " << bi << ", NIF: " << nif;
    return oss.str();
}
