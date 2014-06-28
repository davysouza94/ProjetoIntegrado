#include <iostream>
#include "sala.h"


using namespace std;

class Sessao{
private:
	int numvendido;
	int encerrado;
	string filme;
	int horario[2];

public:
	Sessao();
	void setStatus(int encerrado);
	int getStatus();
	int getHorario();
	void setHorario(int hor, int min);
	int getDisponivel();
	void setNumVendido(int numVendido);
	string getFilme();
	void setFilme(string nomeFilme);
};

Sessao::Sessao(){
	 numvendido = 0;
	 encerrado = 1;
}
void Sessao::setStatus(int encerrado){
	int capacidade;
	capacidade = getCapacidade;

	if(capacidade - numvendido == 0){
		encerrado = 0;
	}
	else
		encerrado = 1;
}
int Sessao::getStatus(){
	return encerrado;
}

int Sessao::getHorario(){
	return horario;
}

void Sessao::setHorario(int hor int min){
	horario[0] = hor;
	horario[1] = min;
}

int Sessao::getDisponivel(){
	return encerrado;
}

void Sessao::setNumVendido(int numVendido){
	numvendido = numVendido;
}

string Sessao::getFilme(){
	return filme;
}

void Sessao::setFilme(string nomeFilme){
	filme = nomeFilme;
}
