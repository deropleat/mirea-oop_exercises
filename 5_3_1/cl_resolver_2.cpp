#include "cl_resolver_2.h"

cl_resolver_2::cl_resolver_2(int int_1, int int_2) : cl_resolver_1(int_1)
{
	this->int_2 = int_2;
}

int cl_resolver_2::resolve(int x)
{
	return int_2 * x * x;
}