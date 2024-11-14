//
// Created by Luccas on 02/11/2024.
//

#include "automovel.h"

#include <iostream>

automovel::automovel(std::string _matricula, int _ano, int diam)
    : matricula(_matricula), ano(_ano), wheels{wheel(diam), wheel(diam), wheel(diam), wheel(diam)} {

    std::cout << "\nA car was constructed\n";
}

automovel::~automovel() {
    std::cout << "\nA car was destructed\n";    
}


std::string automovel::getMatricula() {
    return matricula;
}

int automovel::getAno() {
    return ano;
}

const wheel& automovel::getWheel(int index) const {
    return wheels.at(index);
}