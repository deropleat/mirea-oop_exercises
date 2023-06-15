#ifndef _CL_OBJECT_6_H_
#define _CL_OBJECT_6_H_

#include "cl_object_5.h"

class cl_object_6 : public cl_object_2, public cl_object_3
{
public:
	cl_object_6(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif