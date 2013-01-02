#ifndef STACK_H_
#define STACK_H_

#pragma once

namespace CareerCup
{
	template <typename T>
	class Stack
	{
	public:
		Stack()
		{

		}
		~Stack()
		{

		}

		T& pop();
		void push(const T& node);
		

	private:
		T* top;
	};
}

#endif