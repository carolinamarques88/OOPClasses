//
// Created by Luccas on 20/09/2024.
//

#include "matrixManipulator.h"

void preencherMatriz(Tabela& matrix) {
    for(int i = 0; i < matrix.size; i++) {
        matrix.matriz[i] = i;
    }
}

void mostrarMatriz(Tabela& matrix) {
    for(int i = 0; i < matrix.size; i++) {
        std::cout << matrix.matriz[i] << " ";
    }
    std::cout << std::endl;
}

void getValueAt(Tabela& matrix, int indice) {
    if(indice > matrix.size || indice < 0) {
        std::cout << "Error, invalid index." << std::endl;
    }

    std::cout << matrix.matriz[indice] << std::endl;
}

void updateValueAt(Tabela& matrix, int indice, int newValue) {
    if(indice > matrix.size || indice < 0) {
        std::cout << "Error, invalid index." << std::endl;
    }

    matrix.matriz[indice] = newValue;

    std::cout << "Updated value: " << newValue << " On index: " << indice <<std::endl;
}