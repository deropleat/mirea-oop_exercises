#include "cl_object_4.h"

int main()
{
	int number;
	std::string identifier;
	std::cin >> identifier >> number;
	
	if (number >= 2 && number <= 10)
	{
		cl_object_4 object(identifier, number);
		((cl_object_1)object).show_object();
		((cl_object_2)object).show_object();
		((cl_object_3)object).show_object();
		((cl_object_4)object).show_object();

		return 0;
	}
	return 1;
}
