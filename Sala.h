#ifndef SALA_H
#define SALA_H

//#include "Lista.h"
#include "Fileira.h"
#include "Situacao.h"

class Sala{
private:
	int numSala;
	int capacidade;
	int qtFileira;
	Situacao situacao;

	Lista < Fileira > fileiras;

public:
	Sala();
	Sala(int nsala, int numAssento, int qtFil);

	int getNumSala();
	int getCapacidade();
	void setNumSala(int nSala);
	void setCapacidade(int cap);
	friend ostream& operator<<(ostream& os, const Sala& elem);

};

Sala::Sala():fileiras(){
	qtFileira = 10;
	numSala = 0;
	capacidade = qtFileira*10;
	situacao = disponivel;
}
Sala::Sala(int nsala, int numAssento, int qtFil):fileiras(){
	numSala = nsala;
	qtFileira = qtFil;
	capacidade = numAssento*qtFileira;
	situacao = disponivel;

	int i;
	Fileira *f, fIn;

	for(i=0;i<qtFileira;i++){
		f = new Fileira(numAssento, 65+i);
		fIn = *f;

		delete(f);
		fileiras.insereFim(fIn);

	}


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
	os << "Sala: " << elem.numSala << " - Capacidade: " <<elem.capacidade<< " - Situacao: "<< elem.situacao;
    return os;
}


#endif
