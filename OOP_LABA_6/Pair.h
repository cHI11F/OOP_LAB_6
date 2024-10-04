#ifndef PAIR_H
#define PAIR_H

class Pair {
private:
    int first;
    int second;

public:
    Pair();
    Pair(int f, int s);

    void setFirst(int f);
    void setSecond(int s);

    int getFirst() const;
    int getSecond() const;

    bool isGreaterThan(const Pair& other) const;

    void print() const;
};

#endif