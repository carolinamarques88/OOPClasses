//
// Created by Luccas on 27/09/2024.
//

#include "table.h"

#include <iostream>

//if you don't specify anything, itll be filled with 0's.
//if you only specify A, it'll be filled with A
//if you specify A and B, itll be filled from A till B
table::table(int a, int b) {
    int aux = a;
    for(int & i : matrix) {
        if(a == 0 && b == 0)
            i = 0;

        if(b == 0){
            i = a;
        }

        if(aux <= b) {
            i = aux;
            if(aux < b)
                ++aux;
        }
    }
}

void table::getValueAt(int index) const {
    try {
        if(index >= maxSize || index < 0) {
            throw std::out_of_range("index out of range");
        }
        std::cout << matrix[index] << " ";
    }catch (std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
}

void table::setValueAt(int index, int value) {
    try {
        if(index >= maxSize || index < 0) {
            throw std::out_of_range("index out of range");
        }
        matrix[index] = value;
    }catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }
}

void table::printMatrix() const {
    for(int i = 0; i < maxSize; i++) {
        getValueAt(i);
    }
    std::cout << std::endl;
}

bool table::checkIfExists(int value) const {
    for(int i : matrix) {
        if(i == value)
            return true;
    }
    return false;
}

int table::sumIndexes() const {
    int sum = 0;
    for(int i : matrix) {
        sum += i;
    }
    return sum;
}


bool table::operator==(const table &rhs) const {
    if(this->sumIndexes() == rhs.sumIndexes())
        return true;
    return false;
}

