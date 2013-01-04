#include <array>

#include "Stack.h"

#include "Q3_1.h"
#include <iostream>

int main(int argc, char** argv)
{
	
	Q3_1 q3;
	q3.Push1(100, 0);
	q3.Push1(200, 0);
	q3.Push1(250, 0);
	q3.Push1(150, 1);
	q3.Push1(150, 1);
	q3.Push1(1500, 1);
	q3.Push1(300, 2);

	std::cout << q3.Pop1(0)<<std::endl;
	std::cout << q3.Pop1(0)<<std::endl;
	std::cout << q3.Pop1(0)<<std::endl;
	std::cout <<q3.Pop1(1)<<std::endl;
	std::cout <<q3.Pop1(2)<<" "<<std::endl;
	q3.Pop1(1);

	return 0;
}

