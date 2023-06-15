#include "Triangle.h"

int main()
{
	char sign;
	int head, sub, amount = 0, side[3] = { 0, 0, 0 };
	std::vector<Triangle> triangles;
	while (amount < 2 || abs(amount) != amount) std::cin >> amount;

	for (; amount > 0; amount--)
	{
		for (int i = 0; i < 3; i++) while (side[i] <= 0) std::cin >> side[i];
		triangles.push_back(Triangle(side[0], side[1], side[2]));
	}

	while (std::cin >> head)
	{
		std::cin >> sign >> sub;
		
		if (sign == '+') triangles[head - 1] += triangles[sub - 1];
		else if (sign == '-') triangles[head - 1] -= triangles[sub - 1];
	}

	std::cout << "a  =  " << triangles.at(head - 1).a << ";  b  =  " << triangles.at(head - 1).b << ";  c  =  " << triangles.at(head - 1).c << ".";
	return 0;
}