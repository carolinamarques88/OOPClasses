//
// Created by Luccas on 20/09/2024.
//

#include "myCout.h"

void myCout::imprime(const std::string& text) {
    std::cout << text << std::endl;
}

void myCout::imprime(const std::string& text, int number) {
    std::cout << text << number << std::endl;
}

void myCout::imprime(int number, const std::string& text) {
    std::cout << text << number << std::endl;
}