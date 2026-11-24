#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num) {
    std::string name {};
    std::cout << "Enter the name of person #" << num << ": ";
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(const std::string_view name) {
    int age {};
    std::cout << "Enter the age of " << name << " : ";
    std::cin >> age;
    return age;
}

void printOlder(const std::string_view name1, int age1, const std::string_view name2, int age2) {
    if(age1 > age2) {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    } else if (age2 > age1){
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
    } else {
        std::cout << name1 << " & " << name2 << " are of equal age (" << age1 << ")\n";
    }
}

int main() {
    const std::string name1 = getName(1);
    const int age1 = getAge(name1);

    const std::string name2 = getName(2);
    const int age2 = getAge(name2);

    printOlder(name1, age1, name2, age2);

    system("pause");
    return 0;
}