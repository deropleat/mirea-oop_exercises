#include "cl_object_2.h"

cl_object_2::cl_object_2(std::string name) : cl_object_1(name + "_2")
{
	this->name = name + "_2";
}

std::string cl_object_2::get_name()
{
	return name;
}