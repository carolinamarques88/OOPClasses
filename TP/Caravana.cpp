//
// Created by Luccas on 13/11/2024.
//

#include "headers/Caravana.h"

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
    carga += qtd;
}

//Caravana comercial TODO
void CComercial::mover(int novaX, int novaY) {

}

void CComercial::comportamentoAutonomo() {

}

//Caravana militar TODO
void CMilitar::mover(int novaX, int novaY) {

}

void CMilitar::comportamentoAutonomo() {

}

//Caravana Secreta TODO
void CSecreta::mover(int novaX, int novaY) {

}

void CSecreta::comportamentoAutonomo() {

}
