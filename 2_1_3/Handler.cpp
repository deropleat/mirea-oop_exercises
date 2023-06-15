#include "Handler.h"

Handler::Handler()
{
	while (N < 1 || N > 10) std::cin >> N;
	M = new int[N];
	writeIn();

	std::cout << "N = " << N << std::endl;
	readFrom();
	std::cout << std::endl;

	inReverse();
	readFrom();
}

void Handler::writeIn()
{
	if (N > 0) for (int i = 0; i < N; i++) std::cin >> M[i];
}

void Handler::readFrom()
{
	if (M) for (int i = 0; i < N; i++)
	{
		int length = std::to_string(M[i]).length();

		if (length > 5) std::cout << std::to_string(M[i]).substr(length - 5);
		else std::cout << std::string(abs(5 - length), ' ') << M[i];
	}
}

void Handler::inReverse()
{
	if (M) for (int i = N - 1; i >= ceil((N - 1) / 2.0); i--) std::swap(M[i], M[N - i - 1]);
}
