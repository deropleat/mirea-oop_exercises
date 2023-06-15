#ifndef _CL_RESOLVER_4_H_
#define _CL_RESOLVER_4_H_

#include "cl_resolver_3.h"

class cl_resolver_4 : public cl_resolver_3
{
public:
	cl_resolver_4(int, int, int, int);

	virtual int resolve(int);
protected:
	int int_4 = 0;
};

#endif