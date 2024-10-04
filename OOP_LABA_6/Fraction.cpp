#include "Fraction.h"
#include <iostream>


Fraction::Fraction() : fractionPart(0, 0) {}


Fraction::Fraction(int whole, int fractional) : fractionPart(whole, fractional) {}

// Методи для зміни значень
void Fraction::setWholePart(int whole) { fractionPart.setFirst(whole); }
void Fraction::setFractionalPart(int fractional) { fractionPart.setSecond(fractional); }

int Fraction::getWholePart() const { return fractionPart.getFirst(); }
int Fraction::getFractionalPart() const { return fractionPart.getSecond(); }

// Оператори порівняння
bool Fraction::operator==(const Fraction& other) const {
    return fractionPart.getFirst() == other.fractionPart.getFirst() &&
        fractionPart.getSecond() == other.fractionPart.getSecond();
}

bool Fraction::operator!=(const Fraction& other) const {
    return !(*this == other);
}

bool Fraction::operator<(const Fraction& other) const {
    return fractionPart.isGreaterThan(other.fractionPart);
}

bool Fraction::operator>(const Fraction& other) const {
    return other < *this;
}

bool Fraction::operator<=(const Fraction& other) const {
    return !(*this > other);
}

bool Fraction::operator>=(const Fraction& other) const {
    return !(*this < other);
}


void Fraction::print() const {
    std::cout << "Дріб: ";
    fractionPart.print();
    std::cout << std::endl;
}