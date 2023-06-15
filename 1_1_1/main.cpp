#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	
	if (n % 2 == 0) std::cout << "even";
	else std::cout << "uneven";
	
	return 0;
}