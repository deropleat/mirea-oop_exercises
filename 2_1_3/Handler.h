#ifndef _HANDLER_H_
#define _HANDLER_H_

#include <iostream>
#include <string>

class Handler
{
public:
	Handler();
private:
	void writeIn();
	void readFrom();
	void inReverse();

	int* M = nullptr, N = 0;
};

#endif
