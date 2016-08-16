#include <iostream>

int main()
{
	std::cout << "Hello Team's" << std::endl;
	int a;
	std::cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		a += a;
		std::cout << i << ": " << a << std::endl;
	}
	int b;
	std::cin >> b;
	return 0;
}