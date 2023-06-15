#ifndef _CL_OBJECT_8_H_
#define _CL_OBJECT_8_H_

#include "cl_object_7.h"

class cl_object_8 : public cl_object_1, public cl_object_6, public cl_object_7
{
public:
	cl_object_8(std::string);

	std::string get_name();
private:
	std::string name;
};

#endif