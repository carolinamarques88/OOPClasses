//
// Created by Luccas on 02/11/2024.
//

#ifndef VECTOR_H
#define VECTOR_H
#include <sstream>
#include <string>


class vector {
    double x;
    double y;

public:
    vector(double _x, double _y);
    vector(double _x);

    [[nodiscard]] double getX() const;
    [[nodiscard]] double getY() const;

    void setX(double _x);
    void setY(double _y);

    vector operator+(const vector &v) const;
    vector operator-(const vector &v) const;
    vector& operator+=(const vector &v);
    bool operator==(const vector &v) const;
    bool operator!=(const vector &v) const;

};

inline vector operator+(double scalar, const vector &other) {
    return vector(other.getX() + scalar, other.getY() + scalar);
}

inline std::ostream& operator<<(std::ostream& os, const vector& vec) {
    os << "(" << vec.getX() << ", " << vec.getY() << ")";
    return os;
}


#endif //VECTOR_H
