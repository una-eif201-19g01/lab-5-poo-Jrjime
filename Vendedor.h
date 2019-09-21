#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Trabajador.h"
class Vendedor : public Trabajador
{
	float comision;
	int ventas;

public:
	Vendedor(std::string, float, float, int, int, int);
	void setComision(float);
	void setVentas(int);
	float getComision();
	int getVentas();
	float calcularSalarioBruto();

};



#endif // !VENDEDOR_H
#pragma once
