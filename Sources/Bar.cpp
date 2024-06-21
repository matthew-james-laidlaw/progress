#include "Bar.hpp"

#include <iostream>

using namespace Progress;

void Bar::Update(PercentComplete const& message)
{
	int progress = message / 10;
	std::cout << "[";
	for (int i = 0; i < 10; ++i)
	{
		if (i <= progress) std::cout << "X";
		else std::cout << " ";
	}
	std::cout << "]";
	std::cout << std::endl;
}
