#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>
#include <vector>

class Triangle
{
public:
	Triangle(int, int, int);
	
	Triangle& operator+(const Triangle& object);
	Triangle& operator+=(const Triangle& object);
	Triangle& operator-(const Triangle& object);
	Triangle& operator-=(const Triangle& object);

	long long int getObjectSize();
	long double getObjectSquare();
	
	int a, b, c;
};

#endif