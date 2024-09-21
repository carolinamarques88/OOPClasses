//
// Created by Luccas on 20/09/2024.
//

#ifndef MATRIXMANIPULATOR_H
#define MATRIXMANIPULATOR_H
#include <string>
#include <iostream>

struct Tabela {
    const int size;
    int matriz[];
};

void preencherMatriz(Tabela& matrix);
void mostrarMatriz(Tabela& matrix);

void getValueAt(Tabela& matrix, int indice);
void updateValueAt(Tabela& matrix, int indice, int newValue);

#endif //MATRIXMANIPULATOR_H
