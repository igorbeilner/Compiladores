#include "Simulador.h"

void Simula(Digraph *G) {
	char caracter, flag, flag1;
	int i, j;
	int *Est_atual = (int *) malloc(G->V*sizeof(int));	//Vetor de estado atuais

	FILE *arquivo  = fopen("teste.txt", "a+b");

	if(G->Est_inicial > G->V || G->Est_inicial < 0) {
		printf("Estado Inicial indefinido!\n");
		return;
	}

	for(i=0; i < G->V; i++) Est_atual[i] = 0;	//inicializa marcando como estado nao atual

	Est_atual[G->Est_inicial] = 1;	//marca estado inicial

	while((fgetc (arquivo) != EOF)) {

		fseek(arquivo, -1, 1);

        if(fread(&caracter, sizeof(char), 1, arquivo)){ // Lê o caracter do código fonte.
        	flag = 0;
        	flag1 = 0;

			for(i=0; i < G->V; i++) {

				if(Est_atual[i] == 1 || Est_atual[i] == 3) {	//verifica se i e um estado atual
					for(j=0; j < G->V; j++) {

						if(G->adj[i][j].val == 1) {	//verifica se existe a aresta

							if(TestaCond(G->adj[i][j].cond, caracter, G->adj[i][j].topo)) {	//se a condicao e satisfeita
								flag=1;

								if(Est_atual[j] == 1) Est_atual[j] = 3;	//trata se o proximo estado for um estado atual
								else Est_atual[j] = 2;	//marca j como proximo estado
								if(G->adj[j][j].producao != PALAVRA_VAZIA) printf("%c ", G->adj[j][j].producao);

							}
						}

					}
					if(Est_atual[i] == 1) {
						Est_atual[i] = 0;	//desmarca estado atual se este nao for proximo estado
						if(i == 49 && flag == 0) flag1 = 1;
						else if(i == 50 && flag == 0) flag1 = 2;
					}
				}
			}

			for(i=0; i < G->V; i++)
				if(Est_atual[i] == 2 || Est_atual[i] == 3)
					Est_atual[i] = 1;	//marca proximo estado como estado atual


			if(!flag) {

				if(!flag1) {
					Est_atual[49] = 1;
					printf("%c", G->adj[49][49].producao);
				} else
					Est_atual[50] = 1;

			}

		}
	}
	printf("$\n");
}
