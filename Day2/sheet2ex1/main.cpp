#include <iostream>
#include <string>

#include "validaDados.h"

using namespace validaDados2;
int main() {

    std::cout << validaDados1::dadosSaoValidos("testee") << std::endl;
    std::cout << dadosSaoValidos("1") << std::endl;;

    return 0;
}