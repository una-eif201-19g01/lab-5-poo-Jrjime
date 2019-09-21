//
// Created by Rafael Jiménez Arce  on 2019-09-20.
//

#ifndef EJERCICIOLISTATRABAJADORES_LISTATRABAJADORESS_H
#define EJERCICIOLISTATRABAJADORES_LISTATRABAJADORES_H


#include <ostream>
#include "Nodo.h"

class ListaTrabajadores {
	Nodo *primero;
	Nodo *actual;

public:
	ListaTrabajadores();

	virtual ~ListaTrabajadores();

	void insertarInicio( Trabajador& _trabajador);
	void insertarFinal(Trabajador& _trabajador);
	bool eliminarInicio();
	int totalNodos();
	bool listaVacia();

	Nodo *getPrimero() const;

	void setPrimero(Nodo *primero);

	Nodo *getActual() const;

	void setActual(Nodo *actual);

	std::string toString();
};


#endif //EJERCICIOLISTATRABAJADORES_LISTATRABAJADORES_H#pragma once
