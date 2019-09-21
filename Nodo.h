//
// Created by Rafael Jiménez arce  on 2019-09-20.
//

#ifndef EJERCICIOLISTATRABAJADORES_NODO_H
#define EJERCICIOLISTATRABAJADORES_NODO_H


#include <ostream>
#include "Trabajador.h"

class Nodo : public Trabajador{
	Trabajador* trabajador;
	Nodo *siguiente;

public:
	Nodo();

	Nodo( Trabajador &trabajador, Nodo *siguiente);

	virtual ~Nodo();

 Trabajador &getTrabajador() const;

	void setTrabajador(Trabajador &trabajador);

	Nodo *getSiguiente() const;

	void setSiguiente(Nodo *_siguiente);

	std::string toString();

};


#endif //EJERCICIOLISTATRABAJADORES_NODO_H#pragma once
