#include "cl_object_4.h"

cl_object_4::cl_object_4(std::string name) : cl_object_1(name + "_4")
{
	this->name = name + "_4";
}

std::string cl_object_4::get_name()
{
	return name;
}