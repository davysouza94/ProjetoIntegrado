#ifndef ASSENTO_H
#define ASSENTO_H

class Assento{
private:
	int idAssento;
	int disponibilidade;
	char idFileira;

public:
	Assento();
	Assento(int idassento, int idfila);
	bool verificaDisponibilidade();
	~Assento();

};

Assento::Assento(){
	idAssento = 0;
	disponibilidade = 0;
	idFileira = 0;
}
Assento::Assento(int idassento,int idfila){
	idAssento = idassento;
	disponibilidade = 0;
	idFileira = idfila;
	cout<<"CriandoAssento" << idAssento << " " << idFileira << "" << std::endl;

}
Assento::~Assento(){

}
bool Assento::verificaDisponibilidade(){
	if(disponibilidade == 0) //se esta disponivel, retorna 1;
		return 1;
	return 0;
}

#endif
