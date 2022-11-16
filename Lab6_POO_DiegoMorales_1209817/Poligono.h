#pragma once
public class Poligono
{
protected:
	static const int TRIANGULO = 0;
	static const int RECTANGULO = 1;
	static const int CUADRADO = 0;

	double ladoA;
	int type;
public:
	virtual double area() const {
		return 0;
	}
	virtual double perimetro() const {
		return 0;
	}
};

