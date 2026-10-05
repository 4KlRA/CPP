#include <iostream>

bool isPrime(int x) {
    if(x == 2) return 1;
    if(x == 3) return 1;
    if(x == 5) return 1;
    if(x == 7) return 1;
    return 0;
}

int main() {
    std::cout << "Enter a number to check Prime: \n";
    
    int num {};
    std::cin >> num;

    if(isPrime(num))
        std::cout << num << " is Prime.\n";
    else
        std::cout << num << " is not Prime\n";

    system("pause");
    return 0;
}