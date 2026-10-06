#include <iostream>

double getNumber()
{
    std::cout << "Enter a number: ";
    double num{};
    std::cin >> num;
    return num;
}

char getOperator()
{
    std::cout << "Enter an operator (+, -, *, /): ";
    char op{};
    std::cin >> op;
    return op;
}

void printResult(double a, double b, char op) 
{
    double result{};
    if (op == '+') 
        result = a + b;
    else if (op == '-') 
        result = a - b;
    else if (op == '*') 
        result = a * b;
    else if (op == '/') 
        result = a / b;
    else 
        return;
    std::cout << a << " " << op << " " << b << " = " << result << "\n";
}

int main()
{
    double num1{getNumber()};
    double num2{getNumber()};

    char op{getOperator()};

    printResult(num1, num2, op);

    system("pause");
    return 0;
}