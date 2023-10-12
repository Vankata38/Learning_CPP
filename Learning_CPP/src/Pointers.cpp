#include <iostream>

void AllocateAndDeallocate() {

    // Create an array of chars and get the pointer
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    // Delete the array
    delete[] buffer;
}