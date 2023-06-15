#ifndef _CL_CHILDREN_H_
#define _CL_CHILDREN_H_

#include "cl_parent.h"

class cl_children : public cl_parent
{
public:
	cl_children(int, int);
	
	void show_integers();
	void change_integers(int, int);

	int integer;
private:
	int private_integer;
};

#endif
