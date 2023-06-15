#include "cl_object_8.h"

cl_object_8::cl_object_8(std::string name) : cl_object_1(name + "_8"), cl_object_6(name + "_8"), cl_object_7(name + "_8")
{
	this->name = name + "_8";
}

std::string cl_object_8::get_name()
{
	return name;
}