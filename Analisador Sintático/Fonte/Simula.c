
#include "Simulador.h"

void Simula(Digraph *G, char *arg) {
	char caracter, flag, flag1;
	int i, j, topo=0;
	int *Est_atual = (int *) malloc(G->V*sizeof(int));	//Vetor de estado atuais
	int string[200];

	FILE *arquivo  = fopen(arg, "rb");
	if(!arquivo){
		printf("Parâmetro 2 não encontrado!\n");
		exit(1);
	}
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
								if(G->adj[j][j].producao != PALAVRA_VAZIA) {
									string[topo++] = G->adj[j][j].producao;
								}

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
					string[topo] = G->adj[49][49].producao;
				} else
					Est_atual[50] = 1;

			}

		}
	}
	string[topo++] = 33;
	syntactic(string, topo);
}

void syntactic(int *string, int tamString) {
	int stack[200000];
	int i, topo=0, mod=0, tmp=0;
	stack[topo] = 0;

	printf("Cadeia: ");
	for(i=0; i<tamString; i++) {
		printf("%d ", string[i]);
	}
	printf("\n");

	int tamanho[28] = {5, 4, 6, 5, 6, 6, 0, 2, 1, 2, 1, 3, 3, 3, 3, 3, 1, 3, 3, 3, 3, 1, 1, 3, 1, 1, 1, 1};

	int regra[28] 	= {24, 25, 25, 25, 25, 25, 25, 26, 26, 27, 27, 28, 28, 28, 28, 28, 28,
						29, 29, 29, 29, 29, 30, 30, 31, 31, 32, 32};

	for(i=0; i<tamString; i++) {

		printf("\nStack=[");
		for (tmp = 0; tmp <= topo; tmp++){
			printf("%d ", stack[tmp]);
		}
		printf("]\nFita=[");
		for (tmp = i; tmp < tamString; tmp++){
			printf("%d ", string[tmp]);
		}
		printf("]\n");
		mod = parserTable[stack[topo]+1][string[i]];

		printf("[%d] [%d] = %d\n", stack[topo], string[i], mod);
		if(stack[topo] < 0){
			printf("Estado inválido!\n");
			exit(1);
		}
		if(mod == INVALIDO){
			printf("\n*****************SYNTAX ERROR****************\n");
			exit(1);
		}
		else if(mod == PARE){
			printf("\n*****************ACCEPT****************\n");
			exit(1);
		}
		if(mod < 90) {
			tmp = stack[topo];
			stack[++topo] = string[i];
			stack[++topo] = parserTable[tmp+1][string[i]];
			printf("Shift!\n");
		} else {
			if(mod > 100) mod %=900;

			mod %= 90;

			printf("Reduce na produção: %d de tamanho: %d!\n", mod, tamanho[mod]);

			topo -= (2*tamanho[mod]);
			stack[++topo] = regra[mod];

			topo++;
			stack[topo] = parserTable[stack[topo-2]+1][stack[topo-1]];

			printf("[%d] [%d] = %d\n", stack[topo-2], stack[topo-1], stack[topo]);

			if (stack[topo] == INVALIDO){
				printf("\n*****************SYNTAX ERROR****************\n");
				exit(1);
			}
			i--;
		}
	}
}
