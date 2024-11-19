//
// Created by Luccas on 13/11/2024.
//

#include "headers/Caravana.h"
int Caravana::nextId = 1;

//Getters
int Caravana::getId() const  { return id; }
int Caravana::getPosX() const { return posX; }
int Caravana::getPosY() const { return posY; }
int Caravana::getCarga() const { return carga; }
int Caravana::getAgua() const { return agua; }
int Caravana::getTripulacao() const { return tripulacao; }

//Acoes TODO
void Caravana::abastecerAgua()  { agua = capacidadeAgua; }
void Caravana::descarregarCarga()  { carga = 0; }
void Caravana::carregarCarga(int qtd) {
    if (carga + qtd <= capacidadeCarga) {
        carga += qtd;
    } else {
        std::cout << "Capacidade de carga excedida!" << std::endl;
    }
}

void Caravana::imprimirDetalhes() const {
    std::cout << "ID: " << id
              << "\n- Pos: (" << posX << ", " << posY << ")"
              << "\n- Carga: " << carga << "/" << capacidadeCarga
              << "\n- agua: " << agua << "/" << capacidadeAgua
              << "\n- Tripulacao: " << tripulacao << "/" << capacidadeTripulacao
              << std::endl;
}

//Caravana comercial TODO
void CComercial::mover(int novaX, int novaY) {

}

void CComercial::comportamentoAutonomo() {
    //criar uma instancia buffer pra ver localizacoes de outras caravanas? nsei
}

void CComercial::consumirAgua() {
    //calcular depois lol
}


//Caravana militar TODO
void CMilitar::mover(int novaX, int novaY) {

}

void CMilitar::comportamentoAutonomo() {

}

void CMilitar::consumirAgua() {

}


//Caravana Secreta TODO
void CSecreta::mover(int novaX, int novaY) {

}

void CSecreta::comportamentoAutonomo() {

}

void CSecreta::consumirAgua() {

}

void CBarbara::comportamentoAutonomo() {

}
