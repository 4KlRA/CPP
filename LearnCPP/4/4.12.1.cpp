#include <iostream>

int main()
{
    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch;

    std::cout << "You entered: '" << ch << "' , which has the ASCII code " << static_cast<int>(ch) << ".\n";

    system("pause");
    return 0;
}