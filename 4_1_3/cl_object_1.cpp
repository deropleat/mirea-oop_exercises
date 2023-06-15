#include "cl_object_1.h"

cl_object_1::cl_object_1(std::string name)
{
	this->name = name + "_1";
}

std::string cl_object_1::get_name()
{
	return name;
}