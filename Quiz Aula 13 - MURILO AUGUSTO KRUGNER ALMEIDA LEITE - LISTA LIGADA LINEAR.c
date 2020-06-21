/*
	Name: Lista ligada Linear;
	Course: Ciência da computação; 
	Author: Murilo Augusto Krugner Almeida Leite;
	Description: Quiz Aula 13 - Estrutura de dados;
	Creation date: 20/06/2020;
	Copyright: Licence MIT;
	
	Repository: https://github.com/murilokrugner/Lista-Ligada-Linear
*/

#include <stdio.h>
#include <stdlib.h>

//cria estrutura para a lista receber valores
struct list {
	int nNum;
	struct list *nData;
};

//função que exibe a lista na tela, fazendo o loop dos números que estão na lista, colocados pelo no
void showList(struct list *n) {
	printf(" \n ");
	
	if (n) {
		do {
			printf(" %d ", n->nNum);
			n=n->nData;
		}
		
		while(n);
	} else {
		printf("The list is empty");
	}
}

//main...
int main (void) {
	
	//inicializando a estrtura com todos os valores NULL
	struct list *nList1 = NULL;
	struct list *nList2 = NULL;
	struct list *nList3 = NULL;
	struct list *nList4 = NULL;
	struct list *nList5 = NULL;
	struct list *nList6 = NULL;
	struct list *nList7 = NULL;
	struct list *nList8 = NULL;
	struct list *nList9 = NULL;
	struct list *nList10 = NULL;
	struct list *nList11 = NULL;
	struct list *nList12 = NULL;
	
	//adicionando valores para a estrutura da lista (valores de 1 a 12);
	nList1 = (struct list*) malloc(sizeof(struct list*));
	nList1->nNum = 1;
	
	nList2 = (struct list*) malloc(sizeof(struct list*));
	nList2->nNum = 2;
	
	nList3 = (struct list*) malloc(sizeof(struct list*));
	nList3->nNum = 3;
	
	nList4 = (struct list*) malloc(sizeof(struct list*));
	nList4->nNum = 4;
	
	nList5 = (struct list*) malloc(sizeof(struct list*));
	nList5->nNum = 5;
	
	nList6 = (struct list*) malloc(sizeof(struct list*));
	nList6->nNum = 6;
	
	nList7 = (struct list*) malloc(sizeof(struct list*));
	nList7->nNum = 7;
	
	nList8 = (struct list*) malloc(sizeof(struct list*));
	nList8->nNum = 8;
	
	nList9 = (struct list*) malloc(sizeof(struct list*));
	nList9->nNum = 9;
	
	nList10 = (struct list*) malloc(sizeof(struct list*));
	nList10->nNum = 10;
	
	nList11 = (struct list*) malloc(sizeof(struct list*));
	nList11->nNum = 11;
	
	nList12 = (struct list*) malloc(sizeof(struct list*));
	nList12->nNum = 12;	

	// criando uma lista em ordem crescente - conectando um número ao outro ex: exibe 1 recebe 2, exibe 2 recebe 3...	
	nList1->nData = nList2;
	nList2->nData = nList3;
	nList3->nData = nList4;
	nList4->nData = nList5;
	nList5->nData = nList6;
	nList6->nData = nList7;
	nList7->nData = nList8;
	nList8->nData = nList9;
	nList9->nData = nList10;
	nList10->nData = nList11;
	nList11->nData = nList12;
	nList12->nData = NULL; //final da lista por isso recebendo null. ou seja, nenhum numero será acrescentando na lista
	
	// por padrão está listando em ordem crescente
	if (nList12) {
		printf("Lista em ordem crescente");
		showList(nList1); // chama a função showList, passando por parametro o nList1 que fara o loop e exibir todos os números que estao na lista conectadas pelos nó
		printf("\n");
		printf("\n");
		
		printf("Exclui o 2 na lista em ordem crescente");
		// exclui o 2 na lista ordenada em ordem crescente
		nList1->nData = nList3;
		showList(nList1); // chama a função para mostrar a lista
		printf("\n");
		printf("\n");
		
		printf("Adicionando 2 entre 8 e 7 na lista em ordem crescente com o 2 removido da ordem");
		// adicionando 2 entre 8 e 7 na lista em ordem crescente
		nList7->nData = nList2;
		nList2->nData = nList8;
		showList(nList1); // chama a função para mostrar a lista
		printf("\n");
		printf("\n");
		
		//criando os nos para ordenar a lista em orden decrescente ex: exibe 3 recebe 2, exibe 2 recebe 1...
		nList12->nData = nList11;
		nList11->nData = nList10;
		nList10->nData = nList9;
		nList9->nData = nList8;
		nList8->nData = nList7;
		nList7->nData = nList6;
		nList6->nData = nList5;
		nList5->nData = nList4;
		nList4->nData = nList3;
		nList3->nData = nList2;
		nList2->nData = nList1;
		nList1->nData = NULL;
		printf("Lista em ordem decrescente");
		showList(nList12); // chama a função showList e passa por parametro a nList12 que fara o loop e ordenar e exibir a lista na tela em ordem decrescente a partir do nó criado acima
		printf("\n");
		printf("\n");
		
		printf("Exclui o 2 na lista em ordem decrescente");
		// exclui o 2 na lista ordenada em ordem decrescente
		nList3->nData = nList1;
		showList(nList12); // chama a função para mostrar a lista
		printf("\n");
		printf("\n");
		
		printf("Adicionando 2 entre 8 e 7 na lista em ordem decrescente com o 2 removido da ordem");
		// adicionando 2 entre 8 e 7 na lista em ordem decrescente
		nList8->nData = nList2;
		nList2->nData = nList7;
		showList(nList12); // chama a função para mostrar a lista
		printf("\n");
		printf("\n");
		
		return 0;
	
	}
}
