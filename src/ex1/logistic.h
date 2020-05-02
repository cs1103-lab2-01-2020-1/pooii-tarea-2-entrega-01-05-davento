#ifndef LOGISTIC_H
#define LOGISTIC_H

#include "user.h"

class logistic
{
	private:
		vector<user>	userList;
		vector<vehicle>	vehicleList;
	public:
		logistic() {}
		vector<user>	getUserList() {return userList;}
		vector<vehicle>	getVehicleList() {return vehicleList;}
		void		registerUser(string n, string a, string p)
		{
			userList.emplace_back(user(n, a, p));
		}
		void		registerUser(user u)
		{
			userList.emplace_back(u);
		}
		void	registerVehicle(vehicle v)
		{
			vehicleList.emplace_back(v);
		}
		void	takeOrder(user u, vehicle t, product p)
		{
			for(auto x:userList)
				if(u.getName() == x.getName())
				{
					x.createOrder(t, p);
					cout<<"Orden registrada, "<<u.getName()<<endl;
					return ;
				}
			cout<<"Usuario no encontrado. Por favor haga su registro primero."<<endl;
		}
		void	trackOrder(string u, int i)
		{
			for(auto x:userList)
				if(u == x.getName())
				{
					x.trackOrder(i);
					cout<<"Orden registrada, "<<u<<endl;
					return ;
				}
			cout<<"Orden no encontrada"<<endl;
		}
		void	printUsers()
		{
			for(auto x: userList)
				x.userInfo();
			cout<<endl;
		}
		void	printVehicles()
		{
			for(auto x:vehicleList)
				x.vehicleInfo();
			cout<<endl;
		}
		void	printAll()
		{
			cout<<"Info Usuarios: "<<endl;
			printUsers();
			cout<<endl<<"\nInfo Transporte: "<<endl;
		}
};

#endif
