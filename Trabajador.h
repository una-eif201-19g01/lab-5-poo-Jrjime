#ifndef TRABAJADOR_H
#define TRABAJADOR_H


#include <string>

class Trabajador
{
	std::string id;
	int horasLab;
	float precioHora;
	int annosLaborados;

public:
	Trabajador(std::string, int, float, int);
	virtual float calcularSalarioBase()=0;
	virtual float calcularHorasExtra() = 0;
	virtual float calcularAnualidades()=0;
	virtual float calcularSalarioBruto()=0;
	virtual float calcularCargas() = 0;
	virtual float calcularSalarioNeto() = 0;
	void setId(std::string);
	void setHorasLab(int);
	void setPrecioHora(float);
	void setAnnosLaborados(int);
	std::string getId();
	int getHorasLab();
	float getPrecioHora();
	int getAnnosLaborados();
};



#endif // !TRABAJADOR_H
#pragma once
