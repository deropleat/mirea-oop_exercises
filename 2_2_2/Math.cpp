#include "Math.h"

Math::Math(int value)
{
	available = value;
	hidden = value * 3;
}

void Math::change_state()
{
	available += 4;
	hidden += 1;
}

void Math::call_private()
{
	private_action();
}

void Math::read_state()
{
	std::cout << "Value of the available property " << available << "; ";
	std::cout << "Value of a hidden property " << hidden;
}

void Math::private_action()
{
	available += 7;
	hidden += 5;
}
