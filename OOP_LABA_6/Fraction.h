#ifndef FRACTION_H
#define FRACTION_H

#include "Pair.h"

class Fraction {
private:
    Pair fractionPart;  // Композиція: об'єкт класу Pair

public:
    Fraction();  // Конструктор за замовчуванням
    Fraction(int whole, int fractional);  // Конструктор з параметрами

    void setWholePart(int whole);
    void setFractionalPart(int fractional);

    int getWholePart() const;
    int getFractionalPart() const;

    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<=(const Fraction& other) const;
    bool operator>=(const Fraction& other) const;

    void print() const;
};

#endif