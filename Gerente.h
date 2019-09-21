#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "Trabajador.h"

class Gerente : public Trabajador
{
	float bono;

public:
	Gerente(std::string,float, float, int, int);
	void setBono(float);
	float getBono();
	float calcularSalarioBruto();

};



#endif // !VENDEDOR_H
#pragma once
