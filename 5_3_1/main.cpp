#include "cl_resolver_4.h"

int main()
{
	int int_1, int_2, int_3, int_4, x, class_id, result;
	std::cin >> int_1 >> int_2 >> int_3 >> int_4;
	cl_resolver_4* resolver = new cl_resolver_4(int_1, int_2, int_3, int_4);

	std::cout << "a1 = " << int_1 << "    a2 = " << int_2 << "    a3 = " << int_3 << "    a4 = " << int_4;
	while (true)
	{
		std::cin >> x;
		if (x == 0) break;

		std::cin >> class_id;
		if (class_id < 1 || class_id > 4) continue;

		result = resolver->cl_resolver_1::resolve(x);
		if (class_id > 1) result += resolver->cl_resolver_2::resolve(x);
		else if (class_id > 2) result += resolver->cl_resolver_2::resolve(x);
		else if (class_id > 3) result += resolver->resolve(x);

		std::cout << std::endl << "Class " << class_id << "    F( " << x << " ) = " << result;
	}
	return 0;
}