#ifndef _CL_OBJECT_2_H_
#define _CL_OBJECT_2_H_

#include "cl_object_1.h"

class cl_object_2 : public cl_object_1
{
public:
	cl_object_2(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif