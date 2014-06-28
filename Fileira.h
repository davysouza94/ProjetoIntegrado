#ifndef FILEIRA_H
#define FILEIRA_H

using namespace std;

//#include "Assento.h"
#include "Lista.h"

class Fileira{
private:
	char idFileira;
	//Lista < Assento > assento;
	
public:
	Fileira(int numassentos,int idfila);
	~Fileira();

	bool verificaDisponibilidade();

};


Fileira::Fileira(int numassentos,int idfila){
//int i;

//	for(i=0;i<numassentos;i++){
//		Assento a(i,idFileira);
//		assento.insereFim(a);
//		a.~Assento();
//	}
	idFileira = idfila;
	}

bool Fileira::verificaDisponibilidade(){
	return 0;
}


#endif
