#include "cl_resolver_4.h"

cl_resolver_4::cl_resolver_4(int int_1, int int_2, int int_3, int int_4) : cl_resolver_3(int_1, int_2, int_3)
{
	this->int_4 = int_4;
}

int cl_resolver_4::resolve(int x)
{
	return int_4 * x * x * x * x;
}