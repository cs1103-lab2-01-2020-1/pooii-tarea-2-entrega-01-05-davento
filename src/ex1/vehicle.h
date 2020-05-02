#ifndef VEHICLE_H
#define VEHICLE_H

#include "../lib.h"

class	vehicle
{
	protected:
		string	driver;
	public:
		vehicle(string d): driver(d) {}
		string getDriver() {return driver;}
		void vehicleInfo() {cout<<"Datos del vehículo"<<endl;}

};

class	bike:public vehicle
{
	public:
		bike(string d): vehicle(d) {}
		void	vehicleInfo()
		{
			vehicle::vehicleInfo();
			cout<<"\t- Bicicleta manejada por "<<vehicle::getDriver()<<endl;
		}
};

class	truck:public vehicle
{
	private:
		string	plaque;
	public:
		truck(string d, string p) : vehicle (d), plaque(p) {}
		void	vehicleInfo()
		{
			vehicle::vehicleInfo();
			cout<<"\t- Camión manejado por "<<vehicle::getDriver()<<endl;
			cout<<"\t- Placa: "<<plaque<<endl;
		}
};

#endif
