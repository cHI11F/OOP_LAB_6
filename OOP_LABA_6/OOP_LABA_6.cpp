#include <iostream>
#include "Pair.h"
#include "Fraction.h"

int main() {
    int first1, second1, first2, second2;


    std::cout << "Введіть першу пару чисел (first та second): ";
    std::cin >> first1 >> second1;
    Pair p1(first1, second1);

    std::cout << "Введіть другу пару чисел (first та second): ";
    std::cin >> first2 >> second2;
    Pair p2(first2, second2);

    std::cout << "Перша пара: ";
    p1.print();
    std::cout << std::endl;

    std::cout << "Друга пара: ";
    p2.print();
    std::cout << std::endl;

    // Порівняння пар
    if (p1.isGreaterThan(p2)) {
        std::cout << "Перша пара більша за другу" << std::endl;
    }
    else {
        std::cout << "Перша пара не більша за другу" << std::endl;
    }

    // Введення цілої та дробової частин дробу
    int whole1, fractional1, whole2, fractional2;

    std::cout << "Введіть цілу та дробову частину для першого дробу: ";
    std::cin >> whole1 >> fractional1;
    Fraction f1(whole1, fractional1);

    std::cout << "Введіть цілу та дробову частину для другого дробу: ";
    std::cin >> whole2 >> fractional2;
    Fraction f2(whole2, fractional2);

    std::cout << "Перший дріб: ";
    f1.print();

    std::cout << "Другий дріб: ";
    f2.print();

    // Порівняння дробів
    if (f1 > f2) {
        std::cout << "Перший дріб більший за другий" << std::endl;
    }
    else {
        std::cout << "Перший дріб не більший за другий" << std::endl;
    }

    return 0;
}