#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <iostream>

class Object
{
public:
	Object(int);

	void show_massive();
	void update_massive(int);
private:
	int* massive, size;
};

#endif
