#include "Object.h"

int main()
{
	int i, j;
	std::cin >> i;

	if (i > 4)
	{
		Object object_1(i);

		std::cin >> j;
		if (j > 4)
		{
			Object object_2(j);
			object_1 = object_2;

			object_1.update_massive(i);
			object_1.show_massive();
			std::cout << std::endl;
			object_2.show_massive();

			return 0;
		}
		else std::cout << j << "?";
	}
	else std::cout << i << "?";

	return 1;
}
