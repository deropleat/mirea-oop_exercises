#include "Triangle.h"

Triangle::Triangle(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

long long int Triangle::getObjectSize()
{
	return a + b + c;
}

long double Triangle::getObjectSquare()
{
	long double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
