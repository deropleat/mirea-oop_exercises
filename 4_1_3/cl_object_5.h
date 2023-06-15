#ifndef _CL_OBJECT_5_H_
#define _CL_OBJECT_5_H_

#include "cl_object_4.h"

class cl_object_5 : public cl_object_1
{
public:
	cl_object_5(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif