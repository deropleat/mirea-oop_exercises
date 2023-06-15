#include "cl_object_5.h"

cl_object_5::cl_object_5(std::string name) : cl_object_1(name + "_5")
{
	this->name = name + "_5";
}

std::string cl_object_5::get_name()
{
	return name;
}