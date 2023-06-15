#include "Object.h"

Object function(int size)
{
	Object object(size);
	return object;
}

int main()
{
	int size; 
	std::cin >> size;

	if (size > 2 && size % 2 == 0)
	{
		std::cout << size << std::endl;

		Object object_1;
		object_1 = function(size);
		object_1.create_massive();
		object_1.input_massive();
		object_1.multi_pairs();

		Object object_2 = object_1;
		object_2.sum_pairs();

		object_1.show_massive();
		std::cout << std::endl << object_1.get_sum() << std::endl;
		object_2.show_massive();
		std::cout << std::endl << object_2.get_sum();

		return 0;
	}
	std::cout << size << "?";

	return 1;
}
