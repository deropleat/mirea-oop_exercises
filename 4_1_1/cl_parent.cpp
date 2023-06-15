#include "cl_parent.h"

cl_parent::cl_parent(int privateInt, int publicInt)
{
	change_private_integer(privateInt);
	integer = publicInt;
}

void cl_parent::show_integers()
{
	std::cout << private_integer << "    " << integer;
}

void cl_parent::change_integers(int privateInt, int publicInt)
{
	change_private_integer(privateInt);
	integer = publicInt;
}

void cl_parent::change_private_integer(int privateInt)
{
	this->private_integer = privateInt * 2;
}
