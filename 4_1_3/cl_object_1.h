#ifndef _CL_OBJECT_1_H_
#define _CL_OBJECT_1_H_

#include <iostream>

class cl_object_1
{
public:
	cl_object_1(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif