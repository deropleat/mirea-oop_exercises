#ifndef _CL_PARENT_H_
#define _CL_PARENT_H_

#include <iostream>

class cl_parent
{
public:
	cl_parent(int, int);
	
	void show_integers();
	void change_integers(int, int);

	int integer;
private:
	void change_private_integer(int);

	int private_integer;
};

#endif
