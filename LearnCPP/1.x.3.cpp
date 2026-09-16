#include <iostream>
using namespace std;

int main() {
    cout << "Enter an integer: ";
    int num1 {};
    cin >> num1;

    cout << "Enter another integer: "; 
    int num2 {};
    cin >> num2;

    cout << num1 << " + " << num2  << " = " << num1 + num2  << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

    return 0;
}