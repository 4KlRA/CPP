#include <iostream>

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
	a();
	b();

    system("pause");
	return 0;
}

// #include <iostream>

// int main()
// {
// 	int x{ 1 };
// 	std::cout << x << ' ';

// 	x = x + 2;
// 	std::cout << x << ' ';

// 	x = x + 3;
// 	std::cout << x << ' ';

//     system("pause");
// 	return 0;
// }

// #include <iostream>

// void printValue(int value)
// {
//     std::cout << value << '\n';
// }

// int main()
// {
//     printValue(5);
// system("pause");
//     return 0;
// }