#include "cl_children.h"

int main()
{
	int privateInt, publicInt;
	std::cin >> privateInt >> publicInt;
	cl_children children(privateInt, publicInt);
	cl_parent parent = (cl_parent)children;
	parent.show_integers();
	std::cout << std::endl;
	children.show_integers();
	std::cout << std::endl;
	
	if (privateInt > 0)
	{
		children.change_integers(privateInt + 1, publicInt + 1);
		parent.change_integers(privateInt - 1, publicInt - 1);
		children.show_integers();
		std::cout << std::endl;
		parent.show_integers();
	}
	else
	{
		parent.change_integers(privateInt + 1, publicInt + 1);
		children.change_integers(privateInt - 1, publicInt - 1);
		parent.show_integers();
		std::cout << std::endl;
		children.show_integers();
	}

	return 0;
}
