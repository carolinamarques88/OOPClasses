#include <iostream>
#include <string>
#include "selector.h"

int main(){
    int a = 5, b = 10;
    select(a, b, 'm') = 0;
    std::cout << "a = " << a << " b = " << b; // aparece 0 10
}
