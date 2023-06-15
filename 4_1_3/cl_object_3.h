#ifndef _CL_OBJECT_3_H_
#define _CL_OBJECT_3_H_

#include "cl_object_2.h"

class cl_object_3 : public cl_object_1
{
public:
	cl_object_3(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif