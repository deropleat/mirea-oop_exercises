#include "cl_resolver_3.h"

cl_resolver_3::cl_resolver_3(int int_1, int int_2, int int_3) : cl_resolver_2(int_1, int_2)
{
	this->int_3 = int_3;
}

int cl_resolver_3::resolve(int x)
{
	return int_3 * x * x * x;
}