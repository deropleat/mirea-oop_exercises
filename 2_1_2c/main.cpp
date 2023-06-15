#include "Triangle.h"

int main()
{
	int side[3] = { 0, 0, 0 };
	for (int i = 0; i < 3; i++) while (side[i] <= 0) std::cin >> side[i];
	
	Triangle* triangle = new Triangle(side[0], side[1], side[2]);
	std::cout << "P = " << triangle->getObjectSize() << std::endl;
	std::cout << "S = " << triangle->getObjectSquare();
	delete triangle;

	return 0;
}
