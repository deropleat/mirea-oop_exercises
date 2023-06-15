#include "cl_object_3.h"

cl_object_3::cl_object_3(std::string name) : cl_object_1(name + "_3")
{
	this->name = name + "_3";
}

std::string cl_object_3::get_name()
{
	return name;
}