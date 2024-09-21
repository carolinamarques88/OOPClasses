#include <iostream>
#include "matrixManipulator.h"

int main() {
    Tabela matrix = {10};

    preencherMatriz(matrix);
    mostrarMatriz(matrix);

    getValueAt(matrix, 5);
    updateValueAt(matrix, 5, 999);
    mostrarMatriz(matrix);
}
