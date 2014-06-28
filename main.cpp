#include <iostream>
#include "Lista.h"
#include "gerenciarSala.h"

using namespace std;

int main() {
	gerenciarSala salas;

	int opcao;

	while (opcao != 0) {
		cout << "Escolha uma das opções: " << endl;
		cout << "0 - Finalizar Programa" << endl;
		cout << "1 - Criar Sala" << endl;
		cout << "2 - Remover Sala" << endl;
		cout << "3 - Exibi4 Salas" << endl;
		cout << "4 - Capacidade" << endl;
		cin >> opcao;

		switch (opcao) {
		case 0:
			return 0;
		case 1:
			salas.inserirSala();
			break;
		case 2:

			break;
		case 3:
			salas.exibeSalas();
			break;
		default:
			break;
		}
	}
}
