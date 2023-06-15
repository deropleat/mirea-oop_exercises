#ifndef _CL_OBJECT_7_H_
#define _CL_OBJECT_7_H_

#include "cl_object_6.h"

class cl_object_7 : public cl_object_4, public cl_object_5
{
public:
	cl_object_7(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif