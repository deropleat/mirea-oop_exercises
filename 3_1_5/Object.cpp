#include "Object.h"

Object::Object()
{
	std::cout << "Default constructor";
}

Object::Object(int size)
{
	std::cout << std::endl << "Constructor set";

	this->size = size;
	this->massive = new int[size];
}

Object::Object(const Object& object)
{
	std::cout << std::endl << "Copy constructor" << std::endl;

	size = object.size;
	massive = new int[size];
	for (int i = 0; i < size; i++) massive[i] = object.massive[i];
}

Object::Object(const Object* object)
{
	std::cout << std::endl << "Copy constructor" << std::endl;

	size = object->size;
	massive = new int[size];
	for (int i = 0; i < size; i++) massive[i] = object->massive[i];
}

Object::~Object()
{
	std::cout << std::endl << "Destructor";
}

int Object::get_sum()
{
	int ret = 0;
	for (int i = 0; i < size; i++) ret += massive[i];
	return ret;
}

int Object::sum_pairs()
{
	for (int i = 0; i < size; i += 2) massive[i] += massive[i + 1];
	return get_sum();
}

int Object::multi_pairs()
{
	for (int i = 0; i < size; i += 2) massive[i] *= massive[i + 1];
	return get_sum();
}

void Object::show_massive()
{
	for (int i = 0; i < size - 1; i++) std::cout << massive[i] << "  ";
	std::cout << massive[size - 1];
}

void Object::input_massive()
{
	for (int i = 0; i < size; i++) std::cin >> massive[i];
}

void Object::create_massive()
{
	massive = new int[size];
}
