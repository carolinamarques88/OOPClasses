//
// Created by Luccas on 20/09/2024.
//

#include "swapper.h"

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}