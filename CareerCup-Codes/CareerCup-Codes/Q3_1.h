#pragma once
#include <array>
#include "Stack.h"
#include "Node.h"

class StackNode
{
	friend class Q3_1;
public:
	StackNode(){};
	StackNode(int prev_index, int val)
		:val_(val), prev_(prev_index)
	{

	}

private:
	int prev_;
	int val_;
};
class Q3_1
{
public:
	Q3_1(void);
	~Q3_1(void);

	//3.1 -------------------------------------------------------------
	static const int stack_size = 2;
	std::array<int, stack_size * 3> array_stack;

	std::array<StackNode, stack_size * 3> array_stack1;

	std::array<int, 3> array_pointer;

	void Push(int val, int stack_num);
	int Pop(int stack_num);


	void Push1(int val, int stack_num);
	int Pop1(int stack_num);

	int used_index_;



	
};


