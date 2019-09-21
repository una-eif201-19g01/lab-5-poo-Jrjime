#include "Vendedor.h"

Vendedor::Vendedor(std::string id, float  comision, float precioHora, int annosLaborados, int horasLab, int ventas) : Trabajador(id, horasLab, precioHora, annosLaborados){

	setComision(comision);
	setVentas(ventas);

}

void Vendedor::setComision(float comision)
{
	Vendedor::comision = comision;
}

void Vendedor::setVentas(int ventas)
{
	Vendedor::ventas = ventas;
}

float Vendedor::getComision()
{
	return comision;
}

int Vendedor::getVentas()
{
	return ventas;
}

float Vendedor::calcularSalarioBruto(){

	float suma;
	float producto;


	producto = comision*ventas;
	suma = Trabajador::calcularSalarioBruto() + producto;

	return suma;
}

