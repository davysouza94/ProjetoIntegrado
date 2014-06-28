#ifndef FILEIRA_H
#define FILEIRA_H

using namespace std;

#include "Assento.h"
#include "Lista.h"

class Fileira{
private:
	char idFileira;
	int numAssentos;
	Lista < Assento > assentos;
	
public:
	Fileira(int n,int idfila);
	~Fileira();

	int insereAssento();
	bool verificaDisponibilidade();

};


Fileira::Fileira(int n = 10,int idfila = 0):idFileira(idfila), numAssentos(n), assentos(){
}

Fileira::~Fileira(){

}
bool Fileira::verificaDisponibilidade(){
	return 0;
}
#endif
