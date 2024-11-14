//
// Created by Luccas on 02/11/2024.
//

#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <sstream>
#include <string>


class fraction {
    int numerator;
    int denominator;

public:
    fraction(int numerator = 0, int denominator = 1);
    void getFraction() const;

    void getNumerator() const;
    void getDenominator() const;

    void setNumerator(int _numerator);
    void setDenominator(int _denominator);

    fraction operator*(const fraction& other);
    fraction& operator=(const fraction& other);
    fraction& operator*=(const fraction& other);
    fraction& operator++();
    fraction operator++(int);
    bool operator==(const fraction& other) const;

    [[nodiscard]] std::string toString() const;
};



#endif //FRACTION_H
