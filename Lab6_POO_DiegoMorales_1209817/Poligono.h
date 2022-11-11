#pragma once
ref class Poligono
{
public:
	int lados;
	double longitud;
protected:
	
	int id;
	virtual double area(double,double);
	virtual double perimetro(double, double);
};

