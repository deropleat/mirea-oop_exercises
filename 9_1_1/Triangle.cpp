#include "Triangle.h"

Triangle::Triangle(int a, int b, int c)
{
	this->a = a; 
	this->b = b; 
	this->c = c; 
}

Triangle& Triangle::operator+(const Triangle& object)
{
	if (object.a + a + object.b + b > object.c + c && object.a + a + object.c + c > object.b + b && object.b + b + object.c + c > object.a + a)
	{
		a += object.a;
		b += object.b;
		c += object.c;
	}
	return *this;
}

Triangle& Triangle::operator+=(const Triangle& object)
{
	return operator+(object);
}

Triangle& Triangle::operator-(const Triangle& object)
{
	if (a - object.a > 0 && b - object.b > 0 && c - object.c > 0) if ((a - object.a) + (b - object.b) > c - object.c && (a - object.a) + (c - object.c) > b - object.b && (b - object.b) + (c - object.c) > a - object.a) a -= object.a; b -= object.b; c -= object.c;
	return *this;
}

Triangle& Triangle::operator-=(const Triangle& object)
{
	return operator-(object);
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