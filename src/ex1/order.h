#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "vehicle.h"

class	order
{
	private:
		int	id;
		int	cost;
		string	destination;
		string	status;
		string	location;
		vector<product>	productList;
		vehicle	*transport;
	public:
		order(int i, string d, vehicle t) : id(i), cost(0), destination(d),
		status("Procesando"), location("Tienda de origen"), transport(&t) {}
		int	getID() {return id;}
		string	getStatus() {return status;}
		string	getLocation() {return location;}
		void	updateOrder(string s, string l)
		{
			status = s;
			location = l;
		}
		void	updateProductList(product p)
		{
			productList.emplace_back(p);
			cost+=p.getPrice();
		}
		void	orderInfo()
		{
			cout<<"Los datos de su orden son: "<<endl;
			cout<<"\t- ID: "<<id<<endl;
			cout<<"\t- Destino: "<<destination<<endl;
			cout<<"\t- Estado: "<<status<<endl;
			cout<<"\t- Ubicación: "<<location<<endl;
			cout<<"\t- Medio de transporte: "<<endl;
			transport->vehicleInfo();
			cout<<"\t- Productos solicitados: "<<endl;
			for (auto x: productList)
				x.productInfo();
			cout<<endl;
			cout<<"\t- Precio total a pagar: "<<cost<<endl;
		}
};

#endif
