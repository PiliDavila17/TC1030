/*
Autor: Maria del Pilar Davila Verduzco
Matr�cula: A01708943
Fecha: Noviembre 2021

//Clase Pantalones
//Hija de Ropa
*/


#ifndef PANTALONES_H_
#define PANTALONES_H_
#include"ropa.h"

#include <sstream>
#include <iostream>

using namespace std;


class Pantalon : public Ropa {

private:
	string epoca;

public:
	Pantalon() {};
	Pantalon(string ta, string ti, string ep) :Ropa(ta, ti) {
		epoca = ep;
	}
	string getEpoca() {
		return epoca;
	}
	void setEpoca(string ep);
	string to_string();
};

void Pantalon::setEpoca(string ep) {
	epoca = ep;
};

#endif#pragma once
