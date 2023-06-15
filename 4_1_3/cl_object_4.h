#ifndef _CL_OBJECT_4_H_
#define _CL_OBJECT_4_H_

#include "cl_object_3.h"

class cl_object_4 : public cl_object_1
{
public:
	cl_object_4(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif