#ifndef USER_H
#define USER_H

#include "order.h"

class	user
{
	private:
		string	name;
		string	address;
		string	payment;
		order*	myOrder;
	public:
		user(string n, string a, string p) : name(n), address(a), payment(p){}
		string	getName() {return name;}
		string	getAddress() {return address;}
		string	getPayment() {return payment;}
		order*	getOrder() {return myOrder;}
		void	createOrder(vehicle transport, product p)
		{
			order o(1, address, transport);
			o.updateProductList(p);
			myOrder = &o;
		}
		void	printOrder()
		{
			myOrder->orderInfo();
		}
		void	trackOrder(int i)
		{
			if (i == myOrder->getID())
			{
				cout<<"Su orden consiste de: "<<endl;
				printOrder();
			}
		}
		void	deleteOrder(int i)
		{
			if (i == myOrder->getID())
				myOrder = NULL;
		}
		void	userInfo()
		{
			cout<<"Información del Usuario"<<endl;
			cout<<"Nombre: "<<name<<endl;
			cout<<"Dirección: "<<address<<endl;
			cout<<"Modalidad de pago: "<<payment<<endl;
			cout<<"Su orden consiste de: "<<endl;
			printOrder();
			cout<<endl;
		}
};

#endif
