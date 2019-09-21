
#include"Trabajador.h"


Trabajador::Trabajador(std::string id, int horasLab, float precioHora, int annosLaborados ) {

	setId(id);
	setHorasLab(horasLab);
	setPrecioHora(precioHora);
	setAnnosLaborados(annosLaborados);

}

float Trabajador::calcularSalarioBase() {

	float producto;

	producto = getPrecioHora() * 48;
	
	return producto;


}

float Trabajador::calcularHorasExtra() {

	float producto;
	float suma;
	producto = getPrecioHora()*1.5;

	if (getHorasLab() > 48) {
		for (int contador; contador > 48; contador--)
			suma = suma + producto;
	}
	else
	{
		return 0;
	}

	return suma;

}

float Trabajador::calcularAnualidades() {

	float producto;
	float producto2;

	producto = getAnnosLaborados() * 0.5;

	producto2 = calcularSalarioBase()*producto;

	return producto2;

}

float Trabajador::calcularSalarioBruto() {

	float suma;

	suma = calcularSalarioBase() + calcularHorasExtra() + calcularAnualidades();

	return suma;
}

float Trabajador::calcularCargas()
{
	float producto;

	producto = calcularSalarioBruto()*0.9;


	return producto;
}

float Trabajador::calcularSalarioNeto()
{
	float resta;

	resta = calcularSalarioBruto() - calcularCargas();

	return resta;
}

void Trabajador::setId(std::string id)
{
	this->id = id;
}

void Trabajador::setHorasLab(int horasLab)
{
	this->horasLab = horasLab;
}

void Trabajador::setPrecioHora(float precioHora)
{
	this->precioHora = precioHora;
}

void Trabajador::setAnnosLaborados(int annosLaborados)
{
	this->annosLaborados = annosLaborados;
}

std::string Trabajador::getId()
{
	return id;
}

int Trabajador::getHorasLab()
{
	return horasLab;
}

float Trabajador::getPrecioHora()
{
	return precioHora;
}

int Trabajador::getAnnosLaborados()
{
	return annosLaborados;
}
