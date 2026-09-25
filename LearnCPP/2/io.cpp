#include "io.h"
#include <iostream>

int readNumber() {
    std::cout << "Enter a number: ";

    int num {};
    std::cin >> num;

    return num;
}

void writeNumber(int num) {
    std::cout << num << std::endl;
}
