#include <iostream>
#include "Registo.h"

int main() {
    Registo r1("BRAZEL");

    r1.adicionarPessoa("Luccas", 123, 456);
    r1.adicionarPessoa("Ze", 456, 123);
    r1.adicionarPessoa("Samanta", 789, 987);

    std::cout << r1.getNPessoas() << std::endl;
    r1.apagar(123);
    std::cout << r1.getNPessoas() << std::endl;

    std::cout << r1.getPessoaList() << std::endl;

    return 0;
}
