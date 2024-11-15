//
// Created by Luccas on 15/11/2024.
//

#include "Registo.h"

Registo::Registo(std::string _nome) : pais(_nome), nPessoas(0) {}

Registo::~Registo() {
    for(int i = 0; i < nPessoas; i++) {
        delete conjunto[i];
    }
}

std::string Registo::getPais() const{
    return pais;
}

int Registo::getNPessoas() const{
    return nPessoas;
}

bool Registo::adicionarPessoa(const std::string &n, int bi, int nif) {
    if(nPessoas == MAX || procura(bi) != -1) return false;

    if(procura(bi) == -1) {
        conjunto[nPessoas++] = new pessoa(n, bi, nif);
        return true;
    }
}

bool Registo::adicionarPessoa(const std::string &ficheiro) {
    std::ifstream fich(ficheiro);
    if(fich) {
        int bi;
        int nif;
        std::string nome;
        std::string line;
        while(std::getline(fich, line)) {
            if(std::istringstream is(line); is >> nome && is >> bi && is >> nif) {
                adicionarPessoa(nome, bi, nif);
            }
        }
        return true;
    }
    return false;
}

bool Registo::apagar(int bi) {
    int aux = procura(bi);
    if(aux == -1)
        return false;
    delete conjunto[aux];
    conjunto[aux] = nullptr;
    if(aux != nPessoas) {
        for(int i = aux; i < nPessoas; i++ ) {
            conjunto[i] = conjunto[i+1];
        }
    }
    nPessoas--;
    return true;
}

std::string Registo::getNomePessoa(int bi) const {
    int aux = procura(bi);
    if(aux == -1)
        return "achei ngm nao ze";

    return conjunto[aux]->getNome();

}

bool Registo::setNomePessoa(int bi, const std::string &novoNome) {
    int aux = procura(bi);
    if(aux == -1)
        return false;

    conjunto[aux]->atualizaNome(novoNome);
    return true;
}

std::string Registo::getPessoaList() const {
    std::ostringstream os;
    for(int i = 0; i < nPessoas; i++) {
        os << conjunto[i]->descricao() << std::endl;
    }

    return os.str();
}



int Registo::procura(int bi) const {
    for(int i = 0; i < nPessoas; i++) {
        if(conjunto[i]->getBi() == bi) {
            return i;
        }
    }
    return -1;
}
