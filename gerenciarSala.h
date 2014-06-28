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
	void situacao();
	No<Sala>* buscarSala(int chave);
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
	Sala temp(num, numAssentos, numFileira);
	salas.insereFim(temp);
}

void gerenciarSala::exibeSalas(){
	salas.exibe();
}

void gerenciarSala::situacao(){
	int num, sit;
	No<Sala> *salaEncontrada;

	salas.exibe();
	cout << "Informe o Numero da Sala: " << endl;
	cin >> num;
	cout << "Informe a Situacao da Sala: " << endl;
	cin >> sit;

	salaEncontrada = salas.busca(num);
	try{
		if(salaEncontrada == NULL) throw(-1);
		(salaEncontrada->elem).setSituacao(sit);
	}catch(int erro){
		if(erro == -1) std::cout << "Sala Nao Existente" << std::endl;
	}
}

No<Sala>* gerenciarSala::buscarSala(int chave){
	return salas.busca(chave);
}

#endif
