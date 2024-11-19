#include <iostream>
#include <sstream>
#include "headers/Buffer.h"
#include "headers/Caravana.h"

bool running = true;

 Buffer buffer;

int processaComandos(const std::string& comando) {
        std::istringstream is(comando);
        std::string cmd;
        is >> cmd; // Primeiro comando

        std::vector<std::string> parametros;
        std::string temp;
        while (is >> temp) { // Captura todos os parâmetros
                parametros.push_back(temp);
        }

        if (cmd == "/sair") {
                return -1;
        }

        if (cmd == "/move") {
                if (parametros.size() != 4)
                        return 0;


                const int x = std::stoi(parametros[0]);
                const int y = std::stoi(parametros[1]);
                const int novoX = std::stoi(parametros[2]);
                const int novoY = std::stoi(parametros[3]);


                buffer.moverAlgo(x, y, novoX, novoY);
                buffer.transcreverParaConsole();
                return 1;
        }

        if (cmd == "/exec") {
                if (parametros.size() != 1)
                        return 0;

                if (!buffer.carregarMapa(parametros[0])) {
                        return -2;
                }

                std::cout << "Mapa carregado com sucesso: \n";
                buffer.transcreverParaConsole();
                return 1;
        }

        if (cmd == "/print") {
                if(parametros.size() != 3 || parametros[2].size() != 1)
                        return 0;

                const int p1 = std::stoi(parametros[0]);
                const int p2 = std::stoi(parametros[1]);

                const char c = parametros[2][0];

                buffer.moverCursor(p1, p2);
                buffer.imprimirChar(c);
                buffer.transcreverParaConsole();
                return 1;
        }

        return 0;
}

int main() {
        system("CLS");
        std::string comando;
        while(running) {
                std::cout << "Bem-vindo ao simulador de viagens no deserto. \n"
                "Comandos atualmente testaveis: \n"
                "Carregar mapa de ficheiro - Sintaxe: /exec <nomeFicheiro>\n"
                "Imprimir caracter em uma posicao do mapa - Sintaxe: /print <x>, <y>, <char>\n"
                "Mover algo no mapa - Sintaxe: /move <x>, <y>, <novo X>, <novoY>\n"
                "Sair - Sintaxe: /sair\n";

                std::getline(std::cin, comando);

                const int aux = processaComandos(comando);

                if(aux == -1)
                        running = false;
                if(aux == -2)
                        std::cout << "Caminho do ficheiro inválido";
                if(aux == 0)
                        std::cout << "Sintaxe ou comando invalido, tente novamente.";

        }
}
