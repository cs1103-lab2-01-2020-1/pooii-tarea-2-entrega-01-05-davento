#ifndef MYSTACK_H
#define MYSTACK_H

#include "lib.h"

class myStack
{
	private:
		int*	data;
		int	cap;
		int	top;
	public:
		myStack(int c) : cap(c), top(-1), data(new int[cap]) {}
		~myStack()
		{
			delete [] data;
		}
		void	push(int x)
		{
			if (isFull())
				return ;
			top++;
			data[top] = x;
		}
		void	pop()
		{
			if (isEmpty())
				return ;
			top--;
		}
		int	getTopData()
		{
			return data[top];
		}
		int	getSize()
		{
			return (top + 1);
		}
		bool	isFull()
		{
			return (top == cap - 1);
		}
		bool	isEmpty()
		{
			return (top == -1);
		}
};

#endif
