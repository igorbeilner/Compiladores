//matriz de adjacencia
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Vertex int
#define TMCOND 100
#define PALAVRA_VAZIA '@'

//--------------------------------------------
//----Representacao de cada vertice/estato----
typedef struct Estado {
	int topo;
   	char val;
   	char cond[TMCOND];
   	char inicial;
   	char final;
   	char producao;
}Estado;
//--------------------------------------------

//--------------------------------------
typedef struct Digraph {
   int V;
   int Est_inicial;
   Estado **adj;
}Digraph;
//--------------------------------------

//--------------------------------------------------------
//---------------Protótipos das funções-------------------
void DigraphRemoveA(Digraph *G, Vertex v, Vertex w);
void DigraphInsertA(Digraph *G, Vertex v, Vertex w, char p);
void Imprime(Digraph *G);
Estado **MatrixInt(int r, int c, int val);
Digraph *DigraphInit(int V);
Digraph *Constroi();
void DigraphDFS(Digraph *G);
void Simula(Digraph *G);
int TestaCond(char *test, char str, int topo);
//--------------------------------------------------------
