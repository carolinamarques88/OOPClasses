#include <iostream>
#include "table.h"
int main() {
    table Tabela(0, 2);
    table Tabela2(0, 9);
    table Tabela3(9);
    table Tabela4;
    table Tabela5(9);

    Tabela.getValueAt(6);
    Tabela.setValueAt(6, 999);

    std :: cout << std :: endl << "Tabela 1: ";
    Tabela.printMatrix();
    std :: cout << std :: endl << "Tabela 2: ";
    Tabela2.printMatrix();
    std :: cout << std :: endl << "Tabela 3: ";
    Tabela3.printMatrix();
    std :: cout << std :: endl << "Tabela 4: ";
    Tabela4.printMatrix();
    std :: cout << std :: endl << "Tabela 5: ";
    Tabela5.printMatrix();

    std::cout << std::endl << Tabela.checkIfExists(0) << std::endl;

    std::cout << Tabela3.operator==(Tabela5) << std::endl;

    return 0;
}
