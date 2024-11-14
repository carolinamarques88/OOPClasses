//
// Created by Luccas on 02/11/2024.
//

#ifndef WHEEL_H
#define WHEEL_H
#include <sstream>


class wheel {
    double diametro;
public:
    explicit wheel(double d);
    ~wheel();
    [[nodiscard]] double getDiametro() const;

};

inline std::ostream& operator<<(std::ostream &os, const wheel &wheel) {
    os << wheel.getDiametro();

    return os;
}


#endif //WHEEL_H
