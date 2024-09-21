#include <iostream>
#include <string>
#include "swapper.h"

int main(){
 int a = 5, b = 10;
 swap(a, b);
 std::cout << "\na = " << a << "\nb = " << b;
} // deve aparecer a = 10 e b = 5

