#include "Gerente.h"

Gerente::Gerente(std::string id, float  bono, float precioHora, int annosLaborados, int horasLab) : Trabajador(id, precioHora, annosLaborados, horasLab)
{
	setBono(bono);
}

void Gerente::setBono(float bono)
{
	Gerente::bono = bono;
}

float Gerente::getBono()
{
	return bono;
}

float Gerente::calcularSalarioBruto() {

	float suma;

	suma = Trabajador::calcularSalarioBruto() + bono;

	return suma;
}