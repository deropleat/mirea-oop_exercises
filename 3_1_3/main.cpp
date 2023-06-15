#include "Object.h"

void function(Object object)
{
	std::cout << object.multi_pairs() << std::endl;
}

int main()
{
	int size; 
	std::cin >> size;

	if (size > 2 && size % 2 == 0)
	{
		std::cout << size << std::endl;

		Object object(size);
		object.input_massive();
		function(object);
		object.sum_pairs();
		std::cout << std::endl << object.get_sum() << std::endl;

		return 0;
	}
	std::cout << size << "?";

	return 1;
}
