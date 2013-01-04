#ifndef STACK_H_
#define STACK_H_

#ifndef NULL
#define NULL 0
#endif

#pragma once
#include "Node.h"

namespace CareerCup
{
	template <typename T>
	class Stack
	{
	public:
		Stack()
			:top_(nullptr)
		{

		}
		~Stack()
		{

		}

		T Pop()
		{
			T re;
			if(top_ != nullptr)
			{
				Node<T>* ret = top_;
				top_ = top_->next_;
				re = ret->value_;
				delete ret;
				return re;
			}
			std::cout<<"out of stack"<<std::endl;
			return re;
		}

		void Push(T& val)
		{
			Node<T>* node = new Node<T>(val);
			node->next_ = top_;
			top_ = node;
		}
		

	private:
		Node<T>* top_;
	};
}

#endif