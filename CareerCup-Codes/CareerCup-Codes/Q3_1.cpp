#include "Q3_1.h"
#include <iostream>


Q3_1::Q3_1(void)
{
	array_pointer[0] = -1;
	array_pointer[1] = -1;
	array_pointer[2] = -1;

	used_index_ = -1;
}


Q3_1::~Q3_1(void)
{
}

void Q3_1::Push( int val, int stack_num )
{
	if(array_pointer[stack_num] - stack_size * stack_num < stack_size)
		array_stack[array_pointer[stack_num]++] = val;
	else
	{
		std::cout<<"stack full"<<std::endl;
	}
}

int Q3_1::Pop( int stack_num )
{
	if(array_pointer[stack_num]- stack_size * stack_num == 0)
	{
		std::cout<<"stack empty"<<std::endl;
		return 0;
	}
	else
	{
		return array_stack[--array_pointer[stack_num]];
	}
}

void Q3_1::Push1( int val, int stack_num )
{
	if(used_index_+ 1 == stack_size * 3) std::cout<<"stack full"<<std::endl;
	else
	{
		int prev = array_pointer[stack_num];
		array_stack1[++used_index_] = StackNode(prev, val);
		array_pointer[stack_num] = used_index_;
	}
}

int Q3_1::Pop1( int stack_num )
{
	if(used_index_ < 0 || array_pointer[stack_num] == -1) std::cout<<"stack empty"<<std::endl;
	else
	{
		int ret = array_stack1[array_pointer[stack_num]].val_;
		array_pointer[stack_num] = array_stack1[array_pointer[stack_num]].prev_;
		used_index_--;
		return ret;
	}
}
