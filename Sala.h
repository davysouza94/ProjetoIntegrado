#ifndef SALA_H
#define SALA_H

#include "Lista.h"

class Sala{
private:
	int numSala;
	int capacidade;
	int qtFileira;

	//Lista < Fileira > fileira;

public:
	Sala();
	Sala(int nsala, int numAssento, int qtFil);

	int getNumSala();
	int getCapacidade();
	void setNumSala(int nSala);
	void setCapacidade(int cap);
	friend ostream& operator<<(ostream& os, const Sala& elem);

};

Sala::Sala(){
	qtFileira = 0;
	numSala = 0;
	capacidade = 0;
}
Sala::Sala(int nsala, int numAssento, int qtFil = 10){
//	int i;
//
//	for(i=0;i<nfileira;i++){
//		Fileira f(numAssento,i);
//		fileira.insereFim(f);
//		f.~Fileira();
//	}

	numSala = nsala;
	qtFileira = 10;
	capacidade = numAssento*qtFileira;
}

int Sala::getNumSala(){
	return numSala;
}

int Sala::getCapacidade(){
	return capacidade;
}

void Sala::setNumSala(int nSala){
	numSala = nSala;
}

void Sala::setCapacidade(int cap){
	capacidade = cap;
}

ostream& operator<<(ostream& os, const Sala& elem)
{
    os << "Sala: " << elem.numSala << " - Capacidade: " <<elem.capacidade;
    return os;
}


#endif
