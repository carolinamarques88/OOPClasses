#include <iostream>
#include <vector>

#include "vector.h"

int main() {
    //vector a(1,2), b(3,4), c(1), d;

    vector v1(2.0, 1.0), v2(1.0, 3.0), v3(2.2), z(0, 0);
    z = v1 + v2 + v3;
    std::cout << v1 << "+" << v2 << "+" << v3 << "=" << z << std::endl; // obs: "(x,y)"
    z = v1 + 10.0;
    std::cout << v1 << " + " << " 10 = " << z << std::endl;
    z = 20.0 + v1;
    std::cout << "20 + " << v1 << " = " << z << std::endl;
    z = v1 - v2;
    std::cout << v1 << " - " << v2 << " = " << z << std::endl;

    vector a(1.0, 1.0), b(2.0, 4.0);
    std::cout << " a= " << a << " b= " << b << std::endl;
    a += b += v1;
    a += b;
    a += 10.0;

    std::cout << " a= " << a << std::endl;
    std::cout << "(a == b)? " << (a == b) << std::endl;
    std::cout << "(a != b)? " << (a != b) << std::endl;

    return 0;
}
