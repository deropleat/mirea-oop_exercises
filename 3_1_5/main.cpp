#include "Object.h"

Object* function(int size)
{
	Object* object = new Object(size);
	object->create_massive();
	object->input_massive();
	object->multi_pairs();

	return object;
}

int main()
{
	int size; 
	std::cin >> size;

	if (size > 2 && size % 2 == 0)
	{
		std::cout << size;

		Object* object_1;
		object_1 = function(size);
		object_1->sum_pairs();

		Object* object_2 = new Object(object_1);
		object_2->multi_pairs();
		object_1->show_massive();
		std::cout << std::endl << object_1->get_sum() << std::endl;
		object_2->show_massive();
		std::cout << std::endl << object_2->get_sum() << std::endl;

		Object* mem_object = object_2;
		object_2 = object_1;
		object_1->sum_pairs();
		mem_object->show_massive();
		std::cout << std::endl << mem_object->get_sum();
		
		delete object_1, object_2, mem_object;
		return 0;
	}
	std::cout << size << "?";

	return 1;
}
