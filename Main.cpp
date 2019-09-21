#include <iostream>
#include "Trabajador.h"
#include "Vendedor.h"
#include "Gerente.h"
#include "Secretaria.h"

int main()   {



	Vendedor vendedor1( "Mike", 38,4,3.2,8,9);



	ListaTrabajadores* listaTrabajadores = new ListaTrabajadores();

	ListaTrabajadores->insertarInicio(vendedor1);


}