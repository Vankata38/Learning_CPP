#include <iostream>

void increment(int& a) {
    a++;
}

void testIncrement() {

    int test = 2;
    increment(test);

    std::cout << test << std::endl;
}
