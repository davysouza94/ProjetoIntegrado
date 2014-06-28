#include <iostream>
#include "Lista.h"
#include "gerenciarSala.h"

using namespace std;

int main() {
	gerenciarSala salas;

	int opcao = 1;

	while (opcao != 0) {
		cout << "Escolha uma das opcoes: " << endl;
		cout << "0 - Finalizar Programa" << endl;
		cout << "1 - Criar Sala" << endl;
		cout << "2 - Remover Sala" << endl;
		cout << "3 - Exibir Salas" << endl;
		cout << "4 - Capacidade" << endl;
		cout << "5 - Situacao" << endl;
		cin >> opcao;

		switch (opcao) {
		case 0:
			return 0;
		case 1:
			salas.inserirSala();
			break;
		case 2:
			try{
				salas.situacao();
			}catch(...){
				cout << "bleh";
			}
			break;
		case 3:
			salas.exibeSalas();
			break;
		case 4:
			break;
		case 5:
			salas.situacao();

			break;
		default:
			break;
		}
	}
}
