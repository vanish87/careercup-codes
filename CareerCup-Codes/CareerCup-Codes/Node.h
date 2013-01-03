#ifndef NODE_H_
#define NODE_H_

#pragma once

namespace CareerCup
{
	template <typename T>
	class Node
	{
		template <typename T>
		friend class Stack; 

	public:
		Node()
		{

		}
		~Node()
		{

		}
		Node(T value)
			:value_(value), next_(nullptr)
		{
		}

		T Value()
		{
			return value_;
		}
	private:
		T value_;
		Node<T>* next_;

	};
}

#endif