#include "Stack.h"
//#include "Node.h"
#include "Stack.h"
#include <iostream>

#include <stack>


using namespace CareerCup;

class test1;
class test
{
public:
	test(int v){val = v;};

	test1* t1;
	int val;
};

class test1
{
public:
	test1()
	:test1_val(100){};

	int test1_val;
};


Stack<int> stack;

std::stack<test*> std_stack;

void push();
/*
int main(int argc, char** argv)
{

	push();


	for(size_t i = 0; i < 2; i++)
	{
		test a = stack.Pop();
		std::cout<<&(std_stack.top())<<std::endl;

		//std::cout<<std_stack.top().val<<std::endl;
		std_stack.pop();
// 		if(a == NULL) ;
// 		else 
		//std::cout<< a <<std::endl;
	}


	std::string a;
	a.append("der");

	std::string::size_type;
	char bb= a[2];

	system("pause");
	return 0;
}*/

void push()
{
	for(int i = 0; i < 2; i++)
	{
		//Node<int>* a = new Node<int>(i);
		//test t(i);// = new test(i);
		stack.Push(i);
		test* t = new test(i);
		std::cout<<&t<<std::endl;
		std_stack.push(t);
		//std::cout<<"push "<< i <<std::endl;
	}
}