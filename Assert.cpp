#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

void test1(int from, int to);
void test2(int from, int to);
void test3(int from, int to);

int main() {
    int from = -1, to = 1;

    test1(from, to);
    test2(from, to);
    test3(from, to);

    /**
     * Uncomment
     *
    to = 2;

    test1(from, to);
    test2(from, to);
    test3(from, to);
    /**/

    return 0;
}

void test1(int from, int to) {
    for (double x = from; x <= to; x += 0.01) {
        double y = sin(x);
        assert(y >= -1 && y <= 0.9);
    }
}

void test2(int from, int to) {
    for (double x = from; x <= to; x += 0.01) {
        double y = sin(x);
        assert(y >= -0.9 && y <= 1);
    }
}

void test3(int from, int to) {
    for (double x = from; x <= to; x += 0.01) {
        double y = sin(x);
        assert(y >= -1 && y <= 1);
    }
}
