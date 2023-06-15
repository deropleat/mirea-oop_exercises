#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <iostream>

class Object
{
public:
	Object();
	Object(int);
	Object(const Object&);
	Object(const Object*);
	~Object();

	int get_sum();
	int sum_pairs();
	int multi_pairs();
	void show_massive();
	void input_massive();
	void create_massive();
private:
	int* massive, size;
};

#endif
