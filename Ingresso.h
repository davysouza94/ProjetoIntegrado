#ifndef INGRESSO_H
#define INGRESSO_H

#include <iostream>

#include "Sessao.h"
#include "Assento.h"
#include "Tipo.h"
#include "Data.h"

class Ingresso{
private:
	double valor;
	Data dtIngresso;

	Sessao sessao;
	Tipo tipo;
	Assento assento;

public:
	double getValor();
	void setDtIngresso(Data data);
	void setValor(double v);
};

double Ingresso::getValor(){
	return valor;
}

void Ingresso::setDtIngresso(Data data){
	dtIngresso = data;
}

void Ingresso::setValor(double v){
	valor = v;
}

#endif
