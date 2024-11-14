//
// Created by Luccas on 02/11/2024.
//

#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H
#include <string>
#include <sstream>
#include <array>
#include "wheel.h"


class automovel {
    std::string matricula;
    int ano;
    std::array<wheel, 4> wheels;

public:
    automovel(std::string matricula, int ano, int diam);
    ~automovel();

    std::string getMatricula();
    int getAno();
    [[nodiscard]] const wheel& getWheel(int index) const;
};

inline std::ostream& operator<<(std::ostream &os, automovel &other){
    os << "Matricula: " << other.getMatricula() << " - Ano: " << other.getAno() <<
        "\nDiametro das rodas: \n"
        "Roda1: " << other.getWheel(0) << "\n"
        "Roda2: " << other.getWheel(1) << "\n"
        "Roda3: " << other.getWheel(2) << "\n"
        "Roda4: " << other.getWheel(3) << "\n";

    return os;
}


#endif //AUTOMOVEL_H
