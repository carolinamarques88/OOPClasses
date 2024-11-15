//
// Created by Luccas on 13/11/2024.
//

#include "headers/Buffer.h"

Buffer::Buffer()  : buffer(nullptr), linhas(0), colunas(0), cursorX(0), cursorY(0) {}

Buffer::~Buffer()  {
    delete[] buffer;
}

void Buffer::alocarBuffer() {
    delete[] buffer;  // Libera o buffer se já existir
    buffer = new char[linhas * colunas]; // Aloca espaço para o buffer unidimensional
    limparBuffer(); // Preenche o buffer com espaços
}

void Buffer::limparBuffer() const {
    for (int i = 0; i < linhas * colunas; ++i) {
        buffer[i] = ' ';
    }
}

void Buffer::moverCursor(const int x, const int y) {
    if (x >= 0 && x < linhas && y >= 0 && y < colunas) {
        cursorX = x;
        cursorY = y;
    }
}

void Buffer::imprimirChar(const char c) const {
    if (cursorX >= 0 && cursorX < linhas && cursorY >= 0 && cursorY < colunas) {
        buffer[getIndex(cursorX, cursorY)] = c;
    }
}

int Buffer::getIndex(const int x, const int y) const {
    return x * colunas + y; // Converte coordenadas 2D para índice 1D
}

void Buffer::transcreverParaConsole() const  {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << buffer[getIndex(i, j)];
        }
        std::cout << '\n';
    }
}

void Buffer::limpar()  {
    limparBuffer();
    cursorX = cursorY = 0;
}

bool Buffer::carregarMapa(const std::string &nomeFicheiro) {
    std::ifstream arquivo(nomeFicheiro);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o ficheiro: " << nomeFicheiro << std::endl;
        return false;
    }

    // Lê as dimensões do mapa
    arquivo >> linhas >> colunas;
    arquivo.ignore(); // Ignora o newline após as dimensões

    // Redimensiona o buffer com as novas dimensões
    alocarBuffer();

    // Lê o mapa linha por linha e armazena no buffer
    std::string linha;
    int linhaAtual = 0;
    while (std::getline(arquivo, linha) && linhaAtual < linhas) {
        for (int j = 0; j < linha.size() && j < colunas; ++j) {
            buffer[getIndex(linhaAtual, j)] = linha[j];
        }
        linhaAtual++;
    }

    arquivo.close();
    return true;
}

void Buffer::moverAlgo(const int x, const int y, const int newX, const int newY) {
    moverCursor(x, y);

    if (cursorX >= 0 && cursorX < linhas && cursorY >= 0 && cursorY < colunas) {
        const auto aux = buffer[getIndex(cursorX, cursorY)];
        buffer[getIndex(cursorX, cursorY)] = '.';

        if(newX >= 0 && newX < linhas && newY >= 0 && newY < colunas) {
            buffer[getIndex(newX, newY)] = aux;
        }
    }
}

