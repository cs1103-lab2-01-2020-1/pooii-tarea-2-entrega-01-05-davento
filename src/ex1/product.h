#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "../lib.h"

class	product
{
	private:
		string	name;
		int	price;
	public:
		product(string n, int p) : name(n), price(p) {}
		int	getPrice() {return price;}
		void	productInfo()
		{
			cout<<"\t\t- "<<name<<"(S/. "<<price<<")";
		}
};

#endif
