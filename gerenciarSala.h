#ifndef GERENCIAR_SALA_H
#define GERENCIAR_SALA_H

using namespace std;

#include "Sala.h"

class gerenciarSala{
private:
	Lista< Sala > salas;

public:
	gerenciarSala();
	void inserirSala();
	void exibeSalas();
};

gerenciarSala::gerenciarSala(): salas(){
}

void gerenciarSala::inserirSala(){
	int num,numFileira, numAssentos;

	cout << "Informe o Numero da Sala: " << endl;
	cin >> num;
	cout << "Informe o numero de fileiras: " << endl;
	cin >> numFileira;
	cout << "Informe o numero de assentos por fileira:" << endl;
	cin >> numAssentos;
	Sala temp(num, numFileira, numAssentos);
	salas.insereFim(temp);
}

void gerenciarSala::exibeSalas(){
	salas.exibe();
}

#endif
