#ifndef SECRETARIA_H
#define SECRETARIA_H

#include <string>
#include "Trabajador.h"

class Secretaria : public Trabajador
{

	
public:
	Secretaria(std::string,float, int, int);
	 float calcularSalarioBase() = 0;
	 float calcularHorasExtra() = 0;
	 float calcularAnualidades() = 0;
	 float calcularSalarioBruto() = 0;
	 float calcularCargas() = 0;
	 float calcularSalarioNeto() = 0;
};



#endif // !SECRETARIA_H
#pragma once
