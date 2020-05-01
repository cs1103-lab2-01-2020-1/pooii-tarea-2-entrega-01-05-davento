#ifndef MYSTACKT_H
#define MYSTACKT_H

#include "lib.h"

template <typename T>
class myStackT
{
	private:
		T*	data;
		int	cap;
		int	top;
	public:
		myStackT(int c) : cap(c), top(-1), data(new T[cap]) {}
		~myStackT()
		{
			delete [] data;
		}
		void	push(T x)
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
		T	getTopData()
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
