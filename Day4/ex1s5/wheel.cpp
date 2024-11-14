//
// Created by Luccas on 02/11/2024.
//

#include "wheel.h"
#include <iostream>
wheel::wheel(double _d) : diametro(_d > 1 && _d < 30 ? _d : 21) {
    std::cout << "\nA wheel was constructed.\n";
}

wheel::~wheel() {
    std::cout << "\nA wheel was destructed.\n";
}


double wheel::getDiametro() const {
    return diametro;
}
