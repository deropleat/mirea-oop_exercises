#include "cl_object_6.h"

cl_object_6::cl_object_6(std::string name) : cl_object_2(name + "_6"), cl_object_3(name + "_6")
{
	this->name = name + "_6";
}

std::string cl_object_6::get_name()
{
	return name;
}