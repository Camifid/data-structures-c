#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x, y;
	struct ponto *prox; //encadeamento, aponta p proximo da lista
};

typedef struct ponto Ponto;

Ponto *listaPontos; //aponta para o inicio da lista

void addFirst(float x, float y) {
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = x;
	p->y = y;
	p->prox = listaPontos;
	listaPontos = p;
}

void addLast(float x, float y){
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = x;
	p->y = y;
	p->prox = NULL;
	if(listaPontos==NULL){
		listaPontos = p;
	} else {
		Ponto *listaAux = listaPontos;
		while(listaAux->prox!=NULL){
			listaAux = listaAux->prox;
		}
		listaAux->prox = p;
	}
}

void imprime(Ponto *p) { //recursividade
	if (p!=NULL){
		printf("\nPonto (%.0f,%.0f)", p->x, p->y);
		imprime(p->prox);
	}
}

int main() {

	addFirst(1,5);
	addFirst(2,7);
	addFirst(5,3);

	addLast(1,1);
	addLast(8,8);
	addLast(7,7);
	
	
	Ponto *auxLista = listaPontos;
	imprime(auxLista);
	
	return 0;
}
