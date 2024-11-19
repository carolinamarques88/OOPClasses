//
// Created by Luccas on 13/11/2024.
//

#ifndef CARAVANA_H
#define CARAVANA_H

#include <string>
#include <iostream>

class Caravana {
    static int nextId;
    int id;
    int posX;
    int posY;
    int carga;
    int agua;
    int tripulacao;
    int capacidadeCarga;
    int capacidadeAgua;
    int capacidadeTripulacao;
    bool movAutonomo;

public:
    Caravana(int _posX, int _posY, int _capCarga, int _capAgua, int _capTrip)
        : posX(_posX), posY(_posY), capacidadeCarga(_capCarga), capacidadeAgua(_capAgua), capacidadeTripulacao(_capTrip),
          carga(0), agua(_capAgua), tripulacao(_capTrip), movAutonomo(false), id(nextId++) {}

    virtual ~Caravana() = default;

    [[nodiscard]] int getId() const;
    [[nodiscard]] int getPosX() const;
    [[nodiscard]] int getPosY() const;
    [[nodiscard]] int getCarga() const;
    [[nodiscard]] int getAgua() const;
    [[nodiscard]] int getTripulacao() const;

    virtual void mover(int novaX, int novaY);
    virtual void comportamentoAutonomo() = 0;
    virtual void consumirAgua() = 0;

    void abastecerAgua();
    void descarregarCarga();
    void carregarCarga(int qtd);

    //TODO
    void imprimirDetalhes() const;
};


class CComercial : public Caravana {
public:
    CComercial(int _posX, int _posY)
        : Caravana(_posX, _posY, 40, 200, 20) {}

    void mover(int novaX, int novaY) override;
    void comportamentoAutonomo() override;
};

class CMilitar : public Caravana {
    CMilitar(int _posX, int _posY)
        : Caravana(_posX, _posY, 5, 400, 40) {}

    void mover(int novaX, int novaY) override;
    void comportamentoAutonomo() override;
};

class CSecreta : public Caravana {
public:
    CSecreta(int _posX, int _posY)
        : Caravana(_posX, _posY, 20, 100, 10) {}

    void mover(int novaX, int novaY) override;
    void comportamentoAutonomo() override;


};


#endif // CARAVANA_H

