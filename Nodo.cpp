//
// Created by Rafael Jiménez Arce  on 2019-09-20.
//

#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo( Trabajador &trabajador, Nodo *siguiente) : Trabajador( trabajador), siguiente(siguiente) {}

Nodo::~Nodo() {

}

Trabajador &Nodo::getTrabajador() const {
	return *trabajador;
}

void Nodo::setTrabajador( Trabajador &trabajador) {
	Nodo::trabajador = &trabajador;
}

Nodo *Nodo::getSiguiente() const {
	return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
	Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
	return trabajador.toString();
}