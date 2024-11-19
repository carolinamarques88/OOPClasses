//
// Created by Luccas on 13/11/2024.
//

#ifndef CIDADE_H
#define CIDADE_H

#include <string>
#include <vector>
#include "Caravana.h"


//TODO: achar um jeito de fazer com que o numero de mercadorias e tripulantes possa ser alterado em runtime

class Cidade {
    char nome; // Nome único da cidade
    int posX, posY; // Posição no mapa
    std::vector<Caravana*> caravanas; // Caravanas presentes na cidade
    int mercadoriasDisponiveis; // Quantidade de mercadorias disponíveis para compra
    int tripulantesDisponiveis; // Número de tripulantes disponíveis para contratação

public:
    Cidade(char nome, int x, int y, int mercadoriasDisponiveis, int tripulantesDisponiveis);

    // Getters
    [[nodiscard]] char getNome() const;
    [[nodiscard]] int getPosX() const;
    [[nodiscard]] int getPosY() const;


    // Ações
    bool aceitaCaravana(Caravana* caravana);
    void listarCaravanas() const;
    int comprarMercadoria(int quantidade, int& moedas);
    int contratarTripulantes(int quantidade, int& moedas);

    // Exibição
    void exibir() const;
};

#endif // CIDADE_H

