#include <iostream>
#include <locale.h>
#include "Arvore.cpp"

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese-brazilian"); // para resolver o problema de acentos
	Arvore arv;;


	while (true) {

		cout << "\n0 - sair do programa";
		cout << "\n1 - inserir um elemento";
		cout << "\n2 - imprimir a �rvore em ordem";
		cout << "\n3 - imprimir a �rvore em pr�-ordem";
		cout << "\n4 - imprimir a �rvore em p�s-ordem";
		cout << "\n5 - contar os elementos (sem impressao)";
		cout << "\n6 - localizar um elemento pelo seu valor";
		cout << "\n7 - achar o menor elemento (menor valor)";
		cout << "\n8 - achar o maior elemento (maior valor)";
		cout << "\n9 - Limpar informa��es da tela";
		cout << "\n\nInforme sua op��o: ";
		int opc;
		cin >> opc;
		
		//sair
		if(opc == 0){
			break;
		}
		
		//inserir elemento
		else if(opc == 1){
			int elemento;
			cout << "\n Informe o valor do elemento a ser inserido: ";
			cin >> elemento;
			arv.inserir(elemento);
			system("cls");
		}
		
		//imprimir a �rvore em ordem
		else if(opc == 2){
			cout <<"\n\n--- Sua �rvore em ordem crescente ---\n";
			arv.imprimirEmOrdem();
			cout << "\n\n------------------------------------";
			cout << "\n\n";	
		}
		
		//imprimir a �rvore em pr�-ordem
		else if(opc == 3){
			cout <<"\n\n--- Sua �rvore em Pr�-Ordem ---\n";
			arv.imprimirPreOrdem();
			cout << "\n\n------------------------------------";
			cout << "\n\n";
		}
		
		//imprimir a �rvore em p�s-ordem
		else if(opc == 4){
			cout <<"\n\n--- Sua �rvore em P�s-Ordem ---\n";
			arv.imprimirPosOrdem();
			cout << "\n\n------------------------------------";
			cout << "\n\n";
		}
		
		//quantidade de elementos
		else if(opc == 5){
			cout <<"\n\n--- Sua �rvore tem ---\n";
			arv.qtdElementos();
			cout << " Elementos\n";
			cout << "\n\n------------------------------------";
			cout << "\n\n";
		}
		
		//verifica se o elemento est� na �rvore
		else if(opc == 6){
			int elemento;
			cout << "\nQual elemento deseja procurar: ";
			cin >> elemento;
			if(arv.buscarElemento(elemento) == true){
				cout << "\n --- Resultado da consulta ---\n";
				cout << "\nO elemento esta na �rvore";
				cout << "\n\n------------------------------------";
				cout << "\n\n";
			}else{
				cout << "\n --- Resultado da consulta ---\n";
				cout << "\nO elemento n�o est� na �rvore";
				cout << "\n\n------------------------------------";
				cout << "\n\n";
			}	
		}
		
		//encontrar o menor elemento da �rvore
		else if(opc == 7){
			cout << "\n -- O menor valor da sua �rvore � --\n";
			arv.acharMenorValor();
			cout << "\n\n------------------------------------";
			cout << "\n\n";
		}
		
		//encontrar o maior elemento da �rvore
		else if(opc == 8){
			cout << "\n -- O maior elemento da �rvore � --\n";
			arv.acharMaiorrValor();
			cout << "\n\n------------------------------------";
			cout << "\n\n";
		}
		
		//limpar a tela
		else if(opc == 9){
			system("cls");
			
		}
		
 }
return 0;
}
