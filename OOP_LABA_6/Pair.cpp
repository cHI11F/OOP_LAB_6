#include "Pair.h"
#include <iostream>


Pair::Pair() : first(0), second(0) {}


Pair::Pair(int f, int s) : first(f), second(s) {}


void Pair::setFirst(int f) { first = f; }
void Pair::setSecond(int s) { second = s; }

int Pair::getFirst() const { return first; }
int Pair::getSecond() const { return second; }


bool Pair::isGreaterThan(const Pair& other) const {
    return (first > other.first) || (first == other.first && second > other.second);
}


void Pair::print() const {
    std::cout << "(" << first << ", " << second << ")";
}