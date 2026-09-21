#include <iostream>
using namespace std;

// The dobleNumber function is 2.4.4.cpp
int doubleNumber(int num) {
    return num * 2;
}

int inputNumber() {
    cout << "Enter a number: ";
    int num {};
    cin >> num;
    return num;
}

int main() {
    cout << doubleNumber(inputNumber()) << "\n";
    return 0;
}