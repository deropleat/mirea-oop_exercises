#ifndef _CL_RESOLVER_1_H_
#define _CL_RESOLVER_1_H_

#include <iostream>

class cl_resolver_1
{
public:
	cl_resolver_1(int);
	
	virtual int resolve(int);
protected:
	int int_1 = 0;
};

#endif