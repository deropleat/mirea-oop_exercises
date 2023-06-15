#include "cl_object_7.h"

cl_object_7::cl_object_7(std::string name) : cl_object_4(name + "_7"), cl_object_5(name + "_7")
{
	this->name = name + "_7";
}

std::string cl_object_7::get_name()
{
	return name;
}