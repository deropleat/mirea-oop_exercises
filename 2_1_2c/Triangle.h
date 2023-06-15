#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>

class Triangle
{
public:
	Triangle(int, int, int);

	long long int getObjectSize();
	long double getObjectSquare();
private:
	int a, b, c;
};

#endif
