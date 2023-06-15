#include "Object.h"

Object::Object(int size)
{
	this->size = size;
	this->massive = new int[size];

	for (int i = 0; i < size; i++) massive[i] = size;
}

void Object::show_massive()
{
	for (int i = 0; i < size - 1; i++) std::cout << massive[i] << "  ";
	std::cout << massive[size - 1];
}

void Object::update_massive(int size)
{
	int* massive = new int[size];
	for (int i = 0; i < size; i++) massive[i] = size;
	
	this->size = size;
	this->massive = massive;
}
