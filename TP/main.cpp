#include <iostream>
#include <sstream>
#include "headers/Buffer.h"
/*
        *Buffer buffer;

        buffer.carregarMapa("../teste.txt");
        std::cout << "Mapa carregado: " << '\n';
        buffer.transcreverParaConsole();

        std::cout << "Insira coordenadas em x e y para o cursor\n";

        buffer.moverCursor(2,1);

        buffer.imprimirChar('2');

        std::cout << "Mapa atualizado: \n";
        buffer.transcreverParaConsole();

        buffer.moverAlgo(2,5);

        std::cout << "Mapa atualizado apos mover: \n";
        buffer.transcreverParaConsole();
        */

bool running = true;

Buffer buffer;

int processaComandos(const std::string& comando) {
        std::string cmd, p1, p2, p3, p4;
        std::istringstream is (comando);

        is >> cmd;
        is >> p1;
        is >> p2;
        is >> p3;
        is >> p4;

        std::vector<std::string> parametros;
        std::string temp;
        int numParam = 0;
        while (is >> temp) { // Extrai cada número da string
                parametros.push_back(temp);
                numParam++;
        }

        if(cmd == "/sair") {
                return -1;
        }
        if(cmd == "/move") {
                if(numParam != 5) {
                        return 0;
                }
                buffer.moverAlgo(std::stoi(parametros[1]),
                        std::stoi(parametros[1]) , std::stoi(parametros[2]) ,
                        std::stoi(parametros[3]));
                std::cin.ignore(100, '\n');
                std::getchar();
        }
        if(cmd == "/exec") {
                if(numParam != 2) {
                        return 0;
                }
                if(!buffer.carregarMapa(parametros[1])) {
                        return -2;
                }
                std::cout << buffer.carregarMapa(p1) << std::endl;
        }
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

                std::cin >> comando;

                int aux = processaComandos(comando);
                if(aux != 0) {
                        if(aux == -1)
                                running = false;
                        if(aux == -2)
                                std::cout << "Caminho do ficheiro inválido";
                }
                std::cout << "Sintaxe ou comando invalido, tente novamente.";

        }
}
