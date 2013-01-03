#include "Stack.h"
//#include "Node.h"
#include "Stack.h"
#include <iostream>

using namespace CareerCup;

class test
{
public:
	test(int v){val = v;};

	int val;
};
int main(int argc, char** argv)
{
	Stack<int> stack;

	for(int i = 4; i < 10; i++)
	{
		//Node<int>* a = new Node<int>(i);
		//test t(i);// = new test(i);
		stack.Push(i);
		std::cout<<"push "<< i <<std::endl;
	}

	for(size_t i = 0; i < 12; i++)
	{
		int a = stack.Pop();
// 		if(a == NULL) ;
// 		else 
			std::cout<< a <<std::endl;
	}

	system("pause");
	return 0;
}