//
// Created by Luccas on 20/09/2024.
//

#include "validaDados.h"


//using const and a reference cause otherwise, it would copy the value every time
bool validaDados1::dadosSaoValidos(const std::string& dados){
    if(dados.size() > 5 && dados.size() < 10)
        return true;
    return false;
}

bool validaDados2::dadosSaoValidos(const std::string& dados){
    if((toupper(dados[0]) == dados[0]) && std::isnan(dados[0]))
        return true;
    return false;
}