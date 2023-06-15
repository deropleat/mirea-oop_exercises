#ifndef _CL_RESOLVER_2_H_
#define _CL_RESOLVER_2_H_

#include "cl_resolver_1.h"

class cl_resolver_2 : public cl_resolver_1
{
public:
	cl_resolver_2(int, int);

	virtual int resolve(int);
protected:
	int int_2 = 0;
};

#endif