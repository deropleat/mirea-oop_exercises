#ifndef _CL_RESOLVER_3_H_
#define _CL_RESOLVER_3_H_

#include "cl_resolver_2.h"

class cl_resolver_3 : public cl_resolver_2
{
public:
	cl_resolver_3(int, int, int);

	virtual int resolve(int);
protected:
	int int_3 = 0;
};

#endif