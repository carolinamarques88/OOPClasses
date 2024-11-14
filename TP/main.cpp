#include <iostream>
#include "headers/Buffer.h"

int main() {
    Buffer buffer;

    buffer.carregarMapa("../teste.txt");
    std::cout << "Mapa carregado: " << '\n';
    buffer.transcreverParaConsole();

    buffer.moverCursor(2,1);

    buffer.imprimirChar('2');

    std::cout << "Mapa atualizado: \n";
    buffer.transcreverParaConsole();

    buffer.moverAlgo(2,5);

    std::cout << "Mapa atualizado 2: \n";
    buffer.transcreverParaConsole();
}
