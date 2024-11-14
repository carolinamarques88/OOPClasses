//
// Created by Luccas on 02/11/2024.
//

#include "vector.h"

#include <iostream>
#include <ostream>

vector::vector(const double _x, const double _y) : x(_x), y(_y) {

}

vector::vector(const double _x) : x(_x), y(_x) {

}

double vector::getX() const {
    return x;
}

double vector::getY() const {
    return y;
}

void vector::setX(const double _x) {
    x = _x;
}

void vector::setY(const double _y) {
    y = _y;
}

vector vector::operator+(const vector &v) const {
    return vector(x + v.x, y + v.y);
}

vector vector::operator-(const vector &v) const {
    return vector(x - v.x, y - v.y);
}

vector &vector::operator+=(const vector &v) {
    x += v.x;

    return *this;
}

bool vector::operator==(const vector &v) const {
    if(x == v.x && y == v.y)
        return true;
    return false;
}

bool vector::operator!=(const vector &v) const {
    return !(*this==v);
}