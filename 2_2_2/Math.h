#ifndef _MATH_H_
#define _MATH_H_

#include <iostream>

class Math
{
public:
	Math(int);

	void change_state();
	void call_private();
	void read_state();

	int available = 0;
private:
	void private_action();

	int hidden = 0;
};

#endif
