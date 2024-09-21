//
// Created by Luccas on 20/09/2024.
//

#ifndef MYCOUT_H
#define MYCOUT_H

#include <iostream>
#include <ostream>
#include<string>

namespace myCout {
    void imprime(const std::string& text);

    void imprime(const std::string& text, int number);

    void imprime(int number, const std::string& text);
}

#endif //MYCOUT_H
