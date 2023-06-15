#include "Math.h"

int main()
{
	int data;
	std::cin >> data;
	
	Math* math = new Math(data);
	math->read_state();
	std::cout << std::endl;

	math->change_state();
	math->read_state();
	std::cout << std::endl;

	std::cin >> data;
	if (data > math->available) math->available = data * 8;
	math->read_state();
	std::cout << std::endl;

	math->call_private();
	math->read_state();
	delete math;

	return 0;
}
