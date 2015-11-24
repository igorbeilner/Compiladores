//matriz de adjacencia
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define Vertex int
#define TMCOND 100
#define PALAVRA_VAZIA '@'
#define PARE 755
#define INVALIDO 0

//--------------------------------------------
//----Representacao de cada vertice/estato----
typedef struct Estado {
	int topo;
   	char val;
   	char cond[TMCOND];
   	char inicial;
   	char final;
   	int producao;
}Estado;
//--------------------------------------------

//--------------------------------------
typedef struct Digraph {
   int V;
   int Est_inicial;
   Estado **adj;
}Digraph;
//--------------------------------------

extern int parserTable[65][34];

//--------------------------------------------------------
//---------------Protótipos das funções-------------------
void DigraphRemoveA(Digraph *G, Vertex v, Vertex w);
void DigraphInsertA(Digraph *G, Vertex v, Vertex w, char p);
void Imprime(Digraph *G);
Estado **MatrixInt(int r, int c, int val);
Digraph *DigraphInit(int V);
Digraph *Constroi();
void DigraphDFS(Digraph *G);
void Simula(Digraph *G, char* arg);
int TestaCond(char *test, char str, int topo);
void parserRead(char *csvFile);
void parserShow(void);
void syntactic(int *string, int tamString);
//--------------------------------------------------------
