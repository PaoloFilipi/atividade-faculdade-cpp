#include <iostream>
#include "No.cpp"

using namespace std;

class Arvore
{
private:
	No *raiz;
	

public:
	int qtdNo;
	Arvore()
	{
		raiz = NULL;
		qtdNo = 0;
	}

	void inserir(int chave)
	{
		if(raiz == NULL)// verifica se a árvore está vazia
		{ 
			raiz = new No(chave); // cria um novo nó
			qtdNo++;
		}
		else{
		
			inserirAux(raiz, chave);
			qtdNo++;
		}
	}

	void inserirAux(No *no, int chave)
	{
		// se for menor, então insere á esquerda
		if(chave < no->getChave())
		{
			// verifica se a esquerda é nulo
			if(no->getEsq() == NULL)
			{
				No *novo_no = new No(chave);
				no->setEsq(novo_no); // seta o novo_no á esquerda
			}
			else
			{
				// senão, continua percorrendo recursivamente
				inserirAux(no->getEsq(), chave);
			}
		}
		// se for maior, então insere á direita
		else if(chave > no->getChave())
		{
			// verifica se a direita é nula
			if(no->getDir() == NULL)
			{
				No *novo_no = new No(chave);
				no->setDir(novo_no); // seta o novo_no á direita
			}
			else
			{
				// senão, continua percorrendo recursivamente
				inserirAux(no->getDir(), chave);
			}
		}
		// se for igual, não vai inserir
		// não pode existir 2 chaves iguais
	}

	No* getRaiz()
	{
		return raiz;
	}
	
	//Imprime os elementos em Ordem
	void emOrdem(No* no)
	{
		if(no != NULL)
		{
			emOrdem(no->getEsq());
			cout << no->getChave() << " ";
			emOrdem(no->getDir());
		}
	}
	
	//Imprime os elementos em pré ordem
	void preOrdem(No* no)
	{
		if(no != NULL)
		{
			cout << no->getChave() << " ";
			preOrdem(no->getEsq());
			preOrdem(no->getDir());
			
		}
	}
	
	//Imprime os elementos em posOrdem
	void posOrdem(No* no)
	{
    	if(no != NULL)
		{
        	posOrdem(no->getEsq());
        	posOrdem(no->getDir());
        	cout << no->getChave() << " ";	
   	    }	
	}
	
	//Verifica se um elemento esta na árvore
	bool encontrarElemento(No* no,int elemento)
	{
		if(no != NULL)
		{
			if(no->getChave() == elemento)
			{
				return true;
			}
			//Primeiro verifica pela esquerda
			encontrarElemento(no->getEsq(),elemento);
			//Depois pela Direita
			encontrarElemento(no->getDir(),elemento);
			
		}		
	}
	
	int buscarElemento(int elemento)
	{
		encontrarElemento(raiz,elemento);
	}
    
    //Verifica o menor valor da esquerda
	void menorValor(No* no)
	{
		//se não tiver nenhum numero a esquerda significa que ele é o menor numero
		if(no->getEsq() == NULL)
		{
			cout << no->getChave() << " ";
		}
		//se ainda possuir algum numero a sua esquerda deve continuar
		else
		{
		
			menorValor(no->getEsq());		
		}
	}
	
	//Verifica o Maior valor da direita
	void maiorValor(No* no)
	{
		//se não tiver nenhum numero a direita significa que ele é o maior numero
		if(no->getDir() == NULL)
		{
			cout << no->getChave() << " ";
		}
		//se ainda possuir algum numero a sua direita deve continuar
		else
		{
			
			maiorValor(no->getDir());	
		}
	}
	
	//Printa a quantidade de elementos
	int qtdElementos()
	{
		cout << qtdNo << " ";
	}
	

};
