//
// Created by Luccas on 02/11/2024.
//

#include "fraction.h"

fraction::fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {

}

void fraction::getFraction() const {
    std::cout << numerator << "/" << denominator << std::endl;
}

void fraction::getNumerator() const {
    std::cout << numerator << std::endl;
}

void fraction::getDenominator() const {
    std::cout << denominator << std::endl;
}

void fraction::setNumerator(const int _numerator) {
    numerator = _numerator;
}

void fraction::setDenominator(const int _denominator) {
    denominator = _denominator;
}

fraction fraction::operator*(const fraction &other) {
    int newNum = this->numerator * other.numerator;
    int newDen = this->denominator * other.denominator;

    return fraction(newNum, newDen);
}

fraction& fraction::operator=(const fraction &other) {
    this->numerator = other.numerator;
    this->denominator = other.denominator;

    return *this;
}

fraction &fraction::operator*=(const fraction &other) {
    this->numerator *= other.numerator;
    this->denominator *= other.denominator;

    return *this;
}

fraction &fraction::operator++() {
    this->numerator += this->denominator;

    return *this;
}

fraction fraction::operator++(int) {
    fraction temp = *this;
    this->numerator += this->denominator;

    return temp;
}

bool fraction::operator==(const fraction &other) const {
    if(this->denominator == other.denominator && this->numerator == other.numerator)
        return true;
    return false;
}


std::string fraction::toString() const {
    std::ostringstream os;

    os << numerator << "/" << denominator;

    return os.str();
}
