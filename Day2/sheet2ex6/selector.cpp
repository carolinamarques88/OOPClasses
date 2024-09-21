//
// Created by Luccas on 20/09/2024.
//

#include "selector.h"

int& select(int& a, int& b, const char selector) {
    if(selector == 'm') {
        if(a > b)
            return b;
        return a;
    }
    if(selector == 'M') {
        if(a > b)
            return a;
        return b;
    }
    if(selector == 'p') {
        return a;
    }
    return b;

}