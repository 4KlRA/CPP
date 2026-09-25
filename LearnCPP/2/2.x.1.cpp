#include "io.h"

int main() {
    int numb1 {readNumber()};
    int numb2 {readNumber()};

    writeNumber(numb1 + numb2);

    return 0;
}