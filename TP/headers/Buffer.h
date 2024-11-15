//
// Created by Luccas on 13/11/2024.
//

#ifndef BUFFER_H
#define BUFFER_H

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

class Buffer {
    char* buffer; // Array unidimensional para armazenar caracteres
    int linhas;
    int colunas;
    int cursorX, cursorY;

    void alocarBuffer();

    void limparBuffer() const;

    [[nodiscard]] int getIndex(int x, int y) const;

public:
    Buffer();

    ~Buffer();

    void moverCursor(int x, int y);

    void imprimirChar(char c) const;

    //void imprimirString(std::string s) const; why tho

    //void imprimirInt(int i) const;

    void transcreverParaConsole() const;

    void limpar();

    bool carregarMapa(const std::string& nomeFicheiro);

    void moverAlgo(int x, int y, int newX, int newY);
};



#endif //BUFFER_H
