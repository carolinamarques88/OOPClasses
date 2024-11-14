//
// Created by Luccas on 04/10/2024.
//

#include "MSG.h"

static int numberCount = 0;

MSG::MSG(char _letter) : number(++numberCount), letter(_letter) {
    std::cout << "Creating - letter: "<<letter << " number: " << number << std::endl;
}

MSG::~MSG() {
    std::cout << "Destroying - letter: "<<letter << " number: " << number << std::endl;
}
