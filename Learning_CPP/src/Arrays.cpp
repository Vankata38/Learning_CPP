#include <iostream>

void testArray() {

    // Stack allocation
    int example[5];
    example[0] = 2;
    example[4] = 4;

    // Invalid, we are modifying outside our array
    // Example[-1]
    // Example[5]

    for (int i = 0; i < 5; i++)
        example[i] = 2;


    // Heap allocation
    int* another = new int[5];
    delete[] another;

    for (int i = 0; i < 5; i++)
        another[i] = 2;


    std::cout << example[0] << std::endl;
}
